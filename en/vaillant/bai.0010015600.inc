type,circuit,level,name,comment,qq,zz,pbsb,id,*name,part,type,divisor/values,unit,comment
*r,
*w,
*[id_sw],scan,,,,SW
[id_sw>=413]r,,,APCLegioProtection,d.74 APC_LegioProtection,,,b509,0d9704,value,,UCH,,,Legionella protection for internal storage
[id_sw>=413]w,,install_NOT_YET_CONFIRMED,APCLegioProtection,d.74 APC_LegioProtection,,,b509,0e9704,value,,UCH,,,Legionella protection for internal storage
r,,,PartloadHcKW,d.00 heating partload,,,b509,0d6c00,value,,UCH,,kW,Heating part load
w,,install_NOT_YET_CONFIRMED,PartloadHcKW,d.00 heating partload,,,b509,0e6c00,value,,UCH,,kW,Heating part load
r,,,WPPostrunTime,d.01 central heating overruntime,,,b509,0d6400,value,,UCH,,min,water pump overrun time for heating mode
w,,install_NOT_YET_CONFIRMED,WPPostrunTime,d.01 central heating overruntime,,,b509,0e6400,value,,UCH,,min,water pump overrun time for heating mode
r,,,BlockTimeHcMax,d.02 Max blocking time CH,,,b509,0d2100,value,,UCH,,min,Maximum burner anti cycling period at 20°C flow temperature set point
w,,install_NOT_YET_CONFIRMED,BlockTimeHcMax,d.02 Max blocking time CH,,,b509,0e2100,value,,UCH,,min,Maximum burner anti cycling period at 20°C flow temperature set point
r,,,HwcTemp,d.03 Temp DHW,,,b509,0d1600,temp,,D2C,,°C,Hot water flow temperature,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,StorageTemp,d.04 Storage temperature,,,b509,0d1700,temp,,D2C,,°C,Current temperature for warm start sensor (combi boiler) / Current storage tank sensor (system boiler only),sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,FlowTempDesired,d.05 flow/return setpoint,,,b509,0d3900,value,,D2C,,°C,Flow temperature target value or return target value when return regulation is set
r,,,StorageTempDesired,d.07 Storage temperature set point,,,b509,0d0400,value,,D2C,,°C,Warm start temperature value (combi boiler only); Storage temperature target value (system boiler only)
r,,,ExtFlowTempDesiredMin,d.09 ext flowsetpoint,,,b509,0df304,value,,D2C,,°C,minimum out of Kl.7 and eBus flow setpoint
r,,,WP,d.10 Central heating pump,,,b509,0d4400,value,,UCH,0=off;1=on,,Internal central heating pump
r,,,ExtWP,d.11 External heating pump,,,b509,0d3f00,value,,UCH,0=off;1=on,,External central heating pump
r,,,Storageloadpump,d.12 storage load pump,,,b509,0d9e00,value,,UCH,,%,tank load pump demand
r,,,CirPump,d.13 Circulation pump,,,b509,0d7b00,value,,UCH,0=off;1=on,,Hot water circulation pump (via external module)
r,,,PumpPowerDesired,d.14 Desired heating pump power,,,b509,0da100,value,,UCH,0=auto;1=_53;2=_60;3=_70;4=_85;5=_100,%,PWM-Desired central heating pump power
w,,install_NOT_YET_CONFIRMED,PumpPowerDesired,d.14 Desired heating pump power,,,b509,0ea100,value,,UCH,0=auto;1=_53;2=_60;3=_70;4=_85;5=_100,%,PWM-Desired central heating pump power
r,,,PumpPower,d.15 Current heating pump power,,,b509,0d7300,value,,UCH,,,Current central heating pump power
r,,,DCRoomthermostat,d.16 room thermostat 24 V,,,b509,0d0e00,value,,UCH,0=off;1=on,,xternal controls heat demand (Clamp 3-4)
r,,,HwcDemand,d.22 DHW demand,,,b509,0d5800,value,,UCH,0=no;1=yes,,Domestic hot water demand
r,,,HeatingSwitch,d.23 Heating on/off switch,,,b509,0df203,value,,UCH,0=off;1=on,,Central heating on/off switch
w,,install_NOT_YET_CONFIRMED,HeatingSwitch,d.23 Heating on/off switch,,,b509,0ef203,value,,UCH,0=off;1=on,,Central heating on/off switch
r,,,PrimaryCircuitFlowrate,d.29 Primary circuit flow rate,,,b509,0dfb00,value,,UIN,100,l/min,primary circuit water flow rate
r,,,TargetFanSpeed,d.33 Target fan speed,,,b509,0d2400,value,,UIN,,1/min,Fan speed setpoint
r,,,FanSpeed,d.34 Current fan speed,,,b509,0d8300,value,,UIN,,1/min,Current fan speed
r,,,PositionValveSet,d.35 Position TWV,,,b509,0d5400,value,,UCH,,,"Position of diverter valve; 100 = DHW, 0 = heating, 40 = middle position"
r,,,FlowTemp,d.40 Supply temperature,,,b509,0d1800,temp,,D2C,,°C,CH supply temperature sensor (VF2),sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,ReturnTemp,d.41 Return temperature,,,b509,0d9800,temp,,D2C,,°C,CH return temperature sensor,tempmirror,,UIN,,,,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,IonisationVoltageLevel,d.44 Ionisation voltage,,,b509,0da400,value,,SIN,10,,digital ionisation voltage> 80 no flame< 40 good flame
r,,,OutdoorstempSensor,d.47 Outdoor temperature,,,b509,0d7600,temp,,D2C,,°C,Outdoor temperature sensor (uncorrected value) value and status,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,RemainingBoilerblocktime,d.67 Remaining burner block time,,,b509,0d3800,value,,UCH,,min,Remaining burner anti cycling time
r,,,DcfState,d.91 DCF Status,,,b509,0d6900,value,,UCH,0=nosignal;1=ok;2=sync;3=valid,,dcfStatus
r,,,ExternalHwcSwitch,External HWC tank,,,b509,0d0000,value,,UCH,0=off;1=on,,Demand external HWC tank (via contact)
r,,,WaterPressure,water pressure,,,b509,0d0200,press,,FLT,,bar,CH water pressure,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,Flame,flame,,,b509,0d0500,value,,UCH,240=off;15=on,,flame
r,,,ChangesDSN,Changes_DSN_DK,,,b509,0d0c00,value,,UCH,,,Numbers adjusting (storing) the DSN
r,,,GasvalveUC,SD_Gasvalve_uC_DK,,,b509,0d0d00,value,,UCH,240=off;15=on,,Activation signal of the gasvalve (activated via micrcontroller)
r,,,VolatileLockout,SD_VolatileLockout_DK,,,b509,0d1000,value,,UCH,240=no;15=yes,,TRUE: STB errors are locking
r,,,ModulationTempDesired,Modulationsetpoint_DK,,,b509,0d2e00,value,,SIN,10,%,Modulation set point
r,,,FlameSensingASIC,SD_Flame_Sensing_ASIC,,,b509,0d2f00,value,,UIN,,,ioni/adc value from the flame control circuit
r,,,HcUnderHundredStarts,HZ_UnderHundred_SwiActi,,,b509,0d3000,value,,UCH,,,Heat switch cycles under hundred
r,,,HwcUnderHundredStarts,BW_UnderHundred_SwiActi,,,b509,0d3100,value,,UCH,,,DHW switch cycles under hundred
r,,,EbusSourceOn,EbusSourceOn_DK,,,b509,0d3400,value,,UCH,0=off;1=on,,Activation signal of the eBus source
r,,,Fluegasvalve,FluegasvalveOpen_DK,,,b509,0d3c00,value,,UCH,0=off;1=on,,Feedback from the flue gas valve
r,,,ExternalFaultmessage,External_Faultmessage_DK,,,b509,0d3e00,value,,UCH,0=off;1=on,,external fault message
r,,,GasvalveASICFeedback,SD_Gasvalve_ASICFeedback_DK,,,b509,0d4700,value,,UCH,240=off;15=on,,Gas valve feedback (from ASIC)
r,,,GasvalveUCFeedback,SD_Gasvalve_uCFeedback_DK,,,b509,0d4800,value,,UCH,240=off;15=on,,Gas valve feedback (from micro controller)
r,,,Ignitor,SD_Ignitor_DK,,,b509,0d4900,value,,UCH,240=off;15=on,,Ignition status
r,,,HwcTypes,DHW_Types_DK,,,b509,0d4b00,value,,UCH,,,DHW type of the appliance
r,,,HwcImpellorSwitch,DHW impellor switch,,,b509,0d5700,value,,UCH,0=no;1=yes,,DHW demand from impeller switch
r,,,WarmstartDemand,WarmstartDemand,,,b509,0d3a04,value,,UCH,0=no;1=yes,,Status of warmstarr mode
r,,,BoilerType,BoilerType,,,b509,0d5e00,value,,UCH,,,Boiler typ of the bmu
r,,,ParamToken,ParamToken,,,b509,0d6000,value,,UCH,,,token for parameter managment
r,,,ReturnTempExternal,Ext. return temperature,,,b509,0d6b00,temp,,D2C,,°C,External return temperature sensor,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,FloorHeatingContact,Floor heating contact,,,b509,0d7000,value,,UCH,0=off;1=on,,Floor heating contact
r,,,Templimiter,Temperature limiter sensor,,,b509,0d7700,value,,UCH,240=off;15=on,,Feedback of the temperature limiter sensor
r,,,EbusVoltage,eBUS voltage,,,b509,0d7f00,value,,UCH,0=off;1=on,,eBUS voltage feedback
r,,,FluegasvalveOpen,Flue flap open,,,b509,0d8900,value,,UCH,0=off;1=on,,Exhaust (flue) flap open
r,,,Testbyte,Testbyte,,,b509,0d9900,value,,UCH,,,Testbyte (relevant for testers)
r,,,DSN,DSN,,,b509,0d9a00,value,,UIN,,,DSN: Device Specific number
r,,,TargetFanSpeedOutput,Target fan speed,,,b509,0d9f00,value,,UIN,,1/min,Target fan speed
r,,,PowerValue,Power number,,,b509,0daa00,value,,HEX:6,,,Power value of the boiler (minimum and maximum)
r,,,Statenumber,Statenumber,,,b509,0dab00,value,,UCH,,,status number
r,,,WaterpressureBranchControlOff,WaterpressureBranchControlOff_DK,,,b509,0daf00,value,,UCH,0=off;1=on,,Water pressure branch control switch
r,,,DSNStart,DSN starting address,,,b509,0d3104,value,,UIN,,,DSN starting address
r,,,ExtStorageModulCon,VR65 memory module,,,b509,0dbf00,value,,UCH,0=no;1=yes,,External memory module (VR65) connected
r,,,PartnumberBox,Partnumber_Box,,,b509,0dc000,value,,HEX:5,,,part number of the eBox
r,,,WPSecondStage,WP_SecondStage,,,b509,0ded00,value,,UCH,0=off;1=on,,Second stage of the pump activated
r,,,TemplimiterWithNTC,SD_STL_with_NTC,,,b509,0dd200,value,,UCH,240=no;15=yes,,Temperature limiter (1 = NTC; 0 = switching contact)
r,,,VolatileLockoutIFCGV,SD_VolatileLockout_IFC_GV,,,b509,0dd300,value,,UCH,240=no;15=yes,,All IFC errors are non-volatile
r,,,DisplayMode,DisplayMode,,,b509,0dda00,value,,UCH,,,Display mode of the appliance
r,,,Gasvalve3UC,Gasventil 3,,,b509,0ddb00,value,,UCH,240=off;15=on,,Gas valve switching signal (from the processor)
r,,,InitialisationEEPROM,InitialisationEEPROM,,,b509,0ddc00,value,,UCH,0=no;1=yes,,EEPROM initialization (for production)
r,,,TimerInputHc,Eingang Schaltuhr,,,b509,0dde00,value,,UCH,0=off;1=on,,timer input (block heatdemand)
r,,,FanMinSpeedOperation,Minimum fan speed,,,b509,0ddf00,value,,UIN,,1/min,Fan minimum speed
r,,,FanMaxSpeedOperation,Maximum fan speed,,,b509,0de000,value,,UIN,,1/min,Fan maximum speed
r,,,ExternGasvalve,External gas valve,,,b509,0de400,value,,UCH,0=off;1=on,,External solenoid valve
r,,,DCFTimeDate,DCF date/time,,,b509,0de500,vti,,HTI,,,DCF Time / date stamp struct { uchar sec; uchar min; uchar std; uchar tag; uchar mon; uchar wtg; uchar jah; } Tdcf77_time;,hda,,HDA,,,
r,,,HwcSwitch,DHW_Switch,,,b509,0df303,value,,UCH,0=off;1=on,,Domestic hot water switch
w,,install_NOT_YET_CONFIRMED,HwcSwitch,DHW_Switch,,,b509,0ef303,value,,UCH,0=off;1=on,,Domestic hot water switch
r,,,ProductionByte,ProductionByte,,,b509,0d3e04,value,,UCH,,,
r,,,SerialNumber,SerialNumber,,,b509,0d3f04,value,,HEX:8,,,Serial number AI
r,,,ReturnRegulation,d.17 Return control,,,b509,0db300,value,,UCH,0=off;1=on,,Activation of the return control
w,,install_NOT_YET_CONFIRMED,ReturnRegulation,d.17 Return control,,,b509,0eb300,value,,UCH,0=off;1=on,,Activation of the return control
r,,,HcPumpMode,d.18 CH pump mode,,,b509,0db700,value,,UCH,0=post_run;1=permanent;2=winter,,Pump mode for central heating
w,,install_NOT_YET_CONFIRMED,HcPumpMode,d.18 CH pump mode,,,b509,0eb700,value,,UCH,0=post_run;1=permanent;2=winter,,Pump mode for central heating
r,,,HwcTempMax,d.20 Maximum DHW temperature,,,b509,0dd900,value,,D2C,,°C,Max. Speichersollwert. Limits the maximum adjustment range of the potentiometer (right stop).
w,,install_NOT_YET_CONFIRMED,HwcTempMax,d.20 Maximum DHW temperature,,,b509,0ed900,value,,D2C,,°C,Max. Speichersollwert. Limits the maximum adjustment range of the potentiometer (right stop).
r,,,OptionalRelais,d.26 Optional relay,,,b509,0db800,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Function of optional relay
w,,install_NOT_YET_CONFIRMED,OptionalRelais,d.26 Optional relay,,,b509,0eb800,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Function of optional relay
r,,,AccessoriesOne,d.27 Accessory relay 1,,,b509,0db900,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Function of accessory relay 1
w,,install_NOT_YET_CONFIRMED,AccessoriesOne,d.27 Accessory relay 1,,,b509,0eb900,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Function of accessory relay 1
r,,,AccessoriesTwo,d.28 Accessory relay 2,,,b509,0dba00,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Function of accessory relay 2
w,,install_NOT_YET_CONFIRMED,AccessoriesTwo,d.28 Accessory relay 2,,,b509,0eba00,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Function of accessory relay 2
r,,,FanSpeedOffsetMin,d.50 Minimum fan speed offset,,,b509,0da700,value,,SIN,,1/min,Fan minimum speed offset
w,,install_NOT_YET_CONFIRMED,FanSpeedOffsetMin,d.50 Minimum fan speed offset,,,b509,0ea700,value,,SIN,,1/min,Fan minimum speed offset
r,,,FanSpeedOffsetMax,d.51 Maximum fan speed offset,,,b509,0da800,value,,SIN,,1/min,Fan maximum speed offset
w,,install_NOT_YET_CONFIRMED,FanSpeedOffsetMax,d.51 Maximum fan speed offset,,,b509,0ea800,value,,SIN,,1/min,Fan maximum speed offset
r,,,DeactivationsTemplimiter,d.60 Shutdowns by the temp limiter,,,b509,0d2000,value,,UCH,,,Number of shutdowns by the safety temperature limiter
r,,,DeactivationsIFC,d.61 Ignition failures,,,b509,0d1f00,value,,UCH,,,Number of ignition failures (unsuccessful last-run or faulty flame signal)
r,,,AverageIgnitiontime,d.64 average ignition time,,,b509,0d2d00,value,,UCH,10,s,average ignition time
r,,,MaxIgnitiontime,d.65 Maximum ignition time,,,b509,0d2c00,value,,UCH,10,s,maximum ignition time
r,,,CounterStartattempts1,d.68 Failed ignition (1nd attempt),,,b509,0d6e00,value,,UCH,,°C,Number of unsuccessful ignition attempts (in the first attempt)
r,,,CounterStartattempts2,d.69 Failed ignition (2nd attempt),,,b509,0d6f00,value,,UCH,,°C,Number of unsuccessful ignition attempts (in the second attempt)
r,,,FlowsetHcMax,d.71 CH max flow temperature,,,b509,0d0e04,value,,D2C,,°C,Setting the maximum flow setpoint in heating mode (with left-hand stop of the potentiometer)
w,,install_NOT_YET_CONFIRMED,FlowsetHcMax,d.71 CH max flow temperature,,,b509,0e0e04,value,,D2C,,°C,Setting the maximum flow setpoint in heating mode (with left-hand stop of the potentiometer)
r,,,StorageLoadTimeMax,d.75 Maximum storage time,,,b509,0d6600,value,,UCH,,min,Maximum water storing time for storage without own controls
w,,install_NOT_YET_CONFIRMED,StorageLoadTimeMax,d.75 Maximum storage time,,,b509,0e6600,value,,UCH,,min,Maximum water storing time for storage without own controls
r,,,FlowsetHwcMax,d.78 Max value flow temp storage,,,b509,0da600,value,,D2C,,°C,storage charging temperature limit (target flow temperature in storage mode)
w,,install_NOT_YET_CONFIRMED,FlowsetHwcMax,d.78 Max value flow temp storage,,,b509,0ea600,value,,D2C,,°C,storage charging temperature limit (target flow temperature in storage mode)
r,,,HcHours,d.80 Hz. Hours in CH mode,,,b509,0d2800,value,,UIN,,h,Hours of operation in heating mode
r,,,HwcHours,d.81 Hours in DHW mode,,,b509,0d2200,value,,UIN,,h,Hours of DHW operation
r,,,HcStarts,d.82 CH mode starts,,,b509,0d2900,value,,UIN,-100,,Number of CH mode starts
r,,,HwcStarts,d.83 DHW mode starts,,,b509,0d2300,value,,UIN,-100,,Number of DHW mode starts
r,,,HoursTillService,d.84 Hours till service,,,b509,0dac00,value,,UIN,,h,Hours left before service is needed
w,,install_NOT_YET_CONFIRMED,HoursTillService,d.84 Hours till service,,,b509,0eac00,value,,UIN,,h,Hours left before service is needed
r,,,AntiCondensValue,d.85 Minimal power to avoid condensation,,,b509,0dec00,value,,UCH,,kW,Minimal power to avoid condensation
w,,install_NOT_YET_CONFIRMED,AntiCondensValue,d.85 Minimal power to avoid condensation,,,b509,0eec00,value,,UCH,,kW,Minimal power to avoid condensation
r,,,DSNOffset,d.93 Hardware ID,,,b509,0d3004,value,,UCH,,,Hardware ID (DSN)
w,,service_NOT_YET_CONFIRMED,DSNOffset,d.93 Hardware ID,,,b509,0e3004,value,,UCH,,,Hardware ID (DSN)
r,,,SetFactoryValues,d.96 Reset to defaults,,,b509,0d6804,value,,UCH,0=no;1=yes,,Reset to factory defaults
w,,install_NOT_YET_CONFIRMED,SetFactoryValues,d.96 Reset to defaults,,,b509,0e6804,value,,UCH,0=no;1=yes,,Reset to factory defaults
r,,,CodingResistor,d.98 SD_CodingResistor,,,b509,0d9200,value,,HEX:3,,,Therme identification resistance
r,,,StorageExitTemp,d.125 Storage output temperature,,,b509,0d5000,temp,,D2C,,°C,Current storage output temperature,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,StorageDelay,d.126 Storage charge delay,,,b509,0d0900,value,,UCH,,min,Delay of the storage charge
r,,,TempGradientFailure,Temperature gradient failures,,,b509,0d1100,value,,UCH,,°C,Number of boiler shutdown due to high gradient (S.54)
r,,,TempDiffBlock,TempDiffBlock,,,b509,0d1200,value,,UCH,,°C,Number of modulationblocking of the boilers cause of to high/incorrect difference of flow/return temperatures
r,,,TempDiffFailure,TempDiffFailure,,,b509,0d1300,value,,UCH,,°C,Number of shutdowns due to incorrect difference between supply and return temperatures
r,,,PumpHours,Betriebsstunden Pumpe,,,b509,0d1400,value,,UIN,,h,Pump operating hours
r,,,HcPumpStarts,CH_PumpCommunt,,,b509,0d1500,value,,UIN,,,Pump times switched on
r,,,ValveStarts,3WV Schaltspiele,,,b509,0d1a00,value,,UIN,,,Number of times 3WV value operated
r,,,FanHours,Fan operating hours,,,b509,0d1b00,value,,UIN,,h,Operating hours of the fan
r,,,FanStarts,Fan number of starts,,,b509,0d1c00,value,,UIN,,,Number of times fan switched on
r,,,OverflowCounter,Overflow PM counter,,,b509,0d1e00,value,,UCH,0=no;1=yes,,Predictive Maintenance counter have got an overflow
r,,,TempMaxDiffExtTFT,MaxTempDiffExtTFT,,,b509,0d2700,value,,D2C,,°C,Predictive maintenance data
r,,,MinIgnitiontime,minimum ignition time,,,b509,0d2b00,value,,UCH,10,s,minimum ignition time
r,,,Maintenancedata_HwcTempMax,Maximum DHW temperature,,,b509,0d3500,value,,D2C,,°C,Maximum temperature measured at the tap water outlet sensor
r,,,StorageTempMax,Maximum storage temperature,,,b509,0d3600,value,,D2C,,°C,Maximum storage tank temperature
r,,,FlowTempMax,Maximum CH temperature,,,b509,0d3700,value,,D2C,,°C,Maximum CH flow temperature
r,,,FanPWMSum,Fan_PWM_Sum,,,b509,0d3a00,value,,UIN,,,Predictive Maintenance data for the fan damage recognition
r,,,FanPWMTest,Fan_PWM_Test,,,b509,0d3b00,value,,UCH,,,Predictive Maintenance data for the fan damage recognition
r,,,DeltaFlowReturnMax,MaxDeltaFlowReturn,,,b509,0d3d00,value,,D2C,,°C,Maintenance data
r,,,StorageLoadPumpHours,TankLoadPumpOperationHours,,,b509,0d4c00,value,,UIN,,h,Preditive maintenance data
r,,,StorageloadPumpStarts,TankloadPumpCommunt,,,b509,0d4f00,value,,UIN,,,Preditive maintenance data
r,,,HwcWaterflowMax,Max. WW Vorlauftemp.,,,b509,0d5600,value,,UIN,100,,Maximalwert des Warmwassersensors
r,,,CounterStartAttempts3,Failed ignition (3rd attempt),,,b509,0d8100,value,,UCH,,°C,Number of unsuccessful ignition attempts (in the 3rd attempt)
r,,,CounterStartAttempts4,Failed ignition (4th attempt),,,b509,0d8200,value,,UCH,,°C,Number of unsuccessful ignition attempts (in the 4th attempt)
r,,,ReturnTempMax,Max flow return temperature,,,b509,0dbe00,value,,D2C,,°C,Max flow return temperature
r,,,PumpHwcFlowSum,PumpDHWFlowSum,,,b509,0dc100,value,,UIN,,,summed up DHW flow rate
r,,,PumpHwcFlowNumber,PumpDHWFlowNumber,,,b509,0dc200,value,,UCH,,,number of times DHW flow rate was detected
r,,,SHEMaxFlowTemp,Max. WW Vorlauftemp.,,,b509,0dc300,value,,D2C,,°C,Maximum flow temperature for WW
r,,,SHEMaxDeltaHwcFlow,SHE_MaxDeltaFlowDHW,,,b509,0dc400,value,,D2C,,°C,maximum difference between flow and DHW outlet temperature
r,,,PrEnergySumHwc1,PrEnergySumDHW1,,,b509,0dc500,value,,ULG,,,Maintenance data
r,,,PrEnergyCountHwc1,PrEnergyCountDHW1,,,b509,0dc600,value,,ULG,,,Maintenance data
r,,,PrEnergySumHwc2,PrEnergySumDHW2,,,b509,0dc700,value,,ULG,,,Maintenance data
r,,,PrEnergyCountHwc2,PrEnergyCountDHW2,,,b509,0dc800,value,,ULG,,,Maintenance data
r,,,PrEnergySumHwc3,PrEnergySumDHW3,,,b509,0dc900,value,,ULG,,,Maintenance data
r,,,PrEnergyCountHwc3,PrEnergyCountDHW3,,,b509,0dca00,value,,ULG,,,Maintenance data
r,,,WaterHcFlowMax,MaxWaterFlowCH,,,b509,0dd000,value,,UIN,,,v
r,,,WaterpressureVariantSum,WaterpressureVariantSum,,,b509,0df000,value,,UIN,,mbar,Maintenance data
r,,,WaterpressureMeasureCounter,WaterpressureMeasureCounter,,,b509,0df100,value,,UCH,,,Maintenance data
r,,,PrAPSCounter,PrAPSCounter,,,b509,0df200,value,,UCH,,,Maintenance data
r,,,PrAPSSum,PrAPSSum,,,b509,0df300,value,,UIN,,s,Maintenance data
r,,,PrVortexFlowSensorValue,PrVortexFlowSensorValue,,,b509,0df400,value,,SIN,,ADC,Maintenance data
r,,,PrEnergySumHc1,PrEnergySumCH1,,,b509,0df500,value,,ULG,,,Maintenance data
r,,,PrEnergyCountHc1,PrEnergyCountCH1,,,b509,0df600,value,,ULG,,,Maintenance data
r,,,PrEnergySumHc2,PrEnergySumCH2,,,b509,0df700,value,,ULG,,,Maintenance data
r,,,PrEnergyCountHc2,PrEnergyCountCH2,,,b509,0df800,value,,ULG,,,Wartungsdaten
r,,,PrEnergySumHc3,PrEnergySumCH3,,,b509,0df900,value,,ULG,,,Maintenance data
r,,,PrEnergyCountHc3,PrEnergyCountCH3,,,b509,0dfa00,value,,ULG,,,Maintenance data
r,,,Currenterror,Current errors,,,b503,0001,error,,UIN,,,error number,error_1,,UIN,,,error number,error_2,,UIN,,,error number,error_3,,UIN,,,error number,error_4,,UIN,,,error number
r,,,Errorhistory,Error_History,,,b503,0101,index,m,UCH,,,,status,,UCH,,,Status,time,,BTM,,,time,date,,HDA,,,date,error,,UIN,,,error number
w,,install,Clearerrorhistory,Clear error history,,,b503,0201,cleared,s,UCH,0=no;1=yes,,
