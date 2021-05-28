#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Temp/Objects/Config1/AB1_PLC/Main/Mainst.h"
#line 1 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Program/Main/Main.nodebug"
#line 2 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Program/Main/Main.st"
void __BUR__ENTRY_INIT_FUNCT__(void){{

}}
#line 4 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Program/Main/Main.nodebug"
#line 6 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Program/Main/Main.st"
void _CYCLIC __BUR__ENTRY_CYCLIC_FUNCT__(void){{





if((Hardware.KartaAB2_CANSlave_OK&Hardware.KartaAB3_16DI_OK&Hardware.KartaAB4_16DO_OK)){
(Zariadenie.STAV.Hardware_OK=1);
}else{
(Zariadenie.STAV.Hardware_OK=0);
}




if(Zariadenie.STAV.Automat){
(Zariadenie.OUT.Majak_ZeleneSvetlo=1);
}else if(Zariadenie.STAV.Manual){
(Zariadenie.OUT.Majak_ZeleneSvetlo=Blikac500ms);
}else{
(Zariadenie.OUT.Majak_ZeleneSvetlo=0);
}


if((Zariadenie.STAV.Automat&(Zariadenie.STAV.PoINIT^1))){
(Zariadenie.OUT.Majak_ZlteSvetlo=Blikac500ms);
}else{
(Zariadenie.OUT.Majak_ZlteSvetlo=0);
}


if(NastalaPorucha){
(Zariadenie.OUT.Majak_CerveneSvetlo=1);
}else if((Zariadenie.IN.Safety_Aktivne^1)){
(Zariadenie.OUT.Majak_CerveneSvetlo=1);
}else{
(Zariadenie.OUT.Majak_CerveneSvetlo=0);
}


if((NastalaPorucha&~Edge0000100000&1?((Edge0000100000=NastalaPorucha&1),1):((Edge0000100000=NastalaPorucha&1),0))){
(Zariadenie.Majak_HukackaON=1);
}

if(Zariadenie.Majak_HukackaON){
(Zariadenie.OUT.Majak_Hukacka=Blikac500ms);
}else{
(Zariadenie.OUT.Majak_Hukacka=0);
}



if(Zariadenie.KoniecCyklu){
(Zariadenie.STAV.UkoncenieCyklu_BUSY=1);
if(Preklapac.Automat){
(Preklapac.KoniecCyklu=1);
}
(Zariadenie.KoniecCyklu=0);
}

if((Zariadenie.STAV.Automat^1)){
(Zariadenie.STAV.UkoncenieCyklu_BUSY=0);
}




if(Zariadenie.Reset){
(Preklapac.Reset=1);
(Zariadenie.Reset=0);
}



if(Vizu.TL_RezimAutomat){
if(Zariadenie.STAV.Manual){
(Zariadenie.Reset=1);
}
(Vizu.TL_RezimAutomat=0);
}



if(Zariadenie.Manual){
(Preklapac.Manual=1);
(Zariadenie.Manual=0);
}



if(Preklapac.Manual){
(Zariadenie.STAV.Manual=1);
}else{
(Zariadenie.STAV.Manual=0);
}



if(Zariadenie.Automat){
if(Zariadenie.STAV.Hardware_OK){
(Preklapac.Automat=1);
}
(Zariadenie.Automat=0);
}



if(Preklapac.Automat){
(Zariadenie.STAV.Automat=1);
}else{
(Zariadenie.STAV.Automat=0);
}


if(Preklapac.STAV.PoINIT){
(Zariadenie.STAV.PoINIT=1);
}else{
(Zariadenie.STAV.PoINIT=0);
}


if((((unsigned long)(unsigned short)SC_Preklapac.Step==(unsigned long)(unsigned short)1))){
(Zariadenie.STAV.READY_TO_START=1);
}else{
(Zariadenie.STAV.READY_TO_START=0);
}





}imp1_end18_0:;}
#line 137 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Program/Main/Main.nodebug"
#line 139 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Program/Main/Main.st"
void _EXIT __BUR__ENTRY_EXIT_FUNCT__(void){{


}}
#line 142 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Program/Main/Main.nodebug"

void __AS__ImplInitMain_st(void){__BUR__ENTRY_INIT_FUNCT__();}

__asm__(".section \".plc\"");
__asm__(".ascii \"iecfile \\\"Logical/Global.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/DatumCasPLC/DatumCasGlobal.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Runtime/runtime.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/astime/astime.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsBrStr/AsBrStr.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/FileIO/FileIO.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/sys_lib/sys_lib.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/SC/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Runtime/runtime.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Operator/operator.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIecCon/AsIecCon.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/astime/astime.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsBrStr/AsBrStr.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/FileIO/FileIO.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/sys_lib/sys_lib.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/SC/SC.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/IecCheck/IecCheck.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Global.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/DatumCasPLC/DatumCasGlobal.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Runtime/runtime.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/astime/astime.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsBrStr/AsBrStr.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/FileIO/FileIO.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/sys_lib/sys_lib.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/SC/Constants.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Program/Main/Types.typ\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Program/Main/Variables.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Temp/Objects/Config1/AB1_PLC/Main/Main.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Temp/Objects/Config1/AB1_PLC/Main/Main.st.c\\\" \\\"D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Program/Main/Main.st\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Temp/Objects/Config1/AB1_PLC/Main/Main.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".previous");
