/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _LIBRARIES_20210524084633_
#define _LIBRARIES_20210524084633_

__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Runtime/runtime.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Runtime/runtime.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Runtime/runtime.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Operator/operator.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIecCon/AsIecCon.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/astime/astime.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/astime/astime.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/astime/astime.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsBrStr/AsBrStr.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsBrStr/AsBrStr.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsBrStr/AsBrStr.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/FileIO/FileIO.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/FileIO/FileIO.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/FileIO/FileIO.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/sys_lib/sys_lib.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/sys_lib/sys_lib.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/sys_lib/sys_lib.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/SC/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/SC/Constants.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/SC/SC.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/IecCheck/IecCheck.fun\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */
#ifdef _RUNTIME_EXPORT
	__asm__(".ascii \"plcexport \\\"r_trig\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"f_trig\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"rf_trig\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"GetTime\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SFCActionControl\\\" FUB\\n\"");
#endif
#ifdef _OPERATOR_EXPORT
	__asm__(".ascii \"plcexport \\\"SIZEOF\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"ADR\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SHR\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"ROR\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"ROL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SHL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"AND\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"XOR\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"OR\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"NOT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"ADD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"MUL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SUB\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DIV\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"MOD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"MOVE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"MAX\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"MIN\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"LIMIT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SEL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"MUX\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"GE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"EQ\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"GT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"LE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"LT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"NE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"ABS\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SQRT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"LN\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"LOG\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"EXP\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SIN\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"COS\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TAN\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"ASIN\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"ACOS\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"ATAN\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"EXPT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TRUNC\\\" FUN\\n\"");
