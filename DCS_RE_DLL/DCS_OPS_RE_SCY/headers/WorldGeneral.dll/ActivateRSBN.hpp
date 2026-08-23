#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: ActivateRSBN
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class ActivateRSBN
{
public:

    // RVA: 0x22 | Ordinal: 35
        void ActivateRSBN(class AI::ActivateRSBN &&);

    // RVA: 0x23 | Ordinal: 36
        void ActivateRSBN(class AI::ActivateRSBN const &);

    // RVA: 0x24 | Ordinal: 37
        void ActivateRSBN(void);

    // RVA: 0x683 | Ordinal: 1668
        void clone(void) const;

    // RVA: 0x6F0 | Ordinal: 1777
        void create(void);

    // RVA: 0x86F | Ordinal: 2160
        void getName(void) const;

    // RVA: 0x9EE | Ordinal: 2543
        void load(class Lua::Config &);

    // RVA: 0xABA | Ordinal: 2747
        void params(void) const;

    // RVA: 0x233 | Ordinal: 564
        void _ActivateRSBN(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_ACTIVATERSBN_HPP
