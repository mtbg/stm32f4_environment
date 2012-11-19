#include <stdint.h>

#define __packed __attribute__((packed))
/*
 * Peripheral name:	FSMC control register
 * Boundary:		0xA000 0000 - 0xA000 0FFF
 */

extern volatile struct {
	uint32_t BCR1;
	uint32_t BTR1;
	uint32_t BCR2;
	uint32_t BTR2;
	/* 0x10 */
	uint32_t BCR3;
	uint32_t BTR3;
	uint32_t BCR4;
	uint32_t BTR4;
	/* 0x20 */
	uint32_t _dummy_0[16];
	/* 0x60 */
	uint32_t PCR2;
	uint32_t SR2;
	uint32_t PMEM2;
	uint32_t PATT2;
	/* 0x70 */
	uint32_t _dummy_1;
	uint32_t ECCR2;
	uint32_t _dummy_2[2];
	/* 0x80 */
	uint32_t PCR3;
	uint32_t SR3;
	uint32_t PMEM3;
	uint32_t PATT3;
	/* 0x90 */
	uint32_t _dummy_3;
	uint32_t ECCR3;
	uint32_t _dummy_4[2];
	/* 0xA0 */
	uint32_t PCR4;
	uint32_t SR4;
	uint32_t PMEM4;
	uint32_t PATT4;
	/* 0xB0 */
	uint32_t PIO4;
	/* 0xB4 */
	uint32_t _dummy_5[20];
	/* 0x104 */
	uint32_t BWTR1;
	uint32_t _dummy_6;
	uint32_t BWTR2;
	/* 0x110 */
	uint32_t _dummy_7;
	uint32_t BWTR3;
	uint32_t _dummy_8;
	uint32_t BWTR4;
} __packed FSMC;



/*
 * Peripheral name:	RNG
 * Boundary:		0x5006 0800 - 0x5006 0BFF
 */

extern volatile struct {
	uint32_t CR;
	uint32_t SR;
	uint32_t DR;
} __packed RNG;



/*
 * Peripheral name:	HASH
 * Boundary:		0x5006 0400 - 0x5006 07FF
 */

extern volatile struct {
	uint32_t CR;
	uint32_t DIN;
	uint32_t STR;
	uint32_t HR0;
	/* 0x10 */
	uint32_t HR1;
	uint32_t HR2;
	uint32_t HR3;
	uint32_t HR4;
	/* 0x20 */
	uint32_t IMR;
	uint32_t SR;
	/* 0x24 */
	uint32_t _dummy_0[53];
	/* 0xF8 */
	union {
		struct {
			uint32_t CSR0;
			uint32_t CSR1;
			/* 0x100 */
			uint32_t CSR2;
			uint32_t CSR3;
			uint32_t CSR4;
			uint32_t CSR5;
			/* 0x110 */
			uint32_t CSR6;
			uint32_t CSR7;
			uint32_t CSR8;
			uint32_t CSR9;
			/* 0x120 */
			uint32_t CSR10;
			uint32_t CSR11;
			uint32_t CSR12;
			uint32_t CSR13;
			/* 0x130 */
			uint32_t CSR14;
			uint32_t CSR15;
			uint32_t CSR16;
			uint32_t CSR17;
			/* 0x140 */
			uint32_t CSR18;
			uint32_t CSR19;
			uint32_t CSR20;
			uint32_t CSR21;
			/* 0x150 */
			uint32_t CSR22;
			uint32_t CSR23;
			uint32_t CSR24;
			uint32_t CSR25;
			/* 0x160 */
			uint32_t CSR26;
			uint32_t CSR27;
			uint32_t CSR28;
			uint32_t CSR29;
			/* 0x170 */
			uint32_t CSR30;
			uint32_t CSR31;
			uint32_t CSR32;
			uint32_t CSR33;
			/* 0x180 */
			uint32_t CSR34;
			uint32_t CSR35;
			uint32_t CSR36;
			uint32_t CSR37;
			/* 0x190 */
			uint32_t CSR38;
			uint32_t CSR39;
			uint32_t CSR40;
			uint32_t CSR41;
			/* 0x1A0 */
			uint32_t CSR42;
			uint32_t CSR43;
			uint32_t CSR44;
			uint32_t CSR45;
			/* 0x1B0 */
			uint32_t CSR46;
			uint32_t CSR47;
			uint32_t CSR48;
			uint32_t CSR49;
			/* 0x1C0 */
			uint32_t CSR50;
		};
		uint32_t CSR[51];
	};
	/* 0x1C4 */
	uint32_t _dummy_1[83];
	/* 0x310 */
	uint32_t _HR0;
	uint32_t _HR1;
	uint32_t _HR2;
	uint32_t _HR3;
	/* 0x320 */
	uint32_t _HR4;
} __packed HASH;



/*
 * Peripheral name:	CRYP
 * Boundary:		0x5006 0000 - 0x5006 03FF
 */

extern volatile struct {
	uint32_t CR;
	uint32_t SR;
	uint32_t DIN;
	uint32_t DOUT;
	/* 0x10 */
	uint32_t DMACR;
	uint32_t IMSCR;
	uint32_t RISR;
	uint32_t MISR;
	/* 0x20 */
	uint32_t K0LR;
	uint32_t K0RR;
	uint32_t K1LR;
	uint32_t K1RR;
	/* 0x30 */
	uint32_t K2LR;
	uint32_t K2RR;
	uint32_t K3LR;
	uint32_t K3RR;
	/* 0x40 */
	uint32_t IV0LR;
	uint32_t IV0RR;
	uint32_t IV1LR;
	uint32_t IV1RR;
} __packed CRYP;



/*
 * Peripheral name:	DCMI
 * Boundary:		0x5005 0000 - 0x5005 03FF
 */

