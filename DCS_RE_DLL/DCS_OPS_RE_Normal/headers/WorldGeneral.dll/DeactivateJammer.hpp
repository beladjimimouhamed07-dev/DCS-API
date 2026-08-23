#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: DeactivateJammer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class DeactivateJammer
{
public:

    // RVA: 0x84 | Ordinal: 133
        void DeactivateJammer(class AI::DeactivateJammer &&);

    // RVA: 0x85 | Ordinal: 134
        void DeactivateJammer(class AI::DeactivateJammer const &);

    // RVA: 0x86 | Ordinal: 135
        void DeactivateJammer(void);

    // RVA: 0x69A | Ordinal: 1691
        void clone(void) const;

    // RVA: 0x707 | Ordinal: 1800
        void create(void);

    // RVA: 0x885 | Ordinal: 2182
        void getName(void) const;

    // RVA: 0xA06 | Ordinal: 2567
        void load(class Lua::Config &);

    // RVA: 0xACE | Ordinal: 2767
        void params(void) const;

    // RVA: 0x256 | Ordinal: 599
        void _DeactivateJammer(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_DEACTIVATEJAMMER_HPP
