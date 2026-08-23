#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: DeactivateGCI
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class DeactivateGCI
{
public:

    // RVA: 0x7E | Ordinal: 127
        void DeactivateGCI(class AI::DeactivateGCI &&);

    // RVA: 0x7F | Ordinal: 128
        void DeactivateGCI(class AI::DeactivateGCI const &);

    // RVA: 0x80 | Ordinal: 129
        void DeactivateGCI(void);

    // RVA: 0x698 | Ordinal: 1689
        void clone(void) const;

    // RVA: 0x705 | Ordinal: 1798
        void create(void);

    // RVA: 0x883 | Ordinal: 2180
        void getName(void) const;

    // RVA: 0xA04 | Ordinal: 2565
        void load(class Lua::Config &);

    // RVA: 0xACC | Ordinal: 2765
        void params(void) const;

    // RVA: 0x254 | Ordinal: 597
        void _DeactivateGCI(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_DEACTIVATEGCI_HPP
