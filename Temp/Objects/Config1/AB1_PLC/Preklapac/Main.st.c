#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Temp/Objects/Config1/AB1_PLC/Preklapac/Mainst.h"
#line 1 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Program/Preklapac/Main.nodebug"
#line 2 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Program/Preklapac/Main.st"
void __BUR__ENTRY_INIT_FUNCT__(void){{


}}
#line 5 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Program/Preklapac/Main.nodebug"
#line 7 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Program/Preklapac/Main.st"
void _CYCLIC __BUR__ENTRY_CYCLIC_FUNCT__(void){{



SequenceControl(&SC_Preklapac);



__AS__Action__VstupnyDotlacac();
__AS__Action__Zdvih();
__AS__Action__VystupnyDotlacac();


if((Zariadenie.IN.Safety_Aktivne_KF1^1)){
(SC_Preklapac.Step=0);
}else if(NastalaPorucha){
(SC_Preklapac.Step=0);
}else if(Preklapac.Reset){
(SC_Preklapac.Step=0);
}

switch(SC_Preklapac.Step){

case 0:{
{int zzIndex; plcstring* zzLValue=(plcstring*)SC_Preklapac.StepName; plcstring* zzRValue=(plcstring*)"0 - Nulovanie"; for(zzIndex=0; zzIndex<13l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(Preklapac.Automat=0);
(Preklapac.KoniecCyklu=0);
(Preklapac.Manual=0);
(Preklapac.Reset=0);
(Preklapac.STAV.PoINIT=0);
(SC_VstupnyDotlacac.Step=0);
(SC_Zdvih.Step=0);
(SC_VystupnyDotlacac.Step=0);

if((Zariadenie.IN.Safety_Aktivne_KF1&(NastalaPorucha^1))){
(SC_Preklapac.ResetStep=1);
(SC_Preklapac.Step=1);
}

}break;case 1:{
{int zzIndex; plcstring* zzLValue=(plcstring*)SC_Preklapac.StepName; plcstring* zzRValue=(plcstring*)"1 - Cakam na spustenie vyroby"; for(zzIndex=0; zzIndex<29l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
if(Preklapac.Automat){
(SC_Preklapac.Step=2);
}else if(Preklapac.Manual){
(SC_Preklapac.Step=700);
}




}break;case 2:{
{int zzIndex; plcstring* zzLValue=(plcstring*)SC_Preklapac.StepName; plcstring* zzRValue=(plcstring*)"2 - Inicializacia - cakam na spustenie inicializacie"; for(zzIndex=0; zzIndex<52l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(SC_Preklapac.IdleTime.PT=500);
(SC_Preklapac.AlarmTime.PT=5000);

(SC_Preklapac.IdleTime.IN=1);

if(SC_Preklapac.IdleTime.Q){
(SC_Preklapac.ResetStep=1);
(SC_Preklapac.Step=3);
}

}break;case 3:{
{int zzIndex; plcstring* zzLValue=(plcstring*)SC_Preklapac.StepName; plcstring* zzRValue=(plcstring*)"3 - Inicializacia - cakam na zasunutie vstupneho a vystupneho dotlacaca"; for(zzIndex=0; zzIndex<71l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(SC_Preklapac.IdleTime.PT=500);
(SC_Preklapac.AlarmTime.PT=5000);

if((SC_Preklapac.Switch1^1)){
(VstupnyDotlacac_ZASUN=1);
(VystupnyDotlacac_ZASUN=1);
(SC_Preklapac.Switch1=1);
}

if((Preklapac.IN.VstupnyDotlacac_ZASUNUTY_MS2&Preklapac.IN.VystupnyDotlacac_ZASUNUTY_MS4)){
(SC_Preklapac.ResetStep=1);
(SC_Preklapac.Step=5);
}

}break;case 5:{
{int zzIndex; plcstring* zzLValue=(plcstring*)SC_Preklapac.StepName; plcstring* zzRValue=(plcstring*)"5 - Inicializacia - cakam na presun zdvihu do spodnej polohy"; for(zzIndex=0; zzIndex<60l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(SC_Preklapac.IdleTime.PT=500);
(SC_Preklapac.AlarmTime.PT=5000);

if((SC_Preklapac.Switch1^1)){
(Zdvih_ZASUN=1);
(SC_Preklapac.Switch1=1);
}

if(Preklapac.IN.Vytah_SpodnaPoloha_MS6){
(SC_Preklapac.ResetStep=1);
(SC_Preklapac.Step=10);
}

}break;case 10:{
{int zzIndex; plcstring* zzLValue=(plcstring*)SC_Preklapac.StepName; plcstring* zzRValue=(plcstring*)"10 - Inicializacia - kontrolujem pritomnost rotorov na zdvihu"; for(zzIndex=0; zzIndex<61l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(SC_Preklapac.IdleTime.PT=500);
(SC_Preklapac.AlarmTime.PT=5000);

if((Preklapac.IN.Vytah_Pozicia1_PritomRotora_OS1|Preklapac.IN.Vytah_Pozicia2_PritomRotora_OS2)){
(Preklapac.STAV.PoINIT=1);
(SC_Preklapac.ResetStep=1);
(SC_Preklapac.Step=115);
}else{
(Preklapac.STAV.PoINIT=1);
(SC_Preklapac.ResetStep=1);
(SC_Preklapac.Step=100);
}





}break;case 100:{
{int zzIndex; plcstring* zzLValue=(plcstring*)SC_Preklapac.StepName; plcstring* zzRValue=(plcstring*)"100 - Automaticky Rezim - cakam na prichod rotora"; for(zzIndex=0; zzIndex<49l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(SC_Preklapac.IdleTime.PT=500);
(SC_Preklapac.AlarmTime.PT=5000);

(SC_Preklapac.IdleTime.IN=Preklapac.IN.VstupnyDotlacac_PritomRotora_IS1);

if(Preklapac.KoniecCyklu){
(SC_Preklapac.ResetStep=1);
(SC_Preklapac.Step=0);
}else if(SC_Preklapac.IdleTime.Q){
(SC_Preklapac.ResetStep=1);
(SC_Preklapac.Step=108);
}


}break;case 108:{
{int zzIndex; plcstring* zzLValue=(plcstring*)SC_Preklapac.StepName; plcstring* zzRValue=(plcstring*)"108 - Automaticky Rezim - cakam na vysunutie vstupneho dotlacaca"; for(zzIndex=0; zzIndex<64l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(SC_Preklapac.IdleTime.PT=500);
(SC_Preklapac.AlarmTime.PT=5000);

(SC_Preklapac.IdleTime.IN=Preklapac.IN.VstupnyDotlacac_VYSUNUTY_MS1);

if(((SC_Preklapac.Switch1^1)&Preklapac.IN.Vytah_SpodnaPoloha_MS6)){
(VstupnyDotlacac_VYSUN=1);
(SC_Preklapac.Switch1=1);
}

if((Preklapac.IN.VstupnyDotlacac_VYSUNUTY_MS1&SC_Preklapac.IdleTime.Q)){
(SC_Preklapac.ResetStep=1);
(SC_Preklapac.Step=110);
}

}break;case 110:{
{int zzIndex; plcstring* zzLValue=(plcstring*)SC_Preklapac.StepName; plcstring* zzRValue=(plcstring*)"110 - Automaticky Rezim - cakam na zasunutie vstupneho dotlacaca"; for(zzIndex=0; zzIndex<64l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(SC_Preklapac.IdleTime.PT=500);
(SC_Preklapac.AlarmTime.PT=5000);

if((SC_Preklapac.Switch1^1)){
(VstupnyDotlacac_ZASUN=1);
(SC_Preklapac.Switch1=1);
}

if(Preklapac.IN.VstupnyDotlacac_ZASUNUTY_MS2){
(SC_Preklapac.ResetStep=1);
(SC_Preklapac.Step=115);
}

}break;case 115:{
{int zzIndex; plcstring* zzLValue=(plcstring*)SC_Preklapac.StepName; plcstring* zzRValue=(plcstring*)"115 - Automaticky Rezim - kontrolujem pocet kusov na zdvihu"; for(zzIndex=0; zzIndex<59l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(SC_Preklapac.IdleTime.PT=500);
(SC_Preklapac.AlarmTime.PT=5000);

if((Preklapac.IN.Vytah_Pozicia1_PritomRotora_OS1&Preklapac.IN.Vytah_Pozicia2_PritomRotora_OS2)){
(SC_Preklapac.ResetStep=1);
(SC_Preklapac.Step=120);
}else{
(SC_Preklapac.ResetStep=1);
(SC_Preklapac.Step=100);
}

}break;case 120:{
{int zzIndex; plcstring* zzLValue=(plcstring*)SC_Preklapac.StepName; plcstring* zzRValue=(plcstring*)"120 - Automaticky Rezim - cakam na presun zdvihu do hornej polohy"; for(zzIndex=0; zzIndex<65l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(SC_Preklapac.IdleTime.PT=500);
(SC_Preklapac.AlarmTime.PT=5000);

(SC_Preklapac.IdleTime.IN=Preklapac.IN.Vytah_HornaPoloha_MS5);

if(((SC_Preklapac.Switch1^1)&Preklapac.IN.VstupnyDotlacac_ZASUNUTY_MS2&Preklapac.IN.VystupnyDotlacac_ZASUNUTY_MS4)){
(Zdvih_VYSUN=1);
(SC_Preklapac.Switch1=1);
}

if((Preklapac.IN.Vytah_HornaPoloha_MS5&SC_Preklapac.IdleTime.Q)){
(SC_Preklapac.ResetStep=1);
(SC_Preklapac.Step=125);
}

}break;case 125:{
{int zzIndex; plcstring* zzLValue=(plcstring*)SC_Preklapac.StepName; plcstring* zzRValue=(plcstring*)"125 - Automaticky Rezim - kontrola zaplnenia vystupneho dopravnika"; for(zzIndex=0; zzIndex<66l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(SC_Preklapac.IdleTime.PT=500);
(SC_Preklapac.AlarmTime.PT=5000);

(SC_Preklapac.AlarmTime.IN=Preklapac.KoniecCyklu);

(SC_Preklapac.IdleTime.IN=(Preklapac.IN.VystupnyDopravnik_PLNY_OS3^1));

if(SC_Preklapac.IdleTime.Q){
(SC_Preklapac.ResetStep=1);
(SC_Preklapac.Step=128);
}else if(SC_Preklapac.AlarmTime.Q){
(SC_Preklapac.ResetStep=1);
(SC_Preklapac.Step=0);
}


}break;case 128:{
{int zzIndex; plcstring* zzLValue=(plcstring*)SC_Preklapac.StepName; plcstring* zzRValue=(plcstring*)"128 - Automaticky Rezim - cakam na vysunutie vystupneho dotlacaca"; for(zzIndex=0; zzIndex<65l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(SC_Preklapac.IdleTime.PT=500);
(SC_Preklapac.AlarmTime.PT=5000);

(SC_Preklapac.IdleTime.IN=Preklapac.IN.VystupnyDotlacac_VYSUNUTY_MS3);

if(((SC_Preklapac.Switch1^1)&Preklapac.IN.Vytah_HornaPoloha_MS5)){
(VystupnyDotlacac_VYSUN=1);
(SC_Preklapac.Switch1=1);
}

if((Preklapac.IN.VystupnyDotlacac_VYSUNUTY_MS3&SC_Preklapac.IdleTime.Q)){
(SC_Preklapac.ResetStep=1);
(SC_Preklapac.Step=130);
}


}break;case 130:{
{int zzIndex; plcstring* zzLValue=(plcstring*)SC_Preklapac.StepName; plcstring* zzRValue=(plcstring*)"130 - Automaticky Rezim - cakam na zasunutie vystupneho dotlacaca"; for(zzIndex=0; zzIndex<65l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(SC_Preklapac.IdleTime.PT=500);
(SC_Preklapac.AlarmTime.PT=5000);

if((SC_Preklapac.Switch1^1)){
(VystupnyDotlacac_ZASUN=1);
(SC_Preklapac.Switch1=1);
}

if(Preklapac.IN.VystupnyDotlacac_ZASUNUTY_MS4){
(SC_Preklapac.ResetStep=1);
(SC_Preklapac.Step=135);
}

}break;case 135:{
{int zzIndex; plcstring* zzLValue=(plcstring*)SC_Preklapac.StepName; plcstring* zzRValue=(plcstring*)"135 - Automaticky Rezim - cakam na presun zdvihu do spodnej polohy"; for(zzIndex=0; zzIndex<66l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(SC_Preklapac.IdleTime.PT=500);
(SC_Preklapac.AlarmTime.PT=5000);

(SC_Preklapac.IdleTime.IN=Preklapac.IN.Vytah_SpodnaPoloha_MS6);

if(((SC_Preklapac.Switch1^1)&Preklapac.IN.VstupnyDotlacac_ZASUNUTY_MS2&Preklapac.IN.VystupnyDotlacac_ZASUNUTY_MS4)){
(Zdvih_ZASUN=1);
(SC_Preklapac.Switch1=1);
}

if(Preklapac.IN.Vytah_SpodnaPoloha_MS6){
(SC_Preklapac.ResetStep=1);
(SC_Preklapac.Step=100);
}




}break;case 700:{
{int zzIndex; plcstring* zzLValue=(plcstring*)SC_Preklapac.StepName; plcstring* zzRValue=(plcstring*)"700 - Manualny rezim"; for(zzIndex=0; zzIndex<20l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(SC_Preklapac.IdleTime.PT=3000);
(SC_Preklapac.AlarmTime.PT=5000);






}break;}


}imp4_case1_15:imp4_endcase1_0:;}
#line 281 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Program/Preklapac/Main.nodebug"
#line 283 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Program/Preklapac/Main.st"
void _EXIT __BUR__ENTRY_EXIT_FUNCT__(void){{


}}
#line 286 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Program/Preklapac/Main.nodebug"
#line 2 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Program/Preklapac/VstupnyDotlacac.st"
static void __AS__Action__VstupnyDotlacac(void){
{

SequenceControl(&SC_VstupnyDotlacac);



switch(SC_VstupnyDotlacac.Step){

case 0:{
{int zzIndex; plcstring* zzLValue=(plcstring*)SC_VstupnyDotlacac.StepName; plcstring* zzRValue=(plcstring*)"0 - Nulovanie"; for(zzIndex=0; zzIndex<13l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(VstupnyDotlacac_VYSUN=0);
(VstupnyDotlacac_ZASUN=0);
(Preklapac.OUT.VstupnyDotlacac_VYSUN_YV1=0);
(Preklapac.OUT.VstupnyDotlacac_ZASUN_YV2=0);

if((((unsigned long)(unsigned short)SC_Preklapac.Step!=(unsigned long)(unsigned short)0))){
(SC_VstupnyDotlacac.ResetStep=1);
(SC_VstupnyDotlacac.Step=1);
}

}break;case 1:{
{int zzIndex; plcstring* zzLValue=(plcstring*)SC_VstupnyDotlacac.StepName; plcstring* zzRValue=(plcstring*)"1 - Rozhodnutie o cinnosti"; for(zzIndex=0; zzIndex<26l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
if(VstupnyDotlacac_VYSUN){
(SC_VstupnyDotlacac.Step=10);
}else if(VstupnyDotlacac_ZASUN){
(SC_VstupnyDotlacac.Step=20);
}

}break;case 10:{
{int zzIndex; plcstring* zzLValue=(plcstring*)SC_VstupnyDotlacac.StepName; plcstring* zzRValue=(plcstring*)"10 - Vysunutie dotlacaca"; for(zzIndex=0; zzIndex<24l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(SC_VstupnyDotlacac.IdleTime.PT=3000);
(SC_VstupnyDotlacac.AlarmTime.PT=3000);

if(Preklapac.Automat){
(SC_VstupnyDotlacac.AlarmTime.IN=1);
}else{
(SC_VstupnyDotlacac.IdleTime.IN=1);
}

if((SC_VstupnyDotlacac.Switch1^1)){
(Preklapac.OUT.VstupnyDotlacac_ZASUN_YV2=0);
(Preklapac.OUT.VstupnyDotlacac_VYSUN_YV1=1);
(SC_VstupnyDotlacac.IdleTime.IN=1);
(SC_VstupnyDotlacac.Switch1=1);
}


if((Preklapac.IN.VstupnyDotlacac_VYSUNUTY_MS1|SC_VstupnyDotlacac.IdleTime.Q)){
(SC_VstupnyDotlacac.ResetStep=1);
(SC_VstupnyDotlacac.Step=0);
}else if(SC_VstupnyDotlacac.AlarmTime.Q){
(Alarmy[CheckBounds(5,0,100)]=1);
(SC_VstupnyDotlacac.ResetStep=1);
(SC_VstupnyDotlacac.Step=0);
}



}break;case 20:{
{int zzIndex; plcstring* zzLValue=(plcstring*)SC_VstupnyDotlacac.StepName; plcstring* zzRValue=(plcstring*)"20 - Zasunutie dotlacaca"; for(zzIndex=0; zzIndex<24l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(SC_VstupnyDotlacac.IdleTime.PT=3000);
(SC_VstupnyDotlacac.AlarmTime.PT=3000);

if(Preklapac.Automat){
(SC_VstupnyDotlacac.AlarmTime.IN=1);
}else{
(SC_VstupnyDotlacac.IdleTime.IN=1);
}

if((SC_VstupnyDotlacac.Switch1^1)){
(Preklapac.OUT.VstupnyDotlacac_VYSUN_YV1=0);
(Preklapac.OUT.VstupnyDotlacac_ZASUN_YV2=1);
(SC_VstupnyDotlacac.Switch1=1);
}

if((Preklapac.IN.VstupnyDotlacac_ZASUNUTY_MS2|SC_VstupnyDotlacac.IdleTime.Q)){
(SC_VstupnyDotlacac.ResetStep=1);
(SC_VstupnyDotlacac.Step=0);
}else if(SC_VstupnyDotlacac.AlarmTime.Q){
(Alarmy[CheckBounds(6,0,100)]=1);
(SC_VstupnyDotlacac.ResetStep=1);
(SC_VstupnyDotlacac.Step=0);
}






}break;}



}imp16385_case0_3:imp16385_endcase0_0:;}
#line 288 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Program/Preklapac/Main.nodebug"
#line 2 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Program/Preklapac/Zdvih.st"
static void __AS__Action__Zdvih(void){
{

SequenceControl(&SC_Zdvih);



switch(SC_Zdvih.Step){

case 0:{
{int zzIndex; plcstring* zzLValue=(plcstring*)SC_Zdvih.StepName; plcstring* zzRValue=(plcstring*)"0 - Nulovanie"; for(zzIndex=0; zzIndex<13l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(Zdvih_VYSUN=0);
(Zdvih_ZASUN=0);
(Preklapac.OUT.Vytah_ZDVIH_YV5=0);
(Preklapac.OUT.Vytah_ZOSTUP_YV6=0);

if((((unsigned long)(unsigned short)SC_Preklapac.Step!=(unsigned long)(unsigned short)0))){
(SC_Zdvih.ResetStep=1);
(SC_Zdvih.Step=1);
}

}break;case 1:{
{int zzIndex; plcstring* zzLValue=(plcstring*)SC_Zdvih.StepName; plcstring* zzRValue=(plcstring*)"1 - Rozhodnutie o cinnosti"; for(zzIndex=0; zzIndex<26l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
if(Zdvih_VYSUN){
(SC_Zdvih.Step=10);
}else if(Zdvih_ZASUN){
(SC_Zdvih.Step=20);
}

}break;case 10:{
{int zzIndex; plcstring* zzLValue=(plcstring*)SC_Zdvih.StepName; plcstring* zzRValue=(plcstring*)"10 - Vysunutie zdvihu"; for(zzIndex=0; zzIndex<21l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(SC_Zdvih.IdleTime.PT=3000);
(SC_Zdvih.AlarmTime.PT=3000);

if(Preklapac.Automat){
(SC_Zdvih.AlarmTime.IN=1);
}else{
(SC_Zdvih.IdleTime.IN=1);
}

if((SC_Zdvih.Switch1^1)){
(Preklapac.OUT.Vytah_ZOSTUP_YV6=0);
(Preklapac.OUT.Vytah_ZDVIH_YV5=1);
(SC_Zdvih.IdleTime.IN=1);
(SC_Zdvih.Switch1=1);
}


if((Preklapac.IN.Vytah_HornaPoloha_MS5|SC_Zdvih.IdleTime.Q)){
(SC_Zdvih.ResetStep=1);
(SC_Zdvih.Step=0);
}else if(SC_Zdvih.AlarmTime.Q){
(Alarmy[CheckBounds(7,0,100)]=1);
(SC_Zdvih.ResetStep=1);
(SC_Zdvih.Step=0);
}



}break;case 20:{
{int zzIndex; plcstring* zzLValue=(plcstring*)SC_Zdvih.StepName; plcstring* zzRValue=(plcstring*)"20 - Zasunutie zdvihu"; for(zzIndex=0; zzIndex<21l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(SC_Zdvih.IdleTime.PT=3000);
(SC_Zdvih.AlarmTime.PT=3000);

if(Preklapac.Automat){
(SC_Zdvih.AlarmTime.IN=1);
}else{
(SC_Zdvih.IdleTime.IN=1);
}

if((SC_Zdvih.Switch1^1)){
(Preklapac.OUT.Vytah_ZDVIH_YV5=0);
(Preklapac.OUT.Vytah_ZOSTUP_YV6=1);
(SC_Zdvih.Switch1=1);
}

if((Preklapac.IN.Vytah_SpodnaPoloha_MS6|SC_Zdvih.IdleTime.Q)){
(SC_Zdvih.ResetStep=1);
(SC_Zdvih.Step=0);
}else if(SC_Zdvih.AlarmTime.Q){
(Alarmy[CheckBounds(8,0,100)]=1);
(SC_Zdvih.ResetStep=1);
(SC_Zdvih.Step=0);
}






}break;}


}imp16387_case0_3:imp16387_endcase0_0:;}
#line 288 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Program/Preklapac/Main.nodebug"
#line 2 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Program/Preklapac/VystupnyDotlacac.st"
static void __AS__Action__VystupnyDotlacac(void){
{

SequenceControl(&SC_VystupnyDotlacac);



switch(SC_VystupnyDotlacac.Step){

case 0:{
{int zzIndex; plcstring* zzLValue=(plcstring*)SC_VystupnyDotlacac.StepName; plcstring* zzRValue=(plcstring*)"0 - Nulovanie"; for(zzIndex=0; zzIndex<13l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(VystupnyDotlacac_VYSUN=0);
(VystupnyDotlacac_ZASUN=0);
(Preklapac.OUT.VystupnyDotlacac_VYSUN_YV3=0);
(Preklapac.OUT.VystupnyDotlacac_ZASUN_YV4=0);

if((((unsigned long)(unsigned short)SC_Preklapac.Step!=(unsigned long)(unsigned short)0))){
(SC_VystupnyDotlacac.ResetStep=1);
(SC_VystupnyDotlacac.Step=1);
}

}break;case 1:{
{int zzIndex; plcstring* zzLValue=(plcstring*)SC_VystupnyDotlacac.StepName; plcstring* zzRValue=(plcstring*)"1 - Rozhodnutie o cinnosti"; for(zzIndex=0; zzIndex<26l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
if(VystupnyDotlacac_VYSUN){
(SC_VystupnyDotlacac.Step=10);
}else if(VystupnyDotlacac_ZASUN){
(SC_VystupnyDotlacac.Step=20);
}

}break;case 10:{
{int zzIndex; plcstring* zzLValue=(plcstring*)SC_VystupnyDotlacac.StepName; plcstring* zzRValue=(plcstring*)"10 - Vysunutie dotlacaca"; for(zzIndex=0; zzIndex<24l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(SC_VystupnyDotlacac.IdleTime.PT=3000);
(SC_VystupnyDotlacac.AlarmTime.PT=3000);

if(Preklapac.Automat){
(SC_VystupnyDotlacac.AlarmTime.IN=1);
}else{
(SC_VystupnyDotlacac.IdleTime.IN=1);
}

if((SC_VystupnyDotlacac.Switch1^1)){
(Preklapac.OUT.VystupnyDotlacac_ZASUN_YV4=0);
(Preklapac.OUT.VystupnyDotlacac_VYSUN_YV3=1);
(SC_VystupnyDotlacac.IdleTime.IN=1);
(SC_VystupnyDotlacac.Switch1=1);
}


if((Preklapac.IN.VystupnyDotlacac_VYSUNUTY_MS3|SC_VystupnyDotlacac.IdleTime.Q)){
(SC_VystupnyDotlacac.ResetStep=1);
(SC_VystupnyDotlacac.Step=0);
}else if(SC_VystupnyDotlacac.AlarmTime.Q){
(Alarmy[CheckBounds(9,0,100)]=1);
(SC_VystupnyDotlacac.ResetStep=1);
(SC_VystupnyDotlacac.Step=0);
}



}break;case 20:{
{int zzIndex; plcstring* zzLValue=(plcstring*)SC_VystupnyDotlacac.StepName; plcstring* zzRValue=(plcstring*)"20 - Zasunutie dotlacaca"; for(zzIndex=0; zzIndex<24l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
(SC_VystupnyDotlacac.IdleTime.PT=3000);
(SC_VystupnyDotlacac.AlarmTime.PT=3000);

if(Preklapac.Automat){
(SC_VystupnyDotlacac.AlarmTime.IN=1);
}else{
(SC_VystupnyDotlacac.IdleTime.IN=1);
}

if((SC_VystupnyDotlacac.Switch1^1)){
(Preklapac.OUT.VystupnyDotlacac_VYSUN_YV3=0);
(Preklapac.OUT.VystupnyDotlacac_ZASUN_YV4=1);
(SC_VystupnyDotlacac.Switch1=1);
}

if((Preklapac.IN.VystupnyDotlacac_ZASUNUTY_MS4|SC_VystupnyDotlacac.IdleTime.Q)){
(SC_VystupnyDotlacac.ResetStep=1);
(SC_VystupnyDotlacac.Step=0);
}else if(SC_VystupnyDotlacac.AlarmTime.Q){
(Alarmy[CheckBounds(10,0,100)]=1);
(SC_VystupnyDotlacac.ResetStep=1);
(SC_VystupnyDotlacac.Step=0);
}






}break;}



}imp16386_case0_3:imp16386_endcase0_0:;}
#line 288 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Program/Preklapac/Main.nodebug"

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
__asm__(".ascii \"iecfile \\\"Logical/Program/Preklapac/Types.typ\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Program/Preklapac/Variables.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Temp/Objects/Config1/AB1_PLC/Preklapac/Main.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Temp/Objects/Config1/AB1_PLC/Preklapac/Main.st.c\\\" \\\"D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Program/Preklapac/Main.st\\\"\\n\"");
__asm__(".previous");
