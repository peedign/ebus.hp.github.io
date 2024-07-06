type,circuit,level,name,comment,qq,zz,pbsb,id,*name,part,type,divisor/values,unit,comment
*r,
*w,
r,,,T3TempDesired,d.05 T3_Setpoint,,,b509,0d3900,value,,D2C,,°C,Sollwert PWT-Ausgang
r,,,ThermostatkontaktAnKl34,d.08 Wärmeanforderung Klemme 3-4,,,b509,0d2a00,value,,UCH,0=off;1=on,,Status des extrenen Raumthermostat an Klemme 3/4
r,,,Gasvalve,d.30 Gasventil,,,b509,0dbb00,value,,UCH,240=off;15=on,,GMV Ansteuersignal
r,,,TargetFanSpeed,d.33 Lüfter Solldrehzahl,,,b509,0d2400,value,,UIN,,1/min,Drehzahlsollwert des Lüfters
r,,,FanSpeed,d.34 Lüfteristdrehzahl,,,b509,0d8300,value,,UIN,,1/min,Aktuelle Lüfterdrehzahl
r,,,PositionValveSet,d.35 Position VUV,,,b509,0d5400,value,,UCH,,,Position des 3-Wege Ventil: 100=Warmwasser 0=Heizbetrieb 40=Mittenstellung
r,,,T3,d.40 T3,,,b509,0d1800,temp,,D2C,,°C,PWT-Ausgangstemperatur,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,T4,d.41 T4,,,b509,0d9800,temp,,D2C,,°C,PWT-Eingangstemperatur,tempmirror,,UIN,,,,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,IonisationVoltageLevel,d.44 Spannungspegel Ionisationssignal,,,b509,0da400,value,,SIN,10,,Ionisationsspannung: größer 80 = keine Flammekleiner 40 = gutes Flammensignal
r,,,FanSpeedOffsetMin,d.50 Offet min. Lüfterdrehzahl,,,b509,0da700,value,,SIN,,1/min,Offset min. Drehzahl
w,,install,FanSpeedOffsetMin,d.50 Offet min. Lüfterdrehzahl,,,b509,0ea700,value,,SIN,,1/min,Offset min. Drehzahl
r,,,FanSpeedOffsetMax,d.51 Offset max. Lüfterdrehzahl,,,b509,0da800,value,,SIN,,1/min,Offset max. Drehzahl
w,,install,FanSpeedOffsetMax,d.51 Offset max. Lüfterdrehzahl,,,b509,0ea800,value,,SIN,,1/min,Offset max. Drehzahl
r,,,DeactivationsTemplimiter,d.60 STB Abschaltungen,,,b509,0d2000,value,,UCH,,,Anzahl der Abschaltungen durch den Sicherheitstemperaturbgrenzers
r,,,DeactivationsIFC,d.61 Anzahl Zündfehler,,,b509,0d1f00,value,,UCH,,,Anzahl der Zündfehler (nicht erfolgreiche Züdung im letzten Versuch oder fehlerhaftes Flammensignal)
r,,,AverageIgnitiontime,d.64 Mittlere Zündzeit,,,b509,0d2d00,value,,UCH,10,s,Mittlere Zündzeit
r,,,MaxIgnitiontime,d.65 Max. Zündzeit,,,b509,0d2c00,value,,UCH,10,s,Maximale Zündzeit
r,,,CounterStartattempts1,d.68 Zündfehler 1. Versuch,,,b509,0d6e00,value,,UCH,,°C,Anzahl der erfolglosen Zündversuche (im 1. Versuch)
r,,,CounterStartattempts2,d.69 Zündfehler 2. Versuch,,,b509,0d6f00,value,,UCH,,°C,Anzahl der erfolglosen Zündversuche (im 2. Versuch)
r,,,DSNOffset,d.93 Gerätekennung,,,b509,0db500,value,,UCH,,,Gerätekennung (DSN)
w,,service,DSNOffset,d.93 Gerätekennung,,,b509,0eb500,value,,UCH,,,Gerätekennung (DSN)
r,,,Flame,Flammensignal,,,b509,0d0500,value,,UCH,240=off;15=on,,Flammensignal
r,,,ChangesDSN,Anzhl der DSN Änderungen,,,b509,0d0c00,value,,UCH,,,Anzahl der DSN (Gerätekennung) Änderungen
r,,,GasvalveUC,Gasventil,,,b509,0d0d00,value,,UCH,240=off;15=on,,Schaltsignal für das Gasventil
r,,,VolatileLockout,Verriegelnde Störabschaltungen,,,b509,0d1000,value,,UCH,240=no;15=yes,,WAHR: STB Fehler sind verriegelnd
r,,,FlameSensingASIC,SD_Flame_Sensing_ASIC_DK,,,b509,0d2f00,value,,UIN,,,Ioni/ADC Wert vom Flammenwächter
r,,,BoilerType,BoilerType_DK,,,b509,0d5e00,value,,UCH,,,Boiler typ of the bmu
r,,,ReturnTemp,Rücklauftemperatur,,,b509,0d6b00,temp,,D2C,,°C,Externer Rücklauftemperatursensor,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,FloorHeatingContact,Eingang Anlegethermostat,,,b509,0d7000,value,,UCH,0=off;1=on,,Eingang Anlegethermostat
r,,,EbusVoltage,eBUS Spannung,,,b509,0d7f00,value,,UCH,0=off;1=on,,Rückmeldung der eBUS Spannung
r,,,FluegasvalveOpen,Abgasklappe offen,,,b509,0d8900,value,,UCH,0=off;1=on,,Rückmeldung Flüssiggasventil
r,,,Testbyte,Testbyte_DK,,,b509,0d9900,value,,UCH,,,Testbyte (relevant for the Tester)
r,,,DSN,DSN,,,b509,0d9a00,value,,UIN,,,DSN: Device Specific number
r,,,TargetFanSpeedOutput,Lüfter Solldrehzahl,,,b509,0d9f00,value,,UIN,,1/min,Lüfterdrehzahl
r,,,PowerValue,Leistungsdaten,,,b509,0daa00,value,,HEX:6,,,Geräteleistung (min und max)
r,,,Statenumber,Statenumber_DK,,,b509,0dab00,value,,UCH,,,status number
r,,,DSNStart,DSN Startadresse,,,b509,0dbc00,value,,UIN,,,DSN Startadresse
r,,,PartnumberBox,Partnumber_Box,,,b509,0dc000,value,,HEX:5,,,part number of the eBox
r,,,TemplimiterWithNTC,SD_STL_with_NTC,,,b509,0dd200,value,,UCH,240=no;15=yes,,Temperaturbegrenzer Art:1 = NTC0 = Schaltkontakt
r,,,VolatileLockoutIFCGV,SD_VolatileLockout_IFC_GV_DK,,,b509,0dd300,value,,UCH,240=no;15=yes,,Alle IFC Fehler sind nichtflüchtig
r,,,Gasvalve3UC,Gasventil 3,,,b509,0ddb00,value,,UCH,240=off;15=on,,Gasventil Schaltsignal (vom Prozessor)
r,,,InitialisationEEPROM,InitialisationEEPROM_DK,,,b509,0ddc00,value,,UCH,0=no;1=yes,,EEPROM Initialisierrung (für die Produktion)
r,,,TimerInputHc,Eingang Schaltuhr,,,b509,0dde00,value,,UCH,0=off;1=on,,timer input (block heatdemand)
r,,,FanMinSpeedOperation,Min. Lüfterdrehzahl,,,b509,0ddf00,value,,UIN,,1/min,Lüfter Minimaldrehzahl
r,,,FanMaxSpeedOperation,Max. Lüfterdrehzahl,,,b509,0de000,value,,UIN,,1/min,Lüfter Maximaldrehzahl
r,,,FaultlistDK_0_,Fehlerliste,,,b509,0d2600,value,,HEX:10,,,Liste der letzten 10 Fehler
r,,,TempDiffBlock,TempDiffBlock_DK,,,b509,0d1200,value,,UCH,,°C,Number of modulationblocking of the boilers cause of to high/incorrect difference of flow/return temperatures
r,,,TempDiffFailure,TempDiffFailure_DK,,,b509,0d1300,value,,UCH,,°C,Anzahl der Abschaltungen wegen zu hoher / fehlerhafter Differenz von Vor- und Rücklauftemperatur
r,,,ValveStarts,3WV Schaltspiele,,,b509,0d1a00,value,,UIN,,,Anzahl der 3WV Umschaltungen
r,,,FanHours,Betriebsstunden des Lüfters,,,b509,0d1b00,value,,UIN,,h,Betriebsstunden des Lüfters
r,,,FanStarts,FanCommunt_DK,,,b509,0d1c00,value,,UIN,,,Anzahl der Lüfterschaltspiele
r,,,MinIgnitiontime,Min. Zündzeit,,,b509,0d2b00,value,,UCH,10,s,Minimale Zündzeit
r,,,T3Max,T3_max,,,b509,0d3700,value,,D2C,,°C,Maximaltemperatur am PWT-Ausgang
r,,,CounterStartAttempts3,Zündfehler 3. Versuch,,,b509,0d8100,value,,UCH,,°C,Anzahl der erfolglosen Zündversuche (im 3. Versuch)
r,,,CounterStartAttempts4,Zündfehler 4. Versuch,,,b509,0d8200,value,,UCH,,°C,Anzahl der erfolglosen Zündversuche (im 4. Versuch)
r,,,T4Max,T4_max,,,b509,0dbe00,value,,D2C,,°C,Maximaltemperatur am PWT-Eingang
r,,,Currenterror,Aktuelle Fehler,,,b503,0001,error,,UIN,,,Fehlernummer,error_1,,UIN,,,Fehlernummer,error_2,,UIN,,,Fehlernummer,error_3,,UIN,,,Fehlernummer,error_4,,UIN,,,Fehlernummer
r,,,Errorhistory,Fehlerhistorie,,,b503,0101,index,m,UCH,,,,status,,UCH,,,Status,time,,BTM,,,Uhrzeit,date,,HDA,,,Datum,error,,UIN,,,Fehlernummer
w,,install,Clearerrorhistory,Fehlerhistorie löschen,,,b503,0201,cleared,s,UCH,0=no;1=yes,,