#endif
#ifdef _ASIECCON_EXPORT
	__asm__(".ascii \"plcexport \\\"swapDT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"swapTIME\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"swapDATE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"swapTOD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"swapREAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"swapLREAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"swapUDINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"swapDINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"swapUINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"swapINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"swapWORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"swapDWORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"N_TO_HDT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"N_TO_HTIME\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"N_TO_HDATE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"N_TO_HTOD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"N_TO_HREAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"N_TO_HLREAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"N_TO_HUDINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"N_TO_HDINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"N_TO_HUINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"N_TO_HINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"H_TO_NDT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"H_TO_NTIME\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"H_TO_NDATE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"H_TO_NTOD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"H_TO_NREAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"H_TO_NLREAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"H_TO_NUDINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"H_TO_NDINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"H_TO_NUINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"H_TO_NINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BOOL_TO_BYTE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BOOL_TO_WORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BOOL_TO_DWORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BOOL_TO_SINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BOOL_TO_INT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BOOL_TO_DINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BOOL_TO_USINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BOOL_TO_UINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BOOL_TO_UDINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BOOL_TO_TIME\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BOOL_TO_DT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BOOL_TO_DATE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BOOL_TO_TOD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BOOL_TO_REAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BOOL_TO_LREAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BOOL_TO_STRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BOOL_TO_WSTRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BYTE_TO_BOOL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BYTE_TO_WORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BYTE_TO_DWORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BYTE_TO_SINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BYTE_TO_INT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BYTE_TO_DINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BYTE_TO_USINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BYTE_TO_UINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BYTE_TO_UDINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BYTE_TO_TIME\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BYTE_TO_DT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BYTE_TO_DATE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BYTE_TO_TOD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BYTE_TO_REAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BYTE_TO_LREAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BYTE_TO_STRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BYTE_TO_WSTRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WORD_TO_BOOL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WORD_TO_BYTE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WORD_TO_DWORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WORD_TO_SINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WORD_TO_INT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WORD_TO_DINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WORD_TO_USINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WORD_TO_UINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WORD_TO_UDINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WORD_TO_TIME\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WORD_TO_DT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WORD_TO_DATE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WORD_TO_TOD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WORD_TO_REAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WORD_TO_LREAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WORD_TO_STRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WORD_TO_WSTRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DWORD_TO_BOOL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DWORD_TO_BYTE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DWORD_TO_WORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DWORD_TO_SINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DWORD_TO_INT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DWORD_TO_DINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DWORD_TO_USINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DWORD_TO_UINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DWORD_TO_UDINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DWORD_TO_TIME\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DWORD_TO_DT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DWORD_TO_DATE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DWORD_TO_TOD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DWORD_TO_REAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DWORD_TO_LREAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DWORD_TO_STRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DWORD_TO_WSTRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SINT_TO_BOOL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SINT_TO_BYTE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SINT_TO_WORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SINT_TO_DWORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SINT_TO_INT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SINT_TO_DINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SINT_TO_USINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SINT_TO_UINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SINT_TO_UDINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SINT_TO_TIME\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SINT_TO_DT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SINT_TO_DATE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SINT_TO_TOD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SINT_TO_REAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SINT_TO_LREAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SINT_TO_STRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SINT_TO_WSTRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"INT_TO_BOOL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"INT_TO_BYTE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"INT_TO_WORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"INT_TO_DWORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"INT_TO_SINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"INT_TO_DINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"INT_TO_USINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"INT_TO_UINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"INT_TO_UDINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"INT_TO_TIME\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"INT_TO_DT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"INT_TO_DATE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"INT_TO_TOD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"INT_TO_REAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"INT_TO_LREAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"INT_TO_STRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"INT_TO_WSTRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DINT_TO_BOOL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DINT_TO_BYTE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DINT_TO_WORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DINT_TO_DWORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DINT_TO_SINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DINT_TO_INT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DINT_TO_USINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DINT_TO_UINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DINT_TO_UDINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DINT_TO_TIME\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DINT_TO_DT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DINT_TO_DATE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DINT_TO_TOD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DINT_TO_REAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DINT_TO_LREAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DINT_TO_STRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DINT_TO_WSTRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"USINT_TO_BOOL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"USINT_TO_BYTE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"USINT_TO_WORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"USINT_TO_DWORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"USINT_TO_SINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"USINT_TO_INT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"USINT_TO_DINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"USINT_TO_UINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"USINT_TO_UDINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"USINT_TO_TIME\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"USINT_TO_DT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"USINT_TO_DATE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"USINT_TO_TOD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"USINT_TO_REAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"USINT_TO_LREAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"USINT_TO_STRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"USINT_TO_WSTRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UINT_TO_BOOL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UINT_TO_BYTE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UINT_TO_WORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UINT_TO_DWORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UINT_TO_SINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UINT_TO_INT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UINT_TO_DINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UINT_TO_USINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UINT_TO_UDINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UINT_TO_TIME\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UINT_TO_DT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UINT_TO_DATE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UINT_TO_TOD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UINT_TO_REAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UINT_TO_LREAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UINT_TO_STRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UINT_TO_WSTRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UDINT_TO_BOOL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UDINT_TO_BYTE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UDINT_TO_WORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UDINT_TO_DWORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UDINT_TO_SINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UDINT_TO_INT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UDINT_TO_DINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UDINT_TO_USINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UDINT_TO_UINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UDINT_TO_TIME\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UDINT_TO_DT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UDINT_TO_DATE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UDINT_TO_TOD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UDINT_TO_REAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UDINT_TO_LREAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UDINT_TO_STRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UDINT_TO_WSTRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TIME_TO_BOOL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TIME_TO_BYTE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TIME_TO_WORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TIME_TO_DWORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TIME_TO_SINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TIME_TO_INT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TIME_TO_DINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TIME_TO_USINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TIME_TO_UINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TIME_TO_UDINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TIME_TO_DT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TIME_TO_DATE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TIME_TO_TOD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TIME_TO_REAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TIME_TO_LREAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TIME_TO_STRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TIME_TO_WSTRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DT_TO_BOOL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DT_TO_BYTE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DT_TO_WORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DT_TO_DWORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DT_TO_SINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DT_TO_INT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DT_TO_DINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DT_TO_USINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DT_TO_UINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DT_TO_UDINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DT_TO_TIME\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DT_TO_DATE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DT_TO_TOD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DT_TO_REAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DT_TO_LREAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DT_TO_STRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DT_TO_WSTRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DATE_TO_BOOL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DATE_TO_BYTE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DATE_TO_WORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DATE_TO_DWORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DATE_TO_SINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DATE_TO_INT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DATE_TO_DINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DATE_TO_USINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DATE_TO_UINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DATE_TO_UDINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DATE_TO_TIME\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DATE_TO_DT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DATE_TO_TOD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DATE_TO_REAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DATE_TO_LREAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DATE_TO_STRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DATE_TO_WSTRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TOD_TO_BOOL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TOD_TO_BYTE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TOD_TO_WORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TOD_TO_DWORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TOD_TO_SINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TOD_TO_INT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TOD_TO_DINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TOD_TO_USINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TOD_TO_UINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TOD_TO_UDINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TOD_TO_TIME\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TOD_TO_DT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TOD_TO_DATE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TOD_TO_REAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TOD_TO_LREAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TOD_TO_STRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TOD_TO_WSTRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"REAL_TO_BOOL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"REAL_TO_BYTE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"REAL_TO_WORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"REAL_TO_DWORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"REAL_TO_SINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"REAL_TO_INT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"REAL_TO_DINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"REAL_TO_USINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"REAL_TO_UINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"REAL_TO_UDINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"REAL_TO_TIME\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"REAL_TO_DT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"REAL_TO_DATE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"REAL_TO_TOD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"REAL_TO_LREAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"REAL_TO_STRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"REAL_TO_WSTRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"LREAL_TO_BOOL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"LREAL_TO_BYTE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"LREAL_TO_WORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"LREAL_TO_DWORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"LREAL_TO_SINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"LREAL_TO_INT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"LREAL_TO_DINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"LREAL_TO_USINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"LREAL_TO_UINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"LREAL_TO_UDINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"LREAL_TO_TIME\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"LREAL_TO_DT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"LREAL_TO_DATE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"LREAL_TO_TOD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"LREAL_TO_REAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"LREAL_TO_STRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"LREAL_TO_WSTRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"STRING_TO_BOOL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"STRING_TO_BYTE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"STRING_TO_WORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"STRING_TO_DWORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"STRING_TO_SINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"STRING_TO_INT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"STRING_TO_DINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"STRING_TO_USINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"STRING_TO_UINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"STRING_TO_UDINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"STRING_TO_TIME\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"STRING_TO_DT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"STRING_TO_DATE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"STRING_TO_TOD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"STRING_TO_REAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"STRING_TO_LREAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"STRING_TO_WSTRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WSTRING_TO_BOOL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WSTRING_TO_BYTE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WSTRING_TO_WORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WSTRING_TO_DWORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WSTRING_TO_SINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WSTRING_TO_INT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WSTRING_TO_DINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WSTRING_TO_USINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WSTRING_TO_UINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WSTRING_TO_UDINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WSTRING_TO_TIME\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WSTRING_TO_DT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WSTRING_TO_DATE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WSTRING_TO_TOD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WSTRING_TO_REAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WSTRING_TO_LREAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WSTRING_TO_STRING\\\" FUN\\n\"");
