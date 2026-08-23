#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: EngageTargets
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class EngageTargets
{
public:

    // RVA: 0xA6 | Ordinal: 167
        void EngageTargets(class AI::EngageTargets &&);

    // RVA: 0xA7 | Ordinal: 168
        void EngageTargets(class AI::EngageTargets const &);

    // RVA: 0xA8 | Ordinal: 169
        void EngageTargets(void);

    // RVA: 0x6A4 | Ordinal: 1701
        void clone(void) const;

    // RVA: 0x711 | Ordinal: 1810
        void create(void);

    // RVA: 0x7EC | Ordinal: 2029
        void getCategory(void) const;

    // RVA: 0x88F | Ordinal: 2192
        void getName(void) const;

    // RVA: 0xA10 | Ordinal: 2577
        void load(class Lua::Config &);

    // RVA: 0xAD7 | Ordinal: 2776
        void params(void) const;

    // RVA: 0x261 | Ordinal: 610
        void _EngageTargets(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_ENGAGETARGETS_HPP
