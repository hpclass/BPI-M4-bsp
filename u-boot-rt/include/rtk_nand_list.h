#ifndef __FLASH_NAND_LIST_H__
#define __FLASH_NAND_LIST_H__

/* Read ID, The first 2 cycles -- MakeID,DeviceID */
/* MakerCode -- 0x98:Toshiba, 0xAD: Hynix, 0xEC: Samsung, 0x20: Numonyx */

#define K9F1G08U0E		0x9500F1EC	// Samsung 1Gb (SLC single die) 3rd generation
#define K9F1G08U0F              0x9500F1EC      // Samsung 1Gb (SLC single die) 3rd generation
#define K9F2G08U0B		0x9510DAEC	// Samsung 2Gb (SLC single die) 3rd generation
#define K9G4G08U0A		0x2514DCEC	// Samsung 4Gb (MLC single die) 2nd generation
#define K9G4G08U0B		0xA514DCEC	// Samsung 4Gb (MLC single die) 3rd generation
#define K9F4G08U0B		0x9510DCEC	// Samsung 4Gb (SLC single die) 3rd generation
#define K9F8G08U0M              0xA610D3EC	// Samsung 8Gb (SLC single die) 1st generation
#define K9G8G08U0M		0x2514D3EC	// Samsung 8Gb (MLC single die) 1st generation
#define K9G8G08U0A		0xA514D3EC	// Samsung 8Gb (MLC single die) 2nd generation
#define K9K8G08U0A		0x9551D3EC	// Samsung 8Gb (SLC die stack)	2nd generation

#define HY27UF081G2A		0x1D80F1AD	// Hynix 1Gb   (SLC single die) 2nd generation
#define H27U1G8F2B		0x1D00F1AD	// Hynix 1Gb   (SLC single die) 3rd generation
#define HY27UF082G2A		0x1D80DAAD	// Hynix 2Gb   (SLC single die) 2nd generation
#define HY27UF082G2B		0x9510DAAD	// Hynix 2Gb   (SLC single die) 3rd generation
#define H27U2G8F2C		0x9590DAAD	// Hynix 2Gb   (SLC single die) 4th generation
#define HY27UF084G2M		0x9580DCAD	// Hynix 4Gb   (SLC single die) 1st generation
#define HY27UT084G2M		0x2584DCAD	// Hynix 4Gb   (MLC single die) 1st generation
#define HY27UT084G2A		0xA514DCAD	// Hynix 4Gb   (MLC single die) 2nd generation
#define HY27UF084G2B		0x9510DCAD	// Hynix 4Gb   (SLC single die) 3rd generation
#define H27U4G8F2D		0x9590DCAD	// Hynix 4Gb   (SLC single die) ?th generation
#define HY27UT088G2A		0xA514D3AD	// Hynix 8Gb   (MLC single die) 2nd generation
#define H27U8G8T2B		0xB614D3AD	// Hynix 8Gb   (MLC single die) 3rd generation
#define H27UAG8T2A		0x2594D5AD	// Hynix 16Gb  (MLC single die) 2nd generation
#define H27UBG8T2B		0xDA94D7AD	// Hynix 32Gb  (MLC single die) 3rd generation
#define H27UBG8T2C		0x9194D7AD	// Hynix 32Gb	(MLC)
#define H27UCG8T2B		0xEB94DEAD	// Hynix 64Gb

#define NAND01GW3B2BN6		0x1D80F120	// ST 1Gb      (SLC single die) 2nd version
#define NAND01GW3B2CN6		0x1D00F120	// ST 1Gb      (SLC single die) 3rd version
#define NAND02GW3B2DN6		0x9510DA20	// ST 2Gb      (SLC single die) 4th version
#define NAND04GW3B2DN6		0x9510DC20	// ST 4Gb      (SLC single die) 4th version
#define NAND04GW3B2B		0x9580DC20	// Numonyx 4Gb (SLC single die) 2nd version
#define NAND04GW3C2B		0xA514DC20	// Numonyx 4Gb (MLC single die)
#define NAND08GW3C2BN6		0xA514D320	// Numonyx 8Gb (MLC single die) 2nd version

