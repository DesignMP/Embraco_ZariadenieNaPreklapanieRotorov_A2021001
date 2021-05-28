#ifndef __AS__TYPE_
#define __AS__TYPE_
typedef struct {
	unsigned char bit0  : 1;
	unsigned char bit1  : 1;
	unsigned char bit2  : 1;
	unsigned char bit3  : 1;
	unsigned char bit4  : 1;
	unsigned char bit5  : 1;
	unsigned char bit6  : 1;
	unsigned char bit7  : 1;
} _1byte_bit_field_;

typedef struct {
	unsigned short bit0  : 1;
	unsigned short bit1  : 1;
	unsigned short bit2  : 1;
	unsigned short bit3  : 1;
	unsigned short bit4  : 1;
	unsigned short bit5  : 1;
	unsigned short bit6  : 1;
	unsigned short bit7  : 1;
	unsigned short bit8  : 1;
	unsigned short bit9  : 1;
	unsigned short bit10 : 1;
	unsigned short bit11 : 1;
	unsigned short bit12 : 1;
	unsigned short bit13 : 1;
	unsigned short bit14 : 1;
	unsigned short bit15 : 1;
} _2byte_bit_field_;

typedef struct {
	unsigned long bit0  : 1;
	unsigned long bit1  : 1;
	unsigned long bit2  : 1;
	unsigned long bit3  : 1;
	unsigned long bit4  : 1;
	unsigned long bit5  : 1;
	unsigned long bit6  : 1;
	unsigned long bit7  : 1;
	unsigned long bit8  : 1;
	unsigned long bit9  : 1;
	unsigned long bit10 : 1;
	unsigned long bit11 : 1;
	unsigned long bit12 : 1;
	unsigned long bit13 : 1;
	unsigned long bit14 : 1;
	unsigned long bit15 : 1;
	unsigned long bit16 : 1;
	unsigned long bit17 : 1;
	unsigned long bit18 : 1;
	unsigned long bit19 : 1;
	unsigned long bit20 : 1;
	unsigned long bit21 : 1;
	unsigned long bit22 : 1;
	unsigned long bit23 : 1;
	unsigned long bit24 : 1;
	unsigned long bit25 : 1;
	unsigned long bit26 : 1;
	unsigned long bit27 : 1;
	unsigned long bit28 : 1;
	unsigned long bit29 : 1;
	unsigned long bit30 : 1;
	unsigned long bit31 : 1;
} _4byte_bit_field_;
#endif

#ifndef __AS__TYPE_HardwareSTAV_typ
#define __AS__TYPE_HardwareSTAV_typ
typedef struct HardwareSTAV_typ
{	plcbit KartaAB2_CANSlave_OK;
	plcbit KartaAB3_16DI_OK;
	plcbit KartaAB4_16DO_OK;
} HardwareSTAV_typ;
#endif

#ifndef __AS__TYPE_Vizu_typ
#define __AS__TYPE_Vizu_typ
typedef struct Vizu_typ
{	unsigned char CisloAktualnejObrazovky;
	unsigned char CisloZadanejObrazovky;
	plcbit TL_RezimAutomat;
	unsigned char StavZariadenia_Farba;
	unsigned char StavZariadenia_Index;
	plcbit TL_RezimManual_DISABLE;
	plcbit TL_StartAutomat_DISABLE;
	plcbit TL_UkoncenieCyklu_DISABLE;
	plcbit TL_Reset_DISABLE;
	plcbit TL_RR_PreklapacDotlacace_DISABLE;
	plcbit TL_RR_PreklapacZdvih_DISABLE;
	unsigned char Slider;
	plcbit FarbaTlacitkaAlarm_Index;
	plcbit ZobrazSymbolAlarmu;
	unsigned char ZobrazHlasenie_ResetZariadenia;
	unsigned char PodsvietenieTlacitka_ResetCS;
} Vizu_typ;
#endif

#ifndef __AS__TYPE_ZariadenieIN_typ
#define __AS__TYPE_ZariadenieIN_typ
typedef struct ZariadenieIN_typ
{	plcbit TlakVzduchu_OK_S1;
	plcbit Safety_SpatnaVazba_KF1;
	plcbit Safety_ReleCakaNaReset_KF1;
	plcbit Safety_SpatnaVazba_Ventil_YVS1;
	plcbit Safety_SpatnaVazba_Ventil_YVS2;
	plcbit Safety_Aktivne;
} ZariadenieIN_typ;
#endif

#ifndef __AS__TYPE_ZariadenieOUT_typ
#define __AS__TYPE_ZariadenieOUT_typ
typedef struct ZariadenieOUT_typ
{	plcbit Majak_ZeleneSvetlo;
	plcbit Majak_ZlteSvetlo;
	plcbit Majak_CerveneSvetlo;
	plcbit Majak_Hukacka;
	plcbit Safety_RESET;
} ZariadenieOUT_typ;
#endif

