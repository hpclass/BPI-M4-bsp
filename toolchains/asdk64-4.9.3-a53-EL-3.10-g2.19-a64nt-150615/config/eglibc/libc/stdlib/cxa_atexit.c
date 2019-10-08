/* Copyright (C) 1999-2014 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#include <assert.h>
#include <stdlib.h>
#include <stdint.h>

#include <bits/libc-lock.h>
#include "exit.h"
#include <atomic.h>
#include <sysdep.h>

#undef __cxa_atexit


int
attribute_hidden
__internal_atexit (void (*func) (void *), void *arg, void *d,
		   struct exit_function_list **listp)
{
  struct exit_function *new = __new_exitfn (listp);

  if (new == NULL)
    return -1;

#ifdef PTR_MANGLE
  PTR_MANGLE (func);
#endif
  new->func.cxa.fn = (void (*) (void *, int)) func;
  new->func.cxa.arg = arg;
  new->func.cxa.dso_handle = d;
  atomic_write_barrier ();
  new->flavor = ef_cxa;
  return 0;
}


/* Register a function to be called by exit or when a shared library
   is unloaded.  This function is only called from code generated by
   the C++ compiler.  */
int
__cxa_atexit (void (*func) (void *), void *arg, void *d)
{
  return __internal_atexit (func, arg, d, &__exit_funcs);
}
INTDEF(__cxa_atexit)


/* We change global data, so we need locking.  */
__libc_lock_define_initialized (static, lock)


static struct exit_function_list initial;
struct exit_function_list *__exit_funcs = &initial;
uint64_t __new_exitfn_called;

struct exit_function *
__new_exitfn (struct exit_function_list **listp)
{
  struct exit_function_list *p = NULL;
  struct exit_function_list *l;
  struct exit_function *r = NULL;
  size_t i = 0;

  __libc_lock_lock (lock);

  for (l = *listp; l != NULL; p = l, l = l->next)
    {
      for (i = l->idx; i > 0; --i)
	if (l->fns[i - 1].flavor != ef_free)
	  break;

      if (i > 0)
	break;

      /* This block is completely unused.  */
      l->idx = 0;
    }

  if (l == NULL || i == sizeof (l->fns) / sizeof (l->fns[0]))
    {
      /* The last entry in a block is used.  Use the first entry in
	 the previous block if it exists.  Otherwise create a new one.  */
      if (p == NULL)
	{
	  assert (l != NULL);
	  p = (struct exit_function_list *)
	    calloc (1, sizeof (struct exit_function_list));
	  if (p != NULL)
	    {
	      p->next = *listp;
	      *listp = p;
	    }
	}

      if (p != NULL)
	{
	  r = &p->fns[0];
	  p->idx = 1;
	}
    }
  else
    {
      /* There is more room in the block.  */
      r = &l->fns[i];
      l->idx = i + 1;
    }

  /* Mark entry as used, but we don't know the flavor now.  */
  if (r != NULL)
    {
      r->flavor = ef_us;
      ++__new_exitfn_called;
    }

  __libc_lock_unlock (lock);

  return r;
}
