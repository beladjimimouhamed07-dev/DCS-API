#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: AerodynamicBody
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class AerodynamicBody
{
public:

    // RVA: 0x6 | Ordinal: 7
        void AerodynamicBody(class AFM::AerodynamicBody &&);

    // RVA: 0x7 | Ordinal: 8
        void AerodynamicBody(class AFM::AerodynamicBody const &);

    // RVA: 0x8 | Ordinal: 9
        void AerodynamicBody(void);

    // RVA: 0x33E | Ordinal: 831
        void Construct(void);

    // RVA: 0x395 | Ordinal: 918
        void Create(void);

    // RVA: 0x512 | Ordinal: 1299
        void calcAerodynamics(double *, double, double, double, double, double *, double *, double *, double *, double *, double *);

    // RVA: 0x104 | Ordinal: 261
        void _AerodynamicBody(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_AERODYNAMICBODY_HPP