extern volatile struct {
	uint32_t CR;
	uint32_t SR;
	uint32_t RIS;
	uint32_t IER;
	/* 0x10 */
	uint32_t MIS;
	uint32_t ICR;
	uint32_t ESCR;
	uint32_t ESUR;
	/* 0x20 */
	uint32_t CWSTRT;
	uint32_t CWSIZE;
	uint32_t DR;
} __packed DCMI;



/*
 * Peripheral name:	USB OTG FS
 * Boundary:		0x5000 0000 - 0x5003 FFFF
 */

extern volatile struct {
	uint32_t GOTGCTL;
	uint32_t GOTGINT;
	uint32_t GAHBCFG;
	uint32_t GUSBCFG;
	/* 0x10 */
	uint32_t GRSTCTL;
	uint32_t GINTSTS;
	uint32_t GINTMSK;
	uint32_t GRXSTSR;
	/* 0x20 */
	uint32_t GRXSTSPR; /* check */
	uint32_t GRXFSIZ;
	union {
		uint32_t HNPTXFSIZ;
		uint32_t DIEPTXF0;
	};
	uint32_t HNPTXSTS;
	/* 0x30 */
	uint32_t _dummy_0[2];
	uint32_t GCCFG;
	uint32_t CID;
	/* 0x40 */
	uint32_t _dummy_1[48];
	/* 0x100 */
	uint32_t HPTXFSIZ;
	uint32_t DIEPTXF1;
	uint32_t DIEPTXF2;
	uint32_t DIEPTXF3;
	/* 0x110 */
	uint32_t _dummy_2[188];
	/* 0x400 */
	uint32_t HCFG;
	uint32_t HFIR;
	uint32_t HFNUM;
	uint32_t _dummy_3;
	/* 0x410 */
	uint32_t HPTXSTS;
	uint32_t HAINT;
	uint32_t HAINTMSK;
	/* 0x41C */
	uint32_t _dummy_4[9];
	/* 0x440 */
	uint32_t HPRT;
	/* 0x444 */
	uint32_t _dummy_5[47];
	/* 0x500 */
	uint32_t HCCHAR0;
	uint32_t _dummy_6;
	uint32_t HCINT0;
	uint32_t HCINTMSK0;
	/* 0x510 */
	uint32_t HCTSIZ0;
	uint32_t _dummy_7[3];
	/* 0x520 */
	uint32_t HCCHAR1;
	uint32_t _dummy_8;
	uint32_t HCINT1;
	uint32_t HCINTMSK1;
	/* 0x530 */
	uint32_t HCTSIZ1;
	uint32_t _dummy_9[3];
	/* 0x540 */
	uint32_t HCCHAR2;
	uint32_t _dummy_10;
	uint32_t HCINT2;
	uint32_t HCINTMSK2;
	/* 0x550 */
	uint32_t HCTSIZ2;
	uint32_t _dummy_11[3];
	/* 0x560 */
	uint32_t HCCHAR3;
	uint32_t _dummy_12;
	uint32_t HCINT3;
	uint32_t HCINTMSK3;
	/* 0x570 */
	uint32_t HCTSIZ3;
	uint32_t _dummy_13[3];
	/* 0x580 */
	uint32_t HCCHAR4;
	uint32_t _dummy_14;
	uint32_t HCINT4;
	uint32_t HCINTMSK4;
	/* 0x590 */
	uint32_t HCTSIZ4;
	uint32_t _dummy_15[3];
	/* 0x5A0 */
	uint32_t HCCHAR5;
	uint32_t _dummy_16;
	uint32_t HCINT5;
	uint32_t HCINTMSK5;
	/* 0x5B0 */
	uint32_t HCTSIZ5;
	uint32_t _dummy_17[3];
	/* 0x5C0 */
	uint32_t HCCHAR6;
	uint32_t _dummy_18;
	uint32_t HCINT6;
	uint32_t HCINTMSK6;
	/* 0x5D0 */
	uint32_t HCTSIZ6;
	uint32_t _dummy_19[3];
	/* 0x5E0 */
	uint32_t HCCHAR7;
	uint32_t _dummy_20;
	uint32_t HCINT7;
	uint32_t HCINTMSK7;
	/* 0x5F0 */
	uint32_t HCTSIZ7;
	uint32_t _dummy_21[131];
	/* 0x800 */
	uint32_t DCFG;
	uint32_t DCTL;
	uint32_t DSTS;
	uint32_t _dummy_22;
	/* 0x810 */
	uint32_t DIEPMSK;
	uint32_t DOEPMSK;
	uint32_t DAINT;
	uint32_t DAINTMSK;
	/* 0x820 */
	uint32_t _dummy_23[2];
	uint32_t DVBUSDIS;
	uint32_t DVBUSPULSE;
	/* 0x830 */
	uint32_t _dummy_24;
	uint32_t DIEPEMPMSK;
	/* 0x838 */
	uint32_t _dummy_25[50];
	/* 0x900 */
	uint32_t DIEPCTL0;
	uint32_t _dummy_26;
	uint32_t DIEPINT0;
	uint32_t _dummy_27;
	/* 0x910 */
	uint32_t DIEPTSIZ0;
	uint32_t _dummy_28;
	uint32_t DTXFSTS0;
	uint32_t _dummy_29;
	/* 0x920 */
	uint32_t DIEPCTL1;
	uint32_t _dummy_30;
	uint32_t DIEPINT1;
	uint32_t _dummy_31;
	/* 0x930 */
	uint32_t DIEPTSIZ1;
	uint32_t _dummy_32;
	uint32_t DTXFSTS1;
	uint32_t _dummy_33;
	/* 0x940 */
	uint32_t DIEPCTL2;
	uint32_t _dummy_34;
	uint32_t DIEPINT2;
	uint32_t _dummy_35;
	/* 0x950 */
	uint32_t DIEPTSIZ2;
	uint32_t _dummy_36;
	uint32_t DTXFSTS2;
	uint32_t _dummy_37;
	/* 0x960 */
	uint32_t DIEPCTL3;
	uint32_t _dummy_38;
	uint32_t DIEPINT3;
	uint32_t _dummy_39;
	/* 0x970 */
	uint32_t DIEPTSIZ3;
	uint32_t _dummy_40;
	uint32_t DTXFSTS3;
	uint32_t _dummy_41;
	/* 0x980 */
	uint32_t _dummy_42[96];
	/* 0xB00 */
	uint32_t DOEPCTL0;
	uint32_t _dummy_43;
	uint32_t DOEPINT0;
	uint32_t _dummy_44;
	/* 0xB10 */
	uint32_t DOEPTSIZ0;
	uint32_t _dummy_45[3];
	/* 0xB20 */
	uint32_t DOEPCTL1;
	uint32_t _dummy_46;
	uint32_t DOEPINT1;
	uint32_t _dummy_47;
	/* 0xB30 */
	uint32_t DOEPTSIZ1;
	uint32_t _dummy_48[3];
	/* 0xB40 */
	uint32_t DOEPCTL2;
	uint32_t _dummy_49;
	uint32_t DOEPINT2;
	uint32_t _dummy_50;
	/* 0xB50 */
	uint32_t DOEPTSIZ2;
	uint32_t _dummy_51[3];
	/* 0xB60 */
	uint32_t DOEPCTL3;
	uint32_t _dummy_52;
	uint32_t DOEPINT3;
	uint32_t _dummy_53;
	/* 0xB70 */
	uint32_t DOEPTSIZ3;
	uint32_t _dummy_54[163];
	/* 0xE00 */
	uint32_t PCGCCTL;
} __packed OTG_FS;



