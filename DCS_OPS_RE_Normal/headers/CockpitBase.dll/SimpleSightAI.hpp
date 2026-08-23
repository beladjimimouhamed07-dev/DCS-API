#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: SimpleSightAI
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gunner_AI {

class SimpleSightAI
{
public:

    // RVA: 0x83 | Ordinal: 132
        void SimpleSightAI(class gunner_AI::SimpleSightAI const &);

    // RVA: 0x84 | Ordinal: 133
        void SimpleSightAI(void);

    // RVA: 0x9CC | Ordinal: 2509
        void calculate(class wPosition3<float> const &, class MovingObject *, double);

    // RVA: 0xC21 | Ordinal: 3106
        void frendly_fire_check(double, class wAircraftGunMount *);

    // RVA: 0x1351 | Ordinal: 4946
        void l_read(class Lua::Config &, class IwoLA *);

    // RVA: 0x15DD | Ordinal: 5598
        void reload(void);

    // RVA: 0x1986 | Ordinal: 6535
        void simulate(double);

    // RVA: 0x199A | Ordinal: 6555
        void skill_deviation(double);

    // RVA: 0x2BE | Ordinal: 703
        void _SimpleSightAI(void);
};

} // namespace gunner_AI

// DCS_OPS_RE_COCKPITBASE.DLL_SIMPLESIGHTAI_HPP
