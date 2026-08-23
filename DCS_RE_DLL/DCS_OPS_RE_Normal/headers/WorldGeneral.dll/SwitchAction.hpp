#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: SwitchAction
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class SwitchAction
{
public:

    // RVA: 0x191 | Ordinal: 402
        void SwitchAction(class AI::SwitchAction &&);

    // RVA: 0x192 | Ordinal: 403
        void SwitchAction(class AI::SwitchAction const &);

    // RVA: 0x193 | Ordinal: 404
        void SwitchAction(void);

    // RVA: 0x6D2 | Ordinal: 1747
        void clone(void) const;

    // RVA: 0x744 | Ordinal: 1861
        void create(void);

    // RVA: 0x794 | Ordinal: 1941
        void exec(class AI::Controller *) const;

    // RVA: 0x8BE | Ordinal: 2239
        void getName(void) const;

    // RVA: 0xA42 | Ordinal: 2627
        void load(class Lua::Config &);

    // RVA: 0xAF9 | Ordinal: 2810
        void params(void) const;

    // RVA: 0x2B3 | Ordinal: 692
        void _SwitchAction(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_SWITCHACTION_HPP
