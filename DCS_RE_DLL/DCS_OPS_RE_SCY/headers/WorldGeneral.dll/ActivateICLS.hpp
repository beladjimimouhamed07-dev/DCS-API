#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: ActivateICLS
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class ActivateICLS
{
public:

    // RVA: 0x19 | Ordinal: 26
        void ActivateICLS(class AI::ActivateICLS &&);

    // RVA: 0x1A | Ordinal: 27
        void ActivateICLS(class AI::ActivateICLS const &);

    // RVA: 0x1B | Ordinal: 28
        void ActivateICLS(void);

    // RVA: 0x680 | Ordinal: 1665
        void clone(void) const;

    // RVA: 0x6ED | Ordinal: 1774
        void create(void);

    // RVA: 0x86C | Ordinal: 2157
        void getName(void) const;

    // RVA: 0x9EB | Ordinal: 2540
        void load(class Lua::Config &);

    // RVA: 0xAB7 | Ordinal: 2744
        void params(void) const;

    // RVA: 0x230 | Ordinal: 561
        void _ActivateICLS(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_ACTIVATEICLS_HPP
