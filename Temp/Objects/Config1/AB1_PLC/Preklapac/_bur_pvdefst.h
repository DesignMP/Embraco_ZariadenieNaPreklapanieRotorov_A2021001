struct TON
{	plctime PT;
	plctime ET;
	plctime StartTime;
	unsigned long Restart;
	plcbit IN;
	plcbit Q;
	plcbit M;
};
_BUR_PUBLIC void TON(struct TON* inst);
#ifndef __AS__TYPE_SequenceControlTyp
#define __AS__TYPE_SequenceControlTyp
typedef struct SequenceControlTyp
{	plcstring StepName[201];
	unsigned short Step;
	plcbit Switch1;
	plcbit Switch2;
	plcbit Switch3;
	plcbit ResetStep;
	plcbit LastStep;
	struct TON IdleTime;
	struct TON AlarmTime;
} SequenceControlTyp;
#endif

_BUR_LOCAL SequenceControlTyp SC_VstupnyDotlacac;
_BUR_LOCAL plcbit VstupnyDotlacac_VYSUN;
_BUR_LOCAL plcbit VstupnyDotlacac_ZASUN;
_BUR_LOCAL SequenceControlTyp SC_Zdvih;
_BUR_LOCAL plcbit Zdvih_VYSUN;
_BUR_LOCAL plcbit Zdvih_ZASUN;
_BUR_LOCAL SequenceControlTyp SC_VystupnyDotlacac;
_BUR_LOCAL plcbit VystupnyDotlacac_VYSUN;
_BUR_LOCAL plcbit VystupnyDotlacac_ZASUN;
