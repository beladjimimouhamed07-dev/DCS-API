#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: BrakesManometer_240
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class BrakesManometer_240
{
public:

    // RVA: 0x2A | Ordinal: 43
        void BrakesManometer_240(class AFM::BrakesManometer_240 &&);

    // RVA: 0x2B | Ordinal: 44
        void BrakesManometer_240(class AFM::BrakesManometer_240 const &);

    // RVA: 0x2C | Ordinal: 45
        void BrakesManometer_240(void);

    // RVA: 0x348 | Ordinal: 841
        void Construct(void);

    // RVA: 0x3A1 | Ordinal: 930
        void Create(void);

    // RVA: 0x49D | Ordinal: 1182
        void LockLeftWheel(class AFM::Wheel *);

    // RVA: 0x4AA | Ordinal: 1195
        void LockRightWheel(class AFM::Wheel *);

    // RVA: 0x4D8 | Ordinal: 1241
        void Simulation(double);

    // RVA: 0x636 | Ordinal: 1591
        void getIPointerLeftWheelBrakePressureIndicator(class AFM::Indicator **);

    // RVA: 0x639 | Ordinal: 1594
        void getIPointerLeftWheelBrakePressureSensor(class AFM::Sensor **);

    // RVA: 0x670 | Ordinal: 1649
        void getIPointerRightWheelBrakePressureIndicator(class AFM::Indicator **);

    // RVA: 0x673 | Ordinal: 1652
        void getIPointerRightWheelBrakePressureSensor(class AFM::Sensor **);

    // RVA: 0x110 | Ordinal: 273
        void _BrakesManometer_240(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_BRAKESMANOMETER_240_HPP