/*
 * Peripheral name:	USB OTG HS
 * Boundary:		0x4004 0000 - 0x4007 FFFF
 */

extern volatile struct {
	uint32_t GOTGCTL;
	uint32_t GOTGINT;
	uint32_t GAHBCFG;
	uint32_t GUSBCFG;
	/* 0x10 */
	uint32_t GRSTCTL;
	uint32_t GINTSTS;
	uint32_t GINTMSK;
	uint32_t GRXSTSR;
	/* 0x20 */
	uint32_t GRXSTSP;
	uint32_t GRXFSIZ;
	uint32_t GNPTXFSIZ;
	uint32_t GNPTXSTS;
	/* 0x30 */
	uint32_t GI2CCTL;
	uint32_t _dummy_0;
	uint32_t GCCFG;
	uint32_t CID;
	/* 0x40 */
	uint32_t _dummy_1[48];
	/* 0x100 */
	uint32_t HPTXFSIZ;
	uint32_t DIEPTXF1;
	uint32_t DIEPTXF2;
	uint32_t DIEPTXF3;
	/* 0x110 */
	uint32_t DIEPTXF4;
	uint32_t _dummy_2[187];
	/* 0x400 */
	uint32_t HCFG;
	uint32_t HFIR;
	uint32_t HFNUM;
	uint32_t _dummy_3;
	/* 0x410 */
	uint32_t HPTXSTS;
	uint32_t HAINT;
	uint32_t HAINTMSK;
	/* 0x41C */
	uint32_t _dummy_4[9];
	/* 0x440 */
	uint32_t HPRT;
	/* 0x444 */
	uint32_t _dummy_5[47];
	/* 0x500 */
	uint32_t HCCHAR0;
	uint32_t HCSPLT0;
	uint32_t HCINT0;
	uint32_t HCINTMSK0;
	/* 0x510 */
	uint32_t HCTSIZ0;
	uint32_t HCDMA0;
	uint32_t _dummy_6[2];
	/* 0x520 */
	uint32_t HCCHAR1;
	uint32_t HCSPLT1;
	uint32_t HCINT1;
	uint32_t HCINTMSK1;
	/* 0x530 */
	uint32_t HCTSIZ1;
	uint32_t HCDMA1;
	uint32_t _dummy_7[2];
	/* 0x540 */
	uint32_t HCCHAR2;
	uint32_t HCSPLT2;
	uint32_t HCINT2;
	uint32_t HCINTMSK2;
	/* 0x550 */
	uint32_t HCTSIZ2;
	uint32_t HCDMA2;
	uint32_t _dummy_8[2];
	/* 0x560 */
	uint32_t HCCHAR3;
	uint32_t HCSPLT3;
	uint32_t HCINT3;
	uint32_t HCINTMSK3;
	/* 0x570 */
	uint32_t HCTSIZ3;
	uint32_t HCDMA3;
	uint32_t _dummy_9[2];
	/* 0x580 */
	uint32_t HCCHAR4;
	uint32_t HCSPLT4;
	uint32_t HCINT4;
	uint32_t HCINTMSK4;
	/* 0x590 */
	uint32_t HCTSIZ4;
	uint32_t HCDMA4;
	uint32_t _dummy_10[2];
	/* 0x5A0 */
	uint32_t HCCHAR5;
	uint32_t HCSPLT5;
	uint32_t HCINT5;
	uint32_t HCINTMSK5;
	/* 0x5B0 */
	uint32_t HCTSIZ5;
	uint32_t HCDMA5;
	uint32_t _dummy_11[2];
	/* 0x5C0 */
	uint32_t HCCHAR6;
	uint32_t HCSPLT6;
	uint32_t HCINT6;
	uint32_t HCINTMSK6;
	/* 0x5D0 */
	uint32_t HCTSIZ6;
	uint32_t HCDMA6;
	uint32_t _dummy_12[2];
	/* 0x5E0 */
	uint32_t HCCHAR7;
	uint32_t HCSPLT7;
	uint32_t HCINT7;
	uint32_t HCINTMSK7;
	/* 0x5F0 */
	uint32_t HCTSIZ7;
	uint32_t HCDMA7;
	uint32_t _dummy_13[2];
	/* 0x600 */
	uint32_t HCCHAR8;
	uint32_t HCSPLT8;
	uint32_t HCINT8;
	uint32_t HCINTMSK8;
	/* 0x610 */
	uint32_t HCTSIZ8;
	uint32_t HCDMA8;
	uint32_t _dummy_14[2];
	/* 0x620 */
	uint32_t HCCHAR9;
	uint32_t HCSPLT9;
	uint32_t HCINT9;
	uint32_t HCINTMSK9;
	/* 0x630 */
	uint32_t HCTSIZ9;
	uint32_t HCDMA9;
	uint32_t _dummy_15[2];
	/* 0x640 */
	uint32_t HCCHAR10;
	uint32_t HCSPLT10;
	uint32_t HCINT10;
	uint32_t HCINTMSK10;
	/* 0x650 */
	uint32_t HCTSIZ10;
	uint32_t HCDMA10;
	uint32_t _dummy_16[2];
	/* 0x660 */
	uint32_t HCCHAR11;
	uint32_t HCSPLT11;
	uint32_t HCINT11;
	uint32_t HCINTMSK11;
	/* 0x670 */
	uint32_t HCTSIZ11;
	uint32_t HCDMA11;
	/* 0x678 */
	uint32_t _dummy_17[98];
	/* 0x800 */
	uint32_t DCFG;
	uint32_t DCTL;
	uint32_t DSTS;
	uint32_t _dummy_18;
	/* 0x810 */
	uint32_t DIEPMSK;
	uint32_t DOEPMSK;
	uint32_t DAINT;
	uint32_t DAINTMSK;
	/* 0x820 */
	uint32_t _dummy_19[2];
	uint32_t DVBUSDIS;
	uint32_t DVBUSPULSE;
	/* 0x830 */
	uint32_t DTHRCTL;
	uint32_t DIEPEMPMSK;
	uint32_t DEACHINT;
	uint32_t DEACHINTMSK;
	/* 0x840 */
	uint32_t _dummy_20;
	uint32_t DIEPEACHINTMSK1;
	/* 0x848 */
	uint32_t _dummy_21[15];
	/* 0x884 */
	uint32_t DOEPEACHINTMSK1;
	/* 0x888 */
	uint32_t _dummy_22[6];
	/* 0x900 */
	uint32_t DIEPCTL0;
	uint32_t _dummy_23;
	uint32_t DIEPINT0;
	uint32_t _dummy_24;
	/* 0x910 */
	uint32_t DIEPTSIZ0;
	uint32_t _dummy_25;
	uint32_t DTXFSTS0;
	uint32_t _dummy_26;
	/* 0x920 */
	uint32_t DIEPCTL1;
	uint32_t _dummy_27;
	uint32_t DIEPINT1;
	uint32_t _dummy_28;
	/* 0x930 */
	uint32_t DIEPTSIZ1;
	uint32_t DIEPDMA1;
	uint32_t DTXFSTS1;
	uint32_t DIEPDMAB1;
	/* 0x940 */
	uint32_t DIEPCTL2;
	uint32_t _dummy_29;
	uint32_t DIEPINT2;
	uint32_t _dummy_30;
	/* 0x950 */
	uint32_t DIEPTSIZ2;
	uint32_t DIEPDMA2;
	uint32_t DTXFSTS2;
	uint32_t DIEPDMAB2;
	/* 0x960 */
	uint32_t DIEPCTL3;
	uint32_t _dummy_31;
	uint32_t DIEPINT3;
	uint32_t _dummy_32;
	/* 0x970 */
	uint32_t DIEPTSIZ3;
	uint32_t DIEPDMA3;
	uint32_t DTXFSTS3;
	uint32_t DIEPDMAB3;
	/* 0x980 */
	uint32_t DIEPCTL4;
	uint32_t _dummy_33;
	uint32_t DIEPINT4;
	uint32_t _dummy_34;
	/* 0x990 */
	uint32_t DIEPTSIZ4;
	uint32_t DIEPDMA4;
	uint32_t DTXFSTS4;
	uint32_t DIEPDMAB4;
	/* 0x9A0 */
	uint32_t DIEPCTL5;
	uint32_t _dummy_35;
	uint32_t DIEPINT5;
	uint32_t _dummy_36;
	/* 0x9B0 */
	uint32_t DIEPTSIZ5;
	uint32_t DIEPDMA5;
	uint32_t DTXFSTS5;
	uint32_t DIEPDMAB5;
	/* 0x9C0 */
	uint32_t DIEPCTL6;
	uint32_t _dummy_37;
	uint32_t DIEPINT6;
	uint32_t _dummy_38;
	/* 0x9D0 */
	uint32_t DIEPTSIZ6;
	uint32_t DIEPDMA6;
	uint32_t DTXFSTS6;
	uint32_t DIEPDMAB6;
	/* 0x9E0 */
	uint32_t DIEPCTL7;
	uint32_t _dummy_39;
	uint32_t DIEPINT7;
	uint32_t _dummy_40;
	/* 0x9F0 */
	uint32_t DIEPTSIZ7;
	uint32_t DIEPDMA7;
	uint32_t DTXFSTS7;
	uint32_t DIEPDMAB7;
	/* 0xA00 */
	uint32_t _dummy_41[64];
	/* 0xB00 */
	uint32_t DOEPCTL0;
	uint32_t _dummy_42;
	uint32_t DOEPINT0;
	uint32_t _dummy_43;
	/* 0xB10 */
	uint32_t DOEPTSIZ0;
	uint32_t _dummy_44[3];
	/* 0xB20 */
	uint32_t DOEPCTL1;
	uint32_t _dummy_45;
	uint32_t DOEPINT1;
	uint32_t _dummy_46;
	/* 0xB30 */
	uint32_t DOEPTSIZ1;
	uint32_t DOEPDMA1;
	uint32_t _dummy_47;
	uint32_t DOEPDMAB1;
	/* 0xB40 */
	uint32_t DOEPCTL2;
	uint32_t _dummy_48;
	uint32_t DOEPINT2;
	uint32_t _dummy_49;
	/* 0xB50 */
	uint32_t DOEPTSIZ2;
	uint32_t DOEPDMA2;
	uint32_t _dummy_50;
	uint32_t DOEPDMAB2;
	/* 0xB60 */
	uint32_t DOEPCTL3;
	uint32_t _dummy_51;
	uint32_t DOEPINT3;
	uint32_t _dummy_52;
	/* 0xB70 */
	uint32_t DOEPTSIZ3;
	uint32_t DOEPDMA3;
	uint32_t _dummy_53;
	uint32_t DOEPDMAB3;
	/* 0xB80 */
	uint32_t _dummy_54[160];
	/* 0xE00 */
	uint32_t PCGCCTL;
} __packed OTG_HS;