#define TC58NVG1S3HBA		0x1590DA98
#define TC58NVG0S3C		0x9590F198	// Toshiba 1Gb (SLC single die)
#define TC58NVG0S3E		0x1590D198	// Toshiba 1Gb (SLC single die)
#define TC58NVG1S3C		0x9590DA98	// Toshiba 2Gb (SLC single die)
#define TC58NVG1S3E		0x1590DA98	// Toshiba 2Gb (SLC single die)
#define TC58NVG2S3E		0x1590DC98	// Toshiba 4Gb (SLC single die)
#define TC58NVG2S0H		0x2690DC98	// Toshiba 4Gb (SLC single die) 8bit-ecc
#define TC58BVG0S3H		0x1580F198	// Toshiba 1Gb  (SLC single die)
#define TC58BVG1S3H		0x1590DA98	// Toshiba 2Gb  (SLC single die)
#define TH58NVG3S0H		0x2691D398	// Toshiba 8Gb  (SLC single die)
#define TC58TEG5DCJT		0x9384D798	// Toshiba 32Gb (MLC)
#define TC58TEG6DCJT		0x9384DE98	// Toshiba 64Gb (MLC)
#define TC58TEG6DDK		0x9394DE98

#define MT29F1G08ABADA		0x9580F12C	// Micron 1Gb  (SLC single die)
#define MT29F1G08ABAEA		0x9580F12C	// Micron 1Gb  (SLC single die)
#define MT29F2G08AAD		0x9580DA2C	// Micron 2Gb  (SLC single die)
#define MT29F2G08ABAEA		0x9590DA2C	// Micron 2Gb  (SLC single die)
#define MT29F4G08ABADA		0x9590DC2C	// Micron 4Gb  (SLC single die)
#define MT29F4G08ABAEA		0xA690DC2C	// Micron 4Gb  (SLC single die)
#define MT29F32G08CBACA		0x4A04682C	// Micron 32Gb  (MLC single die)
#define MT29F64G08CBAAA		0x4B04882C  // Micron 64Gb  (MLC single die)
#define MT29F64G08CBABA		0x4B44642C	// Micron 64G	(MLC)
#define MT29F32G08CBADA		0x4B44442C	// Micron 32Gb (MLC)
#define MT29F1G08ABAFA		0x9580D12C  // Micron 1Gb (SLC)
#define MT29F4G08ABBEA		0x2690AC2C  // Micron 4Gb (SLC)

#define MX30LF1G08AM		0x1D80F1C2	// Macronix 1Gb (SLC single die) 1st generation
#define MX30LF1G18AC 		0x9580F1C2  // Macronix 1Gb 
#define MX30LF2G18AC		0x9590DAC2	// Macronix 2Gb 
#define MX30LF4G18AC 		0x9590DCC2  // Macronix 4Gb 
#define MX30LF2G28AC		0x9590DAC2  // Macronix 2Gb 
#define MX30LF4G28AC		0x9590DCC2  // Macronix 4Gb

/*Spansion*/
#define S34ML04G2               0x9590DC01

/*winbond*/
#define W29N01GV		0x9580F1EF //Winbond 1Gb
#define W29N02GV		0x9590DAEF //Winbond 2Gb
#define W29N04GV		0x9590DCEF //Winbond 4Gb

/*EON*/
#define EN27LN4G08		0x9590DCC8

/* ESMT */
#define F59L1G81MA		0x9580D1C8
#define F59L2G81A		0x9590DAC8
#define F59L1G81A		0x9580F192

/* Address mode of different flash device */
#define ADDR_MODE_C8_R24	0x0	// 000:  8 bit Column address + 24 bit Row address
#define ADDR_MODE_C16_R24	0x1	// 001: 16 bit Column address + 24 bit Row address
#define ADDR_MODE_C8_R16	0x2	// 010:  8 bit Column address + 16 bit Row address
#define ADDR_MODE_C16_R16	0x3	// 011: 16 bit Column address + 16 bit Row address
#define ADDR_MODE_R24		0x4	// 100: 24 bit Row address
#define ADDR_MODE_R16		0x6	// 110: 16 bit Row address
#define ADDR_MODE_R8		0x7 	// 111:  8 bit Row address

/* Position of initial bad block mark */
#define INITIAL_BB_POS_FIRST	0x0	// in the first page of initial bad block
#define INITIAL_BB_POS_LAST	0xff	// in the last  page of initial bad block
#define INITIAL_BB_POS_BOTH	(INITIAL_BB_POS_FIRST | INITIAL_BB_POS_LAST)	// in both first and last page of initial bad block

/* NF freq divider value (base PLL: AUDIO 295MHz) */
#define CLK_NF_30MHz		0x7	// 295MHz /10
#define CLK_NF_33MHz		0x6	// 295MHz / 9
#define CLK_NF_37MHz		0x5	// 295MHz / 8
#define CLK_NF_42MHz		0x4	// 295MHz / 7
#define CLK_NF_49MHz		0x3	// 295MHz / 6
#define CLK_NF_59MHz		0x2	// 295MHz / 5
#define CLK_NF_74MHz		0x1	// 295MHz / 4

