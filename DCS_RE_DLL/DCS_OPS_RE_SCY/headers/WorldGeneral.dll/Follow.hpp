#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: Follow
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class Follow
{
public:

    // RVA: 0xD4 | Ordinal: 213
        void Follow(class AI::Follow &&);

    // RVA: 0xD5 | Ordinal: 214
        void Follow(class AI::Follow const &);

    // RVA: 0xD6 | Ordinal: 215
        void Follow(void);

    // RVA: 0x6AF | Ordinal: 1712
        void clone(void) const;

    // RVA: 0x71C | Ordinal: 1821
        void create(void);

    // RVA: 0x7F9 | Ordinal: 2042
        void getCategory(void) const;

    // RVA: 0x89A | Ordinal: 2203
        void getName(void) const;

    // RVA: 0xA1C | Ordinal: 2589
        void load(class Lua::Config &);

    // RVA: 0xAE1 | Ordinal: 2786
        void params(void) const;

    // RVA: 0x270 | Ordinal: 625
        void _Follow(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_FOLLOW_HPP
