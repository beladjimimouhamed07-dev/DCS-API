#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: BrakesManometer_150
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class BrakesManometer_150
{
public:

    // RVA: 0x27 | Ordinal: 40
        void BrakesManometer_150(class AFM::BrakesManometer_150 &&);

    // RVA: 0x28 | Ordinal: 41
        void BrakesManometer_150(class AFM::BrakesManometer_150 const &);

    // RVA: 0x29 | Ordinal: 42
        void BrakesManometer_150(void);

    // RVA: 0x347 | Ordinal: 840
        void Construct(void);

    // RVA: 0x3A0 | Ordinal: 929
        void Create(void);

    // RVA: 0x49C | Ordinal: 1181
        void LockLeftWheel(class AFM::Wheel *);

    // RVA: 0x4A9 | Ordinal: 1194
        void LockRightWheel(class AFM::Wheel *);

    // RVA: 0x4D7 | Ordinal: 1240
        void Simulation(double);

    // RVA: 0x635 | Ordinal: 1590
        void getIPointerLeftWheelBrakePressureIndicator(class AFM::Indicator **);

    // RVA: 0x638 | Ordinal: 1593
        void getIPointerLeftWheelBrakePressureSensor(class AFM::Sensor **);

    // RVA: 0x66F | Ordinal: 1648
        void getIPointerRightWheelBrakePressureIndicator(class AFM::Indicator **);

    // RVA: 0x672 | Ordinal: 1651
        void getIPointerRightWheelBrakePressureSensor(class AFM::Sensor **);

    // RVA: 0x10F | Ordinal: 272
        void _BrakesManometer_150(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_BRAKESMANOMETER_150_HPP