/* ECC bit select (per 512 bytes) */
#define ECC_6BIT		0x0
#define ECC_12BIT		0x1
#define ECC_40BIT		0x2
#define ECC_43BIT		0x4
#define ECC_65BIT		0x6
#define ECC_72BIT		0x8
#define ECC_24BIT		0xa
#define ECC_16BIT		0xe


typedef struct 
{
    unsigned int    id;
    unsigned short  PageSize;
    unsigned int    BlockSize;
    unsigned long long    size;
    unsigned char   addr_mode_rw;	// read/write address mode
    unsigned char   addr_mode_erase;	// erase address mode
    unsigned char   num_chips;		// number of chips/die in the flash
    unsigned char   initial_bb_pos;	// position of initial bad block mark
    unsigned char   t1;			// timing t1
    unsigned char   t2;			// timing t2
    unsigned char   t3;			// timing t3
    unsigned char   nf_div;		// NF freq divide value
    unsigned char   ecc_bit;		// ECC bit number
    unsigned char   read_id_len;	// length of READ ID result
    unsigned char   id5;		// 5th byte of READ ID result (0xff if read_id_len = 4)
    unsigned char   id6;		// 6th byte of READ ID result (0xff if read_id_len < 6)
    const char   *string;
} n_device_type;

static const n_device_type n_device[] =    
{
    {K9F8G08U0M,        4096, 256*1024, 0x08000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  5, 0x64, 0xff, "K9F8G08U0M" } , 
    {K9F1G08U0E,        2048, 128*1024, 0x08000000, ADDR_MODE_C16_R16, ADDR_MODE_R16, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  5, 0x41, 0xff, "K9F1G08U0E" } ,
    {K9F1G08U0F,        2048, 128*1024, 0x08000000, ADDR_MODE_C16_R16, ADDR_MODE_R16, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  5, 0x42, 0xff, "K9F1G08U0F" } , 
    {K9F2G08U0B,        2048, 128*1024, 0x10000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  5, 0x44, 0xff, "K9F2G08U0B" } , 
    {K9G4G08U0A,        2048, 256*1024, 0x20000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_LAST,  0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  5, 0x54, 0xff, "K9G4G08U0A" } , 
    {K9G4G08U0B,        2048, 256*1024, 0x20000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_LAST,  0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  5, 0x54, 0xff, "K9G4G08U0B" } , 
    {K9F4G08U0B,        2048, 128*1024, 0x20000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  5, 0x54, 0xff, "K9F4G08U0B" } , 
    {K9G8G08U0M,        2048, 256*1024, 0x40000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_LAST,  0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  5, 0x64, 0xff, "K9G8G08U0M" } , 
    {K9G8G08U0A,        2048, 256*1024, 0x40000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_LAST,  0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  5, 0x64, 0xff, "K9G8G08U0A" } , 
    {K9K8G08U0A,        2048, 128*1024, 0x40000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  5, 0x58, 0xff, "K9K8G08U0A" } , 

    {HY27UF081G2A,      2048, 128*1024, 0x08000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  4, 0xff, 0xff, "HY27UF081G2A" } ,
    {H27U1G8F2B,        2048, 128*1024, 0x08000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  4, 0xff, 0xff, "H27U1G8F2B" } ,
    {HY27UF082G2A,      2048, 128*1024, 0x10000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  5, 0x0,  0xff, "HY27UF082G2A" } ,
    {HY27UF082G2B,      2048, 128*1024, 0x10000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  5, 0x44, 0xff, "HY27UF082G2B" } ,
    {H27U2G8F2C,        2048, 128*1024, 0x10000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  5, 0x44, 0xff, "H27U2G8F2C" } ,
    {HY27UF084G2M,      2048, 128*1024, 0x20000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  4, 0xff, 0xff, "HY27UF084G2M" } ,
    {HY27UT084G2M,      2048, 256*1024, 0x20000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_LAST,  0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  4, 0xff, 0xff, "HY27UT084G2M" } ,
    {HY27UT084G2A,      2048, 256*1024, 0x20000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_LAST,  0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  5, 0x24, 0xff, "HY27UT084G2A" } ,
    {HY27UF084G2B,      2048, 128*1024, 0x20000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  5, 0x54, 0xff, "HY27UF084G2B" } ,
    {H27U4G8F2D,        2048, 128*1024, 0x20000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  5, 0x54, 0xff, "H27U4G8F2D" } ,
    {HY27UT088G2A,      2048, 256*1024, 0x40000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_LAST,  0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  5, 0x34, 0xff, "HY27UT088G2A"} ,
    {H27U8G8T2B,        4096, 512*1024, 0x40000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_LAST,  0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  5, 0x34, 0xff, "H27U8G8T2B"} ,
    {H27UAG8T2A,        4096, 512*1024, 0x40000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_LAST,  0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_12BIT, 6, 0x44, 0x41, "H27UAG8T2A"} ,
    {H27UBG8T2B,        8192, 2048*1024,0x10000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_BOTH,  0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_24BIT, 6, 0x74, 0xC3, "H27UBG8T2B"} ,
    {H27UBG8T2C,        8192, 256*8192, 0x100000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_BOTH,  0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_40BIT, 6, 0x60, 0x44, "H27UBG8T2C"} ,
    {H27UCG8T2B,        16384, 256*16384,0x200000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_BOTH,  0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_40BIT, 6, 0x74, 0x44, "H27UCG8T2B"} ,

    {NAND01GW3B2BN6,    2048, 128*1024, 0x08000000, ADDR_MODE_C16_R16, ADDR_MODE_R16, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  4, 0xff, 0xff, "NAND01GW3B2BN6"} ,
    {NAND01GW3B2CN6,    2048, 128*1024, 0x08000000, ADDR_MODE_C16_R16, ADDR_MODE_R16, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  4, 0xff, 0xff, "NAND01GW3B2CN6"} ,
    {NAND02GW3B2DN6,    2048, 128*1024, 0x10000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  5, 0x44, 0xff, "NAND02GW3B2DN6"} ,
    {NAND04GW3B2DN6,    2048, 128*1024, 0x20000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  5, 0x54, 0xff, "NAND04GW3B2DN6"} ,
    {NAND04GW3B2B,      2048, 128*1024, 0x20000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  4, 0xff, 0xff, "NAND04GW3B2B"} ,
    {NAND04GW3C2B,      2048, 256*1024, 0x20000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_LAST,  0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  5, 0x24, 0xff, "NAND04GW3C2B"} ,
    {NAND08GW3C2BN6,    2048, 256*1024, 0x40000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_LAST,  0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  5, 0x34, 0xff, "NAND08GW3C2BN6"} ,


    {TC58NVG1S3HBA,     2048, 128*1024, 0x10000000, ADDR_MODE_C16_R16, ADDR_MODE_R16, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_12BIT,  6, 0x76, 0x16, "TC58NVG1S3HBA"} ,
    {TC58NVG0S3C,       2048, 128*1024, 0x08000000, ADDR_MODE_C16_R16, ADDR_MODE_R16, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  4, 0xff, 0xff, "TC58NVG0S3C"} ,
    {TC58NVG0S3E,       2048, 128*1024, 0x08000000, ADDR_MODE_C16_R16, ADDR_MODE_R16, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  5, 0x76, 0xff, "TC58NVG0S3E"} ,
    {TC58NVG1S3C,       2048, 128*1024, 0x10000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  4, 0xff, 0xff, "TC58NVG1S3C"} ,
    {TC58NVG1S3E,       2048, 128*1024, 0x10000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  5, 0x76, 0xff, "TC58NVG1S3E"} ,
    {TC58NVG2S3E,       2048, 128*1024, 0x20000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  5, 0x76, 0xff, "TC58NVG2S3E"} ,
    {TC58NVG2S0H,       4096, 256*1024, 0x20000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_12BIT,  5, 0x76, 0xff, "TC58NVG2S0H"} ,
    {TC58BVG0S3H,       2048, 128*1024, 0x08000000, ADDR_MODE_C16_R16, ADDR_MODE_R16, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  6, 0x72, 0x16, "TC58BVG0S3H" } ,
    {TC58BVG1S3H,       2048, 128*1024, 0x10000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  6, 0xF6, 0x16, "TC58BVG1S3H" } ,
    {TH58NVG3S0H,       4096, 256*1024, 0x40000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_12BIT,  5, 0x76, 0xff, "TH58NVG3S0H" } ,
    {TC58TEG5DCJT,      16384, 256*16384, 0x100000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_40BIT,  6, 0x72, 0x57, "TC58TEG5DCJT" } ,
    {TC58TEG6DCJT,      16384, 256*16384, 0x200000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_40BIT,  6, 0x72, 0x57, "TC58TEG6DCJT" } ,
    {TC58TEG6DDK,      16384, 256*16384, 0x200000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_40BIT,  6, 0x76, 0x50, "TC58TEG6DDK" } ,
 
    {MT29F1G08ABADA,    2048, 128*1024, 0x08000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  5, 0x02, 0xff, "MT29F1G08ABADA"} ,
    {MT29F1G08ABAEA,    2048, 128*1024, 0x08000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  5, 0x04, 0xff, "MT29F1G08ABAEA"} ,
    {MT29F2G08AAD,      2048, 128*1024, 0x10000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  5, 0x50, 0xff, "MT29F2G08AAD"} ,
    {MT29F2G08ABAEA,    2048, 128*1024, 0x10000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  5, 0x06, 0xff, "MT29F2G08ABAEA/AGA"} ,
    {MT29F4G08ABADA,    2048, 128*1024, 0x20000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  5, 0x56, 0xff, "MT29F4G08ABADA"} ,
    {MT29F4G08ABAEA,    4096, 256*1024, 0x20000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_12BIT,  5, 0x54, 0xff, "MT29F4G08ABAEA"} ,
    {MT29F32G08CBACA,   4096, 256*4096, 0x100000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_24BIT, 5, 0xa9, 0xff, "MT29F32G08CBACA"} ,
    {MT29F64G08CBAAA,   8192, 2048*1024, 0x200000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_24BIT, 5, 0xa9, 0xff, "MT29F64G08CBAAA"} ,
    {MT29F64G08CBABA,   8192, 2048*1024, 0x200000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_40BIT, 5, 0xa9, 0xff, "MT29F64G08CBABA"} ,
    {MT29F32G08CBADA,	8192, 256*8192, 0x100000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_40BIT, 5, 0xa9, 0xff, "MT29F32G08CBADA"} ,
    {MT29F1G08ABAFA,    2048, 128*1024, 0x08000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  5, 0x82, 0xff, "MT29F1G08ABAFA"} ,
    {MT29F4G08ABBEA,    4096, 256*1024, 0x20000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_12BIT,  5, 0x54, 0xff, "MT29F4G08ABBEA"} ,

    {MX30LF1G08AM,      2048, 128*1024, 0x08000000, ADDR_MODE_C16_R16, ADDR_MODE_R16, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  4, 0xff, 0xff, "MX30LF1G08AM"} ,
    {MX30LF1G18AC,      2048, 128*1024, 0x08000000, ADDR_MODE_C16_R16, ADDR_MODE_R16, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  5, 0x02, 0xff, "MX30LF1G18AC"} ,
    {MX30LF2G18AC,      2048, 128*1024, 0x10000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  5, 0x06, 0xff, "MX30LF2G18AC"} ,
    {MX30LF4G18AC,      2048, 128*1024, 0x20000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  5, 0x56, 0xff, "MX30LF4G18AC"} ,
    {MX30LF2G28AC,      2048, 128*1024, 0x10000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_12BIT,  5, 0x07, 0xff, "MX30LF2G28AC"} ,
    {MX30LF4G28AC,      2048, 128*1024, 0x20000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_12BIT,  5, 0x57, 0xff, "MX30LF4G28AC"} ,

    {S34ML04G2,      2048, 128*1024, 0x20000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  5, 0x56, 0xff, "S34ML04G2"} ,

    {W29N01GV,      2048, 128*1024, 0x08000000, ADDR_MODE_C16_R16, ADDR_MODE_R16, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  5, 0x0, 0xff, "W29N01GV"} ,
    {W29N02GV,      2048, 128*1024, 0x10000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  5, 0x4, 0xff, "W29N02GV"} ,
    {W29N04GV,      2048, 128*1024, 0x20000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  5, 0x54, 0xff, "W29N04GV"} ,
    {EN27LN4G08,    2048, 2048*64, 0x20000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  5, 0x54, 0xff, "EN27LN4G08"} ,
    {F59L2G81A,    2048, 2048*64, 0x10000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  5, 0x44, 0xff, "F59L2G81A"} ,
    {F59L1G81A,    2048, 2048*64, 0x08000000, ADDR_MODE_C16_R24, ADDR_MODE_R24, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  5, 0x40, 0xff, "F59L1G81A"} ,
    {F59L1G81MA,    2048, 2048*64, 0x08000000, ADDR_MODE_C16_R16, ADDR_MODE_R16, 1, INITIAL_BB_POS_FIRST, 0x1, 0x1, 0x1, CLK_NF_74MHz, ECC_6BIT,  5, 0x40, 0xff, "F59L1G81MA"} ,
} ; 

#define DEV_SIZE_N	(sizeof(n_device)/sizeof(n_device_type))

#endif /* __FLASH_NAND_LIST_H__ */
