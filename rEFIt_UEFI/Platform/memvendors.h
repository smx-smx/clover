/*
 * Memory module vendors as published by JEDEC 106AA 
 *
 * Special thanks to iNDi, memtest and THeKiNG for the table
 *
 */
#ifndef __MEMVEN_H
#define __MEMVEN_H

/* SMBIOS Memory Types */ 
#define SMB_MEM_TYPE_UNDEFINED	0
#define SMB_MEM_TYPE_OTHER		1
#define SMB_MEM_TYPE_UNKNOWN	2
#define SMB_MEM_TYPE_DRAM		3
#define SMB_MEM_TYPE_EDRAM		4
#define SMB_MEM_TYPE_VRAM		5
#define SMB_MEM_TYPE_SRAM		6
#define SMB_MEM_TYPE_RAM		7
#define SMB_MEM_TYPE_ROM		8
#define SMB_MEM_TYPE_FLASH		9
#define SMB_MEM_TYPE_EEPROM		10
#define SMB_MEM_TYPE_FEPROM		11
#define SMB_MEM_TYPE_EPROM		12
#define SMB_MEM_TYPE_CDRAM		13
#define SMB_MEM_TYPE_3DRAM		14
#define SMB_MEM_TYPE_SDRAM		15
#define SMB_MEM_TYPE_SGRAM		16
#define SMB_MEM_TYPE_RDRAM		17
#define SMB_MEM_TYPE_DDR		18
#define SMB_MEM_TYPE_DDR2		19
#define SMB_MEM_TYPE_FBDIMM		20
#define SMB_MEM_TYPE_DDR3		24				// Supported in 10.5.6+ AppleSMBIOS

/* Memory Configuration Types */ 
#define SMB_MEM_CHANNEL_UNKNOWN		0
#define SMB_MEM_CHANNEL_SINGLE		1
#define SMB_MEM_CHANNEL_DUAL		2
#define SMB_MEM_CHANNEL_TRIPLE		3

/* Maximum number of ram slots */
//#define MAX_RAM_SLOTS			8
#define RAM_SLOT_ENUMERATOR		{0, 2, 4, 1, 3, 5, 6, 8, 10, 7, 9, 11}

/* Maximum number of SPD bytes */
#define MAX_SPD_SIZE			384  /* for DDR4 */

typedef struct _vidTag {
    UINT8			bank;
    UINT8			code;
    CHAR8*			name;
} VenIdName;

