#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: Gyroscope
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class Gyroscope
{
public:

    // RVA: 0x359 | Ordinal: 858
        void Construct(void);

    // RVA: 0x3B6 | Ordinal: 951
        void Create(void);

    // RVA: 0x69 | Ordinal: 106
        void Gyroscope(class AFM::Gyroscope &&);

    // RVA: 0x6A | Ordinal: 107
        void Gyroscope(class AFM::Gyroscope const &);

    // RVA: 0x6B | Ordinal: 108
        void Gyroscope(void);

    // RVA: 0x478 | Ordinal: 1145
        void LockDynamicStructure(class AFM::DynamicBody *);

    // RVA: 0x4B5 | Ordinal: 1206
        void LockWire(class AFM::Wire *);

    // RVA: 0x4E2 | Ordinal: 1251
        void Simulation(double);

    // RVA: 0x64F | Ordinal: 1616
        void getIPointerPitchSensor(class AFM::Sensor **);

    // RVA: 0x678 | Ordinal: 1657
        void getIPointerRollSensor(class AFM::Sensor **);

    // RVA: 0x690 | Ordinal: 1681
        void getIPointerWire(class AFM::Wire **);

    // RVA: 0x696 | Ordinal: 1687
        void getIPointerYawSensor(class AFM::Sensor **);

    // RVA: 0x842 | Ordinal: 2115
        void setPitchSensorStatus(double);

    // RVA: 0x843 | Ordinal: 2116
        void setPitchSensorTimeFactorOff(double);

    // RVA: 0x844 | Ordinal: 2117
        void setPitchSensorTimeFactorOn(double);

    // RVA: 0x894 | Ordinal: 2197
        void setRollSensorStatus(double);

    // RVA: 0x895 | Ordinal: 2198
        void setRollSensorTimeFactorOff(double);

    // RVA: 0x896 | Ordinal: 2199
        void setRollSensorTimeFactorOn(double);

    // RVA: 0x8F3 | Ordinal: 2292
        void setYawSensorStatus(double);

    // RVA: 0x8F4 | Ordinal: 2293
        void setYawSensorTimeFactorOff(double);

    // RVA: 0x8F5 | Ordinal: 2294
        void setYawSensorTimeFactorOn(double);

    // RVA: 0x125 | Ordinal: 294
        void _Gyroscope(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_GYROSCOPE_HPP
