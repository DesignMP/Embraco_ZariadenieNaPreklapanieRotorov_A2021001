
PROGRAM _INIT
	(* Insert code here *)
	 
END_PROGRAM

PROGRAM _CYCLIC
	
    //Alarmy pracoviska//
    //A0 - Porucha tlaku vzduchu !!!
    //A1 - Porucha PLC karty AB2 - CAN Slave !!!
    //A2 - Porucha PLC karty AB3 - Digitálne Vstupy !!!
    //A3 - Porucha PLC karty AB4 - Digitálne Vystupy !!!
    //A4 - Porucha bezpecnostného okruhu !!!
    //A5 - Porucha vysunutia vstupného dotlácaca !!!
    //A6 - Porucha zasunutia vstupného dotlácaca !!!
    //A7 - Porucha zdvihu vytahu !!!
    //A8 - Porucha zostupu vytahu !!!
    //A9 - Porucha vysunutia vystupneho dotlacaca !!!
    //A10 - Porucha zasunutia vystupneho dotlacaca !!!
    
	 
    //***********************************Hladanie poruchy*****************************************//
   	
    FOR a:=0 TO 100 BY 1 DO
        Alarmy[a];
        IF Alarmy[a] = TRUE THEN
            NastalaPorucha:= TRUE;
        END_IF	
    END_FOR
    
    //********************************Zobrazenie symbolu alarmu*****************************************************//
	
    IF NastalaPorucha THEN
        Vizu.ZobrazSymbolAlarmu:= Blikac500ms;
    ELSE
        Vizu.ZobrazSymbolAlarmu:= FALSE;
    END_IF	
   
    
    //*************************************Potvrdenie alarmov*********************************************************//
    IF PotvrdenieAlarmov THEN
        brsmemset(ADR(Alarmy),0,SIZEOF(Alarmy));
        NastalaPorucha:= FALSE;
        Zariadenie.Majak_HukackaON:= FALSE;
        PotvrdenieAlarmov:= FALSE;
    END_IF	
    
    //**************************************Porucha tlaku vzduchu*********************************************************// 
    CasKontroly_TlakuVzduchu.IN:= Zariadenie.IN.Safety_Aktivne_KF1 AND NOT Zariadenie.IN.TlakVzduchu_OK_S1; 
    
    IF CasKontroly_TlakuVzduchu.Q THEN
        Alarmy[0]:= TRUE;
    END_IF    
           
    CasKontroly_TlakuVzduchu.PT:= T#2s;
    CasKontroly_TlakuVzduchu();
    
    //**********************************Porucha - karty PLC niesu online**************************************************//
    CasKontroly_KarietPLC.IN:= Zariadenie.IN.Safety_Aktivne_KF1 AND NOT Zariadenie.STAV.Hardware_OK;
    
    
    IF CasKontroly_KarietPLC.Q THEN
        IF NOT Hardware.KartaAB2_CANSlave_OK THEN
            Alarmy[1]:= TRUE;
        END_IF
        IF NOT Hardware.KartaAB3_16DI_OK THEN
            Alarmy[2]:= TRUE;
        END_IF
        IF NOT Hardware.KartaAB4_16DO_OK THEN
            Alarmy[3]:= TRUE;
        END_IF
    END_IF    
   
        
    CasKontroly_KarietPLC.PT:= T#2s;
    CasKontroly_KarietPLC();
    
    
    //*********************************Porucha - bezpeènostného okruhu*******************************************************//
    IF EDGEPOS(Zariadenie.IN.Safety_Aktivne_KF1 = FALSE) THEN
        Alarmy[4]:= TRUE;
    END_IF
    
    
END_PROGRAM

PROGRAM _EXIT
	(* Insert code here *)
	 
END_PROGRAM

