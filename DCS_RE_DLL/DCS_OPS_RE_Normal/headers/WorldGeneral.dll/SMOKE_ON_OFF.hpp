#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: SMOKE_ON_OFF
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class SMOKE_ON_OFF
{
public:

    // RVA: 0x15B | Ordinal: 348
        void SMOKE_ON_OFF(class AI::SMOKE_ON_OFF &&);

    // RVA: 0x15C | Ordinal: 349
        void SMOKE_ON_OFF(class AI::SMOKE_ON_OFF const &);

    // RVA: 0x15D | Ordinal: 350
        void SMOKE_ON_OFF(void);

    // RVA: 0x6C2 | Ordinal: 1731
        void clone(void) const;

    // RVA: 0x733 | Ordinal: 1844
        void create(void);

    // RVA: 0x8AE | Ordinal: 2223
        void getName(void) const;

    // RVA: 0xA32 | Ordinal: 2611
        void load(class Lua::Config &);

    // RVA: 0xAEB | Ordinal: 2796
        void params(void) const;

    // RVA: 0x2A2 | Ordinal: 675
        void _SMOKE_ON_OFF(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_SMOKE_ON_OFF_HPP
