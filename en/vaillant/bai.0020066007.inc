type,circuit,level,name,comment,qq,zz,pbsb,id,*name,part,type,divisor/values,unit,comment
*r,
*w,
r,,,T3TempDesired,d.05 T3_Setpoint,,,b509,0d3900,value,,D2C,,°C,Sollwert PWT-Ausgang
r,,,ThermostatkontaktAnKl34,d.08 Thermostatkontakt_an_Kl_3_4,,,b509,0d2a00,value,,UCH,0=off;1=on,,External controls heat demand (Clamp 3-4)
r,,,Gasvalve,d.30 Gasvalve,,,b509,0dbb00,value,,UCH,240=off;15=on,,Gasvalve activation signal
r,,,TargetFanSpeed,d.33 Target fan speed,,,b509,0d2400,value,,UIN,,1/min,Fan speed setpoint
r,,,FanSpeed,d.34 Actual fan speed,,,b509,0d8300,value,,UIN,,1/min,fan speed actual value
r,,,PositionValveSet,d.35 Position TWV,,,b509,0d5400,value,,UCH,,,"Position of diverter valve; 100 = DHW, 0 = heating, 40 = middle position"
r,,,T3,d.40 T3,,,b509,0d1800,temp,,D2C,,°C,PWT-Ausgangstemperatur,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,T4,d.41 T4,,,b509,0d9800,temp,,D2C,,°C,PWT-Eingangstemperatur,tempmirror,,UIN,,,,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,IonisationVoltageLevel,d.44 Dig. ionisation voltage,,,b509,0da400,value,,SIN,10,,digital ionisation voltage> 80 no flame< 40 good flame
r,,,FanSpeedOffsetMin,d.50 MinFanSpeedOffset,,,b509,0da700,value,,SIN,,1/min,Offset for minimum fan speed
w,,install,FanSpeedOffsetMin,d.50 MinFanSpeedOffset,,,b509,0ea700,value,,SIN,,1/min,Offset for minimum fan speed
r,,,FanSpeedOffsetMax,d.51 MaxFanSpeedOffset,,,b509,0da800,value,,SIN,,1/min,Offset for maximum fan speed
w,,install,FanSpeedOffsetMax,d.51 MaxFanSpeedOffset,,,b509,0ea800,value,,SIN,,1/min,Offset for maximum fan speed
r,,,DeactivationsTemplimiter,d.60 Number STL cut off,,,b509,0d2000,value,,UCH,,,Number of safety temperature limiter cut offs
r,,,DeactivationsIFC,d.61 Number ignition device cut off,,,b509,0d1f00,value,,UCH,,,"number of lock outs (unsuccessfull ignitons in the last attempt, flame failure)"
r,,,AverageIgnitiontime,d.64 average ignition time,,,b509,0d2d00,value,,UCH,10,s,average ignition time
r,,,MaxIgnitiontime,d.65 Max ignition time,,,b509,0d2c00,value,,UCH,10,s,maximum ignition time
r,,,CounterStartattempts1,d.68 ignition attempts 1,,,b509,0d6e00,value,,UCH,,°C,unsuccessfull ignitions in the first attempt
r,,,CounterStartattempts2,d.69 ignition attempts 2,,,b509,0d6f00,value,,UCH,,°C,unsuccessfull ignitions in the second attempt
r,,,DSNOffset,d.93 Device specific number,,,b509,0db500,value,,UCH,,,DSN aplliance variant setting
w,,service,DSNOffset,d.93 Device specific number,,,b509,0eb500,value,,UCH,,,DSN aplliance variant setting
r,,,Flame,flame,,,b509,0d0500,value,,UCH,240=off;15=on,,flame
r,,,ChangesDSN,Changes_DSN_DK,,,b509,0d0c00,value,,UCH,,,Numbers adjusting (storing) the DSN
r,,,GasvalveUC,SD_Gasvalve_uC_DK,,,b509,0d0d00,value,,UCH,240=off;15=on,,Activation signal of the gasvalve (activated via micrcontroller)
r,,,VolatileLockout,SD_VolatileLockout_DK,,,b509,0d1000,value,,UCH,240=no;15=yes,,TRUE: STB failures is volatileFALSE: STB failure is not volataile
r,,,FlameSensingASIC,SD_Flame_Sensing_ASIC_DK,,,b509,0d2f00,value,,UIN,,,ioni/adc value from the flame control circuit
r,,,BoilerType,BoilerType_DK,,,b509,0d5e00,value,,UCH,,,Boiler typ of the bmu
r,,,ReturnTemp,ReturnTemperature_DK,,,b509,0d6b00,temp,,D2C,,°C,external return sensor,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,FloorHeatingContact,Floor heating contact,,,b509,0d7000,value,,UCH,0=off;1=on,,Floor heating contact
r,,,EbusVoltage,EbusVoltage_DK,,,b509,0d7f00,value,,UCH,0=off;1=on,,feedback signal of the eBus source
r,,,FluegasvalveOpen,FluegasvalveOpen_DK,,,b509,0d8900,value,,UCH,0=off;1=on,,feedback of the flue gas valve
r,,,Testbyte,Testbyte_DK,,,b509,0d9900,value,,UCH,,,Testbyte (relevant for the Tester)
r,,,DSN,DSN_DK,,,b509,0d9a00,value,,UIN,,,DSN: Device Specific number
r,,,TargetFanSpeedOutput,TargetFan_Speed_Output_DK,,,b509,0d9f00,value,,UIN,,1/min,output fan speed
r,,,PowerValue,PowerValue,,,b509,0daa00,value,,HEX:6,,,"Power Values of the Boiler (min Power, max Power)"
r,,,Statenumber,Statenumber_DK,,,b509,0dab00,value,,UCH,,,status number
r,,,DSNStart,DSN start,,,b509,0dbc00,value,,UIN,,,DSN Start adress
r,,,PartnumberBox,Partnumber_Box,,,b509,0dc000,value,,HEX:5,,,part number of the eBox
r,,,TemplimiterWithNTC,SD_STL_with_NTC,,,b509,0dd200,value,,UCH,240=no;15=yes,,Safety temperature limit concept:1 = safety temp. Limit check with NTC0 = safety temp. Limit check with contact
r,,,VolatileLockoutIFCGV,SD_VolatileLockout_IFC_GV_DK,,,b509,0dd300,value,,UCH,240=no;15=yes,,all IFC faults are volataile
r,,,Gasvalve3UC,SD_Gasvalve3_uC_DK,,,b509,0ddb00,value,,UCH,240=off;15=on,,Gasvalve activation signal (from Microcontroller)
r,,,InitialisationEEPROM,InitialisationEEPROM,,,b509,0ddc00,value,,UCH,0=no;1=yes,,Initialisation off all EEPROM values (done in the production)
r,,,TimerInputHc,TimerInputCH_DK,,,b509,0dde00,value,,UCH,0=off;1=on,,timer input (block heatdemand)
r,,,FanMinSpeedOperation,FanMinSpeedOperation,,,b509,0ddf00,value,,UIN,,1/min,Minimum Fan speed of the appliance
r,,,FanMaxSpeedOperation,FanMaxSpeedOperation,,,b509,0de000,value,,UIN,,1/min,Maximum Fan speed of the appliance
r,,,FaultlistDK_0_,Faultlist_DK[0],,,b509,0d2600,value,,HEX:10,,,fault list (of the last 10 failures)
r,,,TempDiffBlock,TempDiffBlock_DK,,,b509,0d1200,value,,UCH,,°C,Number of modulationblocking of the boilers cause of to high/incorrect difference of flow/return temperatures
r,,,TempDiffFailure,TempDiffFailure_DK,,,b509,0d1300,value,,UCH,,°C,Number of cut offs of the boilers cause of to high/incorrect differences of flow/return temperatures
r,,,ValveStarts,TWV_Communt_DK,,,b509,0d1a00,value,,UIN,,,commutations of the three way valve
r,,,FanHours,fan operation hours,,,b509,0d1b00,value,,UIN,,h,fan operation hours
r,,,FanStarts,FanCommunt_DK,,,b509,0d1c00,value,,UIN,,,commutations of the fan
r,,,MinIgnitiontime,min_Ignitiontime_DK,,,b509,0d2b00,value,,UCH,10,s,minimum ignition time
r,,,T3Max,T3_max,,,b509,0d3700,value,,D2C,,°C,Maximaltemperatur am PWT-Ausgang
r,,,CounterStartAttempts3,CounterStartAttempts3_DK,,,b509,0d8100,value,,UCH,,°C,unsuccessfull ignitions in the third attempt
r,,,CounterStartAttempts4,CounterStartAttempts4_DK,,,b509,0d8200,value,,UCH,,°C,unsuccessfull ignitions in the fourth attempt
r,,,T4Max,T4_max,,,b509,0dbe00,value,,D2C,,°C,Maximaltemperatur am PWT-Eingang
r,,,Currenterror,Current errors,,,b503,0001,error,,UIN,,,error number,error_1,,UIN,,,error number,error_2,,UIN,,,error number,error_3,,UIN,,,error number,error_4,,UIN,,,error number
r,,,Errorhistory,Error_History,,,b503,0101,index,m,UCH,,,,status,,UCH,,,Status,time,,BTM,,,time,date,,HDA,,,date,error,,UIN,,,error number
w,,install,Clearerrorhistory,Clear error history,,,b503,0201,cleared,s,UCH,0=no;1=yes,,