VenIdName vendorMap[] = {
		{ 0, 0x01, "AMD"},
		{ 0, 0x02, "AMI"},
		{ 0, 0x83, "Fairchild"},
		{ 0, 0x04, "Fujitsu"},
		{ 0, 0x85, "GTE"},
		{ 0, 0x86, "Harris"},
		{ 0, 0x07, "Hitachi"},
		{ 0, 0x08, "Inmos"},
		{ 0, 0x89, "Intel"},
		{ 0, 0x8a, "I.T.T."},
		{ 0, 0x0b, "Intersil"},
		{ 0, 0x8c, "Monolithic Memories"},
		{ 0, 0x0d, "Mostek"},
		{ 0, 0x0e, "Freescale (Motorola)"},
		{ 0, 0x8f, "National"},
		{ 0, 0x10, "NEC"},
		{ 0, 0x91, "RCA"},
		{ 0, 0x92, "Raytheon"},
		{ 0, 0x13, "Conexant (Rockwell)"},
		{ 0, 0x94, "Seeq"},
		{ 0, 0x15, "NXP (Philips)"},
		{ 0, 0x16, "Synertek"},
		{ 0, 0x97, "Texas Instruments"},
		{ 0, 0x98, "Toshiba"},
		{ 0, 0x19, "Xicor"},
		{ 0, 0x1a, "Zilog"},
		{ 0, 0x9b, "Eurotechnique"},
		{ 0, 0x1c, "Mitsubishi"},
		{ 0, 0x9d, "Lucent (AT&T)"},
		{ 0, 0x9e, "Exel"},
		{ 0, 0x1f, "Atmel"},
		{ 0, 0x20, "SGS/Thomson"},
		{ 0, 0xa1, "Lattice Semi."},
		{ 0, 0xa2, "NCR"},
		{ 0, 0x23, "Wafer Scale Integration"},
		{ 0, 0xa4, "IBM"},
		{ 0, 0x25, "Tristar"},
		{ 0, 0x26, "Visic"},
		{ 0, 0xa7, "Intl. CMOS Technology"},
		{ 0, 0xa8, "SSSI"},
		{ 0, 0x29, "MicrochipTechnology"},
		{ 0, 0x2a, "Ricoh"},
		{ 0, 0xab, "VLSI"},
		{ 0, 0x2c, "Micron Technology"},
		{ 0, 0xad, "Hynix Semiconductor"},
		{ 0, 0xae, "OKI Semiconductor"},
		{ 0, 0x2f, "ACTEL"},
		{ 0, 0xb0, "Sharp"},
		{ 0, 0x31, "Catalyst"},
		{ 0, 0x32, "Panasonic"},
		{ 0, 0xb3, "IDT"},
		{ 0, 0x34, "Cypress"},
		{ 0, 0xb5, "DEC"},
		{ 0, 0xb6, "LSI Logic"},
		{ 0, 0x37, "Zarlink (Plessey)"},
		{ 0, 0x38, "UTMC"},
		{ 0, 0xb9, "Thinking Machine"},
		{ 0, 0xba, "Thomson CSF"},
		{ 0, 0x3b, "Integrated CMOS (Vertex)"},
		{ 0, 0xbc, "Honeywell"},
		{ 0, 0x3d, "Tektronix"},
		{ 0, 0x3e, "Sun Microsystems"},
		{ 0, 0xbf, "SST"},
		{ 0, 0x40, "ProMos/Mosel Vitelic"},
		{ 0, 0xc1, "Infineon (Siemens)"},
		{ 0, 0xc2, "Macronix"},
		{ 0, 0x43, "Xerox"},
		{ 0, 0xc4, "Plus Logic"},
		{ 0, 0x45, "SanDisk"},
		{ 0, 0x46, "Elan Circuit Tech."},
		{ 0, 0xc7, "European Silicon Str."},
		{ 0, 0xc8, "Apple Computer"},
		{ 0, 0x49, "Xilinx"},
		{ 0, 0x4a, "Compaq"},
		{ 0, 0xcb, "Protocol Engines"},
		{ 0, 0x4c, "SCI"},
		{ 0, 0xcd, "Seiko Instruments"},
		{ 0, 0xce, "Samsung"},
		{ 0, 0x4f, "I3 Design System"},
		{ 0, 0xd0, "Klic"},
		{ 0, 0x51, "Crosspoint Solutions"},
		{ 0, 0x52, "Alliance Semiconductor"},
		{ 0, 0xd3, "Tandem"},
		{ 0, 0x54, "Hewlett-Packard"},
		{ 0, 0xd5, "Intg. Silicon Solutions"},
		{ 0, 0xd6, "Brooktree"},
		{ 0, 0x57, "New Media"},
		{ 0, 0x58, "MHS Electronic"},
		{ 0, 0xd9, "Performance Semi."},
		{ 0, 0xda, "Winbond Electronic"},
		{ 0, 0x5b, "Kawasaki Steel"},
		{ 0, 0xdc, "Bright Micro"},
		{ 0, 0x5d, "TECMAR"},
		{ 0, 0x5e, "Exar"},
		{ 0, 0xdf, "PCMCIA"},
		{ 0, 0xe0, "LG Semi (Goldstar)"},
		{ 0, 0x61, "Northern Telecom"},
		{ 0, 0x62, "Sanyo"},
		{ 0, 0xe3, "Array Microsystems"},
		{ 0, 0x64, "Crystal Semiconductor"},
		{ 0, 0xe5, "Analog Devices"},
		{ 0, 0xe6, "PMC-Sierra"},
		{ 0, 0x67, "Asparix"},
		{ 0, 0x68, "Convex Computer"},
		{ 0, 0xe9, "Quality Semiconductor"},
		{ 0, 0xea, "Nimbus Technology"},
		{ 0, 0x6b, "Transwitch"},
		{ 0, 0xec, "Micronas (ITT Intermetall)"},
		{ 0, 0x6d, "Cannon"},
		{ 0, 0x6e, "Altera"},
		{ 0, 0xef, "NEXCOM"},
		{ 0, 0x70, "QUALCOMM"},
		{ 0, 0xf1, "Sony"},
		{ 0, 0xf2, "Cray Research"},
		{ 0, 0x73, "AMS(Austria Micro)"},
		{ 0, 0xf4, "Vitesse"},
		{ 0, 0x75, "Aster Electronics"},
		{ 0, 0x76, "Bay Networks (Synoptic)"},
		{ 0, 0xf7, "Zentrum/ZMD"},
		{ 0, 0xf8, "TRW"},
		{ 0, 0x79, "Thesys"},
		{ 0, 0x7a, "Solbourne Computer"},
		{ 0, 0xfb, "Allied-Signal"},
		{ 0, 0x7c, "Dialog"},
		{ 0, 0xfd, "Media Vision"},
		{ 0, 0xfe, "Numonyx"},
		{ 1, 0x01, "Cirrus Logic"},
		{ 1, 0x02, "National Instruments"},
		{ 1, 0x83, "ILC Data Device"},
		{ 1, 0x04, "Alcatel Mietec"},
		{ 1, 0x85, "Micro Linear"},
		{ 1, 0x86, "Univ. of NC"},
		{ 1, 0x07, "JTAG Technologies"},
		{ 1, 0x08, "BAE Systems (Loral)"},
		{ 1, 0x89, "Nchip"},
		{ 1, 0x8a, "Galileo Tech"},
		{ 1, 0x0b, "Bestlink Systems"},
		{ 1, 0x8c, "Graychip"},
		{ 1, 0x0d, "GENNUM"},
		{ 1, 0x0e, "VideoLogic"},
		{ 1, 0x8f, "Robert Bosch"},
		{ 1, 0x10, "Chip Express"},
		{ 1, 0x91, "DATARAM"},
		{ 1, 0x92, "United Microelectronics Corp."},
		{ 1, 0x13, "TCSI"},
		{ 1, 0x94, "Smart Modular"},
		{ 1, 0x15, "Hughes Aircraft"},
		{ 1, 0x16, "Lanstar Semiconductor"},
		{ 1, 0x97, "Qlogic"},
		{ 1, 0x98, "Kingston"},
		{ 1, 0x19, "Music Semi"},
		{ 1, 0x1a, "Ericsson Components"},
		{ 1, 0x9b, "SpaSE"},
		{ 1, 0x1c, "Eon Silicon Devices"},
		{ 1, 0x9d, "Programmable Micro Corp"},
		{ 1, 0x9e, "DoD"},
		{ 1, 0x1f, "Integ. Memories Tech."},
		{ 1, 0x20, "Corollary"},
		{ 1, 0xa1, "Dallas Semiconductor"},
		{ 1, 0xa2, "Omnivision"},
		{ 1, 0x23, "EIV(Switzerland)"},
		{ 1, 0xa4, "Novatel Wireless"},
		{ 1, 0x25, "Zarlink (Mitel)"},
		{ 1, 0x26, "Clearpoint"},
		{ 1, 0xa7, "Cabletron"},
		{ 1, 0xa8, "STEC (Silicon Tech)"},
		{ 1, 0x29, "Vanguard"},
		{ 1, 0x2a, "Hagiwara Sys-Com"},
		{ 1, 0xab, "Vantis"},
		{ 1, 0x2c, "Celestica"},
		{ 1, 0xad, "Century"},
		{ 1, 0xae, "Hal Computers"},
		{ 1, 0x2f, "Rohm Company"},
		{ 1, 0xb0, "Juniper Networks"},
		{ 1, 0x31, "Libit Signal Processing"},
		{ 1, 0x32, "Mushkin Enhanced Memory"},
		{ 1, 0xb3, "Tundra Semiconductor"},
		{ 1, 0x34, "Adaptec"},
		{ 1, 0xb5, "LightSpeed Semi."},
		{ 1, 0xb6, "ZSP Corp."},
		{ 1, 0x37, "AMIC Technology"},
		{ 1, 0x38, "Adobe Systems"},
		{ 1, 0xb9, "Dynachip"},
		{ 1, 0xba, "PNY Electronics"},
		{ 1, 0x3b, "Newport Digital"},
		{ 1, 0xbc, "MMC Networks"},
		{ 1, 0x3d, "T Square"},
		{ 1, 0x3e, "Seiko Epson"},
		{ 1, 0xbf, "Broadcom"},
		{ 1, 0x40, "Viking Components"},
		{ 1, 0xc1, "V3 Semiconductor"},
		{ 1, 0xc2, "Flextronics (Orbit Semiconductor)"},
		{ 1, 0x43, "Suwa Electronics"},
		{ 1, 0xc4, "Transmeta"},
		{ 1, 0x45, "Micron CMS"},
		{ 1, 0x46, "American Computer & Digital Components"},
		{ 1, 0xc7, "Enhance 3000"},
		{ 1, 0xc8, "Tower Semiconductor"},
		{ 1, 0x49, "CPU Design"},
		{ 1, 0x4a, "Price Point"},
		{ 1, 0xcb, "Maxim Integrated Product"},
		{ 1, 0x4c, "Tellabs"},
		{ 1, 0xcd, "Centaur Technology"},
		{ 1, 0xce, "Unigen"},
		{ 1, 0x4f, "Transcend Information"},
		{ 1, 0xd0, "Memory Card Technology"},
		{ 1, 0x51, "CKD"},
		{ 1, 0x52, "Capital Instruments"},
		{ 1, 0xd3, "Aica Kogyo"},
		{ 1, 0x54, "Linvex Technology"},
		{ 1, 0xd5, "MSC Vertriebs"},
		{ 1, 0xd6, "AKM Company"},
		{ 1, 0x57, "Dynamem"},
		{ 1, 0x58, "NERA ASA"},
		{ 1, 0xd9, "GSI Technology"},
		{ 1, 0xda, "Dane-Elec (C Memory)"},
		{ 1, 0x5b, "Acorn Computers"},
		{ 1, 0xdc, "Lara Technology"},
		{ 1, 0x5d, "Oak Technology"},
		{ 1, 0x5e, "Itec Memory"},
		{ 1, 0xdf, "Tanisys Technology"},
		{ 1, 0xe0, "Truevision"},
		{ 1, 0x61, "Wintec Industries"},
		{ 1, 0x62, "Super PC Memory"},
		{ 1, 0xe3, "MGV Memory"},
		{ 1, 0x64, "Galvantech"},
		{ 1, 0xe5, "Gadzoox Networks"},
		{ 1, 0xe6, "Multi Dimensional Cons."},
		{ 1, 0x67, "GateField"},
		{ 1, 0x68, "Integrated Memory System"},
		{ 1, 0xe9, "Triscend"},
		{ 1, 0xea, "XaQti"},
		{ 1, 0x6b, "Goldenram"},
		{ 1, 0xec, "Clear Logic"},
		{ 1, 0x6d, "Cimaron Communications"},
		{ 1, 0x6e, "Nippon Steel Semi. Corp."},
		{ 1, 0xef, "Advantage Memory"},
		{ 1, 0x70, "AMCC"},
		{ 1, 0xf1, "LeCroy"},
		{ 1, 0xf2, "Yamaha"},
		{ 1, 0x73, "Digital Microwave"},
		{ 1, 0xf4, "NetLogic Microsystems"},
		{ 1, 0x75, "MIMOS Semiconductor"},
		{ 1, 0x76, "Advanced Fibre"},
		{ 1, 0xf7, "BF Goodrich Data."},
		{ 1, 0xf8, "Epigram"},
		{ 1, 0x79, "Acbel Polytech"},
		{ 1, 0x7a, "Apacer Technology"},
		{ 1, 0xfb, "Admor Memory"},
		{ 1, 0x7c, "FOXCONN"},
		{ 1, 0xfd, "Quadratics Superconductor"},
		{ 1, 0xfe, "3COM"},
		{ 2, 0x01, "Camintonn"},
		{ 2, 0x02, "ISOA"},
		{ 2, 0x83, "Agate Semiconductor"},
		{ 2, 0x04, "ADMtek"},
		{ 2, 0x85, "HYPERTEC"},
		{ 2, 0x86, "Adhoc Technologies"},
		{ 2, 0x07, "MOSAID Technologies"},
		{ 2, 0x08, "Ardent Technologies"},
		{ 2, 0x89, "Switchcore"},
		{ 2, 0x8a, "Cisco Systems"},
		{ 2, 0x0b, "Allayer Technologies"},
		{ 2, 0x8c, "WorkX AG (Wichman)"},
		{ 2, 0x0d, "Oasis Semiconductor"},
		{ 2, 0x0e, "Novanet Semiconductor"},
		{ 2, 0x8f, "E-M Solutions"},
		{ 2, 0x10, "Power General"},
		{ 2, 0x91, "Advanced Hardware Arch."},
		{ 2, 0x92, "Inova Semiconductors"},
		{ 2, 0x13, "Telocity"},
		{ 2, 0x94, "Delkin Devices"},
		{ 2, 0x15, "Symagery Microsystems"},
		{ 2, 0x16, "C-Port"},
		{ 2, 0x97, "SiberCore Technologies"},
		{ 2, 0x98, "Southland Microsystems"},
		{ 2, 0x19, "Malleable Technologies"},
		{ 2, 0x1a, "Kendin Communications"},
		{ 2, 0x9b, "Great Technology Microcomputer"},
		{ 2, 0x1c, "Sanmina"},
		{ 2, 0x9d, "HADCO"},
		{ 2, 0x9e, "Corsair"},
		{ 2, 0x1f, "Actrans System"},
		{ 2, 0x20, "ALPHA Technologies"},
		{ 2, 0xa1, "Silicon Laboratories (Cygnal)"},
		{ 2, 0xa2, "Artesyn Technologies"},
		{ 2, 0x23, "Align Manufacturing"},
		{ 2, 0xa4, "Peregrine Semiconductor"},
		{ 2, 0x25, "Chameleon Systems"},
		{ 2, 0x26, "Aplus Flash Technology"},
		{ 2, 0xa7, "MIPS Technologies"},
		{ 2, 0xa8, "Chrysalis ITS"},
		{ 2, 0x29, "ADTEC"},
		{ 2, 0x2a, "Kentron Technologies"},
		{ 2, 0xab, "Win Technologies"},
		{ 2, 0x2c, "Tachyon Semiconductor (ASIC)"},
		{ 2, 0xad, "Extreme Packet Devices"},
		{ 2, 0xae, "RF Micro Devices"},
		{ 2, 0x2f, "Siemens AG"},
		{ 2, 0xb0, "Sarnoff"},
		{ 2, 0x31, "Itautec SA"},
		{ 2, 0x32, "Radiata"},
		{ 2, 0xb3, "Benchmark Elect. (AVEX)"},
		{ 2, 0x34, "Legend"},
		{ 2, 0xb5, "SpecTek"},
		{ 2, 0xb6, "Hi/fn"},
		{ 2, 0x37, "Enikia"},
		{ 2, 0x38, "SwitchOn Networks"},
		{ 2, 0xb9, "AANetcom"},
		{ 2, 0xba, "Micro Memory Bank"},
		{ 2, 0x3b, "ESS Technology"},
		{ 2, 0xbc, "Virata"},
		{ 2, 0x3d, "Excess Bandwidth"},
		{ 2, 0x3e, "West Bay Semiconductor"},
		{ 2, 0xbf, "DSP Group"},
		{ 2, 0x40, "Newport Communications"},
		{ 2, 0xc1, "Chip2Chip"},
		{ 2, 0xc2, "Phobos"},
		{ 2, 0x43, "Intellitech"},
		{ 2, 0xc4, "Nordic VLSI ASA"},
		{ 2, 0x45, "Ishoni Networks"},
		{ 2, 0x46, "Silicon Spice"},
		{ 2, 0xc7, "Alchemy Semiconductor"},
		{ 2, 0xc8, "Agilent Technologies"},
		{ 2, 0x49, "Centillium Communications"},
		{ 2, 0x4a, "W.L. Gore"},
		{ 2, 0xcb, "HanBit Electronics"},
		{ 2, 0x4c, "GlobeSpan"},
		{ 2, 0xcd, "Element 14"},
		{ 2, 0xce, "Pycon"},
		{ 2, 0x4f, "Saifun Semiconductors"},
		{ 2, 0xd0, "Sibyte,"},
		{ 2, 0x51, "MetaLink Technologies"},
		{ 2, 0x52, "Feiya Technology"},
		{ 2, 0xd3, "I & C Technology"},
		{ 2, 0x54, "Shikatronics"},
		{ 2, 0xd5, "Elektrobit"},
		{ 2, 0xd6, "Megic"},
		{ 2, 0x57, "Com-Tier"},
		{ 2, 0x58, "Malaysia Micro Solutions"},
		{ 2, 0xd9, "Hyperchip"},
		{ 2, 0xda, "Gemstone Communications"},
		{ 2, 0x5b, "Anadigm (Anadyne)"},
		{ 2, 0xdc, "3ParData"},
		{ 2, 0x5d, "Mellanox Technologies"},
		{ 2, 0x5e, "Tenx Technologies"},
		{ 2, 0xdf, "Helix AG"},
		{ 2, 0xe0, "Domosys"},
		{ 2, 0x61, "Skyup Technology"},
		{ 2, 0x62, "HiNT"},
		{ 2, 0xe3, "Chiaro"},
		{ 2, 0x64, "MDT Technologies"},
		{ 2, 0xe5, "Exbit Technology A/S"},
		{ 2, 0xe6, "Integrated Technology Express"},
		{ 2, 0x67, "AVED Memory"},
		{ 2, 0x68, "Legerity"},
		{ 2, 0xe9, "Jasmine Networks"},
		{ 2, 0xea, "Caspian Networks"},
		{ 2, 0x6b, "nCUBE"},
		{ 2, 0xec, "Silicon Access Networks"},
		{ 2, 0x6d, "FDK"},
		{ 2, 0x6e, "High Bandwidth Access"},
		{ 2, 0xef, "MultiLink Technology"},
		{ 2, 0x70, "BRECIS"},
		{ 2, 0xf1, "World Wide Packets"},
		{ 2, 0xf2, "APW"},
		{ 2, 0x73, "Chicory Systems"},
		{ 2, 0xf4, "Xstream Logic"},
		{ 2, 0x75, "Fast-Chip"},
		{ 2, 0x76, "Zucotto Wireless"},
		{ 2, 0xf7, "Realchip"},
		{ 2, 0xf8, "Galaxy Power"},
		{ 2, 0x79, "eSilicon"},
		{ 2, 0x7a, "Morphics Technology"},
		{ 2, 0xfb, "Accelerant Networks"},
		{ 2, 0x7c, "Silicon Wave"},
		{ 2, 0xfd, "SandCraft"},
		{ 2, 0xfe, "Elpida"},
		{ 3, 0x01, "Solectron"},
		{ 3, 0x02, "Optosys Technologies"},
		{ 3, 0x83, "Buffalo (Formerly Melco)"},
		{ 3, 0x04, "TriMedia Technologies"},
		{ 3, 0x85, "Cyan Technologies"},
		{ 3, 0x86, "Global Locate"},
		{ 3, 0x07, "Optillion"},
		{ 3, 0x08, "Terago Communications"},
		{ 3, 0x89, "Ikanos Communications"},
		{ 3, 0x8a, "Preton Technology"},
		{ 3, 0x0b, "Nanya Technology"},
		{ 3, 0x8c, "Elite Flash Storage"},
		{ 3, 0x0d, "Mysticom"},
		{ 3, 0x0e, "LightSand Communications"},
		{ 3, 0x8f, "ATI Technologies"},
		{ 3, 0x10, "Agere Systems"},
		{ 3, 0x91, "NeoMagic"},
		{ 3, 0x92, "AuroraNetics"},
		{ 3, 0x13, "Geil"},
		{ 3, 0x94, "Mushkin"},
		{ 3, 0x15, "Tioga Technologies"},
		{ 3, 0x16, "Netlist"},
		{ 3, 0x97, "TeraLogic"},
		{ 3, 0x98, "Cicada Semiconductor"},
		{ 3, 0x19, "Centon Electronics"},
		{ 3, 0x1a, "Tyco Electronics"},
		{ 3, 0x9b, "Magis Works"},
		{ 3, 0x1c, "Zettacom"},
		{ 3, 0x9d, "Cogency Semiconductor"},
		{ 3, 0x9e, "Chipcon AS"},
		{ 3, 0x1f, "Aspex Technology"},
		{ 3, 0x20, "F5 Networks"},
		{ 3, 0xa1, "Programmable Silicon Solutions"},
		{ 3, 0xa2, "ChipWrights"},
		{ 3, 0x23, "Acorn Networks"},
		{ 3, 0xa4, "Quicklogic"},
		{ 3, 0x25, "Kingmax Semiconductor"},
		{ 3, 0x26, "BOPS"},
		{ 3, 0xa7, "Flasys"},
		{ 3, 0xa8, "BitBlitz Communications"},
		{ 3, 0x29, "eMemory Technology"},
		{ 3, 0x2a, "Procket Networks"},
		{ 3, 0xab, "Purple Ray"},
		{ 3, 0x2c, "Trebia Networks"},
		{ 3, 0xad, "Delta Electronics"},
		{ 3, 0xae, "Onex Communications"},
		{ 3, 0x2f, "Ample Communications"},
		{ 3, 0xb0, "Memory Experts Intl"},
		{ 3, 0x31, "Astute Networks"},
		{ 3, 0x32, "Azanda Network Devices"},
		{ 3, 0xb3, "Dibcom"},
		{ 3, 0x34, "Tekmos"},
		{ 3, 0xb5, "API NetWorks"},
		{ 3, 0xb6, "Bay Microsystems"},
		{ 3, 0x37, "Firecron"},
		{ 3, 0x38, "Resonext Communications"},
		{ 3, 0xb9, "Tachys Technologies"},
		{ 3, 0xba, "Equator Technology"},
		{ 3, 0x3b, "Concept Computer"},
		{ 3, 0xbc, "SILCOM"},
		{ 3, 0x3d, "3Dlabs"},
		{ 3, 0x3e, "c?t Magazine"},
		{ 3, 0xbf, "Sanera Systems"},
		{ 3, 0x40, "Silicon Packets"},
		{ 3, 0xc1, "Viasystems Group"},
		{ 3, 0xc2, "Simtek"},
		{ 3, 0x43, "Semicon Devices Singapore"},
		{ 3, 0xc4, "Satron Handelsges"},
		{ 3, 0x45, "Improv Systems"},
		{ 3, 0x46, "INDUSYS"},
		{ 3, 0xc7, "Corrent"},
		{ 3, 0xc8, "Infrant Technologies"},
		{ 3, 0x49, "Ritek Corp"},
		{ 3, 0x4a, "empowerTel Networks"},
		{ 3, 0xcb, "Hypertec"},
		{ 3, 0x4c, "Cavium Networks"},
		{ 3, 0xcd, "PLX Technology"},
		{ 3, 0xce, "Massana Design"},
		{ 3, 0x4f, "Intrinsity"},
		{ 3, 0xd0, "Valence Semiconductor"},
		{ 3, 0x51, "Terawave Communications"},
		{ 3, 0x52, "IceFyre Semiconductor"},
		{ 3, 0xd3, "Primarion"},
		{ 3, 0x54, "Picochip Designs"},
		{ 3, 0xd5, "Silverback Systems"},
		{ 3, 0xd6, "Jade Star Technologies"},
		{ 3, 0x57, "Pijnenburg Securealink"},
		{ 3, 0x58, "takeMS International AG"},
		{ 3, 0xd9, "Cambridge Silicon Radio"},
		{ 3, 0xda, "Swissbit"},
		{ 3, 0x5b, "Nazomi Communications"},
		{ 3, 0xdc, "eWave System"},
		{ 3, 0x5d, "Rockwell Collins"},
		{ 3, 0x5e, "Picocel Co. (Paion)"},
		{ 3, 0xdf, "Alphamosaic"},
		{ 3, 0xe0, "Sandburst"},
		{ 3, 0x61, "SiCon Video"},
		{ 3, 0x62, "NanoAmp Solutions"},
		{ 3, 0xe3, "Ericsson Technology"},
		{ 3, 0x64, "PrairieComm"},
		{ 3, 0xe5, "Mitac International"},
		{ 3, 0xe6, "Layer N Networks"},
		{ 3, 0x67, "MtekVision (Atsana)"},
		{ 3, 0x68, "Allegro Networks"},
		{ 3, 0xe9, "Marvell Semiconductors"},
		{ 3, 0xea, "Netergy Microelectronic"},
		{ 3, 0x6b, "NVIDIA"},
		{ 3, 0xec, "Internet Machines"},
		{ 3, 0x6d, "Peak Electronics"},
		{ 3, 0x6e, "Litchfield Communication"},
		{ 3, 0xef, "Accton Technology"},
		{ 3, 0x70, "Teradiant Networks"},
		{ 3, 0xf1, "Scaleo Chip"},
		{ 3, 0xf2, "Cortina Systems"},
		{ 3, 0x73, "RAM Components"},
		{ 3, 0xf4, "Raqia Networks"},
		{ 3, 0x75, "ClearSpeed"},
		{ 3, 0x76, "Matsushita Battery"},
		{ 3, 0xf7, "Xelerated"},
		{ 3, 0xf8, "SimpleTech"},
		{ 3, 0x79, "Utron Technology"},
		{ 3, 0x7a, "Astec International"},
		{ 3, 0xfb, "AVM"},
		{ 3, 0x7c, "Redux Communications"},
		{ 3, 0xfd, "Dot Hill Systems"},
		{ 3, 0xfe, "TeraChip"},
		{ 4, 0x01, "T-RAM"},
		{ 4, 0x02, "Innovics Wireless"},
		{ 4, 0x83, "Teknovus"},
		{ 4, 0x04, "KeyEye Communications"},
		{ 4, 0x85, "Runcom Technologies"},
		{ 4, 0x86, "RedSwitch"},
		{ 4, 0x07, "Dotcast"},
		{ 4, 0x08, "Silicon Mountain Memory"},
		{ 4, 0x89, "Signia Technologies"},
		{ 4, 0x8a, "Pixim"},
		{ 4, 0x0b, "Galazar Networks"},
		{ 4, 0x8c, "White Electronic Designs"},
		{ 4, 0x0d, "Patriot Scientific"},
		{ 4, 0x0e, "Neoaxiom"},
		{ 4, 0x8f, "3Y Power Technology"},
		{ 4, 0x10, "Scaleo Chip"},
		{ 4, 0x91, "Potentia Power Systems"},
		{ 4, 0x92, "C-guys"},
		{ 4, 0x13, "Digital Communications Technology"},
		{ 4, 0x94, "Silicon-Based Technology"},
		{ 4, 0x15, "Fulcrum Microsystems"},
		{ 4, 0x16, "Positivo Informatica"},
		{ 4, 0x97, "XIOtech"},
		{ 4, 0x98, "PortalPlayer"},
		{ 4, 0x19, "Zhiying Software"},
		{ 4, 0x1a, "ParkerVision"},
		{ 4, 0x9b, "Phonex Broadband"},
		{ 4, 0x1c, "Skyworks Solutions"},
		{ 4, 0x9d, "Entropic Communications"},
		{ 4, 0x9e, "Pacific Force Technology"},
		{ 4, 0x1f, "Zensys A/S"},
		{ 4, 0x20, "Legend Silicon Corp."},
		{ 4, 0xa1, "Sci-worx"},
		{ 4, 0xa2, "SMSC (Standard Microsystems)"},
		{ 4, 0x23, "Renesas Technology"},
		{ 4, 0xa4, "Raza Microelectronics"},
		{ 4, 0x25, "Phyworks"},
		{ 4, 0x26, "MediaTek"},
		{ 4, 0xa7, "Non-cents Productions"},
		{ 4, 0xa8, "US Modular"},
		{ 4, 0x29, "Wintegra"},
		{ 4, 0x2a, "Mathstar"},
		{ 4, 0xab, "StarCore"},
		{ 4, 0x2c, "Oplus Technologies"},
		{ 4, 0xad, "Mindspeed"},
		{ 4, 0xae, "Just Young Computer"},
		{ 4, 0x2f, "Radia Communications"},
		{ 4, 0xb0, "OCZ"},
		{ 4, 0x31, "Emuzed"},
		{ 4, 0x32, "LOGIC Devices"},
		{ 4, 0xb3, "Inphi"},
		{ 4, 0x34, "Quake Technologies"},
		{ 4, 0xb5, "Vixel"},
		{ 4, 0xb6, "SolusTek"},
		{ 4, 0x37, "Kongsberg Maritime"},
		{ 4, 0x38, "Faraday Technology"},
		{ 4, 0xb9, "Altium"},
		{ 4, 0xba, "Insyte"},
		{ 4, 0x3b, "ARM"},
		{ 4, 0xbc, "DigiVision"},
		{ 4, 0x3d, "Vativ Technologies"},
		{ 4, 0x3e, "Endicott Interconnect Technologies"},
		{ 4, 0xbf, "Pericom"},
		{ 4, 0x40, "Bandspeed"},
		{ 4, 0xc1, "LeWiz Communications"},
		{ 4, 0xc2, "CPU Technology"},
		{ 4, 0x43, "Ramaxel Technology"},
		{ 4, 0xc4, "DSP Group"},
		{ 4, 0x45, "Axis Communications"},
		{ 4, 0x46, "Legacy Electronics"},
		{ 4, 0xc7, "Chrontel"},
		{ 4, 0xc8, "Powerchip Semiconductor"},
		{ 4, 0x49, "MobilEye Technologies"},
		{ 4, 0x4a, "Excel Semiconductor"},
		{ 4, 0xcb, "A-DATA Technology"},
		{ 4, 0x4c, "VirtualDigm"},
		{ 4, 0xcd, "G Skill Intl"},
		{ 4, 0xce, "Quanta Computer"},
		{ 4, 0x4f, "Yield Microelectronics"},
		{ 4, 0xd0, "Afa Technologies"},
		{ 4, 0x51, "KINGBOX Technology Co."},
		{ 4, 0x52, "Ceva"},
		{ 4, 0xd3, "iStor Networks"},
		{ 4, 0x54, "Advance Modules"},
		{ 4, 0xd5, "Microsoft"},
		{ 4, 0xd6, "Open-Silicon"},
		{ 4, 0x57, "Goal Semiconductor"},
		{ 4, 0x58, "ARC International"},
		{ 4, 0xd9, "Simmtec"},
		{ 4, 0xda, "Metanoia"},
		{ 4, 0x5b, "Key Stream"},
		{ 4, 0xdc, "Lowrance Electronics"},
		{ 4, 0x5d, "Adimos"},
		{ 4, 0x5e, "SiGe Semiconductor"},
		{ 4, 0xdf, "Fodus Communications"},
		{ 4, 0xe0, "Credence Systems Corp."},
		{ 4, 0x61, "Genesis Microchip"},
		{ 4, 0x62, "Vihana"},
		{ 4, 0xe3, "WIS Technologies"},
		{ 4, 0x64, "GateChange Technologies"},
		{ 4, 0xe5, "High Density Devices AS"},
		{ 4, 0xe6, "Synopsys"},
		{ 4, 0x67, "Gigaram"},
		{ 4, 0x68, "Enigma Semiconductor"},
		{ 4, 0xe9, "Century Micro"},
		{ 4, 0xea, "Icera Semiconductor"},
		{ 4, 0x6b, "Mediaworks Integrated Systems"},
		{ 4, 0xec, "O?Neil Product Development"},
		{ 4, 0x6d, "Supreme Top Technology"},
		{ 4, 0x6e, "MicroDisplay"},
		{ 4, 0xef, "Team Group"},
		{ 4, 0x70, "Sinett"},
		{ 4, 0xf1, "Toshiba"},
		{ 4, 0xf2, "Tensilica"},
		{ 4, 0x73, "SiRF Technology"},
		{ 4, 0xf4, "Bacoc"},
		{ 4, 0x75, "SMaL Camera Technologies"},
		{ 4, 0x76, "Thomson SC"},
		{ 4, 0xf7, "Airgo Networks"},
		{ 4, 0xf8, "Wisair"},
		{ 4, 0x79, "SigmaTel"},
		{ 4, 0x7a, "Arkados"},
		{ 4, 0xfb, "Compete IT Co. KG"},
		{ 4, 0x7c, "Eudar Technology"},
		{ 4, 0xfd, "Focus Enhancements"},
		{ 4, 0xfe, "Xyratex"},
		{ 5, 0x01, "Specular Networks"},
		{ 5, 0x02, "Patriot Memory (PDP Systems)"},
		{ 5, 0x83, "U-Chip Technology Corp."},
		{ 5, 0x04, "Silicon Optix"},
		{ 5, 0x85, "Greenfield Networks"},
		{ 5, 0x86, "CompuRAM"},
		{ 5, 0x07, "Stargen"},
		{ 5, 0x08, "NetCell"},
		{ 5, 0x89, "Excalibrus Technologies"},
		{ 5, 0x8a, "SCM Microsystems"},
		{ 5, 0x0b, "Xsigo Systems"},
		{ 5, 0x8c, "CHIPS & Systems"},
		{ 5, 0x0d, "Tier"},
		{ 5, 0x0e, "CWRL Labs"},
		{ 5, 0x8f, "Teradici"},
		{ 5, 0x10, "Gigaram"},
		{ 5, 0x91, "g2 Microsystems"},
		{ 5, 0x92, "PowerFlash Semiconductor"},
		{ 5, 0x13, "P.A. Semi"},
		{ 5, 0x94, "NovaTech Solutions, S.A."},
		{ 5, 0x15, "c2 Microsystems"},
		{ 5, 0x16, "Level5 Networks"},
		{ 5, 0x97, "COS Memory AG"},
		{ 5, 0x98, "Innovasic Semiconductor"},
		{ 5, 0x19, "02IC Co."},
		{ 5, 0x1a, "Tabula,"},
		{ 5, 0x9b, "Crucial Technology"},
		{ 5, 0x1c, "Chelsio Communications"},
		{ 5, 0x9d, "Solarflare Communications"},
		{ 5, 0x9e, "Xambala"},
		{ 5, 0x1f, "EADS Astrium"},
		{ 5, 0x20, "Terra Semiconductor"},
		{ 5, 0xa1, "Imaging Works"},
		{ 5, 0xa2, "Astute Networks"},
		{ 5, 0x23, "Tzero"},
		{ 5, 0xa4, "Emulex"},
		{ 5, 0x25, "Power-One"},
		{ 5, 0x26, "Pulse~LINK"},
		{ 5, 0xa7, "Hon Hai Precision Industry"},
		{ 5, 0xa8, "White Rock Networks"},
		{ 5, 0x29, "Telegent Systems USA"},
		{ 5, 0x2a, "Atrua Technologies"},
		{ 5, 0xab, "Acbel Polytech"},
		{ 5, 0x2c, "eRide"},
		{ 5, 0xad, "ULi Electronics"},
		{ 5, 0xae, "Magnum Semiconductor"},
		{ 5, 0x2f, "neoOne Technology"},
		{ 5, 0xb0, "Connex Technology"},
		{ 5, 0x31, "Stream Processors"},
		{ 5, 0x32, "Focus Enhancements"},
		{ 5, 0xb3, "Telecis Wireless"},
		{ 5, 0x34, "uNav Microelectronics"},
		{ 5, 0xb5, "Tarari"},
		{ 5, 0xb6, "Ambric"},
		{ 5, 0x37, "Newport Media"},
		{ 5, 0x38, "VMTS"},
		{ 5, 0xb9, "Enuclia Semiconductor"},
		{ 5, 0xba, "Virtium Technology"},
		{ 5, 0x3b, "Solid State System Co."},
		{ 5, 0xbc, "Kian Tech LLC"},
		{ 5, 0x3d, "Artimi"},
		{ 5, 0x3e, "Power Quotient International"},
		{ 5, 0xbf, "Avago Technologies"},
		{ 5, 0x40, "ADTechnology"},
		{ 5, 0xc1, "Sigma Designs"},
		{ 5, 0xc2, "SiCortex"},
		{ 5, 0x43, "Ventura Technology Group"},
		{ 5, 0xc4, "eASIC"},
		{ 5, 0x45, "M.H.S. SAS"},
		{ 5, 0x46, "Micro Star International"},
		{ 5, 0xc7, "Rapport"},
		{ 5, 0xc8, "Makway International"},
		{ 5, 0x49, "Broad Reach Engineering Co."},
		{ 5, 0x4a, "Semiconductor Mfg Intl Corp"},
		{ 5, 0xcb, "SiConnect"},
		{ 5, 0x4c, "FCI USA"},
		{ 5, 0xcd, "Validity Sensors"},
		{ 5, 0xce, "Coney Technology Co."},
		{ 5, 0x4f, "Spans Logic"},
		{ 5, 0xd0, "Neterion"},
		{ 5, 0x51, "Qimonda"},
		{ 5, 0x52, "New Japan Radio Co."},
		{ 5, 0xd3, "Velogix"},
		{ 5, 0x54, "Montalvo Systems"},
		{ 5, 0xd5, "iVivity"},
		{ 5, 0xd6, "Walton Chaintech"},
		{ 5, 0x57, "AENEON"},
		{ 5, 0x58, "Lorom Industrial Co."},
		{ 5, 0xd9, "Radiospire Networks"},
		{ 5, 0xda, "Sensio Technologies"},
		{ 5, 0x5b, "Nethra Imaging"},
		{ 5, 0xdc, "Hexon Technology Pte"},
		{ 5, 0x5d, "CompuStocx (CSX)"},
		{ 5, 0x5e, "Methode Electronics"},
		{ 5, 0xdf, "Connect One"},
		{ 5, 0xe0, "Opulan Technologies"},
		{ 5, 0x61, "Septentrio NV"},
		{ 5, 0x62, "Goldenmars Technology"},
		{ 5, 0xe3, "Kreton"},
		{ 5, 0x64, "Cochlear"},
		{ 5, 0xe5, "Altair Semiconductor"},
		{ 5, 0xe6, "NetEffect"},
		{ 5, 0x67, "Spansion"},
		{ 5, 0x68, "Taiwan Semiconductor Mfg"},
		{ 5, 0xe9, "Emphany Systems"},
		{ 5, 0xea, "ApaceWave Technologies"},
		{ 5, 0x6b, "Mobilygen"},
		{ 5, 0xec, "Tego"},
		{ 5, 0x6d, "Cswitch"},
		{ 5, 0x6e, "Haier (Beijing) IC Design Co."},
		{ 5, 0xef, "MetaRAM"},
		{ 5, 0x70, "Axel Electronics Co."},
		{ 5, 0xf1, "Tilera"},
		{ 5, 0xf2, "Aquantia"},
		{ 5, 0x73, "Vivace Semiconductor"},
		{ 5, 0xf4, "Redpine Signals"},
		{ 5, 0x75, "Octalica"},
		{ 5, 0x76, "InterDigital Communications"},
		{ 5, 0xf7, "Avant Technology"},
		{ 5, 0xf8, "Asrock"},
		{ 5, 0x79, "Availink"},
		{ 5, 0x7a, "Quartics"},
		{ 5, 0xfb, "Element CXI"},
		{ 5, 0x7c, "Innovaciones Microelectronicas"},
		{ 5, 0xfd, "VeriSilicon Microelectronics"},
		{ 5, 0xfe, "W5 Networks"},
		{ 6, 0x01, "MOVEKING"},
		{ 6, 0x02, "Mavrix Technology"},
		{ 6, 0x83, "CellGuide"},
		{ 6, 0x04, "Faraday Technology"},
		{ 6, 0x85, "Diablo Technologies"},
		{ 6, 0x86, "Jennic"},
		{ 6, 0x07, "Octasic"},
		{ 6, 0x08, "Molex"},
		{ 6, 0x89, "3Leaf Networks"},
		{ 6, 0x8a, "Bright Micron Technology"},
		{ 6, 0x0b, "Netxen"},
		{ 6, 0x8c, "NextWave Broadband"},
		{ 6, 0x0d, "DisplayLink"},
		{ 6, 0x0e, "ZMOS Technology"},
		{ 6, 0x8f, "Tec-Hill"},
		{ 6, 0x10, "Multigig"},
		{ 6, 0x91, "Amimon"},
		{ 6, 0x92, "Euphonic Technologies"},
		{ 6, 0x13, "BRN Phoenix"},
		{ 6, 0x94, "InSilica"},
		{ 6, 0x15, "Ember"},
		{ 6, 0x16, "Avexir Technologies"},
		{ 6, 0x97, "Echelon"},
		{ 6, 0x98, "Edgewater Computer Systems"},
		{ 6, 0x19, "XMOS Semiconductor"},
		{ 6, 0x1a, "GENUSION"},
		{ 6, 0x9b, "Memory Corp NV"},
		{ 6, 0x1c, "SiliconBlue Technologies"},
		{ 6, 0x9d, "Rambus"},
		{ 6, 0x9e, "Andes Technology"},
		{ 6, 0x1f, "Coronis Systems"},
		{ 6, 0x20, "Achronix Semiconductor"},
		{ 6, 0xa1, "Siano Mobile Silicon"},
		{ 6, 0xa2, "Semtech"},
		{ 6, 0x23, "Pixelworks"},
		{ 6, 0xa4, "Gaisler Research AB"},
		{ 6, 0x25, "Teranetics"},
		{ 6, 0x26, "Toppan Printing Co."},
		{ 6, 0xa7, "Kingxcon"},
		{ 6, 0xa8, "Silicon Integrated Systems"},
		{ 6, 0x29, "I-O Data Device"},
		{ 6, 0x2a, "NDS Americas"},
		{ 6, 0xab, "Solomon Systech Limited"},
		{ 6, 0x2c, "On Demand Microelectronics"},
		{ 6, 0xad, "Amicus Wireless"},
		{ 6, 0xae, "SMARDTV SNC"},
		{ 6, 0x2f, "Comsys Communication"},
		{ 6, 0xb0, "Movidia"},
		{ 6, 0x31, "Javad GNSS"},
		{ 6, 0x32, "Montage Technology Group"},
		{ 6, 0xb3, "Trident Microsystems"},
		{ 6, 0x34, "Super Talent"},
		{ 6, 0xb5, "Optichron"},
		{ 6, 0xb6, "Future Waves UK"},
		{ 6, 0x37, "SiBEAM"},
		{ 6, 0x38, "Inicore,"},
		{ 6, 0xb9, "Virident Systems"},
		{ 6, 0xba, "M2000"},
		{ 6, 0x3b, "ZeroG Wireless"},
		{ 6, 0xbc, "Gingle Technology Co."},
		{ 6, 0x3d, "Space Micro"},
		{ 6, 0x3e, "Wilocity"},
		{ 6, 0xbf, "Novafora, Ic."},
		{ 6, 0x40, "iKoa"},
		{ 6, 0xc1, "ASint Technology"},
		{ 6, 0xc2, "Ramtron"},
		{ 6, 0x43, "Plato Networks"},
		{ 6, 0xc4, "IPtronics AS"},
		{ 6, 0x45, "Infinite-Memories"},
		{ 6, 0x46, "Parade Technologies"},
		{ 6, 0xc7, "Dune Networks"},
		{ 6, 0xc8, "GigaDevice Semiconductor"},
		{ 6, 0x49, "Modu"},
		{ 6, 0x4a, "CEITEC"},
		{ 6, 0xcb, "Northrop Grumman"},
		{ 6, 0x4c, "XRONET"},
		{ 6, 0xcd, "Sicon Semiconductor AB"},
		{ 6, 0xce, "Atla Electronics Co."},
		{ 6, 0x4f, "TOPRAM Technology"},
		{ 6, 0xd0, "Silego Technology"},
		{ 6, 0x51, "Kinglife"},
		{ 6, 0x52, "Ability Industries"},
		{ 6, 0xd3, "Silicon Power Computer & Communications"},
		{ 6, 0x54, "Augusta Technology"},
		{ 6, 0xd5, "Nantronics Semiconductors"},
		{ 6, 0xd6, "Hilscher Gesellschaft"},
		{ 6, 0x57, "Quixant"},
		{ 6, 0x58, "Percello"},
		{ 6, 0xd9, "NextIO"},
		{ 6, 0xda, "Scanimetrics"},
		{ 6, 0x5b, "FS-Semi Company"},
		{ 6, 0xdc, "Infinera"},
		{ 6, 0x5d, "SandForce"},
		{ 6, 0x5e, "Lexar Media"},
		{ 6, 0xdf, "Teradyne"},
		{ 6, 0xe0, "Memory Exchange Corp."},
		{ 6, 0x61, "Suzhou Smartek Electronics"},
		{ 6, 0x62, "Avantium"},
		{ 6, 0xe3, "ATP Electronics"},
		{ 6, 0x64, "Valens Semiconductor"},
		{ 6, 0xe5, "Agate Logic"},
		{ 6, 0xe6, "Netronome"},
		{ 6, 0x67, "Zenverge"},
		{ 6, 0x68, "N-trig"},
		{ 6, 0xe9, "SanMax Technologies"},
		{ 6, 0xea, "Contour Semiconductor"},
		{ 6, 0x6b, "TwinMOS"},
		{ 6, 0xec, "Silicon Systems"},
		{ 6, 0x6d, "V-Color Technology"},
		{ 6, 0x6e, "Certicom"},
		{ 6, 0xef, "JSC ICC Milandr"},
		{ 6, 0x70, "PhotoFast Global"},
		{ 6, 0xf1, "InnoDisk"},
		{ 6, 0xf2, "Muscle Power"},
		{ 6, 0x73, "Energy Micro"},
		{ 6, 0xf4, "Innofidei"},
		{ 9, 0xff, ""}
};

#define VEN_MAP_SIZE (sizeof(vendorMap)/sizeof(VenIdName))

#endif
