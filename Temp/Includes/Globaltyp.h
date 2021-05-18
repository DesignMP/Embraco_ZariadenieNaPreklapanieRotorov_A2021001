/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1621341735_1_
#define _BUR_1621341735_1_

#include <bur/plctypes.h>

/* Datatypes and datatypes of function blocks */
typedef struct HardwareSTAV_typ
{	plcbit KartaAB2_CANSlave_OK;
	plcbit KartaAB3_16DI_OK;
	plcbit KartaAB4_16DO_OK;
} HardwareSTAV_typ;

typedef struct Vizu_typ
{	unsigned char CisloAktualnejObrazovky;
	unsigned char CisloZadanejObrazovky;
	plcbit TL_RezimAutomat;
	unsigned char StavZariadenia_Farba;
	unsigned char StavZariadenia_Index;
	plcbit TL_RezimManual_DISABLE;
	plcbit TL_StartAutomat_DISABLE;
	plcbit TL_UkoncenieCyklu_DISABLE;
	unsigned char Slider;
	plcbit FarbaTlacitkaAlarm_Index;
	plcbit ZobrazSymbolAlarmu;
	unsigned char ZobrazHlasenie_ResetZariadenia;
	unsigned char PodsvietenieTlacitka_ResetCS;
} Vizu_typ;

typedef struct ZariadenieIN_typ
{	plcbit TlakVzduchu_OK_S1;
	plcbit Safety_SpatnaVazba_KF1;
	plcbit Safety_Aktivne_KF1;
} ZariadenieIN_typ;

typedef struct ZariadenieOUT_typ
{	plcbit Majak_ZeleneSvetlo;
	plcbit Majak_ZlteSvetlo;
	plcbit Majak_CerveneSvetlo;
	plcbit Majak_Hukacka;
	plcbit Safety_RESET;
} ZariadenieOUT_typ;

typedef struct ZariadeniePAR_typ
{	unsigned char PAR_0;
} ZariadeniePAR_typ;

typedef struct ZariadenieSTAV_typ
{	plcbit Automat;
	plcbit Manual;
	plcbit PoINIT;
	plcbit READY_TO_START;
	plcbit UkoncenieCyklu_BUSY;
	plcbit Hardware_OK;
} ZariadenieSTAV_typ;

typedef struct Zariadenie_typ
{	struct ZariadenieIN_typ IN;
	struct ZariadenieOUT_typ OUT;
	struct ZariadeniePAR_typ PAR;
	struct ZariadenieSTAV_typ STAV;
	plcbit Automat;
	plcbit Manual;
	plcbit Reset;
	plcbit KoniecCyklu;
	plcbit Majak_HukackaON;
} Zariadenie_typ;

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

typedef struct PreklapacOUT_typ
{	plcbit VstupnyDotlacac_VYSUN_YV1;
	plcbit VstupnyDotlacac_ZASUN_YV2;
	plcbit VystupnyDotlacac_VYSUN_YV3;
	plcbit VystupnyDotlacac_ZASUN_YV4;
	plcbit Vytah_ZDVIH_YV5;
	plcbit Vytah_ZOSTUP_YV6;
} PreklapacOUT_typ;

typedef struct PreklapacPAR_typ
{	unsigned char PAR_0;
} PreklapacPAR_typ;

typedef struct PreklapacSTAV_typ
{	plcbit PoINIT;
} PreklapacSTAV_typ;

typedef struct Preklapac_typ
{	struct PreklapacIN_typ IN;
	struct PreklapacOUT_typ OUT;
	struct PreklapacPAR_typ PAR;
	struct PreklapacSTAV_typ STAV;
	plcbit Automat;
	plcbit Manual;
	plcbit Reset;
	plcbit KoniecCyklu;
} Preklapac_typ;






__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Global.typ\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1621341735_1_ */