/*
 * Peripheral name:	ETHERNET MAC
 * Boundaries:
 * 			0x4002 9000 - 0x4002 93FF
 * 			0x4002 8C00 - 0x4002 8FFF
 * 			0x4002 8800 - 0x4002 8BFF
 * 			0x4002 8400 - 0x4002 87FF
 * 			0x4002 8000 - 0x4002 83FF
 */

extern volatile struct {
	uint32_t CR;
	uint32_t FFR;
	uint32_t HTHR;
	uint32_t HTLR;
	/* 0x10 */
	uint32_t MIIAR;
	uint32_t MIIDR;
	uint32_t FCR;
	uint32_t VLANTR;
	/* 0x20 */
	uint32_t _dummy_0[2];
	uint32_t RWUFFR;
	uint32_t PMTCSR;
	/* 0x30 */
	uint32_t _dummy_1;
	uint32_t DBGR;
	uint32_t SR;
	uint32_t IMR;
	/* 0x40 */
	uint32_t A0HR;
	uint32_t A0LR;
	uint32_t A1HR;
	uint32_t A1LR;
	/* 0x50 */
	uint32_t A2HR;
	uint32_t A2LR;
	uint32_t A3HR;
	uint32_t A3LR;
} __packed ETH_MAC;

extern volatile struct {
	uint32_t CR;
	uint32_t RIR;
	uint32_t TIR;
	uint32_t RIMR;
	/* 0x10 */
	uint32_t TIMR;
	/* 0x14 */
	uint32_t _dummy_0[14];
	/* 0x4C */
	uint32_t TGFSCCR;
	/* 0x50 */
	uint32_t TGFMSCCR;
	/* 0x54 */
	uint32_t _dummy_1[5];
	/* 0x68 */
	uint32_t TGFCR;
	/* 0x6C */
	uint32_t _dummy_2[10];
	/* 0x94 */
	uint32_t RFCECR;
	uint32_t RFAECR;
	/* 0x9C */
	uint32_t _dummy_3[10];
	/* 0xC4 */
	uint32_t RGUFCR;
} __packed ETH_MMC;

