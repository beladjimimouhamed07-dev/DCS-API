#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: AIFM.dll
// Class: AIGearPost
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace AIFM {

class AIGearPost
{
public:

    // RVA: 0x4 | Ordinal: 5
        void AIGearPost(class EagleFM::AIFM::AIGearPost const &);

    // RVA: 0x5 | Ordinal: 6
        void AIGearPost(class EagleFM::DynamicBody *);

    // RVA: 0x6 | Ordinal: 7
        void AIGearPost(class EagleFM::DynamicBody *, struct EagleFM::AIFM::AIGearPostInit const &);

    // RVA: 0x51 | Ordinal: 82
        void applyForces(void);

    // RVA: 0x59 | Ordinal: 90
        void compute_wheel_force(double);

    // RVA: 0x66 | Ordinal: 103
        void getAIGearPostState(void) const;

    // RVA: 0x6C | Ordinal: 109
        void getContactFlag(void) const;

    // RVA: 0x77 | Ordinal: 120
        void getForce_l(void) const;

    // RVA: 0x7D | Ordinal: 126
        void getHAGLGear(void) const;

    // RVA: 0x80 | Ordinal: 129
        void getNoseWheelJacobian(void) const;

    // RVA: 0x86 | Ordinal: 135
        void getPos_l(void) const;

    // RVA: 0x8B | Ordinal: 140
        void getRelativeYaw(void) const;

    // RVA: 0x99 | Ordinal: 154
        void getStrutCompression(void) const;

    // RVA: 0x9A | Ordinal: 155
        void getStrutPos(void) const;

    // RVA: 0xA3 | Ordinal: 164
        void getWheelRadius(void) const;

    // RVA: 0xA5 | Ordinal: 166
        void getWheelRotationPhase(void) const;

    // RVA: 0x113 | Ordinal: 276
        void init(struct EagleFM::AIFM::AIGearPostInit const &);

    // RVA: 0x141 | Ordinal: 322
        void setRelativeYaw(float);

    // RVA: 0x144 | Ordinal: 325
        void setSelfAttitude(bool);

    // RVA: 0x152 | Ordinal: 339
        void setYawLim(float);

    // RVA: 0x15A | Ordinal: 347
        void simulate(double);

    // RVA: 0x22 | Ordinal: 35
        void _AIGearPost(void);
};

} // namespace AIFM
} // namespace EagleFM

// DCS_OPS_RE_AIFM.DLL_AIGEARPOST_HPP
