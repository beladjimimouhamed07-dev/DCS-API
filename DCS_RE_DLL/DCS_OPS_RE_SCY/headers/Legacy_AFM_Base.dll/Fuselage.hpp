#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: Fuselage
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class Fuselage
{
public:

    // RVA: 0x3B1 | Ordinal: 946
        void Create(void);

    // RVA: 0x410 | Ordinal: 1041
        void Destroy(void);

    // RVA: 0x5A | Ordinal: 91
        void Fuselage(void);

    // RVA: 0x5B | Ordinal: 92
        void Fuselage(class AFM::Fuselage &&);

    // RVA: 0x5C | Ordinal: 93
        void Fuselage(class AFM::Fuselage const &);

    // RVA: 0x458 | Ordinal: 1113
        void Instance(void);

    // RVA: 0x518 | Ordinal: 1305
        void calcAerodynamics(double *, double, double, double, double, double *, double *, double *, double *, double *, double *);

    // RVA: 0x120 | Ordinal: 289
        void _Fuselage(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_FUSELAGE_HPP
