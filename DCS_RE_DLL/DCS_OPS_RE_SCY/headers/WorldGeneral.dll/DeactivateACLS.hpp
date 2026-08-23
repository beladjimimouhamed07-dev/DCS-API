#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: DeactivateACLS
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class DeactivateACLS
{
public:

    // RVA: 0x78 | Ordinal: 121
        void DeactivateACLS(class AI::DeactivateACLS &&);

    // RVA: 0x79 | Ordinal: 122
        void DeactivateACLS(class AI::DeactivateACLS const &);

    // RVA: 0x7A | Ordinal: 123
        void DeactivateACLS(void);

    // RVA: 0x696 | Ordinal: 1687
        void clone(void) const;

    // RVA: 0x703 | Ordinal: 1796
        void create(void);

    // RVA: 0x881 | Ordinal: 2178
        void getName(void) const;

    // RVA: 0xA02 | Ordinal: 2563
        void load(class Lua::Config &);

    // RVA: 0xACA | Ordinal: 2763
        void params(void) const;

    // RVA: 0x252 | Ordinal: 595
        void _DeactivateACLS(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_DEACTIVATEACLS_HPP