#endif
#ifdef _ASTIME_EXPORT
	__asm__(".ascii \"plcexport \\\"DTExSetTime\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"DTSetTime\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"DTGetTime\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"clock_ms\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UtcDTGetTime\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"UtcDTSetTime\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"UtcDTExSetTime\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"DTStructureGetTime\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"DTStructureSetTime\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"DTStructureExSetTime\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"UtcDTStructureGetTime\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"UtcDTStructureSetTime\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"UtcDTStructureExSetTime\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"UtcDT_TO_LocalDTStructure\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"LocalDT_TO_UtcDTStructure\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"UtcDTStructure_TO_LocalDT\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"LocalDTStructure_TO_UtcDT\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"ascTIMEStructure\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"ascDTStructure\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"ascTIME\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"ascDT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TIMEStructure_TO_TIME\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TIME_TO_TIMEStructure\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DTStructure_TO_DT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DT_TO_DTStructure\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DiffT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DiffDT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TimeDeviceGetInfo\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"DstGetInfo\\\" FUB\\n\"");
#endif
#ifdef _STANDARD_EXPORT
	__asm__(".ascii \"plcexport \\\"RF_TRIG\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"CTUD\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"CTD\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"CTU\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"F_TRIG\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"R_TRIG\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"SR\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"RS\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"SEMA\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"TON\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"TOF\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"TP\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"TON_10ms\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"TOF_10ms\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"TP_10ms\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"LEN\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"LEFT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"RIGHT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"MID\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"CONCAT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"INSERT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DELETE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"REPLACE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"FIND\\\" FUN\\n\"");
