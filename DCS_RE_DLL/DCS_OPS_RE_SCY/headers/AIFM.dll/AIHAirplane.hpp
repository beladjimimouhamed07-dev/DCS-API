#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: AIFM.dll
// Class: AIHAirplane
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace AIFM {

class AIHAirplane
{
public:

    // RVA: 0x8 | Ordinal: 9
        void AIHAirplane(class EagleFM::AIFM::AIHAirplane &&);

    // RVA: 0x9 | Ordinal: 10
        void AIHAirplane(class EagleFM::AIFM::AIHAirplane const &);

    // RVA: 0xA | Ordinal: 11
        void AIHAirplane(class EagleFM::DynamicBody *);

    // RVA: 0xB | Ordinal: 12
        void AIHAirplane(class EagleFM::DynamicBody *, class EagleFM::AIFM::AIHAirplaneInit const &);

    // RVA: 0x50 | Ordinal: 81
        void applyForce(void);

    // RVA: 0x5C | Ordinal: 93
        void damageStabArea(bool);

    // RVA: 0x5D | Ordinal: 94
        void damageTailFinArea(void);

    // RVA: 0x60 | Ordinal: 97
        void doSimulate(void);

    // RVA: 0x9C | Ordinal: 157
        void getTailPos_l(void) const;

    // RVA: 0xA6 | Ordinal: 167
        void getWind_l(void) const;

    // RVA: 0x114 | Ordinal: 277
        void init(class EagleFM::AIFM::AIHAirplaneInit const &);

    // RVA: 0x23 | Ordinal: 36
        void _AIHAirplane(void);
};

} // namespace AIFM
} // namespace EagleFM

// DCS_OPS_RE_AIFM.DLL_AIHAIRPLANE_HPP
