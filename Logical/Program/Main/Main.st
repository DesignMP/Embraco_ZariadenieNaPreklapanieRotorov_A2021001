
PROGRAM _INIT

END_PROGRAM

PROGRAM _CYCLIC
	
    //****************************************Príznak hardware pracoviska OK***********************************//
    
    IF Hardware.KartaAB2_CANSlave_OK
        AND Hardware.KartaAB3_16DI_OK
        AND Hardware.KartaAB4_16DO_OK THEN
        Zariadenie.STAV.Hardware_OK:= TRUE; 
    ELSE
        Zariadenie.STAV.Hardware_OK:= FALSE;
    END_IF
	

    //***************************************Ovládanie majáka**************************************************//
    //Zelene svetlo//
    IF Zariadenie.STAV.Automat THEN
        Zariadenie.OUT.Majak_ZeleneSvetlo:= TRUE;
    ELSIF Zariadenie.STAV.Manual THEN
        Zariadenie.OUT.Majak_ZeleneSvetlo:= Blikac500ms;
    ELSE
        Zariadenie.OUT.Majak_ZeleneSvetlo:= FALSE;
    END_IF    
    
    //Žlté svetlo//
    IF Zariadenie.STAV.Automat AND NOT Zariadenie.STAV.PoINIT THEN
        Zariadenie.OUT.Majak_ZlteSvetlo:= Blikac500ms;
    ELSE
        Zariadenie.OUT.Majak_ZlteSvetlo:= FALSE;
    END_IF    
    
    //Èervené svetlo//
    IF NastalaPorucha THEN
        Zariadenie.OUT.Majak_CerveneSvetlo:= TRUE; 
    ELSIF NOT Zariadenie.IN.Safety_Aktivne_KF1 THEN
        Zariadenie.OUT.Majak_CerveneSvetlo:= TRUE;
    ELSE
        Zariadenie.OUT.Majak_CerveneSvetlo:= FALSE;
    END_IF   
    
    //Húkaèka//
    IF EDGEPOS(NastalaPorucha) THEN
        Zariadenie.Majak_HukackaON:= TRUE;
    END_IF
    
    IF Zariadenie.Majak_HukackaON THEN
        Zariadenie.OUT.Majak_Hukacka:= Blikac500ms;
    ELSE
        Zariadenie.OUT.Majak_Hukacka:= FALSE;
    END_IF   
    
    
    //**************************************Ukonèenie pracovného cyklu na pracovisku**********************************************//
    IF Zariadenie.KoniecCyklu THEN
        Zariadenie.STAV.UkoncenieCyklu_BUSY:= TRUE;
        IF Preklapac.Automat THEN
            Preklapac.KoniecCyklu:= TRUE;
        END_IF
        Zariadenie.KoniecCyklu:= FALSE;
    END_IF  
    
    IF NOT Zariadenie.STAV.Automat THEN
        Zariadenie.STAV.UkoncenieCyklu_BUSY:= FALSE;
    END_IF
    
    
    //****************************************Resetovanie pracoviska****************************************************************//
    //Normálne//
    IF Zariadenie.Reset THEN
        Preklapac.Reset:= TRUE;
        Zariadenie.Reset:= FALSE;
    END_IF
    
        
    //Pri stlaèení tlaèítka Automat//
    IF Vizu.TL_RezimAutomat THEN
        IF Zariadenie.STAV.Manual THEN
            Zariadenie.Reset:= TRUE;
        END_IF
        Vizu.TL_RezimAutomat:= FALSE;
    END_IF
    
    
    //**************************************Manuálny režim pracoviska*************************************************************//
    IF Zariadenie.Manual THEN
        Preklapac.Manual:= TRUE;
        Zariadenie.Manual:= FALSE;
    END_IF
    
    
    //Príznak je zvolený režim Manuál//
    IF Preklapac.Manual THEN
        Zariadenie.STAV.Manual:= TRUE;
    ELSE
        Zariadenie.STAV.Manual:= FALSE;
    END_IF    
    
    
    //***************************************Automatický režim pracoviska**********************************************************//
    IF Zariadenie.Automat THEN
        IF Zariadenie.STAV.Hardware_OK THEN
            Preklapac.Automat:= TRUE;
        END_IF    
        Zariadenie.Automat:= FALSE;
    END_IF
    
    
    //Príznak je zvolený režim Automat//
    IF Preklapac.Automat THEN
        Zariadenie.STAV.Automat:= TRUE;
    ELSE
        Zariadenie.STAV.Automat:= FALSE;
    END_IF   
    
    //Príznak Zariadenie je po inicializácii//
    IF Preklapac.STAV.PoINIT THEN
        Zariadenie.STAV.PoINIT:= TRUE;
    ELSE    
        Zariadenie.STAV.PoINIT:= FALSE;
    END_IF
    
    //****************************************Príznak Zariadenie pripravené na spustenie********************************************//
    IF SC_Preklapac.Step = 1 THEN
        Zariadenie.STAV.READY_TO_START:= TRUE;
    ELSE    
        Zariadenie.STAV.READY_TO_START:= FALSE;
    END_IF 
    
    
    
	
	
END_PROGRAM

PROGRAM _EXIT
	(* Insert code here *)
	 
END_PROGRAM

