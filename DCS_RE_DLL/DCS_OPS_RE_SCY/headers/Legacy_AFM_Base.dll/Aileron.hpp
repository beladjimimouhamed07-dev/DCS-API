#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: Aileron
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class Aileron
{
public:

    // RVA: 0x9 | Ordinal: 10
        void Aileron(void);

    // RVA: 0xA | Ordinal: 11
        void Aileron(class AFM::Aileron &&);

    // RVA: 0xB | Ordinal: 12
        void Aileron(class AFM::Aileron const &);

    // RVA: 0x396 | Ordinal: 919
        void Create(void);

    // RVA: 0x40C | Ordinal: 1037
        void Destroy(void);

    // RVA: 0x454 | Ordinal: 1109
        void Instance(void);

    // RVA: 0x513 | Ordinal: 1300
        void calcAerodynamics(double *, double, double, double, double, double *, double *, double *, double *, double *, double *);

    // RVA: 0x105 | Ordinal: 262
        void _Aileron(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_AILERON_HPP
