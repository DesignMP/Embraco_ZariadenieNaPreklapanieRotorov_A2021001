
PROGRAM _INIT
	CasZobrazeniaUvodnejObrazovky.IN:= TRUE;
	
END_PROGRAM

PROGRAM _CYCLIC
	
    //*********************************************Zobrazenie úvodnej obrazovky**********************************************//
    IF NOT CasZobrazeniaUvodnejObrazovky.Q THEN
        Vizu.CisloZadanejObrazovky:= 0;
        IF EDGEPOS (Blikac500ms = TRUE) THEN
            IF Vizu.Slider < 30 THEN
                Vizu.Slider:= Vizu.Slider+1;
            ELSE 
                Vizu.Slider:= 0;
            END_IF
        END_IF
    END_IF
    
    CasZobrazeniaUvodnejObrazovky.PT:= T#20s;
    CasZobrazeniaUvodnejObrazovky();
    
    //******************************************************Podsvietenie tlaèítok**********************************************************//
    //Tlaèítko Reset CS//
    IF Zariadenie.IN.Safety_SpatnaVazba_KF1 AND NOT Zariadenie.IN.Safety_Aktivne THEN
        Vizu.PodsvietenieTlacitka_ResetCS:= Blikac500ms;
    ELSIF Zariadenie.IN.Safety_Aktivne THEN
        Vizu.PodsvietenieTlacitka_ResetCS:= 2;
    ELSE	
        Vizu.PodsvietenieTlacitka_ResetCS:= 3;
    END_IF	
    
    //Tlaèítko alarmy//
    IF NastalaPorucha THEN
        Vizu.FarbaTlacitkaAlarm_Index:= Blikac500ms;
    ELSE
        Vizu.FarbaTlacitkaAlarm_Index:= FALSE;
    END_IF
    
    //************************************Prepnutie na obrazovku Automatického režimu******************************************//
    IF EDGEPOS (CasZobrazeniaUvodnejObrazovky.Q = TRUE) THEN
        Vizu.CisloZadanejObrazovky:= 2;
    END_IF 
    
    //*************************************************Zamknutie tlaèítok*******************************************************//
    //Tlaèítko režim manual//
    IF Zariadenie.STAV.Automat THEN
		Vizu.TL_RezimManual_DISABLE:= TRUE;
	ELSIF NOT Zariadenie.IN.Safety_Aktivne THEN
		Vizu.TL_RezimManual_DISABLE:= TRUE;
    ELSE 
        Vizu.TL_RezimManual_DISABLE:= FALSE;
    END_IF
    
    
    //Tlaèítko Štart Automat//
    IF NOT Zariadenie.IN.Safety_Aktivne THEN
        Vizu.TL_StartAutomat_DISABLE:= TRUE;
    ELSIF NastalaPorucha THEN
        Vizu.TL_StartAutomat_DISABLE:= TRUE;
    ELSIF NOT Zariadenie.STAV.READY_TO_START THEN
        Vizu.TL_StartAutomat_DISABLE:= TRUE;
    ELSIF Zariadenie.STAV.Automat THEN
		Vizu.TL_StartAutomat_DISABLE:= TRUE;
	ELSIF NOT Preklapac.IN.VystupnyDopravnik_StavOK THEN
		Vizu.TL_StartAutomat_DISABLE:= TRUE;
    ELSE    
        Vizu.TL_StartAutomat_DISABLE:= FALSE;
    END_IF    
    
    //Tlaèítko Ukonèenie cyklu//
    IF Zariadenie.STAV.PoINIT THEN
        Vizu.TL_UkoncenieCyklu_DISABLE:= FALSE; 
    ELSE
        Vizu.TL_UkoncenieCyklu_DISABLE:= TRUE;
    END_IF    
    
    //Tlaèítko Reset//
    IF Zariadenie.STAV.PoINIT AND NOT Zariadenie.STAV.UkoncenieCyklu_BUSY THEN
        Vizu.TL_Reset_DISABLE:= TRUE;
    ELSE    
        Vizu.TL_Reset_DISABLE:= FALSE;
    END_IF    
	 
    //Tlaèítka ovládania preklápaèa v ruènom režime//
    //Dotláèaèe//
    IF NOT Zariadenie.IN.Safety_Aktivne THEN
        Vizu.TL_RR_PreklapacDotlacace_DISABLE:= TRUE;
    ELSIF NastalaPorucha THEN
        Vizu.TL_RR_PreklapacDotlacace_DISABLE:= TRUE;
    ELSE
        Vizu.TL_RR_PreklapacDotlacace_DISABLE:= FALSE;
    END_IF    
        
    //Zdvih//
    IF NOT Zariadenie.IN.Safety_Aktivne THEN
        Vizu.TL_RR_PreklapacZdvih_DISABLE:= TRUE;
    ELSIF NastalaPorucha THEN
        Vizu.TL_RR_PreklapacZdvih_DISABLE:= TRUE;
    ELSIF NOT Preklapac.IN.VystupnyDotlacac_ZASUNUTY_MS4 THEN
        Vizu.TL_RR_PreklapacZdvih_DISABLE:= TRUE;    
    ELSE
        Vizu.TL_RR_PreklapacZdvih_DISABLE:= FALSE;
    END_IF    
    
    
	//***************************************************Zobrazenie Pop Up********************************************************//
	IF NOT Preklapac.IN.VystupnyDopravnik_StavOK THEN
		Vizu.TP_PopUp_VystupDopRozpojeny:= 0;
	ELSE	
		Vizu.TP_PopUp_VystupDopRozpojeny:= 1;
	END_IF	
    
    
END_PROGRAM

PROGRAM _EXIT
	(* Insert code here *)
	 
END_PROGRAM

