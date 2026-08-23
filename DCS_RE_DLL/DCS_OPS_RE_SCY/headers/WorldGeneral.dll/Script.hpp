#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: Script
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class Script
{
public:

    // RVA: 0x15E | Ordinal: 351
        void Script(class AI::Script &&);

    // RVA: 0x15F | Ordinal: 352
        void Script(class AI::Script const &);

    // RVA: 0x160 | Ordinal: 353
        void Script(void);

    // RVA: 0x6C3 | Ordinal: 1732
        void clone(void) const;

    // RVA: 0x734 | Ordinal: 1845
        void create(void);

    // RVA: 0x8AF | Ordinal: 2224
        void getName(void) const;

    // RVA: 0xA33 | Ordinal: 2612
        void load(class Lua::Config &);

    // RVA: 0xAEC | Ordinal: 2797
        void params(void) const;

    // RVA: 0x2A3 | Ordinal: 676
        void _Script(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_SCRIPT_HPP
