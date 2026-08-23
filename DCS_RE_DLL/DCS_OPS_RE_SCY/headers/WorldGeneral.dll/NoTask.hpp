#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: NoTask
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class NoTask
{
public:

    // RVA: 0x12E | Ordinal: 303
        void NoTask(class AI::NoTask &&);

    // RVA: 0x12F | Ordinal: 304
        void NoTask(class AI::NoTask const &);

    // RVA: 0x130 | Ordinal: 305
        void NoTask(void);

    // RVA: 0x6B9 | Ordinal: 1722
        void clone(void) const;

    // RVA: 0x72A | Ordinal: 1835
        void create(void);

    // RVA: 0x791 | Ordinal: 1938
        void exec(class AI::Controller *);

    // RVA: 0x801 | Ordinal: 2050
        void getCategory(void) const;

    // RVA: 0x8A5 | Ordinal: 2214
        void getName(void) const;

    // RVA: 0xA27 | Ordinal: 2600
        void load(class Lua::Config &);

    // RVA: 0x292 | Ordinal: 659
        void _NoTask(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_NOTASK_HPP
