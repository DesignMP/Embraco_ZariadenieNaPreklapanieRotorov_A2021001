#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Temp/Objects/Config1/AB1_PLC/IecCheck/IecCheckst.h"
#line 1 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Libraries/IecCheck/IecCheck.nodebug"
#line 2 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Libraries/IecCheck/IecCheck.st"
signed char CheckDivSint(signed char divisor){signed char __AS__CheckDivSint=0;{
if((((signed long)(signed long)(char)divisor==(signed long)(signed long)(char)0))){
(__AS__CheckDivSint=1);
MakeEntry(55555,divisor,"CheckDivSint");
}else{
(__AS__CheckDivSint=divisor);
}
}imp1_end0_0:;return __AS__CheckDivSint;}
#line 9 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Libraries/IecCheck/IecCheck.nodebug"
#line 12 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Libraries/IecCheck/IecCheck.st"
unsigned char CheckDivUsint(unsigned char divisor){unsigned char __AS__CheckDivUsint=0;{
if((((unsigned long)(unsigned char)divisor==(unsigned long)(unsigned char)0))){
(__AS__CheckDivUsint=1);
MakeEntry(55555,divisor,"CheckDivUsint");
}else{
(__AS__CheckDivUsint=divisor);
}
}imp2_end1_0:;return __AS__CheckDivUsint;}
#line 19 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Libraries/IecCheck/IecCheck.nodebug"
#line 22 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Libraries/IecCheck/IecCheck.st"
signed short CheckDivInt(signed short divisor){signed short __AS__CheckDivInt=0;{
if((((signed long)(signed long)(short)divisor==(signed long)(signed long)(short)0))){
(__AS__CheckDivInt=1);
MakeEntry(55555,divisor,"CheckDivInt");
}else{
(__AS__CheckDivInt=divisor);
}
}imp3_end2_0:;return __AS__CheckDivInt;}
#line 29 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Libraries/IecCheck/IecCheck.nodebug"
#line 32 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Libraries/IecCheck/IecCheck.st"
unsigned short CheckDivUint(unsigned short divisor){unsigned short __AS__CheckDivUint=0;{
if((((unsigned long)(unsigned short)divisor==(unsigned long)(unsigned short)0))){
(__AS__CheckDivUint=1);
MakeEntry(55555,divisor,"CheckDivUint");
}else{
(__AS__CheckDivUint=divisor);
}
}imp4_end3_0:;return __AS__CheckDivUint;}
#line 39 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Libraries/IecCheck/IecCheck.nodebug"
#line 42 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Libraries/IecCheck/IecCheck.st"
signed long CheckDivDint(signed long divisor){signed long __AS__CheckDivDint=0;{
if((((signed long)divisor==(signed long)0))){
(__AS__CheckDivDint=1);
MakeEntry(55555,divisor,"CheckDivDint");
}else{
(__AS__CheckDivDint=divisor);
}
}imp5_end4_0:;return __AS__CheckDivDint;}
#line 49 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Libraries/IecCheck/IecCheck.nodebug"
#line 52 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Libraries/IecCheck/IecCheck.st"
unsigned long CheckDivUdint(unsigned long divisor){unsigned long __AS__CheckDivUdint=0;{
if((((unsigned long)divisor==(unsigned long)0))){
(__AS__CheckDivUdint=1);
MakeEntry(55555,divisor,"CheckDivUdint");
}else{
(__AS__CheckDivUdint=divisor);
}
}imp6_end5_0:;return __AS__CheckDivUdint;}
#line 59 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Libraries/IecCheck/IecCheck.nodebug"
#line 62 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Libraries/IecCheck/IecCheck.st"
float CheckDivReal(float divisor){float __AS__CheckDivReal=0.00000000000000000000E+00;{
if(((divisor==0))){
(__AS__CheckDivReal=1);
MakeEntry(55555,0,"CheckDivReal");
}else{
(__AS__CheckDivReal=divisor);
}
}imp7_end6_0:;return __AS__CheckDivReal;}
#line 69 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Libraries/IecCheck/IecCheck.nodebug"
#line 72 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Libraries/IecCheck/IecCheck.st"
double CheckDivLReal(double divisor){double __AS__CheckDivLReal=0.00000000000000000000E+00;{
if(((divisor==0))){
(__AS__CheckDivLReal=1);
MakeEntry(55555,0,"CheckDivLReal");
}else{
(__AS__CheckDivLReal=divisor);
}
}imp8_end7_0:;return __AS__CheckDivLReal;}
#line 79 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Libraries/IecCheck/IecCheck.nodebug"
#line 82 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Libraries/IecCheck/IecCheck.st"
signed long CheckBounds(signed long index, signed long lower, signed long upper){signed long __AS__CheckBounds=0;{
if((((signed long)index<(signed long)lower))){
(__AS__CheckBounds=lower);
MakeEntry(55555,index,"CheckBounds");
}else if((((signed long)index>(signed long)upper))){
(__AS__CheckBounds=upper);
MakeEntry(55555,index,"CheckBounds");
}else{
(__AS__CheckBounds=index);
}
}imp9_end8_0:;return __AS__CheckBounds;}
#line 92 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Libraries/IecCheck/IecCheck.nodebug"
#line 95 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Libraries/IecCheck/IecCheck.st"
signed long CheckRange(signed long value, signed long lower, signed long upper){signed long __AS__CheckRange=0;{
if((((signed long)value<(signed long)lower))){
(__AS__CheckRange=lower);
MakeEntry(55555,value,"CheckRange");
}else if((((signed long)value>(signed long)upper))){
(__AS__CheckRange=upper);
MakeEntry(55555,value,"CheckRange");
}else{
(__AS__CheckRange=value);
}
}imp10_end9_0:;return __AS__CheckRange;}
#line 105 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Libraries/IecCheck/IecCheck.nodebug"
#line 108 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Libraries/IecCheck/IecCheck.st"
signed long CheckSignedSubrange(signed long value, signed long lower, signed long upper){signed long __AS__CheckSignedSubrange=0;{
if((((signed long)value<(signed long)lower))){
(__AS__CheckSignedSubrange=lower);
MakeEntry(55555,value,"CheckSignedSubrange");
}else if((((signed long)value>(signed long)upper))){
(__AS__CheckSignedSubrange=upper);
MakeEntry(55555,value,"CheckSignedSubrange");
}else{
(__AS__CheckSignedSubrange=value);
}
}imp11_end10_0:;return __AS__CheckSignedSubrange;}
#line 118 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Libraries/IecCheck/IecCheck.nodebug"
#line 121 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Libraries/IecCheck/IecCheck.st"
unsigned long CheckUnsignedSubrange(unsigned long value, unsigned long lower, unsigned long upper){unsigned long __AS__CheckUnsignedSubrange=0;{
if((((unsigned long)value<(unsigned long)lower))){
(__AS__CheckUnsignedSubrange=lower);
MakeEntry(55555,value,"CheckUnsignedSubrange");
}else if((((unsigned long)value>(unsigned long)upper))){
(__AS__CheckUnsignedSubrange=upper);
MakeEntry(55555,value,"CheckUnsignedSubrange");
}else{
(__AS__CheckUnsignedSubrange=value);
}
}imp12_end11_0:;return __AS__CheckUnsignedSubrange;}
#line 131 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Libraries/IecCheck/IecCheck.nodebug"
#line 134 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Libraries/IecCheck/IecCheck.st"
unsigned long CheckReadAccess(unsigned long address){unsigned long __AS__CheckReadAccess=0;{
if((((unsigned long)address==(unsigned long)0))){

MakeEntry(55555,address,"Read from NULL");
}

(__AS__CheckReadAccess=0);
}return __AS__CheckReadAccess;}
#line 141 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Libraries/IecCheck/IecCheck.nodebug"
#line 144 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Libraries/IecCheck/IecCheck.st"
unsigned long CheckWriteAccess(unsigned long address){unsigned long __AS__CheckWriteAccess=0;{
if((((unsigned long)address==(unsigned long)0))){

MakeEntry(55555,address,"Write to NULL");
}

(__AS__CheckWriteAccess=0);
}return __AS__CheckWriteAccess;}
#line 151 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Libraries/IecCheck/IecCheck.nodebug"
#line 154 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Libraries/IecCheck/IecCheck.st"
unsigned long MakeEntry(unsigned short number, signed long index, plcstring text[51]){unsigned long __AS__MakeEntry=0;plcstring out_text[81]="";unsigned short status_name=0;unsigned char group=0;plcstring taskname[31]="";{
(status_name=ST_name(0,((unsigned long)(&taskname)),((unsigned long)(&group))));

brsstrcpy(((unsigned long)(&out_text)),((unsigned long)(text)));
brsstrcat(((unsigned long)(&out_text)),((unsigned long)(&" > in task > ")));
brsstrcat(((unsigned long)(&out_text)),((unsigned long)(&taskname)));
(__AS__MakeEntry=((unsigned long)(&out_text)));
ERRxfatal(number,index,((unsigned long)(&out_text)));
}return __AS__MakeEntry;}
#line 162 "D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Libraries/IecCheck/IecCheck.nodebug"

void __AS__ImplInitIecCheck_st(void){}

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
__asm__(".ascii \"iecfile \\\"D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Temp/Objects/Config1/AB1_PLC/IecCheck/IecCheck.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Temp/Objects/Config1/AB1_PLC/IecCheck/IecCheck.st.c\\\" \\\"D:/Projekty BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Logical/Libraries/IecCheck/IecCheck.st\\\"\\n\"");
__asm__(".ascii \"plcexport \\\"CheckDivSint\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"CheckDivUsint\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"CheckDivInt\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"CheckDivUint\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"CheckDivDint\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"CheckDivUdint\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"CheckDivReal\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"CheckDivLReal\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"CheckBounds\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"CheckRange\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"CheckSignedSubrange\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"CheckUnsignedSubrange\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"CheckReadAccess\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"CheckWriteAccess\\\" FUN\\n\"");
__asm__(".ascii \"plcexport \\\"MakeEntry\\\" FUN\\n\"");
__asm__(".previous");
