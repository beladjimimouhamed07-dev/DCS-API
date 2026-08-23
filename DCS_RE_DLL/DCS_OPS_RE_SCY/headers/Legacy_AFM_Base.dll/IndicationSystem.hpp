#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: IndicationSystem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class IndicationSystem
{
public:

    // RVA: 0x35D | Ordinal: 862
        void Construct(void);

    // RVA: 0x3BA | Ordinal: 955
        void Create(void);

    // RVA: 0x75 | Ordinal: 118
        void IndicationSystem(class AFM::IndicationSystem &&);

    // RVA: 0x76 | Ordinal: 119
        void IndicationSystem(class AFM::IndicationSystem const &);

    // RVA: 0x77 | Ordinal: 120
        void IndicationSystem(void);

    // RVA: 0x43D | Ordinal: 1086
        void InitInTheFlight(void);

    // RVA: 0x447 | Ordinal: 1096
        void InitOnTheParking(void);

    // RVA: 0x44D | Ordinal: 1102
        void InitOnTheRunway(void);

    // RVA: 0x470 | Ordinal: 1137
        void LockControlSystem(class AFM::ControlSystem *);

    // RVA: 0x479 | Ordinal: 1146
        void LockDynamicStructure(class AFM::DynamicBody *);

    // RVA: 0x486 | Ordinal: 1159
        void LockElectroSystem(class AFM::ElectroSystem *);

    // RVA: 0x489 | Ordinal: 1162
        void LockFuelSystem(class AFM::FuelSystem *);

    // RVA: 0x48B | Ordinal: 1164
        void LockGear(class AFM::Gear *);

    // RVA: 0x491 | Ordinal: 1170
        void LockHydroSystem(class AFM::HydroSystem *);

    // RVA: 0x499 | Ordinal: 1178
        void LockLeftJetEngine(class AFM::JetEngine *);

    // RVA: 0x4A6 | Ordinal: 1191
        void LockRightJetEngine(class AFM::JetEngine *);

    // RVA: 0x4B0 | Ordinal: 1201
        void LockSensorsSystem(class AFM::SensorsSystem *);

    // RVA: 0x4E6 | Ordinal: 1255
        void Simulation(double);

    // RVA: 0x5C8 | Ordinal: 1481
        void getIPointerADI(class AFM::ADI **);

    // RVA: 0x5C9 | Ordinal: 1482
        void getIPointerAccelerationIndicator(class AFM::Indicator **);

    // RVA: 0x5CA | Ordinal: 1483
        void getIPointerAccelerometer_10(class AFM::Accelerometer_10 **);

    // RVA: 0x5CB | Ordinal: 1484
        void getIPointerAileronsTrimmerInTheNeutralLamp(class AFM::Lamp **);

    // RVA: 0x5CE | Ordinal: 1487
        void getIPointerAirSpeedIndicator(class AFM::Indicator **);

    // RVA: 0x5CF | Ordinal: 1488
        void getIPointerAltimeter_10(class AFM::Altimeter_10 **);

    // RVA: 0x5D2 | Ordinal: 1491
        void getIPointerAoAIndicator(class AFM::Indicator **);

    // RVA: 0x5D3 | Ordinal: 1492
        void getIPointerAoAOrNyOverLimitLamp(class AFM::Lamp **);

    // RVA: 0x5DD | Ordinal: 1502
        void getIPointerConfigurationIndicator(class AFM::ConfigurationIndicator **);

    // RVA: 0x5F1 | Ordinal: 1522
        void getIPointerElevatorsTrimmerInTheNeutralLamp(class AFM::Lamp **);

    // RVA: 0x5F2 | Ordinal: 1523
        void getIPointerFuelIndicator_0_6_Lamp(class AFM::Lamp **);

    // RVA: 0x5F3 | Ordinal: 1524
        void getIPointerFuelIndicator_3_4_Lamp(class AFM::Lamp **);

    // RVA: 0x5F4 | Ordinal: 1525
        void getIPointerFuelIndicator_II_Lamp(class AFM::Lamp **);

    // RVA: 0x5F5 | Ordinal: 1526
        void getIPointerFuelIndicator_I_Lamp(class AFM::Lamp **);

    // RVA: 0x5F6 | Ordinal: 1527
        void getIPointerFuelIndicator_KR_Lamp(class AFM::Lamp **);

    // RVA: 0x5F7 | Ordinal: 1528
        void getIPointerFuelIndicator_Ts_Lamp(class AFM::Lamp **);

    // RVA: 0x5F9 | Ordinal: 1530
        void getIPointerFuelmeterIndicator(class AFM::Indicator **);

    // RVA: 0x604 | Ordinal: 1541
        void getIPointerHSI(class AFM::HSI **);

    // RVA: 0x607 | Ordinal: 1544
        void getIPointerIndicatedAirSpeedIndicator(class AFM::Indicator **);

    // RVA: 0x625 | Ordinal: 1574
        void getIPointerLeftHydroSystemLowPressureLamp(class AFM::Lamp **);

    // RVA: 0x627 | Ordinal: 1576
        void getIPointerLeftHydroSystemPressureIndicator(class AFM::Indicator **);

    // RVA: 0x62B | Ordinal: 1580
        void getIPointerLeftJetEngineRPMIndicator(class AFM::Indicator **);

    // RVA: 0x62D | Ordinal: 1582
        void getIPointerLeftJetEngineStartingLamp(class AFM::Lamp **);

    // RVA: 0x62E | Ordinal: 1583
        void getIPointerLeftJetEngineTemperatureIndicator(class AFM::Indicator **);

    // RVA: 0x637 | Ordinal: 1592
        void getIPointerLeftWheelBrakePressureIndicator(class AFM::Indicator **);

    // RVA: 0x63A | Ordinal: 1595
        void getIPointerMachometerIndicator(class AFM::Indicator **);

    // RVA: 0x653 | Ordinal: 1620
        void getIPointerRadarAltitudeIndicator_1500(class AFM::RadarAltitudeIndicator_1500 **);

    // RVA: 0x65F | Ordinal: 1632
        void getIPointerRightHydroSystemLowPressureLamp(class AFM::Lamp **);

    // RVA: 0x661 | Ordinal: 1634
        void getIPointerRightHydroSystemPressureIndicator(class AFM::Indicator **);

    // RVA: 0x665 | Ordinal: 1638
        void getIPointerRightJetEngineRPMIndicator(class AFM::Indicator **);

    // RVA: 0x667 | Ordinal: 1640
        void getIPointerRightJetEngineStartingLamp(class AFM::Lamp **);

    // RVA: 0x668 | Ordinal: 1641
        void getIPointerRightJetEngineTemperatureIndicator(class AFM::Indicator **);

    // RVA: 0x671 | Ordinal: 1650
        void getIPointerRightWheelBrakePressureIndicator(class AFM::Indicator **);

    // RVA: 0x681 | Ordinal: 1666
        void getIPointerSlipBallIndicator(class AFM::Indicator **);

    // RVA: 0x68A | Ordinal: 1675
        void getIPointerTailRudderTrimmerInTheNeutralLamp(class AFM::Lamp **);

    // RVA: 0x68B | Ordinal: 1676
        void getIPointerTurnIndicator(class AFM::Indicator **);

    // RVA: 0x68C | Ordinal: 1677
        void getIPointerVariometerIndicator(class AFM::Indicator **);

    // RVA: 0x129 | Ordinal: 298
        void _IndicationSystem(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_INDICATIONSYSTEM_HPP
