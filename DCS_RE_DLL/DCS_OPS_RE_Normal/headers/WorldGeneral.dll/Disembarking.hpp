#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: Disembarking
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class Disembarking
{
public:

    // RVA: 0x90 | Ordinal: 145
        void Disembarking(class AI::Disembarking &&);

    // RVA: 0x91 | Ordinal: 146
        void Disembarking(class AI::Disembarking const &);

    // RVA: 0x92 | Ordinal: 147
        void Disembarking(void);

    // RVA: 0x69E | Ordinal: 1695
        void clone(void) const;

    // RVA: 0x70B | Ordinal: 1804
        void create(void);

    // RVA: 0x7E7 | Ordinal: 2024
        void getCategory(void) const;

    // RVA: 0x889 | Ordinal: 2186
        void getName(void) const;

    // RVA: 0xA0A | Ordinal: 2571
        void load(class Lua::Config &);

    // RVA: 0xAD2 | Ordinal: 2771
        void params(void) const;

    // RVA: 0x25A | Ordinal: 603
        void _Disembarking(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_DISEMBARKING_HPP