extern volatile struct {
	uint32_t TSCR;
	uint32_t SSIR;
	uint32_t TSHR;
	uint32_t TSLR;
	/* 0x10 */
	uint32_t TSHUR;
	uint32_t TSLUR;
	uint32_t TSAR;
	uint32_t TTHR;
	/* 0x20 */
	uint32_t TTLR;
	uint32_t _dummy_0;
	uint32_t TSSR;
} __packed ETH_PTP;

extern volatile struct {
	uint32_t BMR;
	uint32_t TPDR;
	uint32_t RPDR;
	uint32_t RDLAR;
	/* 0x10 */
	uint32_t TDLAR;
	uint32_t SR;
	uint32_t OMR;
	uint32_t IER;
	/* 0x20 */
	uint32_t MFBOCR;
	uint32_t RSWTR;
	/* 0x28 */
	uint32_t _dummy_0[8];
	/* 0x48 */
	uint32_t CHTDR;
	uint32_t CHRDR;
	/* 0x50 */
	uint32_t CHTBAR;
	uint32_t CHRBAR;
} __packed ETH_DMA;



/*
 * Peripheral name:	DMA2
 * Boundary:		0x4002 6400 - 0x4002 67FF
 * 
 * Peripheral name:	DMA1
 * Boundary:		0x4002 6000 - 0x4002 63FF
 */

extern volatile struct {
	uint32_t LISR;
	uint32_t HISR;
	uint32_t LIFCR;
	uint32_t HIFCR;
	/* 0x10 */
	uint32_t S0CR;
	uint32_t S0NDTR;
	uint32_t S0PAR;
	uint32_t S0M0AR;
	/* 0x20 */
	uint32_t S0M1AR;
	uint32_t S0FCR;
	uint32_t S1CR;
	uint32_t S1NDTR;
	/* 0x30 */
	uint32_t S1PAR;
	uint32_t S1M0AR;
	uint32_t S1M1AR;
	uint32_t S1FCR;
	/* 0x40 */
	uint32_t S2CR;
	uint32_t S2NDTR;
	uint32_t S2PAR;
	uint32_t S2M0AR;
	/* 0x50 */
	uint32_t S2M1AR;
	uint32_t S2FCR;
	uint32_t S3CR;
	uint32_t S3NDTR;
	/* 0x60 */
	uint32_t S3PAR;
	uint32_t S3M0AR;
	uint32_t S3M1AR;
	uint32_t S3FCR;
	/* 0x70 */
	uint32_t S4CR;
	uint32_t S4NDTR;
	uint32_t S4PAR;
	uint32_t S4M0AR;
	/* 0x80 */
	uint32_t S4M1AR;
	uint32_t S4FCR;
	uint32_t S5CR;
	uint32_t S5NDTR;
	/* 0x90 */
	uint32_t S5PAR;
	uint32_t S5M0AR;
	uint32_t S5M1AR;
	uint32_t S5FCR;
	/* 0xA0 */
	uint32_t S6CR;
	uint32_t S6NDTR;
	uint32_t S6PAR;
	uint32_t S6M0AR;
	/* 0xB0 */
	uint32_t S6M1AR;
	uint32_t S6FCR;
	uint32_t S7CR;
	uint32_t S7NDTR;
	/* 0xC0 */
	uint32_t S7PAR;
	uint32_t S7M0AR;
	uint32_t S7M1AR;
	uint32_t S7FCR;
} __packed DMA1, DMA2;



