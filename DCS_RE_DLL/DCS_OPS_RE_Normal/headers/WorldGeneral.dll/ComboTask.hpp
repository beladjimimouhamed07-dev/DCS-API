#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: ComboTask
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class ComboTask
{
public:

    // RVA: 0x69 | Ordinal: 106
        void ComboTask(class AI::ComboTask &&);

    // RVA: 0x6A | Ordinal: 107
        void ComboTask(class AI::ComboTask const &);

    // RVA: 0x6B | Ordinal: 108
        void ComboTask(void);

    // RVA: 0x693 | Ordinal: 1684
        void clone(void) const;

    // RVA: 0x700 | Ordinal: 1793
        void create(void);

    // RVA: 0x87F | Ordinal: 2176
        void getName(void) const;

    // RVA: 0x9FF | Ordinal: 2560
        void load(class Lua::Config &);

    // RVA: 0xAC8 | Ordinal: 2761
        void params(void) const;

    // RVA: 0x24C | Ordinal: 589
        void _ComboTask(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_COMBOTASK_HPP
