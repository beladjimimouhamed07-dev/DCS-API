#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: NoCommand
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class NoCommand
{
public:

    // RVA: 0x12B | Ordinal: 300
        void NoCommand(class AI::NoCommand &&);

    // RVA: 0x12C | Ordinal: 301
        void NoCommand(class AI::NoCommand const &);

    // RVA: 0x12D | Ordinal: 302
        void NoCommand(void);

    // RVA: 0x6B8 | Ordinal: 1721
        void clone(void) const;

    // RVA: 0x729 | Ordinal: 1834
        void create(void);

    // RVA: 0x790 | Ordinal: 1937
        void exec(class AI::Controller *) const;

    // RVA: 0x8A4 | Ordinal: 2213
        void getName(void) const;

    // RVA: 0xA26 | Ordinal: 2599
        void load(class Lua::Config &);

    // RVA: 0x291 | Ordinal: 658
        void _NoCommand(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_NOCOMMAND_HPP