/*
 * Peripheral name:	Flash interface register
 * Boundary:		0x4002 3C00 - 0x4002 3FFF
 */

extern volatile struct {
	uint32_t ACR;
	uint32_t KEYR;
	uint32_t OPTKEYR;
	uint32_t SR;
	/* 0x10 */
	uint32_t CR;
	uint32_t OPTCR;
} __packed FLASH;



/*
 * Peripheral name:	RCC
 * Boundary:		0x4002 3800 - 0x4002 3BFF
 */

extern volatile struct {
	uint32_t CR;
	uint32_t PLLCFGR;
	uint32_t CFGR;
	uint32_t CIR;
	/* 0x10 */
	uint32_t AHB1RSTR;
	uint32_t AHB2RSTR;
	uint32_t AHB3RSTR;
	uint32_t _dummy_0;
	/* 0x20 */
	uint32_t APB1RSTR;
	uint32_t APB2RSTR;
	uint32_t _dummy_1;
	uint32_t _dummy_2;
	/* 0x30 */
	uint32_t AHB1ENR;
	uint32_t AHB2ENR;
	uint32_t AHB3ENR;
	uint32_t _dummy_3;
	/* 0x40 */
	uint32_t APB1ENR;
	uint32_t APB2ENR;
	uint32_t _dummy_4;
	uint32_t _dummy_5;
	/* 0x50 */
	uint32_t AHB1LPENR;
	uint32_t AHB2LPENR;
	uint32_t AHB3LPENR;
	uint32_t _dummy_6;
	/* 0x60 */
	uint32_t APB1LPENR;
	uint32_t APB2LPENR;
	uint32_t _dummy_7;
	uint32_t _dummy_8;
	/* 0x70 */
	uint32_t BDCR;
	uint32_t CSR;
	uint32_t _dummy_9;
	uint32_t _dummy_10;
	/* 0x80 */
	uint32_t SSCGR;
	uint32_t PLLI2SCFGR;
} __packed RCC;



/*
 * Peripheral name:	CRC
 * Boundary:		0x4002 3000 - 0x4002 33FF
 */

extern volatile struct {
	uint32_t DR;
	uint32_t IDR;
	uint32_t CR;
} __packed CRC;



/*
 * Peripheral name:	GPIOI
 * Boundary:		0x4002 2000 - 0x4002 23FF
 * 
 * Peripheral name:	GPIOH
 * Boundary:		0x4002 1C00 - 0x4002 1FFF
 * 
 * Peripheral name:	GPIOG
 * Boundary:		0x4002 1800 - 0x4002 1BFF
 * 
 * Peripheral name:	GPIOF
 * Boundary:		0x4002 1400 - 0x4002 17FF
 * 
 * Peripheral name:	GPIOE
 * Boundary:		0x4002 1000 - 0x4002 13FF
 * 
 * Peripheral name:	GPIOD
 * Boundary:		0x4002 0C00 - 0x4002 0FFF
 * 
 * Peripheral name:	GPIOC
 * Boundary:		0x4002 0800 - 0x4002 0BFF
 * 
 * Peripheral name:	GPIOB
 * Boundary:		0x4002 0400 - 0x4002 07FF
 * 
 * Peripheral name:	GPIOA
 * Boundary:		0x4002 0000 - 0x4002 03FF
 */

extern volatile struct {
	uint32_t MODER;
	uint32_t OTYPER;
	uint32_t OSPEEDER;
	uint32_t PUPDR;
	/* 0x10 */
	uint32_t IDR;
	uint32_t ODR;
	uint32_t BSRR;
	uint32_t LCKR;
	/* 0x20 */
	uint32_t AFRL;
	uint32_t AFRH;
} __packed GPIOA, GPIOB, GPIOC, GPIOD, GPIOE, GPIOF, GPIOG, GPIOH, GPIOI;

extern volatile struct {
	uint32_t CR1;
	uint32_t CR2;
	uint32_t SR;
	uint32_t DR;
	/* 0x10 */
	uint32_t CRCPR;
	uint32_t RXCRCR;
	uint32_t TXCRCR;
	uint32_t I2SCFGR;
	/* 0x20 */
	uint32_t I2SPR;
} __packed SPI1, SPI2, SPI3, SPI4, SPI5, SPI6;

extern volatile struct {
	uint32_t POWER;
	uint32_t CLKCR;
	uint32_t ARG;
	uint32_t CMD;
	/* 0x10 */
	uint32_t RESPCMD;
	uint32_t RESP1;
	uint32_t RESP2;
	uint32_t RESP3;
	/* 0x20 */
	uint32_t RESP4;
	uint32_t DTIMER;
	uint32_t DLEN;
	uint32_t DCTRL;
	/* 0x30 */
	uint32_t DCOUNT;
	uint32_t STA;
	uint32_t ICR;
	uint32_t MASK;
	/* 0x40 */
	uint32_t _dummy_0[2];
	uint32_t FIFOCNT;
	/* 0x4C */
	uint32_t _dummy_1[13];
	/* 0x80 */
	uint32_t FIFO;
} __packed SDIO;

extern volatile struct {
	uint32_t IMR;
	uint32_t EMR;
	uint32_t RTSR;
	uint32_t FTSR;
	/* 0x10 */
	uint32_t SWIER;
	uint32_t PR;
} __packed EXTI;

