#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: NoseGear
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class NoseGear
{
public:

    // RVA: 0x3C3 | Ordinal: 964
        void Create(void);

    // RVA: 0x415 | Ordinal: 1046
        void Destroy(void);

    // RVA: 0x45D | Ordinal: 1118
        void Instance(void);

    // RVA: 0x90 | Ordinal: 145
        void NoseGear(void);

    // RVA: 0x91 | Ordinal: 146
        void NoseGear(class AFM::NoseGear &&);

    // RVA: 0x92 | Ordinal: 147
        void NoseGear(class AFM::NoseGear const &);

    // RVA: 0x51B | Ordinal: 1308
        void calcAerodynamics(double *, double, double, double, double, double *, double *, double *, double *, double *, double *);

    // RVA: 0x132 | Ordinal: 307
        void _NoseGear(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_NOSEGEAR_HPP
