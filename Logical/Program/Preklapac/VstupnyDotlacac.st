
ACTION VstupnyDotlacac: 

    //Volanie funkcie SequenceControl//
    SequenceControl(SC:= SC_VstupnyDotlacac);
	
	
	
    CASE SC_VstupnyDotlacac.Step OF
		
        0:
            SC_VstupnyDotlacac.StepName:= '0 - Nulovanie';
            VstupnyDotlacac_VYSUN:= FALSE;
            VstupnyDotlacac_ZASUN:= FALSE;
            Preklapac.OUT.VstupnyDotlacac_VYSUN_YV1:= FALSE;
            Preklapac.OUT.VstupnyDotlacac_ZASUN_YV2:= FALSE;
            
            IF SC_Preklapac.Step <> 0 THEN
                SC_VstupnyDotlacac.ResetStep:= TRUE;
                SC_VstupnyDotlacac.Step:= 1;
            END_IF
		
        1:
            SC_VstupnyDotlacac.StepName:= '1 - Rozhodnutie o cinnosti';
            IF VstupnyDotlacac_VYSUN THEN
                SC_VstupnyDotlacac.Step:= 10;
            ELSIF VstupnyDotlacac_ZASUN THEN
                SC_VstupnyDotlacac.Step:= 20;
            END_IF
	
        10:
            SC_VstupnyDotlacac.StepName:= '10 - Vysunutie dotlacaca';
            SC_VstupnyDotlacac.IdleTime.PT:= T#3s;
            SC_VstupnyDotlacac.AlarmTime.PT:= T#3s;
			
            IF Preklapac.Automat THEN
                SC_VstupnyDotlacac.AlarmTime.IN:= TRUE;
            ELSE	
                SC_VstupnyDotlacac.IdleTime.IN:= TRUE;
            END_IF
		
            IF NOT SC_VstupnyDotlacac.Switch1 THEN
                Preklapac.OUT.VstupnyDotlacac_ZASUN_YV2:= FALSE;
                Preklapac.OUT.VstupnyDotlacac_VYSUN_YV1:= TRUE;
                SC_VstupnyDotlacac.IdleTime.IN:= TRUE;
                SC_VstupnyDotlacac.Switch1:= TRUE;
            END_IF
		
           		
            IF Preklapac.IN.VstupnyDotlacac_VYSUNUTY_MS1 OR SC_VstupnyDotlacac.IdleTime.Q THEN
                SC_VstupnyDotlacac.ResetStep:= TRUE;
                SC_VstupnyDotlacac.Step:= 0;
            ELSIF SC_VstupnyDotlacac.AlarmTime.Q THEN  
                Alarmy[5]:= TRUE;
                SC_VstupnyDotlacac.ResetStep:= TRUE;
                SC_VstupnyDotlacac.Step:= 0;
            END_IF
		
			
			
        20:
            SC_VstupnyDotlacac.StepName:= '20 - Zasunutie dotlacaca';
            SC_VstupnyDotlacac.IdleTime.PT:= T#3s;
            SC_VstupnyDotlacac.AlarmTime.PT:= T#3s;
			
            IF Preklapac.Automat THEN
                SC_VstupnyDotlacac.AlarmTime.IN:= TRUE;
            ELSE	
                SC_VstupnyDotlacac.IdleTime.IN:= TRUE;
            END_IF
		
            IF NOT SC_VstupnyDotlacac.Switch1 THEN
                Preklapac.OUT.VstupnyDotlacac_VYSUN_YV1:= FALSE;
                Preklapac.OUT.VstupnyDotlacac_ZASUN_YV2:= TRUE;
                SC_VstupnyDotlacac.Switch1:= TRUE;
            END_IF
		
            IF Preklapac.IN.VstupnyDotlacac_ZASUNUTY_MS2 OR SC_VstupnyDotlacac.IdleTime.Q THEN
                SC_VstupnyDotlacac.ResetStep:= TRUE;
                SC_VstupnyDotlacac.Step:= 0;
            ELSIF SC_VstupnyDotlacac.AlarmTime.Q THEN  
                Alarmy[6]:= TRUE;
                SC_VstupnyDotlacac.ResetStep:= TRUE;
                SC_VstupnyDotlacac.Step:= 0;
            END_IF
		
            
		
		
		
		
    END_CASE
    
    
    
END_ACTION