#ifndef __AS__TYPE_ZariadeniePAR_typ
#define __AS__TYPE_ZariadeniePAR_typ
typedef struct ZariadeniePAR_typ
{	unsigned char PAR_0;
} ZariadeniePAR_typ;
#endif

#ifndef __AS__TYPE_ZariadenieSTAV_typ
#define __AS__TYPE_ZariadenieSTAV_typ
typedef struct ZariadenieSTAV_typ
{	plcbit Automat;
	plcbit Manual;
	plcbit PoINIT;
	plcbit READY_TO_START;
	plcbit UkoncenieCyklu_BUSY;
	plcbit Hardware_OK;
} ZariadenieSTAV_typ;
#endif

#ifndef __AS__TYPE_Zariadenie_typ
#define __AS__TYPE_Zariadenie_typ
typedef struct Zariadenie_typ
{	ZariadenieIN_typ IN;
	ZariadenieOUT_typ OUT;
	ZariadeniePAR_typ PAR;
	ZariadenieSTAV_typ STAV;
	plcbit Automat;
	plcbit Manual;
	plcbit Reset;
	plcbit KoniecCyklu;
	plcbit Majak_HukackaON;
} Zariadenie_typ;
#endif

#ifndef __AS__TYPE_PreklapacIN_typ
#define __AS__TYPE_PreklapacIN_typ
typedef struct PreklapacIN_typ
{	plcbit VstupnyDotlacac_VYSUNUTY_MS1;
	plcbit VstupnyDotlacac_ZASUNUTY_MS2;
	plcbit VstupnyDotlacac_PritomRotora_IS1;
	plcbit VystupnyDotlacac_VYSUNUTY_MS3;
	plcbit VystupnyDotlacac_ZASUNUTY_MS4;
	plcbit Vytah_HornaPoloha_MS5;
	plcbit Vytah_SpodnaPoloha_MS6;
	plcbit Vytah_Pozicia1_PritomRotora_OS1;
	plcbit Vytah_Pozicia2_PritomRotora_OS2;
	plcbit VystupnyDopravnik_PLNY_OS3;
} PreklapacIN_typ;
#endif

#ifndef __AS__TYPE_PreklapacOUT_typ
#define __AS__TYPE_PreklapacOUT_typ
typedef struct PreklapacOUT_typ
{	plcbit VstupnyDotlacac_VYSUN_YV1;
	plcbit VstupnyDotlacac_ZASUN_YV2;
	plcbit VystupnyDotlacac_VYSUN_YV3;
	plcbit Vytah_ZDVIH_YV5;
	plcbit Vytah_ZOSTUP_YV6;
} PreklapacOUT_typ;
#endif

#ifndef __AS__TYPE_PreklapacPAR_typ
#define __AS__TYPE_PreklapacPAR_typ
typedef struct PreklapacPAR_typ
{	unsigned char PAR_0;
} PreklapacPAR_typ;
#endif

#ifndef __AS__TYPE_PreklapacSTAV_typ
#define __AS__TYPE_PreklapacSTAV_typ
typedef struct PreklapacSTAV_typ
{	plcbit PoINIT;
} PreklapacSTAV_typ;
#endif

#ifndef __AS__TYPE_Preklapac_typ
#define __AS__TYPE_Preklapac_typ
typedef struct Preklapac_typ
{	PreklapacIN_typ IN;
	PreklapacOUT_typ OUT;
	PreklapacPAR_typ PAR;
	PreklapacSTAV_typ STAV;
	plcbit Automat;
	plcbit Manual;
	plcbit Reset;
	plcbit KoniecCyklu;
} Preklapac_typ;
#endif

struct TON
{	plctime PT;
	plctime ET;
	plctime StartTime;
	unsigned long Restart;
	plcbit IN;
	plcbit Q;
	plcbit M;
};
_BUR_PUBLIC void TON(struct TON* inst);
#ifndef __AS__TYPE_SequenceControlTyp
#define __AS__TYPE_SequenceControlTyp
typedef struct SequenceControlTyp
{	plcstring StepName[201];
	unsigned short Step;
	plcbit Switch1;
	plcbit Switch2;
	plcbit Switch3;
	plcbit ResetStep;
	plcbit LastStep;
	struct TON IdleTime;
	struct TON AlarmTime;
} SequenceControlTyp;
#endif

_GLOBAL plcbit Blikac500ms;
_GLOBAL plcbit NastalaPorucha;
_GLOBAL HardwareSTAV_typ Hardware;
_GLOBAL Zariadenie_typ Zariadenie;
_GLOBAL Vizu_typ Vizu;
_GLOBAL Preklapac_typ Preklapac;
_GLOBAL SequenceControlTyp SC_Preklapac;
_LOCAL plcbit Edge0000100000;