extern volatile struct {
	uint32_t MEMRM;
	uint32_t PMC;
	uint32_t EXTICR1;
	uint32_t EXTICR2;
	/* 0x10 */
	uint32_t EXTICR3;
	uint32_t EXTICR4;
	uint32_t _dummy_0[2];
	/* 0x20 */
	uint32_t CMPCR;
} __packed SYSCFG;

/* Timers */

extern volatile struct {
	uint32_t CR1;
	uint32_t CR2;
	uint32_t SMCR;
	uint32_t DIER;
	/* 0x10 */
	uint32_t SR;
	uint32_t EGR;
	uint32_t CCMR1;
	uint32_t CCMR2;
	/* 0x20 */
	uint32_t CCER;
	uint32_t CNT;
	uint32_t PSC;
	uint32_t ARR;
	/* 0x30 */
	uint32_t RCR;
	uint32_t CCR1;
	uint32_t CCR2;
	uint32_t CCR3;
	/* 0x40 */
	uint32_t CCR4;
	uint32_t BDTR;
	uint32_t DCR;
	uint32_t DMAR;
} __packed TIM1, TIM8;

extern volatile struct {
	uint32_t CR1;
	uint32_t CR2;
	uint32_t SMCR;
	uint32_t DIER;
	/* 0x10 */
	uint32_t SR;
	uint32_t EGR;
	uint32_t CCMR1;
	uint32_t CCMR2;
	/* 0x20 */
	uint32_t CCER;
	uint32_t CNT;
	uint32_t PSC;
	uint32_t ARR;
	/* 0x30 */
	uint32_t _dummy_0;
	uint32_t CCR1;
	uint32_t CCR2;
	uint32_t CCR3;
	/* 0x40 */
	uint32_t CCR4;
	uint32_t _dummy_1;
	uint32_t DCR;
	uint32_t DMAR;
	/* 0x50 */
	uint32_t OR; /* only TIM2 and TIM5 */
} __packed TIM2, TIM3, TIM4, TIM5;

extern volatile struct {
	uint32_t CR1;
	uint32_t CR2;
	uint32_t SMCR;
	uint32_t DIER;
	/* 0x10 */
	uint32_t SR;
	uint32_t EGR;
	uint32_t CCMR1;
	uint32_t _dummy_0;
	/* 0x20 */
	uint32_t CCER;
	uint32_t CNT;
	uint32_t PSC;
	uint32_t ARR;
	/* 0x30 */
	uint32_t _dummy_1;
	uint32_t CCR1;
	uint32_t CCR2;
	/* 0x3C */
	uint32_t _dummy_2[5];
	/* 0x50 */
} __packed TIM9, TIM12;

extern volatile struct {
	uint32_t CR1;
	uint32_t _dummy_0;
	uint32_t SMCR;
	uint32_t DIER;
	/* 0x10 */
	uint32_t SR;
	uint32_t EGR;
	uint32_t CCMR1;
	uint32_t _dummy_1;
	/* 0x20 */
	uint32_t CCER;
	uint32_t CNT;
	uint32_t PSC;
	uint32_t ARR;
	/* 0x30 */
	uint32_t _dummy_2;
	uint32_t CCR1;
	uint32_t _dummy_3[6];
	/* 0x50 */
	uint32_t OR;
} __packed TIM10, TIM11, TIM13, TIM14;

extern volatile struct {
	uint32_t CR1;
	uint32_t CR2;
	uint32_t _dummy_0;
	uint32_t DIER;
	/* 0x10 */
	uint32_t SR;
	uint32_t EGR;
	uint32_t _dummy_1;
	uint32_t _dummy_2;
	/* 0x20 */
	uint32_t _dummy_3;
	uint32_t CNT;
	uint32_t PSC;
	uint32_t ARR;
} __packed TIM6, TIM7;

/* ADC */

extern volatile struct {
	uint32_t SR;
	uint32_t CR1;
	uint32_t CR2;
	uint32_t SMPR1;
	/* 0x10 */
	uint32_t SMPR2;
	uint32_t JOFR1;
	uint32_t JOFR2;
	uint32_t JOFR3;
	/* 0x20 */
	uint32_t JOFR4;
	uint32_t HTR;
	uint32_t LTR;
	uint32_t SQR1;
	/* 0x30 */
	uint32_t SQR2;
	uint32_t SQR3;
	uint32_t JSQR;
	uint32_t JDR1;
	/* 0x40 */
	uint32_t JDR2;
	uint32_t JDR3;
	uint32_t JDR4;
	uint32_t DR;
} __packed ADC1, ADC2, ADC3;

extern volatile struct {
	uint32_t CSR;
	uint32_t CCR;
	uint32_t CDR;
} __packed ADC;

/* USART */

extern volatile struct {
	uint32_t SR;
	uint32_t DR;
	uint32_t BRR;
	uint32_t CR1;
	/* 0x10 */
	uint32_t CR2;
	uint32_t CR3;
	uint32_t GTPR;
} __packed USART1, USART2, USART3, UART4, UART5, USART6, UART7, UART8;


/* I2C */

extern volatile struct {
	uint32_t CR1;
	uint32_t CR2;
	uint32_t OAR1;
	uint32_t OAR2;
	/* 0x10 */
	uint32_t DR;
	uint32_t SR1;
	uint32_t SR2;
	uint32_t CCR;
	/* 0x20 */
	uint32_t TRISE;
	uint32_t FLTR;
} __packed I2C1, I2C2, I2C3;

/* RTC */

