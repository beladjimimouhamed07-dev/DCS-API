#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: Option
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class Option
{
public:

    // RVA: 0x135 | Ordinal: 310
        void Option(class AI::Option &&);

    // RVA: 0x136 | Ordinal: 311
        void Option(class AI::Option const &);

    // RVA: 0x137 | Ordinal: 312
        void Option(void);

    // RVA: 0x6BA | Ordinal: 1723
        void clone(void) const;

    // RVA: 0x72B | Ordinal: 1836
        void create(void);

    // RVA: 0x792 | Ordinal: 1939
        void exec(class AI::Controller *) const;

    // RVA: 0x8A6 | Ordinal: 2215
        void getName(void) const;

    // RVA: 0xA28 | Ordinal: 2601
        void load(class Lua::Config &);

    // RVA: 0xAE7 | Ordinal: 2792
        void params(void) const;

    // RVA: 0x294 | Ordinal: 661
        void _Option(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_OPTION_HPP
