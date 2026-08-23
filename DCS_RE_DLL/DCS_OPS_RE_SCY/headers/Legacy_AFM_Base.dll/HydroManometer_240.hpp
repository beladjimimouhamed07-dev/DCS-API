#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: HydroManometer_240
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class HydroManometer_240
{
public:

    // RVA: 0x35B | Ordinal: 860
        void Construct(void);

    // RVA: 0x3B8 | Ordinal: 953
        void Create(void);

    // RVA: 0x6F | Ordinal: 112
        void HydroManometer_240(class AFM::HydroManometer_240 &&);

    // RVA: 0x70 | Ordinal: 113
        void HydroManometer_240(class AFM::HydroManometer_240 const &);

    // RVA: 0x71 | Ordinal: 114
        void HydroManometer_240(void);

    // RVA: 0x490 | Ordinal: 1169
        void LockHydroSystem(class AFM::HydroSystem *);

    // RVA: 0x4E4 | Ordinal: 1253
        void Simulation(double);

    // RVA: 0x626 | Ordinal: 1575
        void getIPointerLeftHydroSystemPressureIndicator(class AFM::Indicator **);

    // RVA: 0x628 | Ordinal: 1577
        void getIPointerLeftHydroSystemPressureSensor(class AFM::Sensor **);

    // RVA: 0x660 | Ordinal: 1633
        void getIPointerRightHydroSystemPressureIndicator(class AFM::Indicator **);

    // RVA: 0x662 | Ordinal: 1635
        void getIPointerRightHydroSystemPressureSensor(class AFM::Sensor **);

    // RVA: 0x127 | Ordinal: 296
        void _HydroManometer_240(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_HYDROMANOMETER_240_HPP
