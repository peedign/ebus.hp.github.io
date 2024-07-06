type,circuit,level,name,comment,qq,zz,pbsb,id,*name,part,type,divisor/values,unit,comment
*r,
*w,
r,,,PartloadHcKW,d.00 heating partload,,,b509,0d0704,value,,UCH,,kW,Heating part load
w,,,PartloadHcKW,d.00 heating partload,,,b509,0e0704,value,,UCH,,kW,Heating part load
r,,,WPPostrunTime,d.01 central heating overruntime,,,b509,0df703,value,,UCH,,min,water pump overrun time for heating mode
w,,,WPPostrunTime,d.01 central heating overruntime,,,b509,0ef703,value,,UCH,,min,water pump overrun time for heating mode
r,,,BlockTimeHcMax,d.02 Max blocking time CH,,,b509,0d0904,value,,UCH,,min,max. burner anti cycling period at 20°C Flow temperature setpoint
w,,,BlockTimeHcMax,d.02 Max blocking time CH,,,b509,0e0904,value,,UCH,,min,max. burner anti cycling period at 20°C Flow temperature setpoint
r,,,HwcTemp,d.03 Temp DHW,,,b509,0d1600,temp,,D2C,,°C,hot water flow temperature (combination boiler only),sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,StorageTemp,d.04 Temp storage / she,,,b509,0d1700,temp,,D2C,,°C,current temperature for warm start sensor (combination boiler only) Current storage tank sensor (system boiler only),sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,FlowTempDesired,d.05 flow/return setpoint,,,b509,0d3900,value,,D2C,,°C,Flow temperature target value or return target value when return regulation is set
r,,,HwcTempDesired,d.06 DHW setpoint,,,b509,0dea03,value,,D2C,,°C,Hot water temperature target value
r,,,StorageTempDesired,d.07 Storage setpoint,,,b509,0d0400,value,,D2C,,°C,"Warm start temperature value (combination boiler plus only), Storage temperature target value (system boiler only)"
r,,,ACRoomthermostat,d.08 Room thermostat 230 V,,,b509,0d2a00,value,,UCH,0=off;1=on,,External controls heat demand (Clamp 3-4)
r,,,ExtFlowTempDesiredMin,d.09 ext flowsetpoint,,,b509,0d6e04,value,,D2C,,°C,minimum out of Kl.7 and eBus flow setpoint
r,,,WP,d.10 Central heating pump,,,b509,0d4400,value,,UCH,0=off;1=on,,internal heating pump
r,,,ExtWP,d.11 external pump,,,b509,0d3f00,value,,UCH,0=off;1=on,,External heating pump
r,,,Storageloadpump,d.12 storage load pump,,,b509,0d9e00,value,,UCH,,%,tank load pump demand
r,,,CirPump,d.13 Circulation pump,,,b509,0d7b00,value,,UCH,0=off;1=on,,Hot water circulation pump (via external module)
r,,,WPPWMPower,d.15 WP_PWMPower_DK,,,b509,0d7300,value,,UCH,,%,actual PWM-Powerrate of electronic-pump
r,,,HwcDemand,d.22 DHW demand,,,b509,0d5800,value,,UCH,0=no;1=yes,,domestic hot water (tapping or tank contact) demand
r,,,HeatingSwitch,d.23 operation mode,,,b509,0df203,value,,UCH,0=off;1=on,,Wintermode active
r,,,AircontrolOk,d.24 SD_AircontrolOk_DK,,,b509,0d0300,value,,UCH,240=off;15=on,,Air pressure switch
r,,,StoragereleaseClock,d.25 DHW demand enabled,,,b509,0d4704,value,,UCH,0=no;1=yes,,hot water release (tank storage) via eBus Control
r,,,Gasvalve,d.30 Gasvalve,,,b509,0dbb00,value,,UCH,240=off;15=on,,Gasvalve activation signal
r,,,TargetFanSpeed,d.33 Target fan speed,,,b509,0d2400,value,,UIN,,1/min,Fan speed setpoint
r,,,FanSpeed,d.34 Actual fan speed,,,b509,0d8300,value,,UIN,,1/min,fan speed actual value
r,,,PositionValveSet,d.35 Position TWV,,,b509,0d5400,value,,UCH,,,"Position of diverter valve; 100 = DHW, 0 = heating, 40 = middle position"
r,,,HwcWaterflow,d.36 DHW waterflow,,,b509,0d5500,value,,UIN,100,,domestic hot water flow sensor
r,,,FlowTemp,d.40 TFT_DK,,,b509,0d1800,temp,,D2C,,°C,Flow temperature,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,ReturnTemp,d.41 Temp heating return,,,b509,0d9800,temp,,D2C,,°C,return temperature,tempmirror,,UIN,,,,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,IonisationVoltageLevel,d.44 Dig. ionisation voltage,,,b509,0da400,value,,SIN,10,,digital ionisation voltage
r,,,OutdoorstempSensor,d.47 Temp outside,,,b509,0d7600,temp,,D2C,,°C,Outside temperature (uncorrected value),sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,AITemp,d.48 SD_TAI_DK,,,b509,0d3300,temp,,D2C,,°C,Exhaust sensor (inside the flue pipe),tempmirror,,UIN,,,,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,AATemp,d.49 SD_TAA_DK,,,b509,0d3200,temp,,D2C,,°C,Exhaust sensor (outside the flue pipe),tempmirror,,UIN,,,,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,RemainingBoilerblocktime,d.67 Remaining burner block time,,,b509,0d3800,value,,UCH,,min,Remaining burner anti cycling time
r,,,EBusHeatcontrol,d.90 Digital control recognized,,,b509,0d0004,value,,UCH,0=no;1=yes,,Digital regulator status
r,,,DcfState,d.91 Status DCF 77,,,b509,0d6900,value,,UCH,0=nosignal;1=ok;2=sync;3=valid,,dcfStatus
r,,,DCRoomthermostat,d.16 room thermostat 24 V,,,b509,0d0e00,value,,UCH,0=off;1=on,,External controls heat demand (Clamp 3-4)
r,,,HwcSwitch,DHW_Switch,,,b509,0df303,value,,UCH,0=off;1=on,,DHW on/off
r,,,WaterPressure,water pressure,,,b509,0d0200,press,,FLT,,bar,value of waterpressure-sensor,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,ExternGasvalve,ExternGasvalve_DK,,,b509,0de400,value,,UCH,0=off;1=on,,external gasvalve activated
r,,,Expertlevel_ReturnTemp,ReturnTemperature_DK,,,b509,0d6b00,temp,,D2C,,°C,external return sensor,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,Ignitor,SD_Ignitor_DK,,,b509,0d4900,value,,UCH,240=off;15=on,,igniton activated
r,,,Flame,flame,,,b509,0d0500,value,,UCH,240=off;15=on,,flame
r,,,ExternalHwcSwitch,DHWSwitch_DK,,,b509,0d0000,value,,UCH,0=off;1=on,,Demand external tank (via contact)
r,,,HcUnderHundredStarts,HZ_UnderHundred_SwiActi_DK,,,b509,0d3000,value,,UCH,,,Heat switch cycles under hundred
r,,,HwcUnderHundredStarts,BW_UnderHundred_SwiActi_DK,,,b509,0d3100,value,,UCH,,,DHW switch cycles under hundred
r,,,DSN,DSN_DK,,,b509,0d9a00,value,,UIN,,,DSN: Device Specific number
r,,,DSNStart,DSN start,,,b509,0d3104,value,,UIN,,,DSN Start adress
r,,,ChangesDSN,Changes_DSN_DK,,,b509,0d0c00,value,,UCH,,,Numbers adjusting (storing) the DSN
r,,,ParamToken,ParamToken_DK,,,b509,0d6000,value,,UCH,,,token for parameter managment
r,,,FanMinSpeedOperation,FanMinSpeedOperation,,,b509,0ddf00,value,,UIN,,1/min,Minimum Fan speed of the appliance
r,,,FanMaxSpeedOperation,FanMaxSpeedOperation,,,b509,0de000,value,,UIN,,1/min,Maximum Fan speed of the appliance
r,,,WaterpressureBranchControlOff,WaterpressureBranchControlOff_DK,,,b509,0daf00,value,,UCH,0=off;1=on,,water pressure branch control off
r,,,SerialNumber,SerialNumber,,,b509,0d3f04,value,,HEX:8,,,serial number of AI
r,,,PartnumberBox,Partnumber_Box,,,b509,0dc000,value,,HEX:5,,,part number of the eBox
r,,,BoilerType,BoilerType_DK,,,b509,0d5e00,value,,UCH,,,Boiler typ of the bmu
r,,,BoilerType2,BoilerType_2_DK,,,b509,0d0c01,value,,ULG,,,
r,,,DisplayMode,DisplayMode_DK,,,b509,0dda00,value,,UCH,,,Display mode of the appliance
r,,,PowerValue,PowerValue,,,b509,0daa00,value,,HEX:6,,,"Power Values of the Boiler (min Power, max Power)"
r,,,DCFTimeDate,DCF_TimeDate_DK,,,b509,0de500,value,,HEX:8,,,DCF Time / date stamp struct { uchar sec; uchar min; uchar std; uchar tag; uchar mon; uchar wtg; uchar jah; } Tdcf77_time;
r,,,EbusVoltage,EbusVoltage_DK,,,b509,0d7f00,value,,UCH,0=off;1=on,,feedback signal of the eBus source
r,,,EbusSourceOn,EbusSourceOn_DK,,,b509,0d3400,value,,UCH,0=off;1=on,,Activation signal of the eBus source
r,,,TemplimiterWithNTC,SD_STL_with_NTC,,,b509,0dd200,value,,UCH,240=no;15=yes,,Safety temperature limit concept:1 = safety temp. Limit check with NTC0 = safety temp. Limit check with contact
r,,,Templimiter,SD_Temperaturelimiter_DK,,,b509,0d7700,value,,UCH,240=off;15=on,,feedback signal of the temperature limiter
r,,,TimerInputHc,TimerInputCH_DK,,,b509,0dde00,value,,UCH,0=off;1=on,,timer input (block heatdemand)
r,,,Statenumber,Statenumber_DK,,,b509,0dab00,value,,UCH,,,status number
r,,,ExternalFaultmessage,External_Faultmessage_DK,,,b509,0d3e00,value,,UCH,0=off;1=on,,external fault message
r,,,FlowSetPotmeter,FlowSetPotmeter,,,b509,0df003,value,,D2C,,°C,flow setpoint potentiometer
r,,,HwcSetPotmeter,DHWSetPotmeter,,,b509,0df103,value,,D2C,,°C,DHW setpoint potentiometer
r,,,FloorHeatingContact,Floor heating contact,,,b509,0d7000,value,,UCH,0=off;1=on,,Floor heating contact
r,,,ExternalFlowTempDesired,external flowsetpoint,,,b509,0d2500,value,,D2C,,°C,Flow target temperature from external regulator to terminal 7-8-9
r,,,ModulationTempDesired,Modulationsetpoint_DK,,,b509,0d2e00,value,,SIN,10,%,Modulation set point
r,,,WPPWMPowerDia,d.14 WP_PWMPowerDia_DK,,,b509,0d0a04,value,,UCH,,,Set-PWM-Powerrate of electronic-pump
w,,install,WPPWMPowerDia,d.14 WP_PWMPowerDia_DK,,,b509,0e0a04,value,,UCH,,,Set-PWM-Powerrate of electronic-pump
r,,,ReturnRegulation,d.17 Return regulation,,,b509,0d0c04,value,,UCH,0=off;1=on,,heating flow/return regulation activation
w,,install,ReturnRegulation,d.17 Return regulation,,,b509,0e0c04,value,,UCH,0=off;1=on,,heating flow/return regulation activation
r,,,HcPumpMode,d.18 CH pump mode,,,b509,0d4904,value,,UCH,0=post_run;1=permanent;2=winter,,"Pump mode: 0=post run, 1=continous, 2=Winter, 3=intermittend"
w,,install,HcPumpMode,d.18 CH pump mode,,,b509,0e4904,value,,UCH,0=post_run;1=permanent;2=winter,,"Pump mode: 0=post run, 1=continous, 2=Winter, 3=intermittend"
r,,,SecondPumpMode,d.19 Mode of 2 speed pump,,,b509,0d0b04,value,,UCH,,,"Operating mode of the two-stage heating pump0: burner mode = 2, pre/post-run = 1; 1: CH + post-run = 1, DHW = 2, 2: as 1 but rotation speed in CH is dependent of heating part load, (defaultsetting)3: always stage 2"
w,,install,SecondPumpMode,d.19 Mode of 2 speed pump,,,b509,0e0b04,value,,UCH,,,"Operating mode of the two-stage heating pump0: burner mode = 2, pre/post-run = 1; 1: CH + post-run = 1, DHW = 2, 2: as 1 but rotation speed in CH is dependent of heating part load, (defaultsetting)3: always stage 2"
r,,,HwcTempMax,d.20 Max value tanksetpoint,,,b509,0d4304,value,,D2C,,°C,Adjustment of maximum tank setpoint range (maximum endposition of potmeter)
w,,install,HwcTempMax,d.20 Max value tanksetpoint,,,b509,0e4304,value,,D2C,,°C,Adjustment of maximum tank setpoint range (maximum endposition of potmeter)
r,,,AccessoriesOne,d.27 Option relais 1,,,b509,0d4b04,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Accesory relay 1 function
w,,install,AccessoriesOne,d.27 Option relais 1,,,b509,0e4b04,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Accesory relay 1 function
r,,,AccessoriesTwo,d.28 Option relais 2,,,b509,0d4c04,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Accesory relay 2 function
w,,install,AccessoriesTwo,d.28 Option relais 2,,,b509,0e4c04,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Accesory relay 2 function
r,,,GVStepOffsetMin,d.52 MinGVStepOffset,,,b509,0d7404,value,,UCH,,,Offset for minimum gas valve steps
w,,install,GVStepOffsetMin,d.52 MinGVStepOffset,,,b509,0e7404,value,,UCH,,,Offset for minimum gas valve steps
r,,,GVStepOffsetMax,d.53 MaxGVStepOffset,,,b509,0d7504,value,,SCH,,,Offset for maximum gas valve steps
w,,install,GVStepOffsetMax,d.53 MaxGVStepOffset,,,b509,0e7504,value,,SCH,,,Offset for maximum gas valve steps
r,,,ExhaustCurve,d.56 ExhaustCurve,,,b509,0d7204,value,,UCH,,,ExhaustCurve
w,,service,ExhaustCurve,d.56 ExhaustCurve,,,b509,0e7204,value,,UCH,,,ExhaustCurve
r,,,SolPostHeat,d.58 solar function,,,b509,0d7304,value,,UCH,,,special DHW functions0: solar function deactivated (default)1: solar function activated and DHW setpoint minimum 60°C2: solar function activated and DHW setpoint like combi standard (min 35°)3: DHW setpoint minimum 60°C (poti)
r,,,DeactivationsTemplimiter,d.60 Number STL cut off,,,b509,0d2000,value,,UCH,,,Number of safety temperature limiter cut offs
r,,,DeactivationsIFC,d.61 Number ignition device cut off,,,b509,0d1f00,value,,UCH,,,"number of lock outs (unsuccessfull ignitons in the last attempt, flame failure)"
r,,,ExhaustWayBlockCounter,d.63 exhaust way block counter,,,b509,0d9c00,value,,UCH,,,numbers the exhaust way was blocked
r,,,AverageIgnitiontime,d.64 average ignition time,,,b509,0d2d00,value,,UCH,10,s,average ignition time
r,,,MaxIgnitiontime,d.65 Max ignition time,,,b509,0d2c00,value,,UCH,10,s,maximum ignition time
r,,,CounterStartattempts1,d.68 ignition attempts 1,,,b509,0d6e00,value,,UCH,,°C,unsuccessfull ignitions in the first attempt
r,,,CounterStartattempts2,d.69 ignition attempts 2,,,b509,0d6f00,value,,UCH,,°C,unsuccessfull ignitions in the second attempt
r,,,ValveMode,d.70 diverter valve position,,,b509,0d2a04,value,,UCH,,,"Set diverter valve position 0=normal mode, 1=middle position (GB), 2=permanent CH position"
w,,install,ValveMode,d.70 diverter valve position,,,b509,0e2a04,value,,UCH,,,"Set diverter valve position 0=normal mode, 1=middle position (GB), 2=permanent CH position"
r,,,FlowsetHcMax,d.71 Max value flow temp,,,b509,0d0e04,value,,D2C,,°C,Adjustment of maximum central heating setpoint range (maximum endposition of potmeter)
w,,install,FlowsetHcMax,d.71 Max value flow temp,,,b509,0e0e04,value,,D2C,,°C,Adjustment of maximum central heating setpoint range (maximum endposition of potmeter)
r,,,HwcPostrunTime,d.72 postrun time storage,,,b509,0d1104,value,,UCH,-10,s,"Pump overrun time after charging a storage (charging through C1-C2, external/internal tank with tank sensor)"
w,,install,HwcPostrunTime,d.72 postrun time storage,,,b509,0e1104,value,,UCH,-10,s,"Pump overrun time after charging a storage (charging through C1-C2, external/internal tank with tank sensor)"
r,,,WarmstartOffset,d.73 Warmstart offset,,,b509,0d1004,value,,D2C,,°C,Offset for warm start target value (combination boilers only)
r,,,StorageLoadTimeMax,d.75 Max load time storage,,,b509,0d1204,value,,UCH,,min,Maximum charging time for a storage without own control
w,,install,StorageLoadTimeMax,d.75 Max load time storage,,,b509,0e1204,value,,UCH,,min,Maximum charging time for a storage without own control
r,,,PartloadHwcKW,d.77 hot water partload,,,b509,0d0804,value,,UCH,,kW,storage part load (storage charging capacity limit)
w,,install,PartloadHwcKW,d.77 hot water partload,,,b509,0e0804,value,,UCH,,kW,storage part load (storage charging capacity limit)
r,,,FlowsetHwcMax,d.78 Max value flow temp storage,,,b509,0d0f04,value,,D2C,,°C,storage charging temperature limit (target flow temperature in storage mode)
w,,install,FlowsetHwcMax,d.78 Max value flow temp storage,,,b509,0e0f04,value,,D2C,,°C,storage charging temperature limit (target flow temperature in storage mode)
r,,,HcHours,d.80 operating hours CH,,,b509,0d2800,value,,UIN,,h,central heating operation hours
r,,,HwcHours,d.81 Operating hours DHW,,,b509,0d2200,value,,UIN,,h,water heating operation hours
r,,,HcStarts,d.82 Burner starts heating,,,b509,0d2900,value,,UIN,-100,,cycles in heating mode
r,,,HwcStarts,d.83 Burner starts DHW,,,b509,0d2300,value,,UIN,-100,,Cycles in hot water operation
r,,,HoursTillService,d.84 Hours till next service,,,b509,0d2004,value,,UIN,,h,Maintenance indicator:Number of hours until the next maintenance
w,,install,HoursTillService,d.84 Hours till next service,,,b509,0e2004,value,,UIN,,h,Maintenance indicator:Number of hours until the next maintenance
r,,,AntiCondensValue,d.85 AntiCondensValue,,,b509,0d7704,value,,UCH,,kW / %,increase of minimum power
w,,install,AntiCondensValue,d.85 AntiCondensValue,,,b509,0e7704,value,,UCH,,kW / %,increase of minimum power
r,,,SpecialAdj,d.88 SpecialAdj,,,b509,0d7604,value,,UCH,,,"switching on threshold for recognition of water tapping0 = 1,5 l/min and no delay, 1 = 3,7 l/min and 2s delay"
w,,install,SpecialAdj,d.88 SpecialAdj,,,b509,0e7604,value,,UCH,,,"switching on threshold for recognition of water tapping0 = 1,5 l/min and no delay, 1 = 3,7 l/min and 2s delay"
r,,,DSNOffset,d.93 Device specific number,,,b509,0d3004,value,,UCH,,,DSN aplliance variant setting
w,,service,DSNOffset,d.93 Device specific number,,,b509,0e3004,value,,UCH,,,DSN aplliance variant setting
r,,,SetFactoryValues,d.96 Set factory settings,,,b509,0d6804,value,,UCH,0=no;1=yes,,Factory settings
w,,install,SetFactoryValues,d.96 Set factory settings,,,b509,0e6804,value,,UCH,0=no;1=yes,,Factory settings
r,,,MinIgnitiontime,min_Ignitiontime_DK,,,b509,0d2b00,value,,UCH,10,s,minimum ignition time
r,,,GasvalveUC,SD_Gasvalve_uC_DK,,,b509,0d0d00,value,,UCH,240=off;15=on,,Activation signal of the gasvalve (activated via micrcontroller)
r,,,VolatileLockout,SD_VolatileLockout_DK,,,b509,0d1000,value,,UCH,240=no;15=yes,,TRUE: STB failures is volatileFALSE: STB failure is not volataile
r,,,FlameSensingASIC,SD_Flame_Sensing_ASIC_DK,,,b509,0d2f00,value,,UIN,,,ioni/adc value from the flame control circuit
r,,,Fluegasvalve,Fluegasvalve_DK,,,b509,0d3c00,value,,UCH,0=off;1=on,,flue gasvalve activation signal
r,,,GasvalveASICFeedback,SD_Gasvalve_ASICFeedback_DK,,,b509,0d4700,value,,UCH,240=off;15=on,,feedback gasvalve (from ASIC)
r,,,GasvalveUCFeedback,SD_Gasvalve_uCFeedback_DK,,,b509,0d4800,value,,UCH,240=off;15=on,,feedback gasvalve (from Microcontroller)
r,,,HwcTypes,DHW_Types_DK,,,b509,0d4b00,value,,UCH,,,DHW type of the appliance
r,,,HwcWaterflowMax,DHW Waterflow_max_DK,,,b509,0d5600,value,,UIN,100,,domestic hot water flow sensor maximum value
r,,,HwcImpellorSwitch,DHW impellor switch,,,b509,0d5700,value,,UCH,0=no;1=yes,,domestic hot water (tapping) demand
r,,,WarmstartDemand,WarmstartDemand,,,b509,0d3a04,value,,UCH,0=no;1=yes,,activation of warmstart
r,,,TargetFanSpeedOutput,TargetFan_Speed_Output_DK,,,b509,0d9f00,value,,UIN,,1/min,output fan speed
r,,,ReduceModulationBlocktime,ReduceModulationBlocktime_DK,,,b509,0d5c00,value,,UCH,,,Reduced modulation blocking time to fulfil 3-star requirement
w,,service,ReduceModulationBlocktime,ReduceModulationBlocktime_DK,,,b509,0e5c00,value,,UCH,,,Reduced modulation blocking time to fulfil 3-star requirement
r,,,CounterStartAttempts3,CounterStartAttempts3_DK,,,b509,0d8100,value,,UCH,,°C,unsuccessfull ignitions in the third attempt
r,,,SHEMaxFlowTemp,SHE_MaxFlowTemp_DK,,,b509,0dc300,value,,D2C,,°C,maximum flow temperature DHW
r,,,SHEMaxDeltaHwcFlow,SHE_MaxDeltaFlowDHW_DK,,,b509,0dc400,value,,D2C,,°C,maximum difference between flow and DHW outlet temperature
r,,,PumpHours,pump operation hours,,,b509,0d1400,value,,UIN,,h,pump operation hours
r,,,WPSecondStage,WP_SecondStage_DK,,,b509,0ded00,value,,UCH,240=off;15=on,,Second stage of the pump activated
r,,,HcPumpStarts,CH_PumpCommunt_DK,,,b509,0d1500,value,,UIN,,,pump switchings
r,,,ValveStarts,TWV_Communt_DK,,,b509,0d1a00,value,,UIN,,,commutations of the three way valve
r,,,FanHours,fan operation hours,,,b509,0d1b00,value,,UIN,,h,fan operation hours
r,,,FanStarts,FanCommunt_DK,,,b509,0d1c00,value,,UIN,,,commutations of the fan
r,,,FanPWMTest,Fan_PWM_Test_DK,,,b509,0d3b00,value,,UCH,,,Predictive Maintenance data for the fan damage recognition
r,,,FanPWMSum,Fan_PWM_Sum_DK,,,b509,0d3a00,value,,UIN,,,Predictive Maintenance data for the fan damage recognition
r,,,Gasvalve3UC,SD_Gasvalve3_uC_DK,,,b509,0ddb00,value,,UCH,240=off;15=on,,Gasvalve activation signal (from Microcontroller)
r,,,WaterpressureMeasureCounter,WaterpressureMeasureCounter_DK,,,b509,0df100,value,,UCH,,,Predictive maintenance data
r,,,WaterpressureVariantSum,WaterpressureVariantSum_DK,,,b509,0df000,value,,UIN,,mbar,Predictive maintenance data
r,,,StorageLoadPumpHours,TankLoadPumpOperationHours_DK,,,b509,0d4c00,value,,UIN,,h,Preditive maintenance data
r,,,StorageloadPumpStarts,TankloadPumpCommunt_DK,,,b509,0d4f00,value,,UIN,,,Preditive maintenance data
r,,,TempGradientFailure,TempGradientFailure_DK,,,b509,0d1100,value,,UCH,,°C,Number of cut offs of the boilers cause of to high gradient (S.54)
r,,,TempDiffBlock,TempDiffBlock_DK,,,b509,0d1200,value,,UCH,,°C,Number of modulationblocking of the boilers cause of to high/incorrect difference of flow/return temperatures
r,,,TempDiffFailure,TempDiffFailure_DK,,,b509,0d1300,value,,UCH,,°C,Number of cut offs of the boilers cause of to high/incorrect differences of flow/return temperatures
r,,,ReturnTempMax,TRT_max_DK,,,b509,0dbe00,value,,D2C,,°C,Max_Return_Temperature
r,,,Maintenancedata_HwcTempMax,Temp DHW max,,,b509,0d3500,value,,D2C,,°C,maximum temperature measured by the domestic hot water outlet sensor
r,,,StorageTempMax,Temp storage max,,,b509,0d3600,value,,D2C,,°C,maximum temperature measured by the external tank sensor
r,,,TempMaxDiffExtTFT,MaxTempDiffExtTFT_DK,,,b509,0d2700,value,,D2C,,°C,Predictive maintenance data
r,,,DeltaFlowReturnMax,MaxDeltaFlowReturn_DK,,,b509,0d3d00,value,,D2C,,°C,Predictive maintenance data
r,,,WaterHcFlowMax,MaxWaterFlowCH_DK,,,b509,0dd000,value,,UIN,,,Predictive maintenance data
r,,,PumpHwcFlowSum,PumpDHWFlowSum_DK,,,b509,0dc100,value,,UIN,,,summed up DHW flow rate
r,,,PrAPSCounter,PrAPSCounter_DK,,,b509,0df200,value,,UCH,,,Predictive maintenance data
r,,,PrAPSSum,PrAPSSum_DK,,,b509,0df300,value,,UIN,,s,Predictive maintenance data
r,,,PumpHwcFlowNumber,PumpDHWFlowNumber_DK,,,b509,0dc200,value,,UCH,,,number of times DHW flow rate was detected
r,,,PrEnergySumHwc1,PrEnergySumDHW1_DK,,,b509,0dc500,value,,ULG,,,Predictive maintenance data
r,,,PrEnergyCountHwc1,PrEnergyCountDHW1_DK,,,b509,0dc600,value,,ULG,,,Predictive maintenance data
r,,,PrEnergySumHwc2,PrEnergySumDHW2_DK,,,b509,0dc700,value,,ULG,,,Predictive maintenance data
r,,,PrEnergyCountHwc2,PrEnergyCountDHW2_DK,,,b509,0dc800,value,,ULG,,,Predictive maintenance data
r,,,PrEnergySumHwc3,PrEnergySumDHW3_DK,,,b509,0dc900,value,,ULG,,,Predictive maintenance data
r,,,PrEnergyCountHwc3,PrEnergyCountDHW3_DK,,,b509,0dca00,value,,ULG,,,Predictive maintenance data
r,,,PrEnergySumHc1,PrEnergySumCH1_DK,,,b509,0df500,value,,ULG,,,Predictive maintenance data
r,,,PrEnergyCountHc1,PrEnergyCountCH1_DK,,,b509,0df600,value,,ULG,,,Predictive maintenance data
r,,,PrEnergySumHc2,PrEnergySumCH2_DK,,,b509,0df700,value,,ULG,,,Predictive maintenance data
r,,,PrEnergyCountHc2,PrEnergyCountCH2_DK,,,b509,0df800,value,,ULG,,,Predictive maintenance data
r,,,PrEnergySumHc3,PrEnergySumCH3_DK,,,b509,0df900,value,,ULG,,,Predictive maintenance data
r,,,PrEnergyCountHc3,PrEnergyCountCH3_DK,,,b509,0dfa00,value,,ULG,,,Predictive maintenance data
r,,,OverflowCounter,OverflowCounter_DK,,,b509,0d1e00,value,,UCH,0=no;1=yes,,Predictive Maintenance counter have got an overflow
r,,,PredFanPWMDevThreshold,Pred_FanPWM_DevThreshold_DK,,,b509,0d3501,value,,UCH,,,
r,,,PredFanPWMSwitchingPoint,Pred_FanPWM_SwitchingPoint_DK,,,b509,0d3601,value,,UIN,,,
r,,,PredFanPWMRefPWMcounter,Pred_FanPWM_RefPWMcounter_DK,,,b509,0d3701,value,,UCH,,,
r,,,PredFanPWMRefPWMsum,Pred_FanPWM_RefPWMsum_DK,,,b509,0d3801,value,,UIN,,,
r,,,PredFanPWMPredCounter,Pred_FanPWM_PredCounter_DK,,,b509,0d3901,uin,,UIN,,,,uin_1,,UIN,,,,uin_2,,UIN,,,
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
r,,,Currenterror,Current errors,,,b503,0001,error,,UIN,,,error number,error_1,,UIN,,,error number,error_2,,UIN,,,error number,error_3,,UIN,,,error number,error_4,,UIN,,,error number
r,,,Errorhistory,Error_History,,,b503,0101,index,m,UCH,,,,status,,UCH,,,Status,time,,BTM,,,time,date,,HDA,,,date,error,,UIN,,,error number
w,,install,Clearerrorhistory,Clear error history,,,b503,0201,cleared,s,UCH,0=no;1=yes,,
