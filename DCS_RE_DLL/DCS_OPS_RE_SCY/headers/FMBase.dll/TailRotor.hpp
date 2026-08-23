#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: TailRotor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class TailRotor
{
public:

    // RVA: 0x14D | Ordinal: 334
        void TailRotor(class EagleFM::TailRotor const &);

    // RVA: 0x14E | Ordinal: 335
        void TailRotor(class EagleFM::DynamicBody *, class EagleFM::AerodynamicBody *, class EagleFM::RigidBody *);

    // RVA: 0x47D | Ordinal: 1150
        void createBlades(int);

    // RVA: 0x49A | Ordinal: 1179
        void doSimulate(void);

    // RVA: 0x4DA | Ordinal: 1243
        void getBetaX(void) const;

    // RVA: 0x4DB | Ordinal: 1244
        void getBetaZ(void) const;

    // RVA: 0x1E3 | Ordinal: 484
        void _TailRotor(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_TAILROTOR_HPP
