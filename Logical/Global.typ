(********************************************************************
 * COPYRIGHT -- Microsoft
 ********************************************************************
 * File: Global.typ
 * Author: Martin
 * Created: February 11, 2016
 ********************************************************************
 * Global data types of project Zamazat_1
 ********************************************************************)
(**************Stav hardware*****************************)

TYPE
	HardwareSTAV_typ : 	STRUCT 
		KartaAB2_CANSlave_OK : BOOL;
		KartaAB3_16DI_OK : BOOL;
		KartaAB4_16DO_OK : BOOL;
	END_STRUCT;
END_TYPE

(**************************Vizualizacia**********************************************)

TYPE
	Vizu_typ : 	STRUCT 
		CisloAktualnejObrazovky : USINT;
		CisloZadanejObrazovky : USINT;
		TL_RezimAutomat : BOOL;
		StavZariadenia_Farba : USINT;
		StavZariadenia_Index : USINT;
		TL_RezimManual_DISABLE : BOOL; (*0 - odomknuté, 1 - zamknuté*)
		TL_StartAutomat_DISABLE : BOOL;
		TL_UkoncenieCyklu_DISABLE : BOOL;
		TL_Reset_DISABLE : BOOL;
		Slider : USINT;
		FarbaTlacitkaAlarm_Index : BOOL;
		ZobrazSymbolAlarmu : BOOL;
		ZobrazHlasenie_ResetZariadenia : USINT;
		PodsvietenieTlacitka_ResetCS : USINT;
	END_STRUCT;
END_TYPE

(**************************Pracovisko************************************************)

TYPE
	Zariadenie_typ : 	STRUCT 
		IN : ZariadenieIN_typ;
		OUT : ZariadenieOUT_typ;
		PAR : ZariadeniePAR_typ;
		STAV : ZariadenieSTAV_typ;
		Automat : BOOL;
		Manual : BOOL;
		Reset : BOOL;
		KoniecCyklu : BOOL;
		Majak_HukackaON : BOOL;
	END_STRUCT;
	ZariadenieIN_typ : 	STRUCT 
		TlakVzduchu_OK_S1 : BOOL;
		Safety_SpatnaVazba_KF1 : BOOL;
		Safety_Aktivne_KF1 : BOOL;
	END_STRUCT;
	ZariadenieOUT_typ : 	STRUCT 
		Majak_ZeleneSvetlo : BOOL;
		Majak_ZlteSvetlo : BOOL;
		Majak_CerveneSvetlo : BOOL;
		Majak_Hukacka : BOOL;
		Safety_RESET : BOOL;
	END_STRUCT;
	ZariadeniePAR_typ : 	STRUCT 
		PAR_0 : USINT;
	END_STRUCT;
	ZariadenieSTAV_typ : 	STRUCT 
		Automat : BOOL;
		Manual : BOOL;
		PoINIT : BOOL;
		READY_TO_START : BOOL;
		UkoncenieCyklu_BUSY : BOOL;
		Hardware_OK : BOOL;
	END_STRUCT;
END_TYPE

(***************Preklapaè*************************************)

TYPE
	Preklapac_typ : 	STRUCT 
		IN : PreklapacIN_typ;
		OUT : PreklapacOUT_typ;
		PAR : PreklapacPAR_typ;
		STAV : PreklapacSTAV_typ;
		Automat : BOOL;
		Manual : BOOL;
		Reset : BOOL;
		KoniecCyklu : BOOL;
	END_STRUCT;
	PreklapacIN_typ : 	STRUCT 
		VstupnyDotlacac_VYSUNUTY_MS1 : BOOL;
		VstupnyDotlacac_ZASUNUTY_MS2 : BOOL;
		VstupnyDotlacac_PritomRotora_IS1 : BOOL;
		VystupnyDotlacac_VYSUNUTY_MS3 : BOOL;
		VystupnyDotlacac_ZASUNUTY_MS4 : BOOL;
		Vytah_HornaPoloha_MS5 : BOOL;
		Vytah_SpodnaPoloha_MS6 : BOOL;
		Vytah_Pozicia1_PritomRotora_OS1 : BOOL;
		Vytah_Pozicia2_PritomRotora_OS2 : BOOL;
		VystupnyDopravnik_PLNY_OS3 : BOOL;
	END_STRUCT;
	PreklapacOUT_typ : 	STRUCT 
		VstupnyDotlacac_VYSUN_YV1 : BOOL;
		VstupnyDotlacac_ZASUN_YV2 : BOOL;
		VystupnyDotlacac_VYSUN_YV3 : BOOL;
		VystupnyDotlacac_ZASUN_YV4 : BOOL;
		Vytah_ZDVIH_YV5 : BOOL;
		Vytah_ZOSTUP_YV6 : BOOL;
	END_STRUCT;
	PreklapacPAR_typ : 	STRUCT 
		PAR_0 : USINT;
	END_STRUCT;
	PreklapacSTAV_typ : 	STRUCT 
		PoINIT : BOOL;
	END_STRUCT;
END_TYPE
