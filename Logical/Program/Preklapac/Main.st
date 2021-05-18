
PROGRAM _INIT
	(* Insert code here *)
	 
END_PROGRAM

PROGRAM _CYCLIC
	
    
    //Volanie funkcie SequenceControl//
    SequenceControl(SC:= SC_Preklapac);
    
    
    //Volanie podprogramov//
    VstupnyDotlacac;
    Zdvih;
    VystupnyDotlacac;
	 
    //Reset sekcie //
    IF NOT Zariadenie.IN.Safety_Aktivne_KF1 THEN
        SC_Preklapac.Step:= 0;
    ELSIF NastalaPorucha THEN
        SC_Preklapac.Step:= 0;
    ELSIF Preklapac.Reset THEN
        SC_Preklapac.Step:= 0;
    END_IF    
    
    CASE SC_Preklapac.Step OF 
	
        0:
            SC_Preklapac.StepName:='0 - Nulovanie';
            Preklapac.Automat:= FALSE;
            Preklapac.KoniecCyklu:= FALSE;
            Preklapac.Manual:= FALSE;
            Preklapac.Reset:= FALSE;
            Preklapac.STAV.PoINIT:= FALSE;
            SC_VstupnyDotlacac.Step:= 0;
            SC_Zdvih.Step:= 0;
            SC_VystupnyDotlacac.Step:= 0;
                        
            IF Zariadenie.IN.Safety_Aktivne_KF1 AND NOT NastalaPorucha THEN
                SC_Preklapac.ResetStep:= TRUE;
                SC_Preklapac.Step:= 1;
            END_IF
	
        1:
            SC_Preklapac.StepName:='1 - Cakam na spustenie vyroby';
            IF Preklapac.Automat THEN
                SC_Preklapac.Step:= 2;
            ELSIF Preklapac.Manual THEN
                SC_Preklapac.Step:= 700;
            END_IF
			
		
        //********************************************************Inicializácia****************************************************************************//	 
    
        2:
            SC_Preklapac.StepName:='2 - Inicializacia - cakam na spustenie inicializacie';
            SC_Preklapac.IdleTime.PT:= T#500ms;
            SC_Preklapac.AlarmTime.PT:= T#5s;
			
            SC_Preklapac.IdleTime.IN:= TRUE;
                        
            IF SC_Preklapac.IdleTime.Q THEN
                SC_Preklapac.ResetStep:= TRUE;
                SC_Preklapac.Step:= 3;
            END_IF
    
        3:
            SC_Preklapac.StepName:='3 - Inicializacia - cakam na zasunutie vstupneho a vystupneho dotlacaca';
            SC_Preklapac.IdleTime.PT:= T#500ms;
            SC_Preklapac.AlarmTime.PT:= T#5s; 
    
            IF NOT SC_Preklapac.Switch1 THEN
                VstupnyDotlacac_ZASUN:= TRUE;
                VystupnyDotlacac_ZASUN:= TRUE;
                SC_Preklapac.Switch1:= TRUE;
            END_IF
        
            IF Preklapac.IN.VstupnyDotlacac_ZASUNUTY_MS2 AND Preklapac.IN.VystupnyDotlacac_ZASUNUTY_MS4 THEN
                SC_Preklapac.ResetStep:= TRUE;
                SC_Preklapac.Step:= 5;
            END_IF
        
        5:
            SC_Preklapac.StepName:='5 - Inicializacia - cakam na presun zdvihu do spodnej polohy';
            SC_Preklapac.IdleTime.PT:= T#500ms;
            SC_Preklapac.AlarmTime.PT:= T#5s; 
        
            IF NOT SC_Preklapac.Switch1 THEN
                Zdvih_ZASUN:= TRUE;
                SC_Preklapac.Switch1:= TRUE;
            END_IF
        
            IF Preklapac.IN.Vytah_SpodnaPoloha_MS6 THEN
                SC_Preklapac.ResetStep:= TRUE;
                SC_Preklapac.Step:= 10;        
            END_IF
        
        10:
            SC_Preklapac.StepName:='10 - Inicializacia - kontrolujem pritomnost rotorov na zdvihu';
            SC_Preklapac.IdleTime.PT:= T#500ms;
            SC_Preklapac.AlarmTime.PT:= T#5s; 
        
            IF Preklapac.IN.Vytah_Pozicia1_PritomRotora_OS1 OR Preklapac.IN.Vytah_Pozicia2_PritomRotora_OS2 THEN
                Preklapac.STAV.PoINIT:= TRUE;
                SC_Preklapac.ResetStep:= TRUE;
                SC_Preklapac.Step:= 115;
            ELSE
                Preklapac.STAV.PoINIT:= TRUE;
                SC_Preklapac.ResetStep:= TRUE;
                SC_Preklapac.Step:= 100;
            END_IF
        
        
        
            //********************************************************Automatický režim****************************************************************************//
        
        100:  
            SC_Preklapac.StepName:='100 - Automaticky Rezim - cakam na prichod rotora';
            SC_Preklapac.IdleTime.PT:= T#500ms;
            SC_Preklapac.AlarmTime.PT:= T#5s; 
        
            SC_Preklapac.IdleTime.IN:= Preklapac.IN.VstupnyDotlacac_PritomRotora_IS1;
            
            IF Preklapac.KoniecCyklu THEN
                SC_Preklapac.ResetStep:= TRUE;
                SC_Preklapac.Step:= 0;
            ELSIF SC_Preklapac.IdleTime.Q THEN
                SC_Preklapac.ResetStep:= TRUE;
                SC_Preklapac.Step:= 108;
            END_IF
        
        
        108:
            SC_Preklapac.StepName:='108 - Automaticky Rezim - cakam na vysunutie vstupneho dotlacaca';
            SC_Preklapac.IdleTime.PT:= T#500ms;
            SC_Preklapac.AlarmTime.PT:= T#5s; 
        
            SC_Preklapac.IdleTime.IN:= Preklapac.IN.VstupnyDotlacac_VYSUNUTY_MS1;
            
            IF NOT SC_Preklapac.Switch1 AND Preklapac.IN.Vytah_SpodnaPoloha_MS6 THEN
                VstupnyDotlacac_VYSUN:= TRUE;
                SC_Preklapac.Switch1:= TRUE;
            END_IF
        
            IF Preklapac.IN.VstupnyDotlacac_VYSUNUTY_MS1 AND SC_Preklapac.IdleTime.Q THEN
                SC_Preklapac.ResetStep:= TRUE;
                SC_Preklapac.Step:= 110;
            END_IF 
        
        110:
            SC_Preklapac.StepName:='110 - Automaticky Rezim - cakam na zasunutie vstupneho dotlacaca';
            SC_Preklapac.IdleTime.PT:= T#500ms;
            SC_Preklapac.AlarmTime.PT:= T#5s; 
        
            IF NOT SC_Preklapac.Switch1 THEN
                VstupnyDotlacac_ZASUN:= TRUE;
                SC_Preklapac.Switch1:= TRUE;
            END_IF
        
            IF Preklapac.IN.VstupnyDotlacac_ZASUNUTY_MS2 THEN
                SC_Preklapac.ResetStep:= TRUE;
                SC_Preklapac.Step:= 115;
            END_IF 
        
        115:
            SC_Preklapac.StepName:='115 - Automaticky Rezim - kontrolujem pocet kusov na zdvihu';
            SC_Preklapac.IdleTime.PT:= T#500ms;
            SC_Preklapac.AlarmTime.PT:= T#5s; 
        
            IF Preklapac.IN.Vytah_Pozicia1_PritomRotora_OS1 AND Preklapac.IN.Vytah_Pozicia2_PritomRotora_OS2 THEN
                SC_Preklapac.ResetStep:= TRUE;
                SC_Preklapac.Step:= 120;
            ELSE
                SC_Preklapac.ResetStep:= TRUE;
                SC_Preklapac.Step:= 100;
            END_IF    
        
        120:
            SC_Preklapac.StepName:='120 - Automaticky Rezim - cakam na presun zdvihu do hornej polohy';
            SC_Preklapac.IdleTime.PT:= T#500ms;
            SC_Preklapac.AlarmTime.PT:= T#5s; 
        
            SC_Preklapac.IdleTime.IN:= Preklapac.IN.Vytah_HornaPoloha_MS5;
            
            IF NOT SC_Preklapac.Switch1 AND Preklapac.IN.VstupnyDotlacac_ZASUNUTY_MS2 AND Preklapac.IN.VystupnyDotlacac_ZASUNUTY_MS4 THEN
                Zdvih_VYSUN:= TRUE;
                SC_Preklapac.Switch1:= TRUE;
            END_IF
        
            IF Preklapac.IN.Vytah_HornaPoloha_MS5 AND SC_Preklapac.IdleTime.Q THEN
                SC_Preklapac.ResetStep:= TRUE;
                SC_Preklapac.Step:= 125;
            END_IF
        
        125:
            SC_Preklapac.StepName:='125 - Automaticky Rezim - kontrola zaplnenia vystupneho dopravnika';
            SC_Preklapac.IdleTime.PT:= T#500ms;
            SC_Preklapac.AlarmTime.PT:= T#5s;     
        
            SC_Preklapac.AlarmTime.IN:= Preklapac.KoniecCyklu;
            
            SC_Preklapac.IdleTime.IN:= NOT Preklapac.IN.VystupnyDopravnik_PLNY_OS3;
        
            IF SC_Preklapac.IdleTime.Q THEN
                SC_Preklapac.ResetStep:= TRUE;
                SC_Preklapac.Step:= 128;
            ELSIF SC_Preklapac.AlarmTime.Q THEN
                SC_Preklapac.ResetStep:= TRUE;
                SC_Preklapac.Step:= 0;
            END_IF
                
        
        128:
            SC_Preklapac.StepName:='128 - Automaticky Rezim - cakam na vysunutie vystupneho dotlacaca';
            SC_Preklapac.IdleTime.PT:= T#500ms;
            SC_Preklapac.AlarmTime.PT:= T#5s;
        
            SC_Preklapac.IdleTime.IN:= Preklapac.IN.VystupnyDotlacac_VYSUNUTY_MS3;
            
            IF NOT SC_Preklapac.Switch1 AND Preklapac.IN.Vytah_HornaPoloha_MS5 THEN
                VystupnyDotlacac_VYSUN:= TRUE;
                SC_Preklapac.Switch1:= TRUE;
            END_IF
        
            IF Preklapac.IN.VystupnyDotlacac_VYSUNUTY_MS3 AND SC_Preklapac.IdleTime.Q THEN
                SC_Preklapac.ResetStep:= TRUE;
                SC_Preklapac.Step:= 130;
            END_IF 
        
        
        130:
            SC_Preklapac.StepName:='130 - Automaticky Rezim - cakam na zasunutie vystupneho dotlacaca';
            SC_Preklapac.IdleTime.PT:= T#500ms;
            SC_Preklapac.AlarmTime.PT:= T#5s;
        
            IF NOT SC_Preklapac.Switch1 THEN
                VystupnyDotlacac_ZASUN:= TRUE;
                SC_Preklapac.Switch1:= TRUE;
            END_IF
        
            IF Preklapac.IN.VystupnyDotlacac_ZASUNUTY_MS4 THEN
                SC_Preklapac.ResetStep:= TRUE;
                SC_Preklapac.Step:= 135;
            END_IF 
        
        135:
            SC_Preklapac.StepName:='135 - Automaticky Rezim - cakam na presun zdvihu do spodnej polohy';
            SC_Preklapac.IdleTime.PT:= T#500ms;
            SC_Preklapac.AlarmTime.PT:= T#5s; 
        
            SC_Preklapac.IdleTime.IN:= Preklapac.IN.Vytah_SpodnaPoloha_MS6;
            
            IF NOT SC_Preklapac.Switch1 AND Preklapac.IN.VstupnyDotlacac_ZASUNUTY_MS2 AND Preklapac.IN.VystupnyDotlacac_ZASUNUTY_MS4 THEN
                Zdvih_ZASUN:= TRUE;
                SC_Preklapac.Switch1:= TRUE;
            END_IF
        
            IF Preklapac.IN.Vytah_SpodnaPoloha_MS6 THEN
                SC_Preklapac.ResetStep:= TRUE;
                SC_Preklapac.Step:= 100;
            END_IF
        
        
        
            //*******************************************Manuálny režim***************************************************************//
        700:
            SC_Preklapac.StepName:='700 - Manualny rezim';
            SC_Preklapac.IdleTime.PT:= T#3s;
            SC_Preklapac.AlarmTime.PT:= T#5s;	
		
        
        
        
        
                
    END_CASE
    
    
END_PROGRAM

PROGRAM _EXIT
	(* Insert code here *)
	 
END_PROGRAM

