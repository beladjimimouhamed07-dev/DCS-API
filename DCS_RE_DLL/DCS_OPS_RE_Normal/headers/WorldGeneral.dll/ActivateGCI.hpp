#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: ActivateGCI
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class ActivateGCI
{
public:

    // RVA: 0x16 | Ordinal: 23
        void ActivateGCI(class AI::ActivateGCI &&);

    // RVA: 0x17 | Ordinal: 24
        void ActivateGCI(class AI::ActivateGCI const &);

    // RVA: 0x18 | Ordinal: 25
        void ActivateGCI(void);

    // RVA: 0x67F | Ordinal: 1664
        void clone(void) const;

    // RVA: 0x6EC | Ordinal: 1773
        void create(void);

    // RVA: 0x86B | Ordinal: 2156
        void getName(void) const;

    // RVA: 0x9EA | Ordinal: 2539
        void load(class Lua::Config &);

    // RVA: 0xAB6 | Ordinal: 2743
        void params(void) const;

    // RVA: 0x22F | Ordinal: 560
        void _ActivateGCI(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_ACTIVATEGCI_HPP
