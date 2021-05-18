#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Temp/Objects/Config1/AB1_PLC/Blikanie20/Blikanie200msst.h"
#line 1 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Blikace/Blikanie200ms/Blikanie200ms.nodebug"
#line 2 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Blikace/Blikanie200ms/Blikanie200ms.st"
void __BUR__ENTRY_INIT_FUNCT__(void){{


}}
#line 5 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Blikace/Blikanie200ms/Blikanie200ms.nodebug"
#line 7 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Blikace/Blikanie200ms/Blikanie200ms.st"
void _CYCLIC __BUR__ENTRY_CYCLIC_FUNCT__(void){{

if((Blikac200ms^1)){
(Blikac200ms=1);
}else{
(Blikac200ms=0);
}


}imp1_end0_0:;}
#line 16 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Blikace/Blikanie200ms/Blikanie200ms.nodebug"
#line 18 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Blikace/Blikanie200ms/Blikanie200ms.st"
void _EXIT __BUR__ENTRY_EXIT_FUNCT__(void){{


}}
#line 21 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Blikace/Blikanie200ms/Blikanie200ms.nodebug"

void __AS__ImplInitBlikanie200ms_st(void){__BUR__ENTRY_INIT_FUNCT__();}

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
__asm__(".ascii \"iecfile \\\"D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Temp/Objects/Config1/AB1_PLC/Blikanie20/Blikanie200ms.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Temp/Objects/Config1/AB1_PLC/Blikanie20/Blikanie200ms.st.c\\\" \\\"D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Blikace/Blikanie200ms/Blikanie200ms.st\\\"\\n\"");
__asm__(".previous");
