/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1624516614_2_
#define _BUR_1624516614_2_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_GLOBAL struct SequenceControlTyp SC_Preklapac;
_GLOBAL struct Preklapac_typ Preklapac;
_GLOBAL struct Vizu_typ Vizu;
_GLOBAL struct Zariadenie_typ Zariadenie;
_GLOBAL struct HardwareSTAV_typ Hardware;
_GLOBAL plcbit PotvrdenieAlarmov;
_GLOBAL plcbit NastalaPorucha;
_GLOBAL plcbit Alarmy[101];
_GLOBAL struct DTGetTime DTGetTime_0;
_GLOBAL struct DTSetTime DTSetTime_0;
_GLOBAL plcbit Blikac1s;
_GLOBAL plcbit Blikac500ms;
_GLOBAL plcbit Blikac200ms;
_GLOBAL plcbit Blikac100ms;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Global.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/astime/astime.fun\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1624516614_2_ */

