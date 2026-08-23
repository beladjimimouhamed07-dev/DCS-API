#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: SensorsSystem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class SensorsSystem
{
public:

    // RVA: 0x370 | Ordinal: 881
        void Construct(void);

    // RVA: 0x3D2 | Ordinal: 979
        void Create(void);

    // RVA: 0x43F | Ordinal: 1088
        void InitInTheFlight(void);

    // RVA: 0x449 | Ordinal: 1098
        void InitOnTheParking(void);

    // RVA: 0x44F | Ordinal: 1104
        void InitOnTheRunway(void);

    // RVA: 0x47E | Ordinal: 1151
        void LockDynamicStructure(class AFM::DynamicBody *);

    // RVA: 0x487 | Ordinal: 1160
        void LockElectroSystem(class AFM::ElectroSystem *);

    // RVA: 0xBD | Ordinal: 190
        void SensorsSystem(class AFM::SensorsSystem &&);

    // RVA: 0xBE | Ordinal: 191
        void SensorsSystem(class AFM::SensorsSystem const &);

    // RVA: 0xBF | Ordinal: 192
        void SensorsSystem(void);

    // RVA: 0x4F1 | Ordinal: 1266
        void Simulation(double *, double *, int, double);

    // RVA: 0x5D4 | Ordinal: 1493
        void getIPointerAoASensor(class AFM::Sensor **);

    // RVA: 0x603 | Ordinal: 1540
        void getIPointerGyroscope(class AFM::Gyroscope **);

    // RVA: 0x64E | Ordinal: 1615
        void getIPointerPitchRotationSpeedSensor(class AFM::Sensor **);

    // RVA: 0x650 | Ordinal: 1617
        void getIPointerPito(class AFM::Pito **);

    // RVA: 0x654 | Ordinal: 1621
        void getIPointerRadarAltitudeSensor(class AFM::Sensor **);

    // RVA: 0x655 | Ordinal: 1622
        void getIPointerRadarAltitudeSensor_1500(class AFM::RadarAltitudeSensor_1500 **);

    // RVA: 0x677 | Ordinal: 1656
        void getIPointerRollRotationSpeedSensor(class AFM::Sensor **);

    // RVA: 0x695 | Ordinal: 1686
        void getIPointerYawRotationSpeedSensor(class AFM::Sensor **);

    // RVA: 0x8CB | Ordinal: 2252
        void setSurfaceProp(double *, double *);

    // RVA: 0x141 | Ordinal: 322
        void _SensorsSystem(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_SENSORSSYSTEM_HPP
