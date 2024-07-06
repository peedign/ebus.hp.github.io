type,circuit,level,name,comment,qq,zz,pbsb,id,*name,part,type,divisor/values,unit,comment
*r,
*w,
*[id_sw],scan,,,,SW
[id_sw>=413]r,,,APCLegioProtection,d.74 APC_LegioProtection,,,b509,0d9704,value,,UCH,,,Legionellenschutz für internen Speicher
[id_sw>=413]w,,install_NOT_YET_CONFIRMED,APCLegioProtection,d.74 APC_LegioProtection,,,b509,0e9704,value,,UCH,,,Legionellenschutz für internen Speicher
r,,,PartloadHcKW,d.00 Heizungsteillast,,,b509,0d6c00,value,,UCH,,kW,Heizungsteillast
w,,install_NOT_YET_CONFIRMED,PartloadHcKW,d.00 Heizungsteillast,,,b509,0e6c00,value,,UCH,,kW,Heizungsteillast
r,,,WPPostrunTime,d.01 Pumpennachlaufzeit,,,b509,0d6400,value,,UCH,,min,Wasserpumpennachlaufzeit nach Heizbetrieb
w,,install_NOT_YET_CONFIRMED,WPPostrunTime,d.01 Pumpennachlaufzeit,,,b509,0e6400,value,,UCH,,min,Wasserpumpennachlaufzeit nach Heizbetrieb
r,,,BlockTimeHcMax,d.02 Maximale Brennersperrzeit,,,b509,0d2100,value,,UCH,,min,Max. Brennersperrzeit bei einem Vorlaufsollwert von 20°C
w,,install_NOT_YET_CONFIRMED,BlockTimeHcMax,d.02 Maximale Brennersperrzeit,,,b509,0e2100,value,,UCH,,min,Max. Brennersperrzeit bei einem Vorlaufsollwert von 20°C
r,,,HwcTemp,d.03 WW Vorlaufsolltemp,,,b509,0d1600,temp,,D2C,,°C,Vorlauftemperatur bei Warmwasserzapfung (nur bei Kombi-Heizgeräten),sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,StorageTemp,d.04 Speicheristtemp,,,b509,0d1700,temp,,D2C,,°C,current temperature for warm start sensor (combination boiler only) Current storage tank sensor (system boiler only),sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,FlowTempDesired,d.05 Vorlaufsolltemperatur,,,b509,0d3900,value,,D2C,,°C,Vorlaufsolltemperatur oder Rücklaufsolltemperatur (wenn Rücklaufregelung aktiviert wurde). Der Maximalwert wird über d.71 und einem eBUS Regler begrenzt.
r,,,StorageTempDesired,d.07 Speichersolltemp.,,,b509,0d0400,value,,D2C,,°C,VCW: Solltemperatur des WarmstartspeichersVC: Solltemperatur des externen Speichers
r,,,ExtFlowTempDesiredMin,d.09 Min. ext. Vorlaufsollwert,,,b509,0df304,value,,D2C,,°C,minimum out of Kl.7 and eBus flow setpoint
r,,,WP,d.10 Wasserpumpe,,,b509,0d4400,value,,UCH,0=off;1=on,,Interne Heizungspumpe
r,,,ExtWP,d.11 ext. Heizungspumpe,,,b509,0d3f00,value,,UCH,0=off;1=on,,Externe Heizungspumpe
r,,,Storageloadpump,d.12 Speicherladepumpe,,,b509,0d9e00,value,,UCH,,%,Ladepumpenanforderung
r,,,CirPump,d.13 Zirkulationspumpe,,,b509,0d7b00,value,,UCH,0=off;1=on,,Status Zirkulationspumpe (über ein externes Modul ansteuerbar)
r,,,PumpPowerDesired,d.14 Leistung Heizungspumpe Soll,,,b509,0da100,value,,UCH,0=auto;1=_53;2=_60;3=_70;4=_85;5=_100,%,PWM-Leistungsstufe der Heizungspumpe
w,,install_NOT_YET_CONFIRMED,PumpPowerDesired,d.14 Leistung Heizungspumpe Soll,,,b509,0ea100,value,,UCH,0=auto;1=_53;2=_60;3=_70;4=_85;5=_100,%,PWM-Leistungsstufe der Heizungspumpe
r,,,PumpPower,d.15 Leistung Heizungspumpe,,,b509,0d7300,value,,UCH,,,Current central heating pump power
r,,,DCRoomthermostat,d.16 Raumthermostat,,,b509,0d0e00,value,,UCH,0=off;1=on,,Wärmeanforderung vom externen Regler (Klemme 3-4)
r,,,HwcDemand,d.22 WW Anforderung,,,b509,0d5800,value,,UCH,0=no;1=yes,,Brauchwasseranforderung (Zapfung oder Schaltsignal vom Speicher)
r,,,HeatingSwitch,d.23 Winterbetrieb,,,b509,0df203,value,,UCH,0=off;1=on,,Wintermodus aktiv (Heizbetrieb und Warmwasser)
w,,install_NOT_YET_CONFIRMED,HeatingSwitch,d.23 Winterbetrieb,,,b509,0ef203,value,,UCH,0=off;1=on,,Wintermodus aktiv (Heizbetrieb und Warmwasser)
r,,,PrimaryCircuitFlowrate,d.29 Wasserumlaufmenge,,,b509,0dfb00,value,,UIN,100,l/min,primary circuit water flow rate
r,,,TargetFanSpeed,d.33 Lüfter Solldrehzahl,,,b509,0d2400,value,,UIN,,1/min,Drehzahlsollwert des Lüfters
r,,,FanSpeed,d.34 Lüfteristdrehzahl,,,b509,0d8300,value,,UIN,,1/min,Aktuelle Lüfterdrehzahl
r,,,PositionValveSet,d.35 Position VUV,,,b509,0d5400,value,,UCH,,,Position des 3-Wege Ventil: 100=Warmwasser 0=Heizbetrieb 40=Mittenstellung
r,,,FlowTemp,d.40 Vorlauftemperatur,,,b509,0d1800,temp,,D2C,,°C,Vorlauftemperatur,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,ReturnTemp,d.41 Rücklauftemperatur,,,b509,0d9800,temp,,D2C,,°C,Rücklauftemperatur,tempmirror,,UIN,,,,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,IonisationVoltageLevel,d.44 Spannungspegel Ionisationssignal,,,b509,0da400,value,,SIN,10,,Ionisationsspannung: größer 80 = keine Flammekleiner 40 = gutes Flammensignal
r,,,OutdoorstempSensor,d.47 Außentemperaturfühler,,,b509,0d7600,temp,,D2C,,°C,Außentemperaturwert (ohne Korrekturwert) und Sensorstatus,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,RemainingBoilerblocktime,d.67 Verbleibende Brennersperrzeit,,,b509,0d3800,value,,UCH,,min,Verbleibende Brennersperrzeit
r,,,DcfState,d.91 DCF Status,,,b509,0d6900,value,,UCH,0=nosignal;1=ok;2=sync;3=valid,,DCF Status
r,,,ExternalHwcSwitch,Wasserschalter,,,b509,0d0000,value,,UCH,0=off;1=on,,Speicheranforderung eines externen Speichers über den Speicherkontakt
r,,,WaterPressure,Wasserdruck,,,b509,0d0200,press,,FLT,,bar,Wasserdruck,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,Flame,Flammensignal,,,b509,0d0500,value,,UCH,240=off;15=on,,Flammensignal
r,,,ChangesDSN,Anzhl der DSN Änderungen,,,b509,0d0c00,value,,UCH,,,Anzahl der DSN (Gerätekennung) Änderungen
r,,,GasvalveUC,Gasventil,,,b509,0d0d00,value,,UCH,240=off;15=on,,Schaltsignal für das Gasventil
r,,,VolatileLockout,Verriegelnde Störabschaltungen,,,b509,0d1000,value,,UCH,240=no;15=yes,,WAHR: STB Fehler sind verriegelnd
r,,,ModulationTempDesired,Modulationssollwert,,,b509,0d2e00,value,,SIN,10,%,Modulationssollwert
r,,,FlameSensingASIC,SD_Flame_Sensing_ASIC,,,b509,0d2f00,value,,UIN,,,Ioni/ADC Wert vom Flammenwächter
r,,,HcUnderHundredStarts,HZ_UnderHundred_SwiActi,,,b509,0d3000,value,,UCH,,,Heat switch cycles under hundred
r,,,HwcUnderHundredStarts,BW_UnderHundred_SwiActi,,,b509,0d3100,value,,UCH,,,DHW switch cycles under hundred
r,,,EbusSourceOn,eBUS Spannungsversorgung,,,b509,0d3400,value,,UCH,0=off;1=on,,Aktivierung der eBUS Speisung
r,,,Fluegasvalve,Abgasklappe offen,,,b509,0d3c00,value,,UCH,0=off;1=on,,Flüssiggas Magnetventil
r,,,ExternalFaultmessage,Ext. Störmeldung,,,b509,0d3e00,value,,UCH,0=off;1=on,,Signal für die externe Störmeldeeinrichtung
r,,,GasvalveASICFeedback,Rückmeldung Gasventil,,,b509,0d4700,value,,UCH,240=off;15=on,,Rückmeldung Gasventil vom ASIC
r,,,GasvalveUCFeedback,Rückmeldung Gasventil,,,b509,0d4800,value,,UCH,240=off;15=on,,Rückmeldung Gasventil vom Prozessor
r,,,Ignitor,Zünder,,,b509,0d4900,value,,UCH,240=off;15=on,,Zündung aktiviert
r,,,HwcTypes,WW Typen,,,b509,0d4b00,value,,UCH,,,DHW type of the appliance
r,,,HwcImpellorSwitch,Brauchwasserzapfung,,,b509,0d5700,value,,UCH,0=no;1=yes,,WW Zapfung
r,,,WarmstartDemand,Warmstartanforderung,,,b509,0d3a04,value,,UCH,0=no;1=yes,,Warmstartaktivierung
r,,,BoilerType,BoilerType,,,b509,0d5e00,value,,UCH,,,Boiler typ of the bmu
r,,,ParamToken,ParamToken,,,b509,0d6000,value,,UCH,,,token for parameter managment
r,,,ReturnTempExternal,Rücklauftemperatur,,,b509,0d6b00,temp,,D2C,,°C,Externer Rücklauftemperatursensor,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,FloorHeatingContact,Eingang Anlegethermostat,,,b509,0d7000,value,,UCH,0=off;1=on,,Eingang Anlegethermostat
r,,,Templimiter,Temperaturbegrenzer,,,b509,0d7700,value,,UCH,240=off;15=on,,Rückmeldung des Temperaturbegrenzer Signals
r,,,EbusVoltage,eBUS Spannung,,,b509,0d7f00,value,,UCH,0=off;1=on,,Rückmeldung der eBUS Spannung
r,,,FluegasvalveOpen,Abgasklappe offen,,,b509,0d8900,value,,UCH,0=off;1=on,,Rückmeldung Flüssiggasventil
r,,,Testbyte,Testbyte,,,b509,0d9900,value,,UCH,,,Testbyte (relevant for the Tester)
r,,,DSN,DSN,,,b509,0d9a00,value,,UIN,,,DSN: Device Specific number
r,,,TargetFanSpeedOutput,Lüfterdrehzahl,,,b509,0d9f00,value,,UIN,,1/min,Lüfterdrehzahl
r,,,PowerValue,Leistungsdaten,,,b509,0daa00,value,,HEX:6,,,Geräteleistung (min und max)
r,,,Statenumber,Statenumber,,,b509,0dab00,value,,UCH,,,status number
r,,,WaterpressureBranchControlOff,Drucksprungerkennung ausschalten,,,b509,0daf00,value,,UCH,0=off;1=on,,Überwachung der Druckänderung beim Schalten der Pumpe kann hiermit aktiviert oder deaktiviert werden
r,,,DSNStart,DSN Startadresse,,,b509,0d3104,value,,UIN,,,DSN Startadresse
r,,,ExtStorageModulCon,VR65 angeschlossen,,,b509,0dbf00,value,,UCH,0=no;1=yes,,Externes Speichermodul (VR65) angeschlosssen
r,,,PartnumberBox,Partnumber_Box,,,b509,0dc000,value,,HEX:5,,,part number of the eBox
r,,,WPSecondStage,WP_SecondStage,,,b509,0ded00,value,,UCH,0=off;1=on,,Second stage of the pump activated
r,,,TemplimiterWithNTC,SD_STL_with_NTC,,,b509,0dd200,value,,UCH,240=no;15=yes,,Temperaturbegrenzer Art:1 = NTC0 = Schaltkontakt
r,,,VolatileLockoutIFCGV,SD_VolatileLockout_IFC_GV,,,b509,0dd300,value,,UCH,240=no;15=yes,,Alle IFC Fehler sind nichtflüchtig
r,,,DisplayMode,DisplayMode,,,b509,0dda00,value,,UCH,,,Display mode of the aplliance
r,,,Gasvalve3UC,Gasventil 3,,,b509,0ddb00,value,,UCH,240=off;15=on,,Gasventil Schaltsignal (vom Prozessor)
r,,,InitialisationEEPROM,InitialisationEEPROM_DK,,,b509,0ddc00,value,,UCH,0=no;1=yes,,EEPROM Initialisierung (für die Produktion)
r,,,TimerInputHc,Eingang Schaltuhr,,,b509,0dde00,value,,UCH,0=off;1=on,,timer input (block heatdemand)
r,,,FanMinSpeedOperation,Min. Lüfterdrehzahl,,,b509,0ddf00,value,,UIN,,1/min,Lüfter Minimaldrehzahl
r,,,FanMaxSpeedOperation,Max. Lüfterdrehzahl,,,b509,0de000,value,,UIN,,1/min,Lüfter Maximaldrehzahl
r,,,ExternGasvalve,Ext. Gasventil,,,b509,0de400,value,,UCH,0=off;1=on,,Externes Magnetventil
r,,,DCFTimeDate,DCF Datum/Uhrzeit,,,b509,0de500,vti,,HTI,,,DCF Time / date stamp struct { uchar sec; uchar min; uchar std; uchar tag; uchar mon; uchar wtg; uchar jah; } Tdcf77_time;,hda,,HDA,,,
r,,,HwcSwitch,1xZP,,,b509,0df303,value,,UCH,0=off;1=on,,WW aus/ein
w,,install_NOT_YET_CONFIRMED,HwcSwitch,1xZP,,,b509,0ef303,value,,UCH,0=off;1=on,,WW aus/ein
r,,,ProductionByte,ProductionByte,,,b509,0d3e04,value,,UCH,,,
r,,,SerialNumber,SerialNumber,,,b509,0d3f04,value,,HEX:8,,,Seriennummer AI
r,,,ReturnRegulation,d.17 Rücklaufregelung,,,b509,0db300,value,,UCH,0=off;1=on,,Aktivierung der Rücklaufregelung
w,,install_NOT_YET_CONFIRMED,ReturnRegulation,d.17 Rücklaufregelung,,,b509,0eb300,value,,UCH,0=off;1=on,,Aktivierung der Rücklaufregelung
r,,,HcPumpMode,d.18 Pumpenbetriebsart,,,b509,0db700,value,,UCH,0=post_run;1=permanent;2=winter,,Pumpenbetriebsart für den Heizbetrieb
w,,install_NOT_YET_CONFIRMED,HcPumpMode,d.18 Pumpenbetriebsart,,,b509,0eb700,value,,UCH,0=post_run;1=permanent;2=winter,,Pumpenbetriebsart für den Heizbetrieb
r,,,HwcTempMax,d.20 Max. WW Temperatur,,,b509,0dd900,value,,D2C,,°C,Max. Speichersollwert. Begrenzt den max. Einstellbereich des Potentiometers (Rechtsanschlag).
w,,install_NOT_YET_CONFIRMED,HwcTempMax,d.20 Max. WW Temperatur,,,b509,0ed900,value,,D2C,,°C,Max. Speichersollwert. Begrenzt den max. Einstellbereich des Potentiometers (Rechtsanschlag).
r,,,OptionalRelais,d.26 OptionalRelais,,,b509,0db800,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Option relais function
w,,install_NOT_YET_CONFIRMED,OptionalRelais,d.26 OptionalRelais,,,b509,0eb800,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Option relais function
r,,,AccessoriesOne,d.27 Zubehörrelais 1,,,b509,0db900,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Funktion des Zubehörrelais 1
w,,install_NOT_YET_CONFIRMED,AccessoriesOne,d.27 Zubehörrelais 1,,,b509,0eb900,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Funktion des Zubehörrelais 1
r,,,AccessoriesTwo,d.28 Zubehörrelais 2,,,b509,0dba00,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Funktion des Zubehörrelais 2
w,,install_NOT_YET_CONFIRMED,AccessoriesTwo,d.28 Zubehörrelais 2,,,b509,0eba00,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Funktion des Zubehörrelais 2
r,,,FanSpeedOffsetMin,d.50 Offset min. Lüfterdrehzahl,,,b509,0da700,value,,SIN,,1/min,Offset min. Drehzahl
w,,install_NOT_YET_CONFIRMED,FanSpeedOffsetMin,d.50 Offset min. Lüfterdrehzahl,,,b509,0ea700,value,,SIN,,1/min,Offset min. Drehzahl
r,,,FanSpeedOffsetMax,d.51 Offset max. Lüfterdrehzahl,,,b509,0da800,value,,SIN,,1/min,Offset max. Drehzahl
w,,install_NOT_YET_CONFIRMED,FanSpeedOffsetMax,d.51 Offset max. Lüfterdrehzahl,,,b509,0ea800,value,,SIN,,1/min,Offset max. Drehzahl
r,,,DeactivationsTemplimiter,d.60 STB Abschaltungen,,,b509,0d2000,value,,UCH,,,Anzahl der Abschaltungen durch den Sicherheitstemperaturbgrenzers
r,,,DeactivationsIFC,d.61 Anzahl Zündfehler,,,b509,0d1f00,value,,UCH,,,Anzahl der Zündfehler (nicht erfolgreiche Züdung im letzten Versuch oder fehlerhaftes Flammensignal)
r,,,AverageIgnitiontime,d.64 Mittlere Zündzeit,,,b509,0d2d00,value,,UCH,10,s,Mittlere Zündzeit
r,,,MaxIgnitiontime,d.65 Max. Zündzeit,,,b509,0d2c00,value,,UCH,10,s,Maximale Zündzeit
r,,,CounterStartattempts1,d.68 Zündfehler 1. Versuch,,,b509,0d6e00,value,,UCH,,°C,Anzahl der erfolglosen Zündversuche (im 1. Versuch)
r,,,CounterStartattempts2,d.69 Zündfehler 2. Versuch,,,b509,0d6f00,value,,UCH,,°C,Anzahl der erfolglosen Zündversuche (im 2. Versuch)
r,,,FlowsetHcMax,d.71 Max. Vorlauftemp. Heizbetrieb,,,b509,0d0e04,value,,D2C,,°C,Einstellung des maximalen Vorlaufsollwert im Heizbetrieb (bei Linksanschlag des Poti)
w,,install_NOT_YET_CONFIRMED,FlowsetHcMax,d.71 Max. Vorlauftemp. Heizbetrieb,,,b509,0e0e04,value,,D2C,,°C,Einstellung des maximalen Vorlaufsollwert im Heizbetrieb (bei Linksanschlag des Poti)
r,,,StorageLoadTimeMax,d.75 Max. Speicherladezeit,,,b509,0d6600,value,,UCH,,min,Max. Speicherladezeit für Speicher ohne eigene Regelung
w,,install_NOT_YET_CONFIRMED,StorageLoadTimeMax,d.75 Max. Speicherladezeit,,,b509,0e6600,value,,UCH,,min,Max. Speicherladezeit für Speicher ohne eigene Regelung
r,,,FlowsetHwcMax,d.78 Max. Vorlauftemp. WW,,,b509,0da600,value,,D2C,,°C,Maximal erlaubte Vorlauftemperatur für die Speicherladung
w,,install_NOT_YET_CONFIRMED,FlowsetHwcMax,d.78 Max. Vorlauftemp. WW,,,b509,0ea600,value,,D2C,,°C,Maximal erlaubte Vorlauftemperatur für die Speicherladung
r,,,HcHours,d.80 Hz. Betriebsstunden,,,b509,0d2800,value,,UIN,,h,Betriebsstunden im Heizbetrieb
r,,,HwcHours,d.81 Betriebsstunden WW,,,b509,0d2200,value,,UIN,,h,Betriebsstunden Brauchwasser
r,,,HcStarts,d.82 Schaltspiele Heizbetrieb,,,b509,0d2900,value,,UIN,-100,,Schaltspiele Heizbetrieb
r,,,HwcStarts,d.83 Schaltspiele BW Betrieb,,,b509,0d2300,value,,UIN,-100,,Schaltspiele WW Betrieb
r,,,HoursTillService,d.84 Stunden bis Wartung,,,b509,0dac00,value,,UIN,,h,Wartungsintervall:Anzahl der Stunden bis zur nächsten Wartung
w,,install_NOT_YET_CONFIRMED,HoursTillService,d.84 Stunden bis Wartung,,,b509,0eac00,value,,UIN,,h,Wartungsintervall:Anzahl der Stunden bis zur nächsten Wartung
r,,,AntiCondensValue,d.85 Minimale Leistung zur Vermeidung von Kondensation,,,b509,0dec00,value,,UCH,,kW,Minimale Leistung zur Vermeidung von Kondensation
w,,install_NOT_YET_CONFIRMED,AntiCondensValue,d.85 Minimale Leistung zur Vermeidung von Kondensation,,,b509,0eec00,value,,UCH,,kW,Minimale Leistung zur Vermeidung von Kondensation
r,,,DSNOffset,d.93 Gerätekennung,,,b509,0d3004,value,,UCH,,,Gerätekennung (DSN)
w,,service_NOT_YET_CONFIRMED,DSNOffset,d.93 Gerätekennung,,,b509,0e3004,value,,UCH,,,Gerätekennung (DSN)
r,,,SetFactoryValues,d.96 Werkseinstellungen,,,b509,0d6804,value,,UCH,0=no;1=yes,,Werkseinstellungen
w,,install_NOT_YET_CONFIRMED,SetFactoryValues,d.96 Werkseinstellungen,,,b509,0e6804,value,,UCH,0=no;1=yes,,Werkseinstellungen
r,,,CodingResistor,d.98 SD_CodingResistor,,,b509,0d9200,value,,HEX:3,,,Therme Identifikation Widerstand
r,,,StorageExitTemp,d.125 Speicherauslauftemp. Istwert,,,b509,0d5000,temp,,D2C,,°C,Speicherauslauftemperatur Istwert,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,StorageDelay,d.126 Verzögerung der Speicherladung,,,b509,0d0900,value,,UCH,,min,Verzögerung der Speicherladung
r,,,TempGradientFailure,Gradientenfehler,,,b509,0d1100,value,,UCH,,°C,Anzahl der Boilerabschaltung wegen zu hohem Gradient (S.54)
r,,,TempDiffBlock,TempDiffBlock,,,b509,0d1200,value,,UCH,,°C,Number of modulationblocking of the boilers cause of to high/incorrect difference of flow/return temperatures
r,,,TempDiffFailure,TempDiffFailure,,,b509,0d1300,value,,UCH,,°C,Anzahl der Abschaltungen wegen zu hoher / fehlerhafter Differenz von Vor- und Rücklauftemperatur
r,,,PumpHours,Betriebsstunden Pumpe,,,b509,0d1400,value,,UIN,,h,Pumpenbetriebsstunden
r,,,HcPumpStarts,CH_PumpCommunt,,,b509,0d1500,value,,UIN,,,Schaltspiele Pumpe
r,,,ValveStarts,3WV Schaltspiele,,,b509,0d1a00,value,,UIN,,,Anzahl der 3WV Umschaltungen
r,,,FanHours,Betriebsstunden Lüfter,,,b509,0d1b00,value,,UIN,,h,Betriebsstunden des Lüfters
r,,,FanStarts,FanCommunt,,,b509,0d1c00,value,,UIN,,,Anzahl der Lüfterschaltspiele
r,,,OverflowCounter,Überlauf PM Zähler,,,b509,0d1e00,value,,UCH,0=no;1=yes,,Predictive Maintenance counter have got an overflow
r,,,TempMaxDiffExtTFT,MaxTempDiffExtTFT,,,b509,0d2700,value,,D2C,,°C,Predictive maintenance data
r,,,MinIgnitiontime,Minimale Zündzeit,,,b509,0d2b00,value,,UCH,10,s,Minimale Zündzeit
r,,,Maintenancedata_HwcTempMax,Max. WW Temperatur,,,b509,0d3500,value,,D2C,,°C,Maximaltemperatur gemessen am Brauchwasserauslaufsensor
r,,,StorageTempMax,Max. Speichertemp.,,,b509,0d3600,value,,D2C,,°C,Maximaltemperatur gemessen am Speichersensor
r,,,FlowTempMax,Max. Vorlauftemperatur,,,b509,0d3700,value,,D2C,,°C,Maximaltemperatur gemessen am Vorlaufsensor
r,,,FanPWMSum,Fan_PWM_Sum,,,b509,0d3a00,value,,UIN,,,Predictive Maintenance data for the fan damage recognition
r,,,FanPWMTest,Fan_PWM_Test,,,b509,0d3b00,value,,UCH,,,Predictive Maintenance data for the fan damage recognition
r,,,DeltaFlowReturnMax,MaxDeltaFlowReturn,,,b509,0d3d00,value,,D2C,,°C,Wartungsdaten
r,,,StorageLoadPumpHours,TankLoadPumpOperationHours,,,b509,0d4c00,value,,UIN,,h,Preditive maintenance data
r,,,StorageloadPumpStarts,TankloadPumpCommunt,,,b509,0d4f00,value,,UIN,,,Preditive maintenance data
r,,,HwcWaterflowMax,Max. WW Vorlauftemp.,,,b509,0d5600,value,,UIN,100,,Maximalwert des Warmwassersensors
r,,,CounterStartAttempts3,Zündfehler 3. Versuch,,,b509,0d8100,value,,UCH,,°C,Anzahl der erfolglosen Zündversuche (im 3. Versuch)
r,,,CounterStartAttempts4,Zündfehler 4. Versuch,,,b509,0d8200,value,,UCH,,°C,Anzahl der erfolglosen Zündversuche (im 4. Versuch)
r,,,ReturnTempMax,Max. Rücklauftemperatur,,,b509,0dbe00,value,,D2C,,°C,Max. Rücklauftemperatur
r,,,PumpHwcFlowSum,PumpDHWFlowSum,,,b509,0dc100,value,,UIN,,,summed up DHW flow rate
r,,,PumpHwcFlowNumber,PumpDHWFlowNumber,,,b509,0dc200,value,,UCH,,,number of times DHW flow rate was detected
r,,,SHEMaxFlowTemp,Max. WW Vorlauftemp.,,,b509,0dc300,value,,D2C,,°C,Max. Vorlauftemperatur für WW
r,,,SHEMaxDeltaHwcFlow,SHE_MaxDeltaFlowDHW,,,b509,0dc400,value,,D2C,,°C,maximum difference between flow and DHW outlet temperature
r,,,PrEnergySumHwc1,PrEnergySumDHW1,,,b509,0dc500,value,,ULG,,,Wartungsdaten
r,,,PrEnergyCountHwc1,PrEnergyCountDHW1,,,b509,0dc600,value,,ULG,,,Wartungsdaten
r,,,PrEnergySumHwc2,PrEnergySumDHW2,,,b509,0dc700,value,,ULG,,,Wartungsdaten
r,,,PrEnergyCountHwc2,PrEnergyCountDHW2,,,b509,0dc800,value,,ULG,,,Wartungsdaten
r,,,PrEnergySumHwc3,PrEnergySumDHW3,,,b509,0dc900,value,,ULG,,,Wartungsdaten
r,,,PrEnergyCountHwc3,PrEnergyCountDHW3,,,b509,0dca00,value,,ULG,,,Wartungsdaten
r,,,WaterHcFlowMax,MaxWaterFlowCH,,,b509,0dd000,value,,UIN,,,Wartungsdaten
r,,,WaterpressureVariantSum,WaterpressureVariantSum,,,b509,0df000,value,,UIN,,mbar,Wartungsdaten
r,,,WaterpressureMeasureCounter,WaterpressureMeasureCounter,,,b509,0df100,value,,UCH,,,Wartungsdaten
r,,,PrAPSCounter,PrAPSCounter,,,b509,0df200,value,,UCH,,,Wartungsdaten
r,,,PrAPSSum,PrAPSSum,,,b509,0df300,value,,UIN,,s,Wartungsdaten
r,,,PrVortexFlowSensorValue,PrVortexFlowSensorValue,,,b509,0df400,value,,SIN,,ADC,Wartungsdaten
r,,,PrEnergySumHc1,PrEnergySumCH1,,,b509,0df500,value,,ULG,,,Wartungsdaten
r,,,PrEnergyCountHc1,PrEnergyCountCH1,,,b509,0df600,value,,ULG,,,Wartungsdaten
r,,,PrEnergySumHc2,PrEnergySumCH2,,,b509,0df700,value,,ULG,,,Wartungsdaten
r,,,PrEnergyCountHc2,PrEnergyCountCH2,,,b509,0df800,value,,ULG,,,Wartungsdaten
r,,,PrEnergySumHc3,PrEnergySumCH3,,,b509,0df900,value,,ULG,,,Wartungsdaten
r,,,PrEnergyCountHc3,PrEnergyCountCH3,,,b509,0dfa00,value,,ULG,,,Wartungsdaten
r,,,Currenterror,Aktuelle Fehler,,,b503,0001,error,,UIN,,,Fehlernummer,error_1,,UIN,,,Fehlernummer,error_2,,UIN,,,Fehlernummer,error_3,,UIN,,,Fehlernummer,error_4,,UIN,,,Fehlernummer
r,,,Errorhistory,Fehlerhistorie,,,b503,0101,index,m,UCH,,,,status,,UCH,,,Status,time,,BTM,,,Uhrzeit,date,,HDA,,,Datum,error,,UIN,,,Fehlernummer
w,,install,Clearerrorhistory,Fehlerhistorie löschen,,,b503,0201,cleared,s,UCH,0=no;1=yes,,
