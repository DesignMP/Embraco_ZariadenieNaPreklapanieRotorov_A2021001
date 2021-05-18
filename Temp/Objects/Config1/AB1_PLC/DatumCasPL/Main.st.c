#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Temp/Objects/Config1/AB1_PLC/DatumCasPL/Mainst.h"
#line 1 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/DatumCasPLC/DatumCasPLC/Main.nodebug"
#line 2 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/DatumCasPLC/DatumCasPLC/Main.st"
void __BUR__ENTRY_INIT_FUNCT__(void){{


}}
#line 5 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/DatumCasPLC/DatumCasPLC/Main.nodebug"
#line 7 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/DatumCasPLC/DatumCasPLC/Main.st"
void _CYCLIC __BUR__ENTRY_CYCLIC_FUNCT__(void){{


(DTGetTime_1.enable=1);
DTGetTime(&DTGetTime_1);
DT_TO_DTStructure(DTGetTime_1.DT1,((unsigned long)(&PLC_DatumCas)));

(PLC_Cas.Sekundy=PLC_DatumCas.second);
(PLC_Cas.Minuty=PLC_DatumCas.minute);
(PLC_Cas.Hodiny=PLC_DatumCas.hour);

(PLC_Datum.Den=PLC_DatumCas.day);
(PLC_Datum.Mesiac=PLC_DatumCas.month);
(PLC_Datum.Rok=PLC_DatumCas.year);





if((((unsigned long)(unsigned char)PLC_Cas.Sekundy<(unsigned long)(unsigned char)10))){
usint2str(PLC_Cas.Sekundy,Sekundy_String,3);
{int zzIndex; plcstring* zzLValue=(plcstring*)Sekunda_STR; plcstring* zzRValue=(plcstring*)"0"; for(zzIndex=0; zzIndex<1l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
brsstrcat(((unsigned long)(&Sekunda_STR)),((unsigned long)(&Sekundy_String)));
}else{
usint2str(PLC_Cas.Sekundy,Sekunda_STR,3);
}


if((((unsigned long)(unsigned char)PLC_Cas.Minuty<(unsigned long)(unsigned char)10))){
usint2str(PLC_Cas.Minuty,Minuty_String,3);
{int zzIndex; plcstring* zzLValue=(plcstring*)Minuta_STR; plcstring* zzRValue=(plcstring*)"0"; for(zzIndex=0; zzIndex<1l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
brsstrcat(((unsigned long)(&Minuta_STR)),((unsigned long)(&Minuty_String)));
}else{
usint2str(PLC_Cas.Minuty,Minuta_STR,3);
}


if((((unsigned long)(unsigned char)PLC_Cas.Hodiny<(unsigned long)(unsigned char)10))){
usint2str(PLC_Cas.Hodiny,Hodiny_String,3);
{int zzIndex; plcstring* zzLValue=(plcstring*)Hodina_STR; plcstring* zzRValue=(plcstring*)"0"; for(zzIndex=0; zzIndex<1l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
brsstrcat(((unsigned long)(&Hodina_STR)),((unsigned long)(&Hodiny_String)));
}else{
usint2str(PLC_Cas.Hodiny,Hodina_STR,3);
}




if((((unsigned long)(unsigned char)PLC_Datum.Den<(unsigned long)(unsigned char)10))){
usint2str(PLC_Datum.Den,Den_String,3);
{int zzIndex; plcstring* zzLValue=(plcstring*)Den_STR; plcstring* zzRValue=(plcstring*)"0"; for(zzIndex=0; zzIndex<1l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
brsstrcat(((unsigned long)(&Den_STR)),((unsigned long)(&Den_String)));
}else{
usint2str(PLC_Datum.Den,Den_STR,3);
}



if((((unsigned long)(unsigned char)PLC_Datum.Mesiac<(unsigned long)(unsigned char)10))){
usint2str(PLC_Datum.Mesiac,Mesiac_String,3);
{int zzIndex; plcstring* zzLValue=(plcstring*)Mesiac_STR; plcstring* zzRValue=(plcstring*)"0"; for(zzIndex=0; zzIndex<1l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};
brsstrcat(((unsigned long)(&Mesiac_STR)),((unsigned long)(&Mesiac_String)));
}else{
usint2str(PLC_Datum.Mesiac,Mesiac_STR,3);
}


uint2str(PLC_Datum.Rok,Rok_STR_4_Znaky,5);


(length=brsstrlen(((unsigned long)(&Rok_STR_4_Znaky))));

if((((unsigned long)length>=(unsigned long)4))){
brsmemcpy(((unsigned long)(&PoleUSINT)),((unsigned long)(&Rok_STR_4_Znaky)),5);
(i=PoleUSINT[CheckBounds((length-2),0,3)]);
brsstrcpy(((unsigned long)(&DvaZnaky)),((unsigned long)(&i)));
(i=PoleUSINT[CheckBounds((length-1),0,3)]);
brsstrcat(((unsigned long)(&DvaZnaky)),((unsigned long)(&i)));
}

{int zzIndex; plcstring* zzLValue=(plcstring*)Rok_STR_2_Znaky; plcstring* zzRValue=(plcstring*)DvaZnaky; for(zzIndex=0; zzIndex<2l && zzRValue[zzIndex]!=0; zzIndex++) zzLValue[zzIndex] = zzRValue[zzIndex]; zzLValue[zzIndex] = 0;};

}}
#line 89 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/DatumCasPLC/DatumCasPLC/Main.nodebug"
#line 91 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/DatumCasPLC/DatumCasPLC/Main.st"
void _EXIT __BUR__ENTRY_EXIT_FUNCT__(void){{


}}
#line 94 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/DatumCasPLC/DatumCasPLC/Main.nodebug"

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
__asm__(".ascii \"iecfile \\\"Logical/DatumCasPLC/DatumCasPLC/Types.typ\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/DatumCasPLC/DatumCasPLC/Variables.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Temp/Objects/Config1/AB1_PLC/DatumCasPL/Main.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Temp/Objects/Config1/AB1_PLC/DatumCasPL/Main.st.c\\\" \\\"D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/DatumCasPLC/DatumCasPLC/Main.st\\\"\\n\"");
__asm__(".previous");

__asm__(".section \".plciec\"");
__asm__(".ascii \"plcdata_const 'Rok_STR_4_Znaky'\\n\"");
__asm__(".previous");
