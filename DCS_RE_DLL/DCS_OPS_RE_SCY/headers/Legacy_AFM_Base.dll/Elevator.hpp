#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: Elevator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class Elevator
{
public:

    // RVA: 0x3AD | Ordinal: 942
        void Create(void);

    // RVA: 0x40F | Ordinal: 1040
        void Destroy(void);

    // RVA: 0x4E | Ordinal: 79
        void Elevator(void);

    // RVA: 0x4F | Ordinal: 80
        void Elevator(class AFM::Elevator &&);

    // RVA: 0x50 | Ordinal: 81
        void Elevator(class AFM::Elevator const &);

    // RVA: 0x457 | Ordinal: 1112
        void Instance(void);

    // RVA: 0x516 | Ordinal: 1303
        void calcAerodynamics(double *, double, double, double, double, double *, double *, double *, double *, double *, double *);

    // RVA: 0x11C | Ordinal: 285
        void _Elevator(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_ELEVATOR_HPP
