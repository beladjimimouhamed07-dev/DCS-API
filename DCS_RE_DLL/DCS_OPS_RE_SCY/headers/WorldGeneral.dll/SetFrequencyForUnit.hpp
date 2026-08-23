#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: SetFrequencyForUnit
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class SetFrequencyForUnit
{
public:

    // RVA: 0x16D | Ordinal: 366
        void SetFrequencyForUnit(class AI::SetFrequencyForUnit &&);

    // RVA: 0x16E | Ordinal: 367
        void SetFrequencyForUnit(class AI::SetFrequencyForUnit const &);

    // RVA: 0x16F | Ordinal: 368
        void SetFrequencyForUnit(void);

    // RVA: 0x6C7 | Ordinal: 1736
        void clone(void) const;

    // RVA: 0x738 | Ordinal: 1849
        void create(void);

    // RVA: 0x8B3 | Ordinal: 2228
        void getName(void) const;

    // RVA: 0xA37 | Ordinal: 2616
        void load(class Lua::Config &);

    // RVA: 0xAF0 | Ordinal: 2801
        void params(void) const;

    // RVA: 0x2A7 | Ordinal: 680
        void _SetFrequencyForUnit(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_SETFREQUENCYFORUNIT_HPP
