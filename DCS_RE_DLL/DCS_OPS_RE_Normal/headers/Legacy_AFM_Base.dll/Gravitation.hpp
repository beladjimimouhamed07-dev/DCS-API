#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: Gravitation
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class Gravitation
{
public:

    // RVA: 0x3B4 | Ordinal: 949
        void Create(void);

    // RVA: 0x411 | Ordinal: 1042
        void Destroy(void);

    // RVA: 0x63 | Ordinal: 100
        void Gravitation(void);

    // RVA: 0x64 | Ordinal: 101
        void Gravitation(class AFM::Gravitation &&);

    // RVA: 0x65 | Ordinal: 102
        void Gravitation(class AFM::Gravitation const &);

    // RVA: 0x459 | Ordinal: 1114
        void Instance(void);

    // RVA: 0x5BF | Ordinal: 1472
        void getGravitation_wcs(double *, double *);

    // RVA: 0x123 | Ordinal: 292
        void _Gravitation(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_GRAVITATION_HPP
