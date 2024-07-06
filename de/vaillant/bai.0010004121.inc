type,circuit,level,name,comment,qq,zz,pbsb,id,*name,part,type,divisor/values,unit,comment
*r,
*w,
r,,,Statenumber,Statenumber_DK,,,b509,0dab00,value,,UCH,,,status number
r,,,StatusList,StatusList_DK,,,b509,0d1101,value,,HEX:10,,,Statustexte ergänzen
r,,,PartloadHcKW,d.00 Heizungsteillast,,,b509,0d0704,value,,UCH,,kW,Heizungsteillast
w,,install,PartloadHcKW,d.00 Heizungsteillast,,,b509,0e0704,value,,UCH,,kW,Heizungsteillast
r,,,WPPostrunTime,d.01 Pumpennachlaufzeit,,,b509,0df703,value,,UCH,,min,Wasserpumpennachlaufzeit nach Heizbetrieb
w,,install,WPPostrunTime,d.01 Pumpennachlaufzeit,,,b509,0ef703,value,,UCH,,min,Wasserpumpennachlaufzeit nach Heizbetrieb
r,,,BlockTimeHcMax,d.02 Maximale Brennersperrzeit,,,b509,0d0904,value,,UCH,,min,Max. Brennersperrzeit bei einem Vorlaufsollwert von 20°C
w,,install,BlockTimeHcMax,d.02 Maximale Brennersperrzeit,,,b509,0e0904,value,,UCH,,min,Max. Brennersperrzeit bei einem Vorlaufsollwert von 20°C
r,,,HwcTemp,d.03 WW Vorlaufsolltemp,,,b509,0d1600,temp,,D2C,,°C,Vorlauftemperatur bei Warmwasserzapfung (nur bei Kombi-Heizgeräten),sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,StorageTemp,d.04 Speicheristtemp,,,b509,0d1700,temp,,D2C,,°C,current temperature for warm start sensor (combination boiler only) Current storage tank sensor (system boiler only),sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,FlowTempDesired,d.05 Vorlaufsolltemperatur,,,b509,0d3900,value,,D2C,,°C,Vorlaufsolltemperatur oder Rücklaufsolltemperatur (wenn Rücklaufregelung aktiviert wurde). Der Maximalwert wird über d.71 und einem eBUS Regler begrenzt.
r,,,StorageTempDesired,d.07 Speichersolltemp,,,b509,0d0400,value,,D2C,,°C,VCW: Solltemperatur des WarmstartspeichersVC: Solltemperatur des externen Speichers
r,,,ACRoomthermostat,d.08 Raumthermostat,,,b509,0d2a00,value,,UCH,0=off;1=on,,Status des extrenen Raumthermostat an Klemme 3/4
r,,,ExtFlowTempDesiredMin,d.09 Min. ext. Vorlaufsollwert,,,b509,0d6e04,value,,D2C,,°C,minimum out of Kl.7 and eBus flow setpoint
r,,,WP,d.10 Wasserpumpe,,,b509,0d4400,value,,UCH,0=off;1=on,,Interne Heizungspumpe
r,,,ExtWP,d.11 ext. Heizungspumpe,,,b509,0d3f00,value,,UCH,0=off;1=on,,Externe Heizungspumpe
r,,,Storageloadpump,d.12 Speicherladepumpe,,,b509,0d9e00,value,,UCH,,%,Ladepumpenanforderung
r,,,CirPump,d.13 Zirkulationspumpe,,,b509,0d7b00,value,,UCH,0=off;1=on,,Status Zirkulationspumpe (über ein externes Modul ansteuerbar)
r,,,WPPWMPower,d.15 Pumpendrehzahl Istwert,,,b509,0d7300,value,,UCH,,,actual PWM-Powerrate of electronic-pump
r,,,HwcDemand,d.22 WW Anforderung,,,b509,0d5800,value,,UCH,0=no;1=yes,,Brauchwasseranforderung (Zapfung oder Schaltsignal vom Speicher)
r,,,HeatingSwitch,d.23 Winterbetrieb,,,b509,0df203,value,,UCH,0=off;1=on,,Wintermodus aktiv (Heizbetrieb und Warmwasser)
r,,,SourcePressure,d.24 Druckdosensignal,,,b509,0dff00,value,,UIN,,Pa,value of airpressure-sensor
r,,,StoragereleaseClock,d.25 Speicherfreigabe,,,b509,0d4704,value,,UCH,0=no;1=yes,,Freigabe der Speichrladung oder des Warmstartspeichers durcheinen eBUS Regler
r,,,PrimaryCircuitFlowrate,d.29 PrimaryCircuitFlowRate_DK,,,b509,0dfb00,value,,UIN,,l/h,value of flowrate
r,,,Gasvalve,d.30 Gasventil,,,b509,0dbb00,value,,UCH,240=off;15=on,,GMV Ansteuersignal
r,,,TargetFanSpeed,d.33 Lüfter Solldrehzahl,,,b509,0d2400,value,,UIN,,1/min,Drehzahlsollwert des Lüfters
r,,,FanSpeed,d.34 Lüfteristdrehzahl,,,b509,0d8300,value,,UIN,,1/min,Aktuelle Lüfterdrehzahl
r,,,PositionValveSet,d.35 Position VUV,,,b509,0d5400,value,,UCH,,,Position des 3-Wege Ventil: 100=Warmwasser 0=Heizbetrieb 40=Mittenstellung
r,,,FlowTemp,d.40 Vorlauftemperatur,,,b509,0d1800,temp,,D2C,,°C,Vorlauftemperatur,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,ReturnTemp,d.41 Rücklauftemperatur,,,b509,0d9800,temp,,D2C,,°C,Rücklauftemperatur,tempmirror,,UIN,,,,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,IonisationVoltageLevel,d.44 Spannungspegel Ionisationssignal,,,b509,0da400,value,,SIN,10,,Ionisationsspannung: größer 80 = keine Flammekleiner 40 = gutes Flammensignal
r,,,OutdoorstempSensor,d.47 Außentemperaturfühler,,,b509,0d7600,temp,,D2C,,°C,Außentemperaturwert (ohne Korrekturwert) und Sensorstatus,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,RemainingBoilerblocktime,d.67 Verbleibende Brennersperrzeit,,,b509,0d3800,value,,UCH,,min,Verbleibende Brennersperrzeit
r,,,EBusHeatcontrol,d.90 Digitaler Regler,,,b509,0d0004,value,,UCH,0=no;1=yes,,Gibt an ob ein digitaler Regler erkannt wurde
r,,,DcfState,d.91 DCF Status,,,b509,0d6900,value,,UCH,0=nosignal;1=ok;2=sync;3=valid,,DCF Status
r,,,SMGVCorrFactorLowOffset,e.04 SMGV_CorrFactorLow_Offset_DK,,,b509,0d0f01,value,,SCH,,%,CO2 offset-value low-load
r,,,SMGVCorrFactorHighOffset,e.05 SMGV_CorrFactorHigh_Offset_DK,,,b509,0d1001,value,,SCH,,%,CO2 offset-value high-load
r,,,COConcentration,e.06 SD_CO_Concentration_DK,,,b509,0d0601,value,,UIN,,ppm,calculated CO-concentration
r,,,CORsens,e.07 SD_CO_Rsens_DK,,,b509,0d0501,value,,UIN,,kOhm,Aktueller Widderstand des CO-Sensors
r,,,COR0,e.08 SD_CO_R0_DK,,,b509,0d0401,value,,UIN,,kOhm,CO-sensor resistance at 0ppm CO
r,,,COPTCActualTemp,e.09 SD_CO_PTC_ActualTemp_DK,,,b509,0d0901,value,,D2C,,°C,actual heater-temperature
r,,,COPTCMeasureTemp,e.10 CO_PTC_MeasureTemp_DK,,,b509,0d0701,value,,D2C,,°C,heater-temperature during burner operation
r,,,COCorrFactorOffset,e.11 CO_CorrFactor_Offset_DK,,,b509,0d0e01,value,,SCH,,%,CO2 offset value for gas-adaptive correction-factor
r,,,COCorrFactor,e.12 CO_CorrFactor_DK,,,b509,0d0101,value,,UCH,,%,calculated gas-adaptive correction-factor
r,,,SMGVCorrFactorLow,e.13 SMGV_CorrFactorLow_DK,,,b509,0d0201,value,,UCH,,%,calculated correction-factor low-load
r,,,SMGVCorrFactorHigh,e.14 SMGV_CorrFactorHigh_DK,,,b509,0d0301,value,,UCH,,%,calculated correction-factor high-load
r,,,COLastError,e.18 CO_LastError_DK,,,b509,0d0a01,value,,UCH,,,CO-sensor failure number
r,,,FluePipeFactor,e.19 FluePipeFactor_DK,,,b509,0d0b01,value,,UCH,,,calculated fluepipe-factor
r,,,HwcImpellorSwitch,Brauchwasserzapfung,,,b509,0d5700,value,,UCH,0=no;1=yes,,WW Zapfung
r,,,COPTCTargetTemp,SD_CO_PTC_TargetTemp_DK,,,b509,0d0801,value,,D2C,,°C,target heater-temperature
r,,,BoilerType2,BoilerType_2_DK,,,b509,0d0c01,value,,ULG,,,
r,,,TMMaxTimeTemp,TTM_MaxTime_DK,,,b509,0d1801,value,,UIN,,sec,maximum time for calibration-routine
r,,,TMAverageTimeSumTemp,TTM_AverageTime_sum_DK,,,b509,0d1901,value,,UIN,,_1S * 100,average time for calibration-routine
r,,,COCorrFactorMax,CO_CorrFactor_max_DK,,,b509,0d1a01,value,,UIN,,%,maximum value of calculated gas-adaptive correction-factor
r,,,COCorrFactorSum,CO_CorrFactor_sum_DK,,,b509,0d1b01,value,,UIN,,% * 100,average value of calculated gas-adaptive correction-factor
r,,,SMGVCorrFactorLowSum,SMGV_CorrFactorLow_sum_DK,,,b509,0d1c01,value,,UIN,,% * 100,average value of calculated correction-factor low-load
r,,,SMGVCorrFactorHighSum,SMGV_CorrFactorHigh_sum_DK,,,b509,0d1d01,value,,UIN,,% * 100,average value of calculated correction-factor high-load
r,,,COPTCADC1,CO_PTC_ADC1_DK,,,b509,0d1e01,value,,UIN,,,
r,,,COPTCADC2,CO_PTC_ADC2_DK,,,b509,0d1f01,value,,UIN,,,
r,,,COPTCPWMTest,CO_PTC_PWM_Test_DK,,,b509,0d2001,value,,UIN,,,
r,,,COPTCCalParms,CO_PTC_CalParms,,,b509,0d2101,value,,UCH,,,
r,,,CalibrationDone,TTM_Done_DK,,,b509,0d2201,value,,UCH,0=off;1=on,,calibration-routine after burner start finished
r,,,CalibrationRecalDone,TTM_RecalDone_DK,,,b509,0d2301,value,,UCH,0=off;1=on,,calibration-routine during burner operation finished
r,,,CalibrationLowDone,TTL_Done_DK,,,b509,0d2401,value,,UCH,0=off;1=on,,calibration-routine low-load after burner start finished
r,,,CalibrationLowRecalDone,TTL_RecalDone_DK,,,b509,0d2501,value,,UCH,0=off;1=on,,calibration-routine low-load during burner operation finished
r,,,CalibrationHighDone,TTH_Done_DK,,,b509,0d2601,value,,UCH,0=off;1=on,,calibration-routine high-load after burner start finished
r,,,CalibrationHighRecalDone,TTH_RecalDone_DK,,,b509,0d2701,value,,UCH,0=off;1=on,,calibration-routine high-load during burner operation finished
r,,,WindOff,Wind_Off_DK,,,b509,0d2801,value,,UCH,0=off;1=on,,Wind-function not active
r,,,COmonOff,COmon_Off_DK,,,b509,0d2901,value,,UCH,0=off;1=on,,CO-monitoring not active
r,,,FlameLossOff,FlameLoss_Off_DK,,,b509,0d2a01,value,,UCH,0=off;1=on,,Flame-loss-function not active
r,,,ForcedR0Trigger,SD_ForcedR0_Trigger_DK,,,b509,0d2b01,value,,UCH,0=off;1=on,,forced-R0-mode active
r,,,StartPeakEnable,StartPeak_Enable_DK,,,b509,0d2c01,value,,UCH,0=off;1=on,,
r,,,COPTCU1,CO_PTC_U1_DK,,,b509,0d2d01,value,,UIN,,,
r,,,COPTCU2,CO_PTC_U2_DK,,,b509,0d2e01,value,,UIN,,,
r,,,ThresholdWaterpressureMin,MinThresholdWaterpressure_DK,,,b509,0d1201,value,,UIN,,bar,
r,,,ThresholdWaterpressureMax,MaxThresholdWaterpressure_DK,,,b509,0d1301,value,,UIN,,bar,
r,,,MeasuredFluePipeFactor,MeasuredFluePipeFactor_DK,,,b509,0d3401,value,,UCH,,,
r,,,VortexFlowCheckEnabled,VortexFlowCheckEnabled_DK,,,b509,0d4901,value,,UCH,0=off;1=on,,
r,,,VortexSensorFault,VortexSensorFault_DK,,,b509,0d4a01,value,,UCH,0=off;1=on,,
r,,,VortexSensorFaultCounter,VortexSensorFaultCounter_DK,,,b509,0d4b01,value,,UCH,,,
r,,,VortexFlowCheckFault,VortexFlowCheckFault_DK,,,b509,0d4c01,value,,UCH,0=off;1=on,,
r,,,VortexFlowCheckFaultCounter,VortexFlowCheckFaultCounter_DK,,,b509,0d4d01,value,,UCH,,,
r,,,SMGVCurrentPos,SMGV_CurrentPos_DK,,,b509,0d7c01,value,,SIN,,,
r,,,PredSourcePressureRefPressureCounter,Pred_AirPressure_RefPressureCounter_DK,,,b509,0d7f01,value,,UCH,,,
r,,,PredSourcePressureRefPressureSum,Pred_AirPressure_RefPressureSum_DK,,,b509,0d8001,value,,UIN,,,
r,,,SRFLIDEMode,SR_FLIDE_Mode_DK,,,b509,0d8101,value,,UCH,,,
w,,service,SRFLIDEMode,SR_FLIDE_Mode_DK,,,b509,0e8101,value,,UCH,,,
r,,,COSensorSNR,CO_Sensor_SNR,,,b509,0daf01,value,,HEX:7,,,
r,,,WaterPressure,Wasserdruck,,,b509,0d0200,press,,FLT,,bar,value of waterpressure-sensor,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,Flame,Flammensignal,,,b509,0d0500,value,,UCH,240=off;15=on,,Flammensignal
r,,,ChangesDSN,Anzhl der DSN Änderungen,,,b509,0d0c00,value,,UCH,,,Anzahl der DSN (Gerätekennung) Änderungen
r,,,GasvalveUC,Gasventil,,,b509,0d0d00,value,,UCH,240=off;15=on,,Schaltsignal für das Gasventil
r,,,VolatileLockout,Verriegelnde Störabschaltungen,,,b509,0d1000,value,,UCH,240=no;15=yes,,WAHR: STB Fehler sind verriegelnd
r,,,ModulationTempDesired,Modulationssollwert,,,b509,0d2e00,value,,SIN,10,%,Modulationssollwert
r,,,FlameSensingASIC,SD_Flame_Sensing_ASIC_DK,,,b509,0d2f00,value,,UIN,,,Ioni/ADC Wert vom Flammenwächter
r,,,HcUnderHundredStarts,HZ_UnderHundred_SwiActi_DK,,,b509,0d3000,value,,UCH,,,Heat switch cycles under hundred
r,,,HwcUnderHundredStarts,BW_UnderHundred_SwiActi_DK,,,b509,0d3100,value,,UCH,,,DHW switch cycles under hundred
r,,,EbusSourceOn,eBUS Spannungsversorgung,,,b509,0d3400,value,,UCH,0=off;1=on,,Aktivierung der eBUS Speisung
r,,,Fluegasvalve,Abgasklappe,,,b509,0d3c00,value,,UCH,0=off;1=on,,Flüssiggas Magnetventil
r,,,ExternalFaultmessage,Ext. Störmeldung,,,b509,0d3e00,value,,UCH,0=off;1=on,,Signal für die externe Störmeldeeinrichtung
r,,,GasvalveASICFeedback,Rückmeldung Gasventil,,,b509,0d4700,value,,UCH,240=off;15=on,,Rückmeldung Gasventil vom ASIC
r,,,GasvalveUCFeedback,Rückmeldung Gasventil,,,b509,0d4800,value,,UCH,240=off;15=on,,Rückmeldung Gasventil vom Prozessor
r,,,Ignitor,Zünder,,,b509,0d4900,value,,UCH,240=off;15=on,,Zündung aktiviert
r,,,HwcTypes,WW Typen,,,b509,0d4b00,value,,UCH,,,DHW type of the appliance
r,,,WarmstartDemand,Warmstartanforderung,,,b509,0d3a04,value,,UCH,0=no;1=yes,,Warmstartaktivierung
r,,,BoilerType,BoilerType_DK,,,b509,0d5e00,value,,UCH,,,Boiler typ of the bmu
r,,,ParamToken,ParamToken_DK,,,b509,0d6000,value,,UCH,,,token for parameter managment
r,,,Expertlevel_ReturnTemp,Rücklauftemperatur,,,b509,0d6b00,temp,,D2C,,°C,Externer Rücklauftemperatursensor,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,FloorHeatingContact,Eingang Anlegethermostat,,,b509,0d7000,value,,UCH,0=off;1=on,,Eingang Anlegethermostat
r,,,Templimiter,Temperaturbegrenzer,,,b509,0d7700,value,,UCH,240=off;15=on,,Rückmeldung des Temperaturbegrenzer Signals
r,,,EbusVoltage,eBUS Spannung,,,b509,0d7f00,value,,UCH,0=off;1=on,,Rückmeldung der eBUS Spannung
r,,,FluegasvalveOpen,Abgasklappe offen,,,b509,0d8900,value,,UCH,0=off;1=on,,Rückmeldung Flüssiggasventil
r,,,Testbyte,Testbyte_DK,,,b509,0d9900,value,,UCH,,,Testbyte (relevant for the Tester)
r,,,DSN,DSN,,,b509,0d9a00,value,,UIN,,,DSN: Device Specific number
r,,,TargetFanSpeedOutput,Lüfter Solldrehzahl,,,b509,0d9f00,value,,UIN,,1/min,Lüfterdrehzahl
r,,,PowerValue,Leistungsdaten,,,b509,0daa00,value,,HEX:6,,,Geräteleistung (min und max)
r,,,WaterpressureBranchControlOff,Drucksprungerkennung ausschalten,,,b509,0daf00,value,,UCH,0=off;1=on,,Überwachung der Druckänderung beim Schalten der Pumpe kann hiermit aktiviert oder deaktiviert werden
r,,,DSNStart,DSN Startadresse,,,b509,0d3104,value,,UIN,,,DSN Startadresse
r,,,ExtStorageModulCon,VR65 angeschlossen,,,b509,0dbf00,value,,UCH,0=no;1=yes,,Externes Speichermodul (VR65) angeschlosssen
r,,,PartnumberBox,Partnumber_Box,,,b509,0dc000,value,,HEX:5,,,part number of the eBox
r,,,WPSecondStage,WP_SecondStage_DK,,,b509,0ded00,value,,UCH,240=off;15=on,,Second stage of the pump activated
r,,,TemplimiterWithNTC,SD_STL_with_NTC,,,b509,0dd200,value,,UCH,240=no;15=yes,,Temperaturbegrenzer Art:1 = NTC0 = Schaltkontakt
r,,,VolatileLockoutIFCGV,SD_VolatileLockout_IFC_GV_DK,,,b509,0dd300,value,,UCH,240=no;15=yes,,Alle IFC Fehler sind nichtflüchtig
r,,,VortexFlowSensor,VortexFlowSensor_DK,,,b509,0dd500,value,,UIN,,,"Predictive Maintenance data, CH water flow"
r,,,DisplayMode,DisplayMode_DK,,,b509,0dda00,value,,UCH,,,Display mode of the aplliance
r,,,Gasvalve3UC,Gasventil 3,,,b509,0ddb00,value,,UCH,240=off;15=on,,Gasventil Schaltsignal (vom Prozessor)
r,,,InitialisationEEPROM,InitialisationEEPROM_DK,,,b509,0ddc00,value,,UCH,0=no;1=yes,,EEPROM Initialisierrung (für die Produktion)
r,,,TimerInputHc,Eingang Schaltuhr,,,b509,0dde00,value,,UCH,0=off;1=on,,timer input (block heatdemand)
r,,,FanMinSpeedOperation,Min. Lüfterdrehzahl,,,b509,0ddf00,value,,UIN,,1/min,Lüfter Minimaldrehzahl
r,,,FanMaxSpeedOperation,Max. Lüfterdrehzahl,,,b509,0de000,value,,UIN,,1/min,Lüfter Maximaldrehzahl
r,,,ExternGasvalve,Ext. Gasventil,,,b509,0de400,value,,UCH,0=off;1=on,,Externes Magnetventil
r,,,DCFTimeDate,DCF Datum/Uhrzeit,,,b509,0de500,value,,HEX:8,,,DCF Time / date stamp struct { uchar sec; uchar min; uchar std; uchar tag; uchar mon; uchar wtg; uchar jah; } Tdcf77_time;
r,,,FlowSetPotmeter,Vorlaufsollwert Poti,,,b509,0df003,value,,D2C,,°C,Vorlaufsollwert Potentiometer
r,,,HwcSetPotmeter,WW Sollwert Potentiometer,,,b509,0df103,value,,D2C,,°C,WW Sollwertpotentiometer
r,,,ProductionByte,ProductionByte,,,b509,0d3e04,value,,UCH,,,
r,,,SerialNumber,SerialNumber,,,b509,0d3f04,value,,HEX:8,,,Seriennummer AI
r,,,WPPWMPowerDia,d.14 WP_PWMPowerDia_DK,,,b509,0da100,value,,UCH,,,Set-PWM-Powerrate of electronic-pump
w,,install,WPPWMPowerDia,d.14 WP_PWMPowerDia_DK,,,b509,0ea100,value,,UCH,,,Set-PWM-Powerrate of electronic-pump
r,,,ReturnRegulation,d.17 Rücklaufregelung,,,b509,0d0c04,value,,UCH,0=off;1=on,,Aktivierung der Rücklaufregelung
w,,install,ReturnRegulation,d.17 Rücklaufregelung,,,b509,0e0c04,value,,UCH,0=off;1=on,,Aktivierung der Rücklaufregelung
r,,,HcPumpMode,d.18 Pumpenbetriebsart,,,b509,0d4904,value,,UCH,0=post_run;1=permanent;2=winter,,"Pump mode: 0=post run, 1=continous, 2=Winter, 3=intermittend"
w,,install,HcPumpMode,d.18 Pumpenbetriebsart,,,b509,0e4904,value,,UCH,0=post_run;1=permanent;2=winter,,"Pump mode: 0=post run, 1=continous, 2=Winter, 3=intermittend"
r,,,HwcTempMax,d.20 Max. WW Temperatur,,,b509,0d4304,value,,D2C,,°C,Max. Speichersollwert. Begrenzt den max. Einstellbereich des Potentiometers (Rechtsanschlag).
w,,install,HwcTempMax,d.20 Max. WW Temperatur,,,b509,0e4304,value,,D2C,,°C,Max. Speichersollwert. Begrenzt den max. Einstellbereich des Potentiometers (Rechtsanschlag).
r,,,OptionRelais,d.26 OptionRelais_DK,,,b509,0db800,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Option relais function
w,,install,OptionRelais,d.26 OptionRelais_DK,,,b509,0eb800,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Option relais function
r,,,AccessoriesOne,d.27 Zubehörrelais 1,,,b509,0d4b04,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Funktion des Zubehörrelais 1
w,,install,AccessoriesOne,d.27 Zubehörrelais 1,,,b509,0e4b04,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Funktion des Zubehörrelais 1
r,,,AccessoriesTwo,d.28 Zubehörrelais 2,,,b509,0d4c04,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Funktion des Zubehörrelais 2
w,,install,AccessoriesTwo,d.28 Zubehörrelais 2,,,b509,0e4c04,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Funktion des Zubehörrelais 2
r,,,FanSpeedOffsetMin,d.50 Offet min. Lüfterdrehzahl,,,b509,0d2404,value,,SIN,,1/min,Offset min. Drehzahl
w,,install,FanSpeedOffsetMin,d.50 Offet min. Lüfterdrehzahl,,,b509,0e2404,value,,SIN,,1/min,Offset min. Drehzahl
r,,,FanSpeedOffsetMax,d.51 Offset max. Lüfterdrehzahl,,,b509,0d2504,value,,SIN,,1/min,Offset max. Drehzahl
w,,install,FanSpeedOffsetMax,d.51 Offset max. Lüfterdrehzahl,,,b509,0e2504,value,,SIN,,1/min,Offset max. Drehzahl
r,,,DeactivationsTemplimiter,d.60 STB Abschaltungen,,,b509,0d2000,value,,UCH,,,Anzahl der Abschaltungen durch den Sicherheitstemperaturbgrenzers
r,,,DeactivationsIFC,d.61 Anzahl Zündfehler,,,b509,0d1f00,value,,UCH,,,Anzahl der Zündfehler (nicht erfolgreiche Züdung im letzten Versuch oder fehlerhaftes Flammensignal)
r,,,AverageIgnitiontime,d.64 Mittlere Zündzeit,,,b509,0d2d00,value,,UCH,10,s,Mittlere Zündzeit
r,,,MaxIgnitiontime,d.65 Max. Zündzeit,,,b509,0d2c00,value,,UCH,10,s,Maximale Zündzeit
r,,,CounterStartattempts1,d.68 Zündfehler 1. Versuch,,,b509,0d6e00,value,,UCH,,°C,Anzahl der erfolglosen Zündversuche (im 1. Versuch)
r,,,CounterStartattempts2,d.69 Zündfehler 2. Versuch,,,b509,0d6f00,value,,UCH,,°C,Anzahl der erfolglosen Zündversuche (im 2. Versuch)
r,,,ValveMode,d.70 VUV Betriebsart,,,b509,0d2a04,value,,UCH,,,Betriebsart 3-Wegeventil:0 = normaler Modus1 = Mittenstellung2 = Permanent Heizbetrieb (keine Umschaltung in den WW Betrieb)
w,,install,ValveMode,d.70 VUV Betriebsart,,,b509,0e2a04,value,,UCH,,,Betriebsart 3-Wegeventil:0 = normaler Modus1 = Mittenstellung2 = Permanent Heizbetrieb (keine Umschaltung in den WW Betrieb)
r,,,FlowsetHcMax,d.71 Max. Vorlauftemp. Heizbetrieb,,,b509,0d0e04,value,,D2C,,°C,Einstellung des maximalen Vorlaufsollwert im Heizbetrieb (bei Linksanschlag des Poti)
w,,install,FlowsetHcMax,d.71 Max. Vorlauftemp. Heizbetrieb,,,b509,0e0e04,value,,D2C,,°C,Einstellung des maximalen Vorlaufsollwert im Heizbetrieb (bei Linksanschlag des Poti)
r,,,HwcPostrunTime,d.72 WW Pumpnenachlaufzeit,,,b509,0d1104,value,,UCH,-10,s,Pumpennachlaufzeit nach Speicherladung
w,,install,HwcPostrunTime,d.72 WW Pumpnenachlaufzeit,,,b509,0e1104,value,,UCH,-10,s,Pumpennachlaufzeit nach Speicherladung
r,,,StorageLoadTimeMax,d.75 Max. Speicherladezeit,,,b509,0d1204,value,,UCH,,min,Max. Speicherladezeit für Speicher ohne eigene Regelung
w,,install,StorageLoadTimeMax,d.75 Max. Speicherladezeit,,,b509,0e1204,value,,UCH,,min,Max. Speicherladezeit für Speicher ohne eigene Regelung
r,,,PartloadHwcKW,d.77 Speicherteillast,,,b509,0d0804,value,,UCH,,kW,Teillast für Speicherladung (Geräteleistung kann auf den angegebenen Wert limitiert werden)
w,,install,PartloadHwcKW,d.77 Speicherteillast,,,b509,0e0804,value,,UCH,,kW,Teillast für Speicherladung (Geräteleistung kann auf den angegebenen Wert limitiert werden)
r,,,FlowsetHwcMax,d.78 Max. Vorlauftemp. WW,,,b509,0d0f04,value,,D2C,,°C,Maximal erlaubte Vorlauftemperatur für die Speicherladung
w,,install,FlowsetHwcMax,d.78 Max. Vorlauftemp. WW,,,b509,0e0f04,value,,D2C,,°C,Maximal erlaubte Vorlauftemperatur für die Speicherladung
r,,,HcHours,d.80 Hz. Betriebsstunden,,,b509,0d2800,value,,UIN,,h,Betriebsstunden im Heizbetrieb
r,,,HwcHours,d.81 Betriebsstunden WW,,,b509,0d2200,value,,UIN,,h,Betriebsstunden Brauchwasser
r,,,HcStarts,d.82 Schaltspiele Heizbetrieb,,,b509,0d2900,value,,UIN,-100,,Schaltspiele Heizbetrieb
r,,,HwcStarts,d.83 Schaltspiele BW Betrieb,,,b509,0d2300,value,,UIN,-100,,Schaltspiele WW Betrieb
r,,,HoursTillService,d.84 Stunden bis Wartung,,,b509,0d2004,value,,UIN,,h,Wartungsintervall:Anzahl der Stunden bis zur nächsten Wartung
w,,install,HoursTillService,d.84 Stunden bis Wartung,,,b509,0e2004,value,,UIN,,h,Wartungsintervall:Anzahl der Stunden bis zur nächsten Wartung
r,,,ServiceMode,d.86 ServiceMode_DK,,,b509,0dcb00,value,,UCH,0=off;1=on,,Counter-activation for predictive maintenance
w,,install,ServiceMode,d.86 ServiceMode_DK,,,b509,0ecb00,value,,UCH,0=off;1=on,,Counter-activation for predictive maintenance
r,,,GasType,d.87 Gasart,,,b509,0dfe00,value,,UCH,,,"0=Erdgas,1=Flüssiggas 50mbar,2=Flüssiggas 30mbar"
w,,install,GasType,d.87 Gasart,,,b509,0efe00,value,,UCH,,,"0=Erdgas,1=Flüssiggas 50mbar,2=Flüssiggas 30mbar"
r,,,StartOffset,d.89 StartOffset_DK,,,b509,0d0d01,value,,SCH,,%,value of gas-offset during ignition
w,,install,StartOffset,d.89 StartOffset_DK,,,b509,0e0d01,value,,SCH,,%,value of gas-offset during ignition
r,,,DSNOffset,d.93 Gerätekennung,,,b509,0d3004,value,,UCH,,,Gerätekennung (DSN)
w,,service,DSNOffset,d.93 Gerätekennung,,,b509,0e3004,value,,UCH,,,Gerätekennung (DSN)
r,,,SetFactoryValues,d.96 Werkseinstellungen,,,b509,0d6804,value,,UCH,0=no;1=yes,,Werkseinstellungen
w,,install,SetFactoryValues,d.96 Werkseinstellungen,,,b509,0e6804,value,,UCH,0=no;1=yes,,Werkseinstellungen
r,,,Faultlist,Faultlist_DK,,,b509,0d2600,value,,HEX:10,,,
r,,,PredFanPWMDevThreshold,Pred_FanPWM_DevThreshold_DK,,,b509,0d3501,value,,UCH,,,
r,,,PredFanPWMSwitchingPoint,Pred_FanPWM_SwitchingPoint_DK,,,b509,0d3601,value,,UIN,,,
r,,,PredFanPWMRefPWMcounter,Pred_FanPWM_RefPWMcounter_DK,,,b509,0d3701,value,,UCH,,,
r,,,PredFanPWMRefPWMsum,Pred_FanPWM_RefPWMsum_DK,,,b509,0d3801,value,,UIN,,,
r,,,PredFanPWMPredCounter,Pred_FanPWM_PredCounter_DK,,,b509,0d3901,uin,,UIN,,,,uin_1,,UIN,,,,uin_2,,UIN,,,
r,,,PredCOsensorSwitchingPoint,Pred_COsensor_SwitchingPoint_DK,,,b509,0d3a01,value,,UIN,,,
r,,,PredCOsensorPredCounter,Pred_COsensor_PredCounter,,,b509,0d3b01,uin,,UIN,,,,uin_1,,UIN,,,,uin_2,,UIN,,,
r,,,PredIgnitionSwitchingPoint,Pred_Ignition_SwitchingPoint_DK,,,b509,0d3c01,value,,UIN,,,
r,,,PredIgnitionPredCounter,Pred_Ignition_PredCounter_DK,,,b509,0d3d01,uin,,UIN,,,,uin_1,,UIN,,,,uin_2,,UIN,,,
r,,,PredCombustionDecrementTime,Pred_Combustion_DecrementTime_DK,,,b509,0d3e01,value,,UCH,,,
r,,,PredCombustionSwitchingPoint,Pred_Combustion_SwitchingPoint_DK,,,b509,0d3f01,value,,UIN,,,
r,,,PredCombustionPredCounter,Pred_Combustion_PredCounter_DK,,,b509,0d4001,uin,,UIN,,,,uin_1,,UIN,,,,uin_2,,UIN,,,
r,,,PredSourcePressureDevThreshold,Pred_AirPressure_DevThreshold_DK,,,b509,0d4101,value,,UCH,,,
r,,,PredSourcePressureSwitchingPoint,Pred_AirPressure_SwitchingPoint_DK,,,b509,0d4201,value,,UIN,,,
r,,,PredSourcePressurePredCounter,Pred_AirPressure_PredCounter_DK,,,b509,0d4301,uin,,UIN,,,,uin_1,,UIN,,,,uin_2,,UIN,,,
r,,,PredWaterflowDevThreshold,Pred_Waterflow_DevThreshold_DK,,,b509,0d4401,value,,UCH,,,
r,,,PredWaterflowSwitchingPoint,Pred_Waterflow_SwitchingPoint_DK,,,b509,0d4501,value,,UIN,,,
r,,,PredWaterpressureMinPressure,Pred_Waterpressure_MinPressure_DK,,,b509,0d4601,value,,UIN,,,
r,,,PredWaterpressureMaxPressure,Pred_Waterpressure_MaxPressure_DK,,,b509,0d4701,value,,UIN,,,
r,,,PredWaterpressureSwitchingPoint,Pred_Waterpressure_SwitchingPoint_DK,,,b509,0d4801,value,,UIN,,,
r,,,PredStatusFlags,Pred_StatusFlags_DK,,,b509,0d7d01,value,,ULG,,,
r,,,PredConditionFlags,Pred_ConditionFlags,,,b509,0d7e01,value,,ULG,,,
r,,,TempGradientFailure,Gradientenfehler,,,b509,0d1100,value,,UCH,,°C,Anzahl der Boilerabschaltung wegen zu hohem Gradient (S.54)
r,,,TempDiffBlock,TempDiffBlock_DK,,,b509,0d1200,value,,UCH,,°C,Number of modulationblocking of the boilers cause of to high/incorrect difference of flow/return temperatures
r,,,TempDiffFailure,TempDiffFailure_DK,,,b509,0d1300,value,,UCH,,°C,Anzahl der Abschaltungen wegen zu hoher / fehlerhafter Differenz von Vor- und Rücklauftemperatur
r,,,PumpHours,Betriebsstunden Pumpe,,,b509,0d1400,value,,UIN,,h,Betriebsstunden Pumpe
r,,,HcPumpStarts,CH_PumpCommunt_DK,,,b509,0d1500,value,,UIN,,,Schaltspiele Pumpe
r,,,ValveStarts,3WV Schaltspiele,,,b509,0d1a00,value,,UIN,,,Anzahl der 3WV Umschaltungen
r,,,FanHours,Betriebsstunden des Lüfters,,,b509,0d1b00,value,,UIN,,h,Betriebsstunden des Lüfters
r,,,FanStarts,FanCommunt_DK,,,b509,0d1c00,value,,UIN,,,Anzahl der Lüfterschaltspiele
r,,,OverflowCounter,Überlauf PM Zähler,,,b509,0d1e00,value,,UCH,0=no;1=yes,,Predictive Maintenance counter have got an overflow
r,,,TempMaxDiffExtTFT,MaxTempDiffExtTFT_DK,,,b509,0d2700,value,,D2C,,°C,Predictive maintenance data
r,,,MinIgnitiontime,Min. Zündzeit,,,b509,0d2b00,value,,UCH,10,s,Minimale Zündzeit
r,,,Maintenancedata_HwcTempMax,Max. WW Temperatur,,,b509,0d3500,value,,D2C,,°C,Maximaltemperatur gemessen am Brauchwasserauslaufsensor
r,,,StorageTempMax,Max. Speichertemp.,,,b509,0d3600,value,,D2C,,°C,Maximaltemperatur gemessen am Speichersensor
r,,,FlowTempMax,Max. Vorlauftemperatur,,,b509,0d3700,value,,D2C,,°C,Maximaltemperatur gemessen am Vorlaufsensor
r,,,FanPWMSum,Fan_PWM_Sum_DK,,,b509,0d3a00,value,,UIN,,,Predictive Maintenance data for the fan damage recognition
r,,,FanPWMTest,Fan_PWM_Test_DK,,,b509,0d3b00,value,,UCH,,,Predictive Maintenance data for the fan damage recognition
r,,,DeltaFlowReturnMax,MaxDeltaFlowReturn_DK,,,b509,0d3d00,value,,D2C,,°C,Predictive maintenance data
r,,,StorageLoadPumpHours,TankLoadPumpOperationHours_DK,,,b509,0d4c00,value,,UIN,,h,Preditive maintenance data
r,,,StorageloadPumpStarts,TankloadPumpCommunt_DK,,,b509,0d4f00,value,,UIN,,,Preditive maintenance data
r,,,HwcWaterflowMax,Max. WW Vorlauftemp.,,,b509,0d5600,value,,UIN,100,,Maximalwert des Warmwassersensors
r,,,CounterStartAttempts3,Zündfehler 3. Versuch,,,b509,0d8100,value,,UCH,,°C,Anzahl der erfolglosen Zündversuche (im 3. Versuch)
r,,,CounterStartAttempts4,Zündfehler 4. Versuch,,,b509,0d8200,value,,UCH,,°C,Anzahl der erfolglosen Zündversuche (im 4. Versuch)
r,,,ReturnTempMax,Max. Rücklauftemperatur,,,b509,0dbe00,value,,D2C,,°C,Max. Rücklauf Temp HK
r,,,PumpHwcFlowSum,PumpDHWFlowSum_DK,,,b509,0dc100,value,,UIN,,,summed up DHW flow rate
r,,,PumpHwcFlowNumber,PumpDHWFlowNumber_DK,,,b509,0dc200,value,,UCH,,,number of times DHW flow rate was detected
r,,,SHEMaxFlowTemp,Max. WW Vorlauftemp.,,,b509,0dc300,value,,D2C,,°C,Max. Vorlauftemperatur für WW
r,,,SHEMaxDeltaHwcFlow,SHE_MaxDeltaFlowDHW_DK,,,b509,0dc400,value,,D2C,,°C,maximum difference between flow and DHW outlet temperature
r,,,PrEnergySumHwc1,PrEnergySumDHW1_DK,,,b509,0dc500,value,,ULG,,,Predictive maintenance data
r,,,PrEnergyCountHwc1,PrEnergyCountDHW1_DK,,,b509,0dc600,value,,ULG,,,Predictive maintenance data
r,,,PrEnergySumHwc2,PrEnergySumDHW2_DK,,,b509,0dc700,value,,ULG,,,Predictive maintenance data
r,,,PrEnergyCountHwc2,PrEnergyCountDHW2_DK,,,b509,0dc800,value,,ULG,,,Predictive maintenance data
r,,,PrEnergySumHwc3,PrEnergySumDHW3_DK,,,b509,0dc900,value,,ULG,,,Predictive maintenance data
r,,,PrEnergyCountHwc3,PrEnergyCountDHW3_DK,,,b509,0dca00,value,,ULG,,,Predictive maintenance data
r,,,WaterHcFlowMax,MaxWaterFlowCH_DK,,,b509,0dd000,value,,UIN,,,Predictive maintenance data
r,,,WaterpressureVariantSum,WaterpressureVariantSum_DK,,,b509,0df000,value,,UIN,,mbar,Predictive maintenance data
r,,,WaterpressureMeasureCounter,WaterpressureMeasureCounter_DK,,,b509,0df100,value,,UCH,,,Predictive maintenance data
r,,,PrAPSCounter,PrAPSCounter_DK,,,b509,0df200,value,,UCH,,,Predictive maintenance data
r,,,PrAPSSum,PrAPSSum_DK,,,b509,0df300,value,,UIN,,s,Predictive maintenance data
r,,,PrVortexFlowSensorValue,PrVortexFlowSensorValue_DK,,,b509,0df400,value,,SIN,,ADC,Predictive maintenance data
r,,,PrEnergySumHc1,PrEnergySumCH1_DK,,,b509,0df500,value,,ULG,,,Predictive maintenance data
r,,,PrEnergyCountHc1,PrEnergyCountCH1_DK,,,b509,0df600,value,,ULG,,,Predictive maintenance data
r,,,PrEnergySumHc2,PrEnergySumCH2_DK,,,b509,0df700,value,,ULG,,,Predictive maintenance data
r,,,PrEnergyCountHc2,PrEnergyCountCH2_DK,,,b509,0df800,value,,ULG,,,Predictive maintenance data
r,,,PrEnergySumHc3,PrEnergySumCH3_DK,,,b509,0df900,value,,ULG,,,Predictive maintenance data
r,,,PrEnergyCountHc3,PrEnergyCountCH3_DK,,,b509,0dfa00,value,,ULG,,,Predictive maintenance data
r,,,Currenterror,Aktuelle Fehler,,,b503,0001,error,,UIN,,,Fehlernummer,error_1,,UIN,,,Fehlernummer,error_2,,UIN,,,Fehlernummer,error_3,,UIN,,,Fehlernummer,error_4,,UIN,,,Fehlernummer
r,,,Errorhistory,Fehlerhistorie,,,b503,0101,index,m,UCH,,,,status,,UCH,,,Status,time,,BTM,,,Uhrzeit,date,,HDA,,,Datum,error,,UIN,,,Fehlernummer
w,,install,Clearerrorhistory,Fehlerhistorie löschen,,,b503,0201,cleared,s,UCH,0=no;1=yes,,
r,,,Currentservice,Current service message,,,b503,0002,error,,UIN,,,Fehlernummer,error_1,,UIN,,,Fehlernummer,error_2,,UIN,,,Fehlernummer,error_3,,UIN,,,Fehlernummer,error_4,,UIN,,,Fehlernummer
r,,,Servicehistory,Historie Wartungsmeldungen,,,b503,0102,index,m,UCH,,,,status,,UCH,,,Status,time,,BTM,,,Uhrzeit,date,,HDA,,,Datum,error,,UIN,,,Fehlernummer
w,,install,Clearservicehistory,Historie Wartungsmeldungen löschen,,,b503,0202,cleared,s,UCH,0=no;1=yes,,
