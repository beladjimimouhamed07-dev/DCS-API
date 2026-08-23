#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: TailRudder
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class TailRudder
{
public:

    // RVA: 0x3DE | Ordinal: 991
        void Create(void);

    // RVA: 0x41C | Ordinal: 1053
        void Destroy(void);

    // RVA: 0x464 | Ordinal: 1125
        void Instance(void);

    // RVA: 0xE4 | Ordinal: 229
        void TailRudder(void);

    // RVA: 0xE5 | Ordinal: 230
        void TailRudder(class AFM::TailRudder &&);

    // RVA: 0xE6 | Ordinal: 231
        void TailRudder(class AFM::TailRudder const &);

    // RVA: 0x524 | Ordinal: 1317
        void calcAerodynamics(double *, double, double, double, double, double *, double *, double *, double *, double *, double *);

    // RVA: 0x14E | Ordinal: 335
        void _TailRudder(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_TAILRUDDER_HPP
