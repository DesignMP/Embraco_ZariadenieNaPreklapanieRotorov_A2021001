
ACTION Zdvih: 

    //Volanie funkcie SequenceControl//
    SequenceControl(SC:= SC_Zdvih);
	
	
	
    CASE SC_Zdvih.Step OF
		
        0:
            SC_Zdvih.StepName:= '0 - Nulovanie';
            Zdvih_VYSUN:= FALSE;
            Zdvih_ZASUN:= FALSE;
//            Preklapac.OUT.Vytah_ZDVIH_YV5:= FALSE;
//            Preklapac.OUT.Vytah_ZOSTUP_YV6:= FALSE;
            
            IF SC_Preklapac.Step <> 0 THEN
                SC_Zdvih.ResetStep:= TRUE;
                SC_Zdvih.Step:= 1;
            END_IF
		
        1:
            SC_Zdvih.StepName:= '1 - Rozhodnutie o cinnosti';
            IF Zdvih_VYSUN THEN
                SC_Zdvih.Step:= 10;
            ELSIF Zdvih_ZASUN THEN
                SC_Zdvih.Step:= 20;
            END_IF
	
        10:
            SC_Zdvih.StepName:= '10 - Vysunutie zdvihu';
            SC_Zdvih.IdleTime.PT:= T#3s;
            SC_Zdvih.AlarmTime.PT:= T#3s;
			
            IF Preklapac.Automat THEN
                SC_Zdvih.AlarmTime.IN:= TRUE;
            ELSE	
                SC_Zdvih.IdleTime.IN:= TRUE;
            END_IF
		
            IF NOT SC_Zdvih.Switch1 THEN
                Preklapac.OUT.Vytah_ZOSTUP_YV6:= FALSE;
                Preklapac.OUT.Vytah_ZDVIH_YV5:= TRUE;
                SC_Zdvih.IdleTime.IN:= TRUE;
                SC_Zdvih.Switch1:= TRUE;
            END_IF
		
           		
            IF Preklapac.IN.Vytah_HornaPoloha_MS5 OR SC_Zdvih.IdleTime.Q THEN
                SC_Zdvih.ResetStep:= TRUE;
                SC_Zdvih.Step:= 0;
            ELSIF SC_Zdvih.AlarmTime.Q THEN  
                SC_Zdvih.ResetStep:= TRUE;
                SC_Zdvih.Step:= 15;
            END_IF
		
			
		15:
			SC_Zdvih.StepName:= '15 - Zasunutie zdvihu pri poruche';
			SC_Zdvih.IdleTime.PT:= T#3s;
			SC_Zdvih.AlarmTime.PT:= T#3s;
			
			Preklapac.OUT.Vytah_ZDVIH_YV5:= FALSE;
			Preklapac.OUT.Vytah_ZOSTUP_YV6:= TRUE;
			Alarmy[7]:= TRUE;
			SC_Zdvih.ResetStep:= TRUE;
			SC_Zdvih.Step:= 0;
			
			
        20:
            SC_Zdvih.StepName:= '20 - Zasunutie zdvihu';
            SC_Zdvih.IdleTime.PT:= T#3s;
            SC_Zdvih.AlarmTime.PT:= T#3s;
			
            IF Preklapac.Automat THEN
                SC_Zdvih.AlarmTime.IN:= TRUE;
            ELSE	
                SC_Zdvih.IdleTime.IN:= TRUE;
            END_IF
		
            IF NOT SC_Zdvih.Switch1 THEN
                Preklapac.OUT.Vytah_ZDVIH_YV5:= FALSE;
                Preklapac.OUT.Vytah_ZOSTUP_YV6:= TRUE;
                SC_Zdvih.Switch1:= TRUE;
            END_IF
		
            IF Preklapac.IN.Vytah_SpodnaPoloha_MS6 OR SC_Zdvih.IdleTime.Q THEN
                SC_Zdvih.ResetStep:= TRUE;
                SC_Zdvih.Step:= 0;
            ELSIF SC_Zdvih.AlarmTime.Q THEN  
                Alarmy[8]:= TRUE;
                SC_Zdvih.ResetStep:= TRUE;
                SC_Zdvih.Step:= 0;
            END_IF
		
            
		
		
		
		
    END_CASE
    
    
END_ACTION
