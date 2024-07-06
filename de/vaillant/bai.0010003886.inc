type,circuit,level,name,comment,qq,zz,pbsb,id,*name,part,type,divisor/values,unit,comment
*r,
*w,
r,,,PartloadHcKW,d.00 Heizungsteillast,,,b509,0d0704,value,,UCH,,kW,Heizungsteillast
w,,install,PartloadHcKW,d.00 Heizungsteillast,,,b509,0e0704,value,,UCH,,kW,Heizungsteillast
r,,,WPPostrunTime,d.01 Pumpennachlaufzeit,,,b509,0df703,value,,UCH,,min,Wasserpumpennachlaufzeit nach Heizbetrieb
w,,install,WPPostrunTime,d.01 Pumpennachlaufzeit,,,b509,0ef703,value,,UCH,,min,Wasserpumpennachlaufzeit nach Heizbetrieb
r,,,BlockTimeHcMax,d.02 Maximale Brennersperrzeit,,,b509,0d0904,value,,UCH,,min,Max. Brennersperrzeit bei einem Vorlaufsollwert von 20°C
w,,install,BlockTimeHcMax,d.02 Maximale Brennersperrzeit,,,b509,0e0904,value,,UCH,,min,Max. Brennersperrzeit bei einem Vorlaufsollwert von 20°C
r,,,HwcTemp,d.03 WW Vorlaufsolltemp,,,b509,0d1600,temp,,D2C,,°C,hot water inlet temperature into tank,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,StorageTemp,d.04 Speicheristtemp,,,b509,0d1700,temp,,D2C,,°C,Aktuelle Speichertemperatur und Sensorstatus,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,FlowTempDesired,d.05 Vorlaufsolltemperatur,,,b509,0d3900,value,,D2C,,°C,Vorlaufsolltemperatur oder Rücklaufsolltemperatur (wenn Rücklaufregelung aktiviert wurde). Der Maximalwert wird über d.71 und einem eBUS Regler begrenzt.
r,,,HwcTempDesired,d.06 Brauchwassersollwert,,,b509,0dea03,value,,D2C,,°C,Gewünschte Warmwasser Solltemperatur
r,,,StorageTempDesired,d.07 Speichersolltemp,,,b509,0d0400,value,,D2C,,°C,Storage temperature target value
r,,,ACRoomthermostat,d.08 Raumthermostat,,,b509,0d2a00,value,,UCH,0=off;1=on,,Status des extrenen Raumthermostat an Klemme 3/4
r,,,ExtFlowTempDesiredMin,d.09 Min. ext. Vorlaufsollwert,,,b509,0d6e04,value,,D2C,,°C,minimum out of Kl.7 and eBus flow setpoint
r,,,WP,d.10 Wasserpumpe,,,b509,0d4400,value,,UCH,0=off;1=on,,Interne Heizungspumpe
r,,,ExtWP,d.11 ext. Heizungspumpe,,,b509,0d3f00,value,,UCH,0=off;1=on,,Externe Heizungspumpe
r,,,Storageloadpump,d.12 Speicherladepumpe,,,b509,0d9e00,value,,UCH,,%,Ladepumpenanforderung
r,,,CirPump,d.13 Zirkulationspumpe,,,b509,0d7b00,value,,UCH,0=off;1=on,,Status Zirkulationspumpe (über ein externes Modul ansteuerbar)
r,,,WPPWMPower,d.15 Pumpendrehzahl Istwert,,,b509,0d7300,value,,UCH,,%,Output of pwm pump
r,,,DCRoomthermostat,d.16 Raumthermostat,,,b509,0d0e00,value,,UCH,0=off;1=on,,Status des extrenen Raumthermostat an Klemme 3/4
r,,,HwcDemand,d.22 WW Anforderung,,,b509,0d5800,value,,UCH,0=no;1=yes,,Brauchwasseranforderung (Zapfung oder Schaltsignal vom Speicher)
r,,,HeatingSwitch,d.23 Winterbetrieb,,,b509,0df203,value,,UCH,0=off;1=on,,Wintermodus aktiv (Heizbetrieb und Warmwasser)
r,,,StoragereleaseClock,d.25 Speicherfreigabe,,,b509,0d4704,value,,UCH,0=no;1=yes,,Freigabe der Speichrladung oder des Warmstartspeichers durcheinen eBUS Regler
r,,,PrimaryCircuitFlowRate,d.29 PrimaryCircuitFlowRate_DK,,,b509,0dfb00,value,,UIN,100,,primary circuit water flow rate
r,,,Gasvalve,d.30 Gasventil,,,b509,0dbb00,value,,UCH,240=off;15=on,,GMV Ansteuersignal
r,,,TargetFanSpeed,d.33 Lüfter Solldrehzahl,,,b509,0d2400,value,,UIN,,1/min,Drehzahlsollwert des Lüfters
r,,,FanSpeed,d.34 Lüfteristdrehzahl,,,b509,0d8300,value,,UIN,,1/min,Aktuelle Lüfterdrehzahl
r,,,PositionValveSet,d.35 Position VUV,,,b509,0d5400,value,,UCH,,,Position des 3-Wege Ventil: 100=Warmwasser 0=Heizbetrieb 40=Mittenstellung
r,,,CollTemp,d.38 TCollector_DK,,,b509,0d7800,temp,,D2C,,°C,Collector temperature,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,SolBackTemp,d.39 TSolarBack_DK,,,b509,0d6800,temp,,D2C,,°C,Solarertrag Sensor,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,FlowTemp,d.40 Vorlauftemperatur,,,b509,0d1800,temp,,D2C,,°C,Vorlauftemperatur,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,ReturnTemp,d.41 Rücklauftemperatur,,,b509,0d9800,temp,,D2C,,°C,Rücklauftemperatur,tempmirror,,UIN,,,,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,SBTemp,d.42 TSB_DK,,,b509,0d0600,temp,,D2C,,°C,Speicherbodentemperatur,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,IonisationVoltageLevel,d.44 Spannungspegel Ionisationssignal,,,b509,0da400,value,,SIN,10,,Ionisationsspannung: größer 80 = keine Flammekleiner 40 = gutes Flammensignal
r,,,OutdoorstempSensor,d.47 Außentemperaturfühler,,,b509,0d7600,temp,,D2C,,°C,Außentemperaturwert (ohne Korrekturwert) und Sensorstatus,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,RemainingBoilerblocktime,d.67 Verbleibende Brennersperrzeit,,,b509,0d3800,value,,UCH,,min,Verbleibende Brennersperrzeit
r,,,EBusHeatcontrol,d.90 Digitaler Regler,,,b509,0d0004,value,,UCH,0=no;1=yes,,Gibt an ob ein digitaler Regler erkannt wurde
r,,,DcfState,d.91 DCF Status,,,b509,0d6900,value,,UCH,0=nosignal;1=ok;2=sync;3=valid,,DCF Status
r,,,ExternalFlowTempDesired,ext. Vorlaufsollwert,,,b509,0d2500,value,,D2C,,°C,Vorlaufsollwert von einem externen Regler an Klemme 7-8-9
r,,,ExternalHwcSwitch,Wasserschalter,,,b509,0d0000,value,,UCH,0=off;1=on,,Speicheranforderung eines externen Speichers über den Speicherkontakt
r,,,WaterPressure,Wasserdruck,,,b509,0d0200,press,,FLT,,bar,Wasserdruck,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
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
r,,,HwcImpellorSwitch,Brauchwasserzapfung,,,b509,0d5700,value,,UCH,0=no;1=yes,,WW Zapfung
r,,,WarmstartDemand,Warmstartanforderung,,,b509,0d3a04,value,,UCH,0=no;1=yes,,Warmstartaktivierung
r,,,BoilerType,BoilerType_DK,,,b509,0d5e00,value,,UCH,,,Boiler typ of the bmu
r,,,ParamToken,ParamToken_DK,,,b509,0d6000,value,,UCH,,,token for parameter managment
r,,,Expertlevel_ReturnTemp,Rücklauftemperatur,,,b509,0d6b00,temp,,D2C,,°C,Externer Rücklauftemperatursensor,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,FloorHeatingContact,Eingang Anlegethermostat,,,b509,0d7000,value,,UCH,0=off;1=on,,Eingang Anlegethermostat
r,,,Templimiter,Temperaturbegrenzer,,,b509,0d7700,value,,UCH,240=off;15=on,,Rückmeldung des Temperaturbegrenzer Signals
r,,,SolPump,SolarPump_DK,,,b509,0d7d00,value,,UCH,,%,Modulation of solarpump
r,,,EbusVoltage,eBUS Spannung,,,b509,0d7f00,value,,UCH,0=off;1=on,,Rückmeldung der eBUS Spannung
r,,,FluegasvalveOpen,Abgasklappe offen,,,b509,0d8900,value,,UCH,0=off;1=on,,Rückmeldung Flüssiggasventil
r,,,Testbyte,Testbyte_DK,,,b509,0d9900,value,,UCH,,,Testbyte (relevant for the Tester)
r,,,DSN,DSN,,,b509,0d9a00,value,,UIN,,,DSN: Device Specific number
r,,,TargetFanSpeedOutput,Lüfter Solldrehzahl,,,b509,0d9f00,value,,UIN,,1/min,Lüfterdrehzahl
r,,,PowerValue,Leistungsdaten,,,b509,0daa00,value,,HEX:6,,,Geräteleistung (min und max)
r,,,Statenumber,Statenumber_DK,,,b509,0dab00,value,,UCH,,,status number
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
r,,,HwcSwitch,1xZP,,,b509,0df303,value,,UCH,0=off;1=on,,WW aus/ein
r,,,ProductionByte,ProductionByte,,,b509,0d3e04,value,,UCH,,,
r,,,SerialNumber,SerialNumber,,,b509,0d3f04,value,,HEX:8,,,Seriennummer AI
r,,,PumpspeedDesired,d.14 PumpspeedSetpoint,,,b509,0d0a04,value,,UCH,,,PWM pump speed
r,,,ReturnRegulation,d.17 Rücklaufregelung,,,b509,0d0c04,value,,UCH,0=off;1=on,,Aktivierung der Rücklaufregelung
w,,install,ReturnRegulation,d.17 Rücklaufregelung,,,b509,0e0c04,value,,UCH,0=off;1=on,,Aktivierung der Rücklaufregelung
r,,,HcPumpMode,d.18 Pumpenbetriebsart,,,b509,0d4904,value,,UCH,0=post_run;1=permanent;2=winter,,Pumpenbetriebsart für den Heizbetrieb
w,,install,HcPumpMode,d.18 Pumpenbetriebsart,,,b509,0e4904,value,,UCH,0=post_run;1=permanent;2=winter,,Pumpenbetriebsart für den Heizbetrieb
r,,,SecondPumpMode,d.19 Betriebsart 2. Pumpe,,,b509,0d0b04,value,,UCH,,,Betriebsart 2stufige Pumpe:0 : Brennerbetrieb = Stufe 2 / Vor-Nachlauf = Stufe 11: Brennerbetrieb + Vorlauf = Stufe 1 / Warmwasser = Stufe 22 : Wie 1 aber im Heizbetrieb hängt die Stufe von der Teillast ab (default)3 : Immer Stufe 2
w,,install,SecondPumpMode,d.19 Betriebsart 2. Pumpe,,,b509,0e0b04,value,,UCH,,,Betriebsart 2stufige Pumpe:0 : Brennerbetrieb = Stufe 2 / Vor-Nachlauf = Stufe 11: Brennerbetrieb + Vorlauf = Stufe 1 / Warmwasser = Stufe 22 : Wie 1 aber im Heizbetrieb hängt die Stufe von der Teillast ab (default)3 : Immer Stufe 2
r,,,HwcTempMax,d.20 Max. WW Temperatur,,,b509,0d4304,value,,D2C,,°C,Max. Speichersollwert. Begrenzt den max. Einstellbereich des Potentiometers (Rechtsanschlag).
w,,install,HwcTempMax,d.20 Max. WW Temperatur,,,b509,0e4304,value,,D2C,,°C,Max. Speichersollwert. Begrenzt den max. Einstellbereich des Potentiometers (Rechtsanschlag).
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
r,,,StorageLoadTimeMax,d.75 Max. Speicherladezeit,,,b509,0d1204,value,,UCH,,min,Max. Speicherladezeit für Speicher ohne eigene Regelung
w,,install,StorageLoadTimeMax,d.75 Max. Speicherladezeit,,,b509,0e1204,value,,UCH,,min,Max. Speicherladezeit für Speicher ohne eigene Regelung
r,,,FlowsetHwcMax,d.78 Max. Vorlauftemp. WW,,,b509,0d0f04,value,,D2C,,°C,Maximal erlaubte Vorlauftemperatur für die Speicherladung
w,,install,FlowsetHwcMax,d.78 Max. Vorlauftemp. WW,,,b509,0e0f04,value,,D2C,,°C,Maximal erlaubte Vorlauftemperatur für die Speicherladung
r,,,HcHours,d.80 Hz. Betriebsstunden,,,b509,0d2800,value,,UIN,,h,Betriebsstunden im Heizbetrieb
r,,,Yield,d.59 SolarYieldkWh_DK,,,b509,0d7200,value,,UIN,,kWh,
r,,,HwcHours,d.81 Betriebsstunden WW,,,b509,0d2200,value,,UIN,,h,Betriebsstunden Brauchwasser
r,,,HcStarts,d.82 Schaltspiele Heizbetrieb,,,b509,0d2900,value,,UIN,-100,,Schaltspiele Heizbetrieb
r,,,HwcStarts,d.83 Schaltspiele BW Betrieb,,,b509,0d2300,value,,UIN,-100,,Schaltspiele WW Betrieb
r,,,HoursTillService,d.84 Stunden bis Wartung,,,b509,0d2004,value,,UIN,,h,Wartungsintervall:Anzahl der Stunden bis zur nächsten Wartung
w,,install,HoursTillService,d.84 Stunden bis Wartung,,,b509,0e2004,value,,UIN,,h,Wartungsintervall:Anzahl der Stunden bis zur nächsten Wartung
r,,,DSNOffset,d.93 Gerätekennung,,,b509,0d3004,value,,UCH,,,Gerätekennung (DSN)
w,,service,DSNOffset,d.93 Gerätekennung,,,b509,0e3004,value,,UCH,,,Gerätekennung (DSN)
r,,,SetFactoryValues,d.96 Werkseinstellungen,,,b509,0d6804,value,,UCH,0=no;1=yes,,Werkseinstellungen
w,,install,SetFactoryValues,d.96 Werkseinstellungen,,,b509,0e6804,value,,UCH,0=no;1=yes,,Werkseinstellungen
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
r,,,Maintenancedata_PrEnergySumHwc1,PrEnergySumDHW1_DK,,,b509,0dc700,value,,ULG,,,Predictive maintenance data
r,,,PrEnergyCountHwc2,PrEnergyCountDHW2_DK,,,b509,0dc800,value,,ULG,,,Predictive maintenance data
r,,,PrEnergySumHwc3,PrEnergySumDHW3_DK,,,b509,0dc900,value,,ULG,,,Predictive maintenance data
r,,,PrEnergyCountHwc3,PrEnergyCountDHW3_DK,,,b509,0dca00,value,,ULG,,,Predictive maintenance data
r,,,WaterHcFlowMax,MaxWaterFlowCH_DK,,,b509,0dd000,value,,UIN,,,Predictive maintenance data
r,,,WaterpressureVariantSum,WaterpressureVariantSum_DK,,,b509,0df000,value,,UIN,,mbar,Predictive maintenance data
r,,,WaterpressureMeasureCounter,WaterpressureMeasureCounter_DK,,,b509,0df100,value,,UCH,,,Predictive maintenance data
r,,,PrAPSCounter,PrAPSCounter_DK,,,b509,0df200,value,,UCH,,,Predictive maintenance data
r,,,PrAPSSum,PrAPSSum_DK,,,b509,0df300,value,,UIN,,s,Predictive maintenance data
r,,,PrVortexFlowSensorValue,PrVortexFlowSensorValue_DK,,,b509,0df400,value,,SIN,,ADC,Predictive maintenance data
r,,,PrEnergyCountHc1,PrEnergyCountCH1_DK,,,b509,0df500,value,,ULG,,,Predictive maintenance data
r,,,PrEnergySumHc2,PrEnergySumCH2_DK,,,b509,0df600,value,,ULG,,,Predictive maintenance data
r,,,PrEnergyCountHc2,PrEnergyCountCH2_DK,,,b509,0df700,value,,ULG,,,Predictive maintenance data
r,,,PrEnergySumHc3,PrEnergySumCH3_DK,,,b509,0df800,value,,ULG,,,Predictive maintenance data
r,,,PrEnergyCountHc3,PrEnergyCountCH3_DK,,,b509,0df900,value,,ULG,,,Predictive maintenance data
r,,,Currenterror,Aktuelle Fehler,,,b503,0001,error,,UIN,,,Fehlernummer,error_1,,UIN,,,Fehlernummer,error_2,,UIN,,,Fehlernummer,error_3,,UIN,,,Fehlernummer,error_4,,UIN,,,Fehlernummer
r,,,Errorhistory,Fehlerhistorie,,,b503,0101,index,m,UCH,,,,status,,UCH,,,Status,time,,BTM,,,Uhrzeit,date,,HDA,,,Datum,error,,UIN,,,Fehlernummer
w,,install,Clearerrorhistory,Fehlerhistorie löschen,,,b503,0201,cleared,s,UCH,0=no;1=yes,,
