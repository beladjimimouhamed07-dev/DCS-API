#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: ActivateACLS
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class ActivateACLS
{
public:

    // RVA: 0x10 | Ordinal: 17
        void ActivateACLS(class AI::ActivateACLS &&);

    // RVA: 0x11 | Ordinal: 18
        void ActivateACLS(class AI::ActivateACLS const &);

    // RVA: 0x12 | Ordinal: 19
        void ActivateACLS(void);

    // RVA: 0x67D | Ordinal: 1662
        void clone(void) const;

    // RVA: 0x6EA | Ordinal: 1771
        void create(void);

    // RVA: 0x869 | Ordinal: 2154
        void getName(void) const;

    // RVA: 0x9E8 | Ordinal: 2537
        void load(class Lua::Config &);

    // RVA: 0xAB4 | Ordinal: 2741
        void params(void) const;

    // RVA: 0x22D | Ordinal: 558
        void _ActivateACLS(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_ACTIVATEACLS_HPP
