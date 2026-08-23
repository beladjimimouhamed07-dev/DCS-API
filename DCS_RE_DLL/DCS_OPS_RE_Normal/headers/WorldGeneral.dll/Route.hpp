#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: Route
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class Route
{
public:

    // RVA: 0x150 | Ordinal: 337
        void Route(struct AI::Route const &);

    // RVA: 0x151 | Ordinal: 338
        void Route(void);

    // RVA: 0x782 | Ordinal: 1923
        void empty(void) const;

    // RVA: 0x7A0 | Ordinal: 1953
        void fillAirdromeID_(class Lua::Config &);

    // RVA: 0xA30 | Ordinal: 2609
        void load(bool, class Lua::Config &);

    // RVA: 0xA4D | Ordinal: 2638
        void loadDestination_(class Lua::Config &);

    // RVA: 0xC00 | Ordinal: 3073
        void size(void) const;

    // RVA: 0x29E | Ordinal: 671
        void _Route(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_ROUTE_HPP
