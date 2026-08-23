#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: DeactivateICLS
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class DeactivateICLS
{
public:

    // RVA: 0x81 | Ordinal: 130
        void DeactivateICLS(class AI::DeactivateICLS &&);

    // RVA: 0x82 | Ordinal: 131
        void DeactivateICLS(class AI::DeactivateICLS const &);

    // RVA: 0x83 | Ordinal: 132
        void DeactivateICLS(void);

    // RVA: 0x699 | Ordinal: 1690
        void clone(void) const;

    // RVA: 0x706 | Ordinal: 1799
        void create(void);

    // RVA: 0x884 | Ordinal: 2181
        void getName(void) const;

    // RVA: 0xA05 | Ordinal: 2566
        void load(class Lua::Config &);

    // RVA: 0xACD | Ordinal: 2766
        void params(void) const;

    // RVA: 0x255 | Ordinal: 598
        void _DeactivateICLS(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_DEACTIVATEICLS_HPP
