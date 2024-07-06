type,circuit,level,name,comment,qq,zz,pbsb,id,*name,part,type,divisor/values,unit,comment
*r,
*w,
r,,,HcPartialLoadCondition,d.00 CH_PartialLoadCondition,,,b509,0d9600,value,,UCH,,,Heating part load
w,,install,HcPartialLoadCondition,d.00 CH_PartialLoadCondition,,,b509,0e9600,value,,UCH,,,Heating part load
r,,,WPPostrunTime,d.01 central heating overruntime,,,b509,0d6400,value,,UCH,,min,water pump overrun time for heating mode
w,,install,WPPostrunTime,d.01 central heating overruntime,,,b509,0e6400,value,,UCH,,min,water pump overrun time for heating mode
r,,,BlockTimeHcMax,d.02 Max blocking time CH,,,b509,0d2100,value,,UCH,,min,max. burner anti cycling period at 20°C Flow temperature setpoint
w,,install,BlockTimeHcMax,d.02 Max blocking time CH,,,b509,0e2100,value,,UCH,,min,max. burner anti cycling period at 20°C Flow temperature setpoint
r,,,HwcTemp,d.03 Temp DHW,,,b509,0d1600,temp,,D2C,,°C,actoSTOR inletsensor temperature,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,StorageTemp,d.04 Temp storage / she,,,b509,0d1700,temp,,D2C,,°C,current storage tank sensor temperature,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,FlowTempDesired,d.05 flow/return setpoint,,,b509,0d3900,value,,D2C,,°C,Flow temperature target value or return target value when return regulation is set
r,,,StorageTempDesired,d.07 Storage setpoint,,,b509,0d0400,value,,D2C,,°C,Storage temperature target value
r,,,ACRoomthermostat,d.08 Room thermostat 230 V,,,b509,0d2a00,value,,UCH,0=off;1=on,,External controls heat demand (Clamp 3-4)
r,,,ExtFlowTempDesiredMin,d.09 ext flowsetpoint,,,b509,0d6e04,value,,D2C,,°C,minimum out of Kl.7 and eBus flow setpoint
r,,,WP,d.10 Central heating pump,,,b509,0d4400,value,,UCH,0=off;1=on,,internal heating pump
r,,,ExtWP,d.11 external pump,,,b509,0d3f00,value,,UCH,0=off;1=on,,External heating pump
r,,,Storageloadpump,d.12 storage load pump,,,b509,0d9e00,value,,UCH,,%,tank load pump demand
r,,,CirPump,d.13 Circulation pump,,,b509,0d7b00,value,,UCH,0=off;1=on,,Hot water circulation pump (via external module)
r,,,WPPWMPower,d.15 WP_PWMPower_DK,,,b509,0d7300,value,,UCH,,%,Output of pwm pump
r,,,HwcDemand,d.22 DHW demand,,,b509,0d5800,value,,UCH,0=no;1=yes,,domestic hot water (tapping or tank contact) demand
r,,,HeatingSwitch,d.23 operation mode,,,b509,0df203,value,,UCH,0=off;1=on,,Wintermode active
r,,,StoragereleaseClock,d.25 DHW demand enabled,,,b509,0d4704,value,,UCH,0=no;1=yes,,hot water release (tank storage) via eBus Control
r,,,Gasvalve,d.30 Gasvalve,,,b509,0dbb00,value,,UCH,240=off;15=on,,Gasvalve activation signal
r,,,TargetFanSpeed,d.33 Target fan speed,,,b509,0d2400,value,,UIN,,1/min,Fan speed setpoint
r,,,FanSpeed,d.34 Actual fan speed,,,b509,0d8300,value,,UIN,,1/min,fan speed actual value
r,,,FlowTemp,d.40 TFT_DK,,,b509,0d1800,temp,,D2C,,°C,Flow temperature,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,ReturnTemp,d.41 Temp heating return,,,b509,0d9800,temp,,D2C,,°C,return temperature,tempmirror,,UIN,,,,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,OutdoorstempSensor,d.47 Temp outside,,,b509,0d7600,temp,,D2C,,°C,Outside temperature (uncorrected value),sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,FlowHysteresisON,d.54 FlowHysteresis_ON_DK,,,b509,0d1601,value,,D2C,,°C,Adjustment of the switch on hysteresis
w,,install,FlowHysteresisON,d.54 FlowHysteresis_ON_DK,,,b509,0e1601,value,,D2C,,°C,Adjustment of the switch on hysteresis
r,,,FlowHysteresisOff,d.55 FlowHysteresis_OFF_DK,,,b509,0d1701,value,,D2C,,°C,Adjustment of the switch off hysteresis
w,,install,FlowHysteresisOff,d.55 FlowHysteresis_OFF_DK,,,b509,0e1701,value,,D2C,,°C,Adjustment of the switch off hysteresis
r,,,RemainingBoilerblocktime,d.67 Remaining burner block time,,,b509,0d3800,value,,UCH,,min,Remaining burner anti cycling time
r,,,HwcPartialLoadCondition,d.77 DHW_PartialLoadCondition,,,b509,0d9700,value,,UCH,,,DHW part load
w,,install,HwcPartialLoadCondition,d.77 DHW_PartialLoadCondition,,,b509,0e9700,value,,UCH,,,DHW part load
r,,,EBusHeatcontrol,d.90 Digital control recognized,,,b509,0d0004,value,,UCH,0=no;1=yes,,Digital regulator status
r,,,DcfState,d.91 Status DCF 77,,,b509,0d6900,value,,UCH,0=nosignal;1=ok;2=sync;3=valid,,dcfStatus
r,,,Password,d.97 Password_DK,,,b509,0d4904,value,,UCH,,,Password
w,,service,Password,d.97 Password_DK,,,b509,0e4904,value,,UCH,,,Password
r,,,PhoneNumber,d.98 PhoneNumber_DK,,,b509,0d8104,value,,HEX:8,,,phone number
w,,install,PhoneNumber,d.98 PhoneNumber_DK,,,b509,0e8104,value,,HEX:8,,,phone number
r,,,Language,d.99 Language_DK,,,b509,0d8204,value,,UCH,,,language selection
w,,service,Language,d.99 Language_DK,,,b509,0e8204,value,,UCH,,,language selection
r,,,PumpspeedDesired,d.14 PumpspeedSetpoint,,,b509,0da100,value,,UCH,,%,PWM pump speed
r,,,ReturnRegulation,d.17 Return regulation,,,b509,0db300,value,,UCH,0=off;1=on,,heating flow/return regulation activation
w,,install,ReturnRegulation,d.17 Return regulation,,,b509,0eb300,value,,UCH,0=off;1=on,,heating flow/return regulation activation
r,,,HcPumpMode,d.18 CH pump mode,,,b509,0db700,value,,UCH,0=post_run;1=permanent;2=winter,,Pump mode
w,,install,HcPumpMode,d.18 CH pump mode,,,b509,0eb700,value,,UCH,0=post_run;1=permanent;2=winter,,Pump mode
r,,,HwcTempMax,d.20 Max value tanksetpoint,,,b509,0dd900,value,,D2C,,°C,Adjustment of maximum tank setpoint range (maximum endposition of potmeter)
w,,install,HwcTempMax,d.20 Max value tanksetpoint,,,b509,0ed900,value,,D2C,,°C,Adjustment of maximum tank setpoint range (maximum endposition of potmeter)
r,,,OptionalRelais,d.26 OptionalRelais_DK,,,b509,0db800,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Option relais function
w,,install,OptionalRelais,d.26 OptionalRelais_DK,,,b509,0eb800,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Option relais function
r,,,AccessoriesOne,d.27 Option relais 1,,,b509,0db900,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Accesory relay 1 function
w,,install,AccessoriesOne,d.27 Option relais 1,,,b509,0eb900,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Accesory relay 1 function
r,,,AccessoriesTwo,d.28 Option relais 2,,,b509,0dba00,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Accesory relay 2 function
w,,install,AccessoriesTwo,d.28 Option relais 2,,,b509,0eba00,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Accesory relay 2 function
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
r,,,FlowsetHcMax,d.71 Max value flow temp,,,b509,0da500,value,,D2C,,°C,Adjustment of maximum central heating setpoint range (maximum endposition of potmeter)
w,,install,FlowsetHcMax,d.71 Max value flow temp,,,b509,0ea500,value,,D2C,,°C,Adjustment of maximum central heating setpoint range (maximum endposition of potmeter)
r,,,PumpOverrun,d.72 PumpOverrun,,,b509,0d6300,value,,UCH,,min,setting range: 2…60min; default setting: 5 min
w,,install,PumpOverrun,d.72 PumpOverrun,,,b509,0e6300,value,,UCH,,min,setting range: 2…60min; default setting: 5 min
r,,,Storageloadoffset,d.73 Tankloadoffset,,,b509,0db401,value,,D2C,,°C,setting range:0 … 25k
w,,install,Storageloadoffset,d.73 Tankloadoffset,,,b509,0eb401,value,,D2C,,°C,setting range:0 … 25k
r,,,StorageLoadTimeMax,d.75 Max load time storage,,,b509,0d6600,value,,UCH,,min,Maximum charging time for a storage without own control
w,,install,StorageLoadTimeMax,d.75 Max load time storage,,,b509,0e6600,value,,UCH,,min,Maximum charging time for a storage without own control
r,,,CodingResistor,d.76 SD_CodingResistor_DK,,,b509,0d9200,value,,HEX:3,,,boiler identification resistor
r,,,FlowsetHwcMax,d.78 Max value flow temp storage,,,b509,0da600,value,,D2C,,°C,storage charging temperature limit (target flow temperature in storage mode)
w,,install,FlowsetHwcMax,d.78 Max value flow temp storage,,,b509,0ea600,value,,D2C,,°C,storage charging temperature limit (target flow temperature in storage mode)
r,,,HcHours,d.80 operating hours CH,,,b509,0d2800,value,,UIN,,h,central heating operation hours
r,,,HwcHours,d.81 Operating hours DHW,,,b509,0d2200,value,,UIN,,h,water heating operation hours
r,,,HcStarts,d.82 Burner starts heating,,,b509,0d2900,value,,UIN,-100,,cycles in heating mode
r,,,HwcStarts,d.83 Burner starts DHW,,,b509,0d2300,value,,UIN,-100,,Cycles in hot water operation
r,,,HoursTillService,d.84 Hours till next service,,,b509,0d2004,value,,UIN,,h,Maintenance indicator:Number of hours until the next maintenance
w,,install,HoursTillService,d.84 Hours till next service,,,b509,0e2004,value,,UIN,,h,Maintenance indicator:Number of hours until the next maintenance
r,,,GasType,d.87 Gas type,,,b509,0dfe00,value,,UCH,,,"setting of gas type 0=Erdgas, 1= Flüssiggas 50mbar, 2= Flüssiggas 30mbar"
w,,install,GasType,d.87 Gas type,,,b509,0efe00,value,,UCH,,,"setting of gas type 0=Erdgas, 1= Flüssiggas 50mbar, 2= Flüssiggas 30mbar"
r,,,DSNOffset,d.93 Device specific number,,,b509,0db500,value,,UCH,,,DSN aplliance variant setting
w,,service,DSNOffset,d.93 Device specific number,,,b509,0eb500,value,,UCH,,,DSN aplliance variant setting
r,,,SetFactoryValues,d.96 Set factory settings,,,b509,0d7201,value,,UCH,0=no;1=yes,,Factory settings
w,,install,SetFactoryValues,d.96 Set factory settings,,,b509,0e7201,value,,UCH,0=no;1=yes,,Factory settings
r,,,WaterPressure,water pressure,,,b509,0d0200,press,,FLT,,bar,water pressure,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,TempGradientFailure,TempGradientFailure_DK,,,b509,0d1100,value,,UCH,,°C,Number of cut offs of the boilers cause of to high gradient (S.54)
r,,,TempDiffBlock,TempDiffBlock_DK,,,b509,0d1200,value,,UCH,,°C,Number of modulationblocking of the boilers cause of to high/incorrect difference of flow/return temperatures
r,,,TempDiffFailure,TempDiffFailure_DK,,,b509,0d1300,value,,UCH,,°C,Number of cut offs of the boilers cause of to high/incorrect differences of flow/return temperatures
r,,,PumpHours,pump operation hours,,,b509,0d1400,value,,UIN,,h,pump operation hours
r,,,HcPumpStarts,CH_PumpCommunt_DK,,,b509,0d1500,value,,UIN,,,pump switchings
r,,,FanHours,fan operation hours,,,b509,0d1b00,value,,UIN,,h,fan operation hours
r,,,FanStarts,FanCommunt_DK,,,b509,0d1c00,value,,UIN,,,commutations of the fan
r,,,OverflowCounter,OverflowCounter_DK,,,b509,0d1e00,value,,UCH,0=no;1=yes,,Predictive Maintenance counter have got an overflow
r,,,TempMaxDiffExtTFT,MaxTempDiffExtTFT_DK,,,b509,0d2700,value,,D2C,,°C,Predictive maintenance data
r,,,MinIgnitiontime,min_Ignitiontime_DK,,,b509,0d2b00,value,,UCH,10,s,minimum ignition time
r,,,Maintenancedata_HwcTempMax,Temp DHW max,,,b509,0d3500,value,,D2C,,°C,maximum temperature measured by the domestic hot water outlet sensor
r,,,StorageTempMax,Temp storage max,,,b509,0d3600,value,,D2C,,°C,maximum temperature measured by the external tank sensor
r,,,FlowTempMax,TFT_max_DK,,,b509,0d3700,value,,D2C,,°C,maximum temperature measured by the flow sensor
r,,,DeltaFlowReturnMax,MaxDeltaFlowReturn_DK,,,b509,0d3d00,value,,D2C,,°C,Predictive maintenance data
r,,,StorageLoadPumpHours,TankLoadPumpOperationHours_DK,,,b509,0d4c00,value,,UIN,,h,Preditive maintenance data
r,,,StorageloadPumpStarts,TankloadPumpCommunt_DK,,,b509,0d4f00,value,,UIN,,,Preditive maintenance data
r,,,CounterStartAttempts3,CounterStartAttempts3_DK,,,b509,0d8100,value,,UCH,,°C,unsuccessfull ignitions in the third attempt
r,,,CounterStartAttempts4,CounterStartAttempts4_DK,,,b509,0d8200,value,,UCH,,°C,unsuccessfull ignitions in the fourth attempt
r,,,ReturnTempMax,TRT_max_DK,,,b509,0dbe00,value,,D2C,,°C,Max_Return_Temperature
r,,,PumpHwcFlowSum,PumpDHWFlowSum_DK,,,b509,0dc100,value,,UIN,,,summed up DHW flow rate
r,,,PumpHwcFlowNumber,PumpDHWFlowNumber_DK,,,b509,0dc200,value,,UCH,,,number of times DHW flow rate was detected
r,,,SHEMaxFlowTemp,SHE_MaxFlowTemp_DK,,,b509,0dc300,value,,D2C,,°C,maximum flow temperature DHW
r,,,SHEMaxDeltaHwcFlow,SHE_MaxDeltaFlowDHW_DK,,,b509,0dc400,value,,D2C,,°C,maximum difference between flow and DHW outlet temperature
r,,,PrEnergySumHwc1,PrEnergySumDHW1_DK,,,b509,0dc500,value,,ULG,,,Predictive maintenance data
r,,,PrEnergyCountHwc1,PrEnergyCountDHW1_DK,,,b509,0dc600,value,,ULG,,,Predictive maintenance data
r,,,PrEnergySumHwc2,PrEnergySumDHW2_DK,,,b509,0dc700,value,,ULG,,,Predictive maintenance data
r,,,PrEnergyCountHwc2,PrEnergyCountDHW2_DK,,,b509,0dc800,value,,ULG,,,Predictive maintenance data
r,,,PrEnergySumHwc3,PrEnergySumDHW3_DK,,,b509,0dc900,value,,ULG,,,Predictive maintenance data
r,,,PrEnergyCountHwc3,PrEnergyCountDHW3_DK,,,b509,0dca00,value,,ULG,,,Predictive maintenance data
r,,,CurrentPartload,CurrentPartload,,,b509,0d0001,value,,UIN,,kW,Current calculated partload
r,,,WaterpressureVariantSum,WaterpressureVariantSum_DK,,,b509,0df000,value,,UIN,,mbar,Predictive maintenance data
r,,,WaterpressureMeasureCounter,WaterpressureMeasureCounter_DK,,,b509,0df100,value,,UCH,,,Predictive maintenance data
r,,,PrEnergySumHc1,PrEnergySumCH1_DK,,,b509,0df400,value,,ULG,,,Predictive maintenance data
r,,,PrEnergyCountHc1,PrEnergyCountCH1_DK,,,b509,0df500,value,,ULG,,,Predictive maintenance data
r,,,PrEnergySumHc2,PrEnergySumCH2_DK,,,b509,0df600,value,,ULG,,,Predictive maintenance data
r,,,PrEnergyCountHc2,PrEnergyCountCH2_DK,,,b509,0df700,value,,ULG,,,Predictive maintenance data
r,,,PrEnergySumHc3,PrEnergySumCH3_DK,,,b509,0df800,value,,ULG,,,Predictive maintenance data
r,,,PrEnergyCountHc3,PrEnergyCountCH3_DK,,,b509,0df900,value,,ULG,,,Predictive maintenance data
r,,,ExternalFlowTempDesired,external flowsetpoint,,,b509,0d2500,value,,D2C,,°C,Flow target temperature from external regulator to terminal 7-8-9
r,,,ExternalHwcSwitch,DHWSwitch_DK,,,b509,0d0000,value,,UCH,0=off;1=on,,Demand external tank (via contact)
r,,,Flame,flame,,,b509,0d0500,value,,UCH,240=off;15=on,,flame
r,,,IFCFault,SD_IFC_Fault_DK,,,b509,0d0700,value,,UCH,240=off;15=on,,IFC error
r,,,ChangesDSN,Changes_DSN_DK,,,b509,0d0c00,value,,UCH,,,Numbers adjusting (storing) the DSN
r,,,Brennstoffventil,Brennstoffventil,,,b509,0d0d00,value,,UCH,240=off;15=on,,Activation signal of the gasvalve (activated via micrcontroller)
r,,,VolatileLockout,SD_VolatileLockout_DK,,,b509,0d1000,value,,UCH,240=no;15=yes,,TRUE: STB failures is volatileFALSE: STB failure is not volataile
r,,,Faultlist,Faultlist_DK,,,b509,0d2600,value,,HEX:10,,,last 10 fault codes
r,,,ModulationTempDesired,Modulationsetpoint_DK,,,b509,0d2e00,value,,SIN,10,%,Modulation set point
r,,,FlameSensingASIC,SD_Flame_Sensing_ASIC_DK,,,b509,0d2f00,value,,UIN,,,ioni/adc value from the flame control circuit
r,,,HcUnderHundredStarts,HZ_UnderHundred_SwiActi_DK,,,b509,0d3000,value,,UCH,,,Heat switch cycles under hundred
r,,,HwcUnderHundredStarts,BW_UnderHundred_SwiActi_DK,,,b509,0d3100,value,,UCH,,,DHW switch cycles under hundred
r,,,EbusSourceOn,EbusSourceOn_DK,,,b509,0d3400,value,,UCH,0=off;1=on,,Activation signal of the eBus source
r,,,Fluegasvalve,Fluegasvalve_DK,,,b509,0d3c00,value,,UCH,0=off;1=on,,flue gasvalve activation signal
r,,,ExternalFaultmessage,External_Faultmessage_DK,,,b509,0d3e00,value,,UCH,0=off;1=on,,external fault message
r,,,R_ckmeldungBrennstoffventil1,Rückmeldung Brennstoffventil 1,,,b509,0d4700,value,,UCH,240=off;15=on,,feedback gasvalve (from ASIC)
r,,,R_ckmeldungBrennstoffventil2,Rückmeldung Brennstoffventil 2,,,b509,0d4800,value,,UCH,240=off;15=on,,feedback gasvalve (from Microcontroller)
r,,,Ignitor,SD_Ignitor_DK,,,b509,0d4900,value,,UCH,240=off;15=on,,igniton activated
r,,,Fan,Fan_DK,,,b509,0d4a00,value,,UCH,0=no;1=yes,,Fan activation signal
r,,,HwcTypes,DHW_Types_DK,,,b509,0d4b00,value,,UCH,,,DHW type of the appliance
r,,,TemplimiterFault,SD_TL_Fault_DK,,,b509,0d4d00,value,,UCH,240=off;15=on,,temperature limiter error
r,,,ADCOk,SD_ADC_ok_DK,,,b509,0d4e00,value,,UCH,240=off;15=on,,internal electronic error
r,,,FanFault,SD_Fan_Fault_DK,,,b509,0d5300,value,,UCH,240=off;15=on,,Fan error
r,,,BoilerType,BoilerType_DK,,,b509,0d5e00,value,,UCH,,,Boiler typ of the bmu
r,,,FunctionFlags,FunctionFlags_DK,,,b509,0d5f00,value,,UCH,,,differrent function flags
r,,,ParamToken,ParamToken_DK,,,b509,0d6000,value,,UCH,,,token for parameter managment
r,,,ExpertlevelMain_ReturnTemp,ReturnTemperature_DK,,,b509,0d6b00,temp,,D2C,,°C,external return sensor,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,FloorHeatingContact,Floor heating contact,,,b509,0d7000,value,,UCH,0=off;1=on,,Floor heating contact
r,,,Templimiter,SD_Temperaturelimiter_DK,,,b509,0d7700,value,,UCH,240=off;15=on,,feedback signal of the temperature limiter
r,,,SRIFCEEFaultCause,SR_IFC_EE_FaultCause_DK,,,b509,0d7a00,value,,UCH,,,current IFC fault cause
r,,,ParamReplication,ParamReplication_DK,,,b509,0d7c00,value,,UCH,0=no;1=yes,,activated the parameter managment again
r,,,AnodeINFeedback,Anode_IN_Feedback_DK,,,b509,0d7e00,value,,UCH,0=no;1=yes,,feedback signal of the anode
r,,,EbusVoltage,EbusVoltage_DK,,,b509,0d7f00,value,,UCH,0=off;1=on,,feedback signal of the eBus source
r,,,SRTFINSDFeedback,SR_TF_IN_SD_Feedback_DK,,,b509,0d8400,value,,UCH,240=off;15=on,,Thermal fuse error
r,,,DemandCirPump,Demand_CirculationPump_DK,,,b509,0d8800,value,,UCH,0=no;1=yes,,remote control activated accessory circulation pump
r,,,FluegasvalveOpen,FluegasvalveOpen_DK,,,b509,0d8900,value,,UCH,0=off;1=on,,feedback of the flue gas valve
r,,,FunctionFault,Function_Fault_DK,,,b509,0d9500,value,,UCH,0=no;1=yes,,boiler stopped by a internal function fault
r,,,Testbyte,Testbyte_DK,,,b509,0d9900,value,,UCH,,,Testbyte (relevant for the Tester)
r,,,DSN,DSN_DK,,,b509,0d9a00,value,,UIN,,,DSN: Device Specific number
r,,,TargetFanSpeedOutput,TargetFan_Speed_Output_DK,,,b509,0d9f00,value,,UIN,,1/min,output fan speed
r,,,Statenumber,Statenumber_DK,,,b509,0dab00,value,,UCH,,,status number
r,,,AdvancedPowerValues,AdvancedPowerValues_DK,,,b509,0dae00,value,,HEX:9,,,min. / max powervalues
r,,,DSNStart,DSN start,,,b509,0dbc00,value,,UIN,,,DSN Start adress
r,,,Shiftloadtankpump,Shiftloadtankpump_DK,,,b509,0db400,value,,UCH,0=no;1=yes,,current status of the shift load pump
r,,,ExtStorageModulCon,ExtTankModulCon_DK,,,b509,0dbf00,value,,UCH,0=no;1=yes,,external tank modul connected (VR65)
r,,,PartnumberBox,Partnumber_Box,,,b509,0dc000,value,,HEX:5,,,part number of the eBox
r,,,SRSyphonINSDSwitch,SR_Syphon_IN_SD_Switch_DK,,,b509,0dcf00,value,,UCH,240=no;15=yes,,feedback of the syphon switch contact
r,,,TemplimiterWithNTC,SD_STL_with_NTC,,,b509,0dd200,value,,UCH,240=no;15=yes,,Safety temperature limit concept:1 = safety temp. Limit check with NTC0 = safety temp. Limit check with contact
r,,,VolatileLockoutIFCGV,SD_VolatileLockout_IFC_GV_DK,,,b509,0dd300,value,,UCH,240=no;15=yes,,all IFC faults are volataile
r,,,DisplayMode,DisplayMode_DK,,,b509,0dda00,value,,UCH,,,Display mode of the aplliance
r,,,R_ckmeldungBrennstoffventil3,Rückmeldung Brennstoffventil 3,,,b509,0ddb00,value,,UCH,240=off;15=on,,Gasvalve activation signal (from Microcontroller)
r,,,InitialisationEEPROM,InitialisationEEPROM,,,b509,0ddc00,value,,UCH,0=no;1=yes,,Initialisation off all EEPROM values (done in the production)
r,,,DefaultSettingEEPROM,DefaultSettingEEPROM_DK,,,b509,0ddd00,value,,UCH,0=no;1=yes,,default value setting off all EEPROM values (done in the production)
r,,,TimerInputHc,TimerInputCH_DK,,,b509,0dde00,value,,UCH,0=off;1=on,,timer input (block heatdemand)
r,,,FanMinSpeedOperation,FanMinSpeedOperation,,,b509,0ddf00,value,,UIN,,1/min,Minimum Fan speed of the appliance
r,,,FanMaxSpeedOperation,FanMaxSpeedOperation,,,b509,0de000,value,,UIN,,1/min,Maximum Fan speed of the appliance
r,,,RManagEE_VirtualHcPartloadEnableDTemp,TR_Manag_EE.Virtual_CH_Partload_Enable_DK,,,b509,0de300,value,,UCH,0=off;1=on,,enable the adaptive CH-partload calulation
r,,,ExternGasvalve,ExternGasvalve_DK,,,b509,0de400,value,,UCH,0=off;1=on,,external gasvalve activated
r,,,DCFTimeDate,DCF_TimeDate_DK,,,b509,0de500,value,,HEX:8,,,DCF Time / date stamp struct { uchar sec; uchar min; uchar std; uchar tag; uchar mon; uchar wtg; uchar jah; } Tdcf77_time;
r,,,ActoSTOREEPreventiveCounter,actoSTOR_EE_PreventiveCounter_DK,,,b509,0dec00,uin,,UIN,,,Predictive maintenance date of the actoSTOR,uin_1,,UIN,,,,uin_2,,UIN,,,
r,,,InitialisationSequence,InitialisationSequence_DK,,,b509,0d9a01,value,,UCH,,,value:0 -> off1-> full initialisation incl. all defaultvalues (done in the production)
r,,,FlowSetPotmeter,FlowSetPotmeter,,,b509,0d1900,value,,D2C,,°C,flow setpoint potentiometer
r,,,HwcSetPotmeter,DHWSetPotmeter,,,b509,0df103,value,,D2C,,°C,DHW setpoint potentiometer
r,,,HwcSwitch,DHW_Switch,,,b509,0df303,value,,UCH,0=off;1=on,,DHW on/off
r,,,ProductionByte,ProductionByte,,,b509,0d3e04,value,,UCH,,,
r,,,SerialNumber,SerialNumber,,,b509,0d3f04,value,,HEX:8,,,serial number of AI
r,,,BoilerType2,BoilerType_2_DK,,,b509,0d0c01,value,,ULG,,,second Boiler typ of the bmu
r,,,StatusList,StatusList_DK,,,b509,0d1101,value,,HEX:10,,,List of the last 10 status numbers
r,,,LimpHomeModeEEHistoryList,LimpHomeMode_EE_History_List_DK,,,b509,0d8b01,uin,,UIN,,,history of the last 5 limp home modes,uin_1,,UIN,,,,uin_2,,UIN,,,,uin_3,,UIN,,,,uin_4,,UIN,,,
r,,,AWPCEEMinThreshold,AWPC_EE_MinThreshold_DK,,,b509,0d1201,value,,SIN,10,bar/10,minimum waterpressure threshold
w,,install,AWPCEEMinThreshold,AWPC_EE_MinThreshold_DK,,,b509,0e1201,value,,SIN,10,bar/10,minimum waterpressure threshold
r,,,AWPCEEMaxThreshold,AWPC_EE_MaxThreshold_DK,,,b509,0d1301,value,,SIN,10,bar/10,maximum waterpressure threshold
w,,install,AWPCEEMaxThreshold,AWPC_EE_MaxThreshold_DK,,,b509,0e1301,value,,SIN,10,bar/10,maximum waterpressure threshold
r,,,Currenterror,Current errors,,,b503,0001,error,,UIN,,,error number,error_1,,UIN,,,error number,error_2,,UIN,,,error number,error_3,,UIN,,,error number,error_4,,UIN,,,error number
r,,,Errorhistory,Error_History,,,b503,0101,index,m,UCH,,,,status,,UCH,,,Status,time,,BTM,,,time,date,,HDA,,,date,error,,UIN,,,error number
w,,install,Clearerrorhistory,Clear error history,,,b503,0201,cleared,s,UCH,0=no;1=yes,,
r,,,Currentservice,Current service message,,,b503,0002,error,,UIN,,,error number,error_1,,UIN,,,error number,error_2,,UIN,,,error number,error_3,,UIN,,,error number,error_4,,UIN,,,error number
r,,,Servicehistory,Service message history,,,b503,0102,index,m,UCH,,,,status,,UCH,,,Status,time,,BTM,,,time,date,,HDA,,,date,error,,UIN,,,error number
w,,install,Clearservicehistory,Clear service message history,,,b503,0202,cleared,s,UCH,0=no;1=yes,,
