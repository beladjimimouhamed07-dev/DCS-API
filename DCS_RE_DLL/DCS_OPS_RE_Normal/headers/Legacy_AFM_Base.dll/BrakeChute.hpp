#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: BrakeChute
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class BrakeChute
{
public:

    // RVA: 0x24 | Ordinal: 37
        void BrakeChute(void);

    // RVA: 0x25 | Ordinal: 38
        void BrakeChute(class AFM::BrakeChute &&);

    // RVA: 0x26 | Ordinal: 39
        void BrakeChute(class AFM::BrakeChute const &);

    // RVA: 0x39F | Ordinal: 928
        void Create(void);

    // RVA: 0x40D | Ordinal: 1038
        void Destroy(void);

    // RVA: 0x455 | Ordinal: 1110
        void Instance(void);

    // RVA: 0x514 | Ordinal: 1301
        void calcAerodynamics(double *, double, double, double, double, double *, double *, double *, double *, double *, double *);

    // RVA: 0x10E | Ordinal: 271
        void _BrakeChute(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_BRAKECHUTE_HPP
