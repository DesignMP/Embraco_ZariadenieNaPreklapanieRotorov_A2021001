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
_BUR_PUBLIC unsigned long brsmemset(unsigned long pDest, unsigned char value, unsigned long length);
_BUR_PUBLIC signed long CheckBounds(signed long index, signed long lower, signed long upper);
_BUR_LOCAL unsigned char a;
_BUR_LOCAL struct TON CasKontroly_KarietPLC;
_BUR_LOCAL struct TON CasKontroly_TlakuVzduchu;
_GLOBAL plcbit Blikac500ms;
_GLOBAL plcbit Alarmy[101];
_GLOBAL plcbit NastalaPorucha;
_GLOBAL plcbit PotvrdenieAlarmov;
_GLOBAL HardwareSTAV_typ Hardware;
_GLOBAL Zariadenie_typ Zariadenie;
_GLOBAL Vizu_typ Vizu;