#endif
#ifdef _ASBRSTR_EXPORT
	__asm__(".ascii \"plcexport \\\"brsftoa\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"brsatof\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"brsitoa\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"brsatoi\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"brsmemset\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"brsmemcpy\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"brsmemmove\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"brsmemcmp\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"brsstrcat\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"brsstrlen\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"brsstrcpy\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"brsstrcmp\\\" FUN\\n\"");
#endif
#ifdef _FILEIO_EXPORT
	__asm__(".ascii \"plcexport \\\"FileCreate\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"FileOpen\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"FileClose\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"FileRead\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"FileReadEx\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"FileWrite\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"FileWriteEx\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"FileRename\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"FileCopy\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"FileDelete\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"FileInfo\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"FileTruncate\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"DirCreate\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"DirOpen\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"DirClose\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"DirRead\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"DirReadEx\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"DirInfo\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"DirRename\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"DirCopy\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"DirDelete\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"DirDeleteEx\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"SetAttributes\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"GetAttributes\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"DevMemInfo\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"DevLink\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"DevUnlink\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"GetVolumeLabel\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"GetVolumeSerialNo\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"FileIoGetSysError\\\" FUN\\n\"");
#endif
#ifdef _SYS_LIB_EXPORT
	__asm__(".ascii \"plcexport \\\"Byte2Bit\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"Bit2Byte\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"KEY_read\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"KEY_enadis\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DA_fix\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DA_info\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DA_copy\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DA_store\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DA_burn\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DA_delete\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DA_ident\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DA_read\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DA_write\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DA_create\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DIS_clr\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DIS_chr\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DIS_str\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"ERRxfatal\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"ERR_read\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"ERRxread\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"ERR_fatal\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"ERR_warning\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"ERRxwarning\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SM_release\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SM_attach\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SM_delete\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SM_ident\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SM_create\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TIM_ticks\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TIM_musec\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SW_settime\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SW_gettime\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"RTC_settime\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"RTC_gettime\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TMP_free\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TMP_alloc\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"MEM_free\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"MEM_alloc\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"AVT_info\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"AVT_release\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"AVT_attach\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"AVT_ident\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"AVT_cancel\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"AVT_create\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UT_sleep\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UT_exit\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UT_freemsg\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UT_recmsg\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UT_sendmsg\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UT_resume\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UT_suspend\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UT_ident\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"ST_name\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"ST_info\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"ST_allsuspend\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"ST_tmp_resume\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"ST_tmp_suspend\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"ST_resume\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"ST_suspend\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"ST_ident\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"FORCE_info\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"MO_ver\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"MO_list\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"MO_info\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"SYS_battery\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SYSreset\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SYSxinfo\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SYS_info\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"PV_xlist\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"PV_ninfo\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"PV_item\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"PV_ident\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"PV_list\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"PV_info\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"PV_xgetval\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"PV_xsetval\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"PV_xgetadr\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"PV_getadr\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"PV_getval\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"PV_setval\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"slMoList\\\" FUB\\n\"");
#endif
#ifdef _SC_EXPORT
	__asm__(".ascii \"plcexport \\\"SequenceControl\\\" FUN\\n\"");
#endif
#ifdef _IECCHECK_EXPORT
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
#endif

__asm__(".previous");


#endif /* _LIBRARIES_20210524084633_ */

