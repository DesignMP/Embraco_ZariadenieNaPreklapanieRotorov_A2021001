#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Temp/Objects/Config1/AB1_PLC/OvladanieV/Mainst.h"
#line 1 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/HMI/OvladanieVizu/Main.nodebug"
#line 2 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/HMI/OvladanieVizu/Main.st"
void __BUR__ENTRY_INIT_FUNCT__(void){{
(CasZobrazeniaUvodnejObrazovky.IN=1);

}}
#line 5 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/HMI/OvladanieVizu/Main.nodebug"
#line 7 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/HMI/OvladanieVizu/Main.st"
void _CYCLIC __BUR__ENTRY_CYCLIC_FUNCT__(void){{


if((CasZobrazeniaUvodnejObrazovky.Q^1)){
(Vizu.CisloZadanejObrazovky=0);
if(((((unsigned long)(unsigned char)Blikac500ms==(unsigned long)(unsigned char)1))&~Edge0000100000&1?((Edge0000100000=(((unsigned long)(unsigned char)Blikac500ms==(unsigned long)(unsigned char)1))&1),1):((Edge0000100000=(((unsigned long)(unsigned char)Blikac500ms==(unsigned long)(unsigned char)1))&1),0))){
if((((unsigned long)(unsigned char)Vizu.Slider<(unsigned long)(unsigned char)30))){
(Vizu.Slider=(Vizu.Slider+1));
}else{
(Vizu.Slider=0);
}
}
}

(CasZobrazeniaUvodnejObrazovky.PT=20000);
TON(&CasZobrazeniaUvodnejObrazovky);



if((Zariadenie.IN.Safety_SpatnaVazba_KF1&(Zariadenie.IN.Safety_Aktivne_KF1^1))){
(Vizu.PodsvietenieTlacitka_ResetCS=Blikac500ms);
}else if(Zariadenie.IN.Safety_Aktivne_KF1){
(Vizu.PodsvietenieTlacitka_ResetCS=2);
}else{
(Vizu.PodsvietenieTlacitka_ResetCS=3);
}


if(NastalaPorucha){
(Vizu.FarbaTlacitkaAlarm_Index=Blikac500ms);
}else{
(Vizu.FarbaTlacitkaAlarm_Index=0);
}


if(((((unsigned long)(unsigned char)CasZobrazeniaUvodnejObrazovky.Q==(unsigned long)(unsigned char)1))&~Edge0000100001&1?((Edge0000100001=(((unsigned long)(unsigned char)CasZobrazeniaUvodnejObrazovky.Q==(unsigned long)(unsigned char)1))&1),1):((Edge0000100001=(((unsigned long)(unsigned char)CasZobrazeniaUvodnejObrazovky.Q==(unsigned long)(unsigned char)1))&1),0))){
(Vizu.CisloZadanejObrazovky=2);
}



if(Zariadenie.STAV.Automat){
(Vizu.TL_RezimManual_DISABLE=1);
}else{
(Vizu.TL_RezimManual_DISABLE=0);
}



if((Zariadenie.IN.Safety_Aktivne_KF1^1)){
(Vizu.TL_StartAutomat_DISABLE=1);
}else if(NastalaPorucha){
(Vizu.TL_StartAutomat_DISABLE=1);
}else if((Zariadenie.STAV.READY_TO_START^1)){
(Vizu.TL_StartAutomat_DISABLE=1);
}else{
(Vizu.TL_StartAutomat_DISABLE=0);
}


if(Zariadenie.STAV.PoINIT){
(Vizu.TL_UkoncenieCyklu_DISABLE=0);
}else{
(Vizu.TL_UkoncenieCyklu_DISABLE=1);
}


if((Zariadenie.STAV.PoINIT&(Zariadenie.STAV.UkoncenieCyklu_BUSY^1))){
(Vizu.TL_Reset_DISABLE=1);
}else{
(Vizu.TL_Reset_DISABLE=0);
}



if((Zariadenie.IN.Safety_Aktivne_KF1^1)){
(Vizu.TL_RR_PreklapacDotlacace_DISABLE=1);
}else if(NastalaPorucha){
(Vizu.TL_RR_PreklapacDotlacace_DISABLE=1);
}else{
(Vizu.TL_RR_PreklapacDotlacace_DISABLE=0);
}


if((Zariadenie.IN.Safety_Aktivne_KF1^1)){
(Vizu.TL_RR_PreklapacZdvih_DISABLE=1);
}else if(NastalaPorucha){
(Vizu.TL_RR_PreklapacZdvih_DISABLE=1);
}else if((Preklapac.IN.VstupnyDotlacac_ZASUNUTY_MS2^1)){
(Vizu.TL_RR_PreklapacZdvih_DISABLE=1);
}else if((Preklapac.IN.VystupnyDotlacac_ZASUNUTY_MS4^1)){
(Vizu.TL_RR_PreklapacZdvih_DISABLE=1);
}else{
(Vizu.TL_RR_PreklapacZdvih_DISABLE=0);
}






}imp1_end11_0:;}
#line 108 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/HMI/OvladanieVizu/Main.nodebug"
#line 110 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/HMI/OvladanieVizu/Main.st"
void _EXIT __BUR__ENTRY_EXIT_FUNCT__(void){{


}}
#line 113 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/HMI/OvladanieVizu/Main.nodebug"

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
__asm__(".ascii \"iecfile \\\"Logical/HMI/OvladanieVizu/Types.typ\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/HMI/OvladanieVizu/Variables.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Temp/Objects/Config1/AB1_PLC/OvladanieV/Main.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Temp/Objects/Config1/AB1_PLC/OvladanieV/Main.st.c\\\" \\\"D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/HMI/OvladanieVizu/Main.st\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Temp/Objects/Config1/AB1_PLC/OvladanieV/Main.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".previous");
