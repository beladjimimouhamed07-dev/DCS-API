#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: WrappedAction
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class WrappedAction
{
public:

    // RVA: 0x1DA | Ordinal: 475
        void WrappedAction(class AI::WrappedAction &&);

    // RVA: 0x1DB | Ordinal: 476
        void WrappedAction(class AI::WrappedAction const &);

    // RVA: 0x1DC | Ordinal: 477
        void WrappedAction(void);

    // RVA: 0x6D8 | Ordinal: 1753
        void clone(void) const;

    // RVA: 0x74B | Ordinal: 1868
        void create(void);

    // RVA: 0x797 | Ordinal: 1944
        void exec(class AI::Controller *);

    // RVA: 0x80D | Ordinal: 2062
        void getCategory(void) const;

    // RVA: 0x8C4 | Ordinal: 2245
        void getName(void) const;

    // RVA: 0xA4A | Ordinal: 2635
        void load(class Lua::Config &);

    // RVA: 0xAFF | Ordinal: 2816
        void params(void) const;

    // RVA: 0x2CC | Ordinal: 717
        void _WrappedAction(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_WRAPPEDACTION_HPP
