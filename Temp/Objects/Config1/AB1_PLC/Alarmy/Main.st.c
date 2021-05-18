#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Temp/Objects/Config1/AB1_PLC/Alarmy/Mainst.h"
#line 1 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Program/Alarmy/Main.nodebug"
#line 2 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Program/Alarmy/Main.st"
void __BUR__ENTRY_INIT_FUNCT__(void){{


}}
#line 5 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Program/Alarmy/Main.nodebug"
#line 7 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Program/Alarmy/Main.st"
void _CYCLIC __BUR__ENTRY_CYCLIC_FUNCT__(void){{

















for((a=0);a<=100;a+=1){
*((char volatile*)&(Alarmy)) = *((char*)&(Alarmy));
if((((unsigned long)(unsigned char)Alarmy[CheckBounds(a,0,100)]==(unsigned long)(unsigned char)1))){
(NastalaPorucha=1);
}
}imp1_endfor0_0:;



if(NastalaPorucha){
(Vizu.ZobrazSymbolAlarmu=Blikac500ms);
}else{
(Vizu.ZobrazSymbolAlarmu=0);
}



if(PotvrdenieAlarmov){
brsmemset(((unsigned long)(&Alarmy)),0,101);
(NastalaPorucha=0);
(Zariadenie.Majak_HukackaON=0);
(PotvrdenieAlarmov=0);
}


(CasKontroly_TlakuVzduchu.IN=(Zariadenie.IN.Safety_Aktivne_KF1&(Zariadenie.IN.TlakVzduchu_OK_S1^1)));

if(CasKontroly_TlakuVzduchu.Q){
(Alarmy[CheckBounds(0,0,100)]=1);
}

(CasKontroly_TlakuVzduchu.PT=2000);
TON(&CasKontroly_TlakuVzduchu);


(CasKontroly_KarietPLC.IN=(Zariadenie.IN.Safety_Aktivne_KF1&(Zariadenie.STAV.Hardware_OK^1)));


if(CasKontroly_KarietPLC.Q){
if((Hardware.KartaAB2_CANSlave_OK^1)){
(Alarmy[CheckBounds(1,0,100)]=1);
}
if((Hardware.KartaAB3_16DI_OK^1)){
(Alarmy[CheckBounds(2,0,100)]=1);
}
if((Hardware.KartaAB4_16DO_OK^1)){
(Alarmy[CheckBounds(3,0,100)]=1);
}
}


(CasKontroly_KarietPLC.PT=2000);
TON(&CasKontroly_KarietPLC);



if(((((unsigned long)(unsigned char)Zariadenie.IN.Safety_Aktivne_KF1==(unsigned long)(unsigned char)0))&~Edge0000100000&1?((Edge0000100000=(((unsigned long)(unsigned char)Zariadenie.IN.Safety_Aktivne_KF1==(unsigned long)(unsigned char)0))&1),1):((Edge0000100000=(((unsigned long)(unsigned char)Zariadenie.IN.Safety_Aktivne_KF1==(unsigned long)(unsigned char)0))&1),0))){
(Alarmy[CheckBounds(4,0,100)]=1);
}


}imp1_else9_0:imp1_end9_0:;}
#line 86 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Program/Alarmy/Main.nodebug"
#line 88 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Program/Alarmy/Main.st"
void _EXIT __BUR__ENTRY_EXIT_FUNCT__(void){{


}}
#line 91 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Program/Alarmy/Main.nodebug"

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
__asm__(".ascii \"iecfile \\\"Logical/Program/Alarmy/Types.typ\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Program/Alarmy/Variables.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Temp/Objects/Config1/AB1_PLC/Alarmy/Main.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Temp/Objects/Config1/AB1_PLC/Alarmy/Main.st.c\\\" \\\"D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Program/Alarmy/Main.st\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Temp/Objects/Config1/AB1_PLC/Alarmy/Main.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".previous");

__asm__(".section \".plciec\"");
__asm__(".ascii \"plcdata_const 'Alarmy'\\n\"");
__asm__(".previous");
