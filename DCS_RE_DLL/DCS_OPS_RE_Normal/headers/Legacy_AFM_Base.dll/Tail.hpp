#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: Tail
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class Tail
{
public:

    // RVA: 0x3DD | Ordinal: 990
        void Create(void);

    // RVA: 0x41B | Ordinal: 1052
        void Destroy(void);

    // RVA: 0x463 | Ordinal: 1124
        void Instance(void);

    // RVA: 0xE1 | Ordinal: 226
        void Tail(void);

    // RVA: 0xE2 | Ordinal: 227
        void Tail(class AFM::Tail &&);

    // RVA: 0xE3 | Ordinal: 228
        void Tail(class AFM::Tail const &);

    // RVA: 0x523 | Ordinal: 1316
        void calcAerodynamics(double *, double, double, double, double, double *, double *, double *, double *, double *, double *);

    // RVA: 0x14D | Ordinal: 334
        void _Tail(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_TAIL_HPP
