
ACTION VystupnyDotlacac: 

    //Volanie funkcie SequenceControl//
    SequenceControl(SC:= SC_VystupnyDotlacac);
	
	
	
    CASE SC_VystupnyDotlacac.Step OF
		
        0:
            SC_VystupnyDotlacac.StepName:= '0 - Nulovanie';
            VystupnyDotlacac_VYSUN:= FALSE;
            VystupnyDotlacac_ZASUN:= FALSE;
            (*Preklapac.OUT.VystupnyDotlacac_VYSUN_YV3:= FALSE;*)
            
            
            IF SC_Preklapac.Step <> 0 THEN
                SC_VystupnyDotlacac.ResetStep:= TRUE;
                SC_VystupnyDotlacac.Step:= 1;
            END_IF
		
        1:
            SC_VystupnyDotlacac.StepName:= '1 - Rozhodnutie o cinnosti';
            IF VystupnyDotlacac_VYSUN THEN
                SC_VystupnyDotlacac.Step:= 10;
            ELSIF VystupnyDotlacac_ZASUN THEN
                SC_VystupnyDotlacac.Step:= 20;
            END_IF
	
        10:
            SC_VystupnyDotlacac.StepName:= '10 - Vysunutie dotlacaca';
            SC_VystupnyDotlacac.IdleTime.PT:= T#3s;
            SC_VystupnyDotlacac.AlarmTime.PT:= T#3s;
			
            IF Preklapac.Automat THEN
                SC_VystupnyDotlacac.AlarmTime.IN:= TRUE;
            ELSE	
                SC_VystupnyDotlacac.IdleTime.IN:= TRUE;
            END_IF
		
            IF NOT SC_VystupnyDotlacac.Switch1 THEN
                Preklapac.OUT.VystupnyDotlacac_VYSUN_YV3:= TRUE;
                SC_VystupnyDotlacac.IdleTime.IN:= TRUE;
                SC_VystupnyDotlacac.Switch1:= TRUE;
            END_IF
		
           		
            IF Preklapac.IN.VystupnyDotlacac_VYSUNUTY_MS3 OR SC_VystupnyDotlacac.IdleTime.Q THEN
                SC_VystupnyDotlacac.ResetStep:= TRUE;
                SC_VystupnyDotlacac.Step:= 0;
            ELSIF SC_VystupnyDotlacac.AlarmTime.Q THEN  
                SC_VystupnyDotlacac.ResetStep:= TRUE;
                SC_VystupnyDotlacac.Step:= 15;
            END_IF
		
		15:
			SC_VystupnyDotlacac.StepName:= '15 - Zasunutie dotlacaca pri poruche';
			SC_VystupnyDotlacac.IdleTime.PT:= T#3s;
			SC_VystupnyDotlacac.AlarmTime.PT:= T#3s;
			
			Preklapac.OUT.VystupnyDotlacac_VYSUN_YV3:= FALSE;
			Alarmy[9]:= TRUE;
			SC_VystupnyDotlacac.ResetStep:= TRUE;
			SC_VystupnyDotlacac.Step:= 0;
			
			
			
			
			
        20:
            SC_VystupnyDotlacac.StepName:= '20 - Zasunutie dotlacaca';
            SC_VystupnyDotlacac.IdleTime.PT:= T#3s;
            SC_VystupnyDotlacac.AlarmTime.PT:= T#3s;
			
            IF Preklapac.Automat THEN
                SC_VystupnyDotlacac.AlarmTime.IN:= TRUE;
            ELSE	
                SC_VystupnyDotlacac.IdleTime.IN:= TRUE;
            END_IF
		
            IF NOT SC_VystupnyDotlacac.Switch1 THEN
                Preklapac.OUT.VystupnyDotlacac_VYSUN_YV3:= FALSE;
                SC_VystupnyDotlacac.Switch1:= TRUE;
            END_IF
		
            IF Preklapac.IN.VystupnyDotlacac_ZASUNUTY_MS4 OR SC_VystupnyDotlacac.IdleTime.Q THEN
                SC_VystupnyDotlacac.ResetStep:= TRUE;
                SC_VystupnyDotlacac.Step:= 0;
            ELSIF SC_VystupnyDotlacac.AlarmTime.Q THEN  
                Alarmy[10]:= TRUE;
                SC_VystupnyDotlacac.ResetStep:= TRUE;
                SC_VystupnyDotlacac.Step:= 0;
            END_IF
		
            
		
		
		
		
    END_CASE
    
    
    
END_ACTION
