#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: StopRoute
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class StopRoute
{
public:

    // RVA: 0x188 | Ordinal: 393
        void StopRoute(class AI::StopRoute &&);

    // RVA: 0x189 | Ordinal: 394
        void StopRoute(class AI::StopRoute const &);

    // RVA: 0x18A | Ordinal: 395
        void StopRoute(void);

    // RVA: 0x6CF | Ordinal: 1744
        void clone(void) const;

    // RVA: 0x741 | Ordinal: 1858
        void create(void);

    // RVA: 0x793 | Ordinal: 1940
        void exec(class AI::Controller *) const;

    // RVA: 0x8BB | Ordinal: 2236
        void getName(void) const;

    // RVA: 0xA3F | Ordinal: 2624
        void load(class Lua::Config &);

    // RVA: 0xAF6 | Ordinal: 2807
        void params(void) const;

    // RVA: 0x2B0 | Ordinal: 689
        void _StopRoute(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_STOPROUTE_HPP