extern volatile struct {
	uint32_t TR;
	uint32_t DR;
	uint32_t CR;
	uint32_t ISR;
	/* 0x10 */
	uint32_t PRER;
	uint32_t WUTR;
	uint32_t CALIBR;
	uint32_t ALRMAR;
	/* 0x20 */
	uint32_t ALRMBR;
	uint32_t WPR;
	uint32_t SSR;
	uint32_t SHIFTR;
	/* 0x30 */
	uint32_t TSTR;
	uint32_t _dummy_0;
	uint32_t TSSSR;
	uint32_t CALR;
	/* 0x40 */
	uint32_t TAFCR;
	uint32_t ALRMASSR;
	uint32_t ALRMBSSR;
	uint32_t _dummy_1;
	/* 0x50 */
	union {
		struct {
			uint32_t BKP0R;
			uint32_t BKP1R;
			uint32_t BKP2R;
			uint32_t BKP3R;
			/* 0x60 */
			uint32_t BKP4R;
			uint32_t BKP5R;
			uint32_t BKP6R;
			uint32_t BKP7R;
			/* 0x70 */
			uint32_t BKP8R;
			uint32_t BKP9R;
			uint32_t BKP10R;
			uint32_t BKP11R;
			/* 0x80 */
			uint32_t BKP12R;
			uint32_t BKP13R;
			uint32_t BKP14R;
			uint32_t BKP15R;
			/* 0x90 */
			uint32_t BKP16R;
			uint32_t BKP17R;
			uint32_t BKP18R;
			uint32_t BKP19R;
		};
		uint32_t BKP[20];
	};
} __packed RTC;

/* DAC */

extern volatile struct {
	uint32_t CR;
	uint32_t SWTRIGR;
	uint32_t DHR12R1;
	uint32_t DHR12L1;
	/* 0x10 */
	uint32_t DHR8R1;
	uint32_t DHR12R2;
	uint32_t DHR12L2;
	uint32_t DHR8R2;
	/* 0x20 */
	uint32_t DHR12RD;
	uint32_t DHR12LD;
	uint32_t DHR8RD;
	uint32_t DOR1;
	/* 0x30 */
	uint32_t DOR2;
	uint32_t SR;
} __packed DAC;

extern volatile struct {
	uint32_t CR;
	uint32_t CSR;
} __packed PWR;

extern volatile struct {
	uint32_t KR;
	uint32_t PR;
	uint32_t RLR;
	uint32_t SR;
} __packed IWDG;

extern volatile struct {
	uint32_t CR;
	uint32_t CFR;
	uint32_t SR;
} __packed WWDG;

extern volatile struct {
	uint32_t MCR;
	uint32_t MSR;
	uint32_t TSR;
	uint32_t RF0R;
	/* 0x10 */
	uint32_t RF1R;
	uint32_t IER;
	uint32_t ESR;
	uint32_t BTR;
	/* 0x20 */
	uint32_t _dummy_0[88];
	/* 0x180 */
	uint32_t TI0R;
	uint32_t TDT0R;
	uint32_t TDL0R;
	uint32_t TDH0R;
	/* 0x190 */
	uint32_t TI1R;
	uint32_t TDT1R;
	uint32_t TDL1R;
	uint32_t TDH1R;
	/* 0x1A0 */
	uint32_t TI2R;
	uint32_t TDT2R;
	uint32_t TDL2R;
	uint32_t TDH2R;
	/* 0x1B0 */
	uint32_t RI0R;
	uint32_t RDT0R;
	uint32_t RDL0R;
	uint32_t RDH0R;
	/* 0x1C0 */
	uint32_t RI1R;
	uint32_t RDT1R;
	uint32_t RDL1R;
	uint32_t RDH1R;
	/* 0x1D0 */
	uint32_t _dummy_1[12];
	/* 0x200 */
	uint32_t FMR;
	uint32_t FM1R;
	uint32_t _dummy_2;
	uint32_t FS1R;
	/* 0x210 */
	uint32_t _dummy_3;
	uint32_t FFA1R;
	uint32_t _dummy_4;
	uint32_t FA1R;
	/* 0x220 */
	uint32_t _dummy_5[8];
	union {
		struct {
			/* 0x240 */
			uint32_t F0R1;
			uint32_t F0R2;
			uint32_t F1R1;
			uint32_t F1R2;
			/* 0x250 */
			uint32_t F2R1;
			uint32_t F2R2;
			uint32_t F3R1;
			uint32_t F3R2;
			/* 0x260 */
			uint32_t F4R1;
			uint32_t F4R2;
			uint32_t F5R1;
			uint32_t F5R2;
			/* 0x270 */
			uint32_t F6R1;
			uint32_t F6R2;
			uint32_t F7R1;
			uint32_t F7R2;
			/* 0x280 */
			uint32_t F8R1;
			uint32_t F8R2;
			uint32_t F9R1;
			uint32_t F9R2;
			/* 0x290 */
			uint32_t F10R1;
			uint32_t F10R2;
			uint32_t F11R1;
			uint32_t F11R2;
			/* 0x2A0 */
			uint32_t F12R1;
			uint32_t F12R2;
			uint32_t F13R1;
			uint32_t F13R2;
			/* 0x2B0 */
			uint32_t F14R1;
			uint32_t F14R2;
			uint32_t F15R1;
			uint32_t F15R2;
			/* 0x2C0 */
			uint32_t F16R1;
			uint32_t F16R2;
			uint32_t F17R1;
			uint32_t F17R2;
			/* 0x2D0 */
			uint32_t F18R1;
			uint32_t F18R2;
			uint32_t F19R1;
			uint32_t F19R2;
			/* 0x2E0 */
			uint32_t F20R1;
			uint32_t F20R2;
			uint32_t F21R1;
			uint32_t F21R2;
			/* 0x2F0 */
			uint32_t F22R1;
			uint32_t F22R2;
			uint32_t F23R1;
			uint32_t F23R2;
			/* 0x300 */
			uint32_t F24R1;
			uint32_t F24R2;
			uint32_t F25R1;
			uint32_t F25R2;
			/* 0x310 */
			uint32_t F26R1;
			uint32_t F26R2;
			uint32_t F27R1;
			uint32_t F27R2;
		};
		/* 0x240 */
		struct {
			uint32_t R1;
			uint32_t R2;
		} F[28];
		/* 0x320 */
	};
} __packed CAN1, CAN2;


