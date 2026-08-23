#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: EPLRS
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class EPLRS
{
public:

    // RVA: 0x97 | Ordinal: 152
        void EPLRS(class AI::EPLRS &&);

    // RVA: 0x98 | Ordinal: 153
        void EPLRS(class AI::EPLRS const &);

    // RVA: 0x99 | Ordinal: 154
        void EPLRS(void);

    // RVA: 0x69F | Ordinal: 1696
        void clone(void) const;

    // RVA: 0x70C | Ordinal: 1805
        void create(void);

    // RVA: 0x88A | Ordinal: 2187
        void getName(void) const;

    // RVA: 0xA0B | Ordinal: 2572
        void load(class Lua::Config &);

    // RVA: 0xAD3 | Ordinal: 2772
        void params(void) const;

    // RVA: 0x25C | Ordinal: 605
        void _EPLRS(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_EPLRS_HPP
