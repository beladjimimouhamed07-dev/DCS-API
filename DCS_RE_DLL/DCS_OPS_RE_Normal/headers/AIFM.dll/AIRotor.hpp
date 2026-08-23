#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: AIFM.dll
// Class: AIRotor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace AIFM {

class AIRotor
{
public:

    // RVA: 0x17 | Ordinal: 24
        void AIRotor(class EagleFM::AIFM::AIRotor &&);

    // RVA: 0x18 | Ordinal: 25
        void AIRotor(class EagleFM::AIFM::AIRotor const &);

    // RVA: 0x19 | Ordinal: 26
        void AIRotor(class EagleFM::DynamicBody *);

    // RVA: 0x1A | Ordinal: 27
        void AIRotor(class EagleFM::DynamicBody *, class EagleFM::AIFM::AIRotorInit const &);

    // RVA: 0x54 | Ordinal: 85
        void calcRotorInductiveSpeed(double);

    // RVA: 0x55 | Ordinal: 86
        void calcRotorThrust(double, double &);

    // RVA: 0x63 | Ordinal: 100
        void doSimulate(void);

    // RVA: 0x69 | Ordinal: 106
        void getBladesNum(void) const;

    // RVA: 0x6D | Ordinal: 110
        void getDiam(void) const;

    // RVA: 0x76 | Ordinal: 119
        void getFlowVelocity(void) const;

    // RVA: 0x81 | Ordinal: 130
        void getOmega(void) const;

    // RVA: 0x82 | Ordinal: 131
        void getOmegaSign(void) const;

    // RVA: 0x89 | Ordinal: 138
        void getRelativeRPM(void) const;

    // RVA: 0x9F | Ordinal: 160
        void getThrust(void) const;

    // RVA: 0x117 | Ordinal: 280
        void init(class EagleFM::AIFM::AIRotorInit const &);

    // RVA: 0x14C | Ordinal: 333
        void setTandem(bool);

    // RVA: 0x27 | Ordinal: 40
        void _AIRotor(void);
};

} // namespace AIFM
} // namespace EagleFM

// DCS_OPS_RE_AIFM.DLL_AIROTOR_HPP
