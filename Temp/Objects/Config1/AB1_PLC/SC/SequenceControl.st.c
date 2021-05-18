#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Temp/Objects/Config1/AB1_PLC/SC/SequenceControlst.h"
#line 1 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Libraries/SC/SequenceControl.nodebug"
#line 3 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Libraries/SC/SequenceControl.st"
plcbit SequenceControl(struct SequenceControlTyp(* SC)){plcbit __AS__SequenceControl=0;{

if((CheckReadAccess(SC),(*(SC)).ResetStep)){
brsmemset(((unsigned long)(&((*(SC)).StepName))),0,201);
(CheckWriteAccess(SC),(*(SC)).Switch1=0);
(CheckWriteAccess(SC),(*(SC)).Switch2=0);
(CheckWriteAccess(SC),(*(SC)).Switch3=0);
(CheckWriteAccess(SC),(*(SC)).IdleTime.IN=0);
(CheckWriteAccess(SC),(*(SC)).AlarmTime.IN=0);
(CheckWriteAccess(SC),(*(SC)).ResetStep=0);
}

if((CheckReadAccess(SC),(*(SC)).LastStep)){
brsmemset(((unsigned long)(&((*(SC)).StepName))),0,201);
(CheckWriteAccess(SC),(*(SC)).Switch1=0);
(CheckWriteAccess(SC),(*(SC)).Switch2=0);
(CheckWriteAccess(SC),(*(SC)).Switch3=0);
(CheckWriteAccess(SC),(*(SC)).IdleTime.IN=0);
(CheckWriteAccess(SC),(*(SC)).AlarmTime.IN=0);
(CheckWriteAccess(SC),(*(SC)).Step=0);
(CheckWriteAccess(SC),(*(SC)).LastStep=0);
}



TON((CheckReadAccess(SC),&(*(SC)).AlarmTime));
TON((CheckReadAccess(SC),&(*(SC)).IdleTime));

}return __AS__SequenceControl;}
#line 31 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Libraries/SC/SequenceControl.nodebug"

void __AS__ImplInitSequenceControl_st(void){}

__asm__(".section \".plc\"");
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
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Runtime/runtime.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/astime/astime.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsBrStr/AsBrStr.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/FileIO/FileIO.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/sys_lib/sys_lib.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/SC/Constants.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Temp/Objects/Config1/AB1_PLC/SC/SequenceControl.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Temp/Objects/Config1/AB1_PLC/SC/SequenceControl.st.c\\\" \\\"D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Libraries/SC/SequenceControl.st\\\"\\n\"");
__asm__(".ascii \"plcexport \\\"SequenceControl\\\" FUN\\n\"");
__asm__(".previous");
