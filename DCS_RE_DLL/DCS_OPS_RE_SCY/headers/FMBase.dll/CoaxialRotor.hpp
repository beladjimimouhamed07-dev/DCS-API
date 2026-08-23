#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: CoaxialRotor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class CoaxialRotor
{
public:

    // RVA: 0x45 | Ordinal: 70
        void CoaxialRotor(class EagleFM::CoaxialRotor const &);

    // RVA: 0x46 | Ordinal: 71
        void CoaxialRotor(class EagleFM::DynamicBody *, class EagleFM::AerodynamicBody *, class EagleFM::RigidBody *, class EagleFM::EffectManager *);

    // RVA: 0x47A | Ordinal: 1147
        void createBlades(struct EagleFM::BladeInit const &, int, int, int);

    // RVA: 0x47B | Ordinal: 1148
        void createBlades(struct EagleFM::BladeInit const &, int, struct EagleFM::BladeInit const &, int, double, double, int, int);

    // RVA: 0x48A | Ordinal: 1163
        void doSimulate(void);

    // RVA: 0x536 | Ordinal: 1335
        void getDnFlappingAvr(void) const;

    // RVA: 0x537 | Ordinal: 1336
        void getDnFlappingIm(void) const;

    // RVA: 0x538 | Ordinal: 1337
        void getDnFlappingRe(void) const;

    // RVA: 0x597 | Ordinal: 1432
        void getInductiveFlow(void) const;

    // RVA: 0x190 | Ordinal: 401
        void _CoaxialRotor(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_COAXIALROTOR_HPP
