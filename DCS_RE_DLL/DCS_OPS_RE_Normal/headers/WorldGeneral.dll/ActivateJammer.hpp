#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: ActivateJammer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class ActivateJammer
{
public:

    // RVA: 0x1C | Ordinal: 29
        void ActivateJammer(class AI::ActivateJammer &&);

    // RVA: 0x1D | Ordinal: 30
        void ActivateJammer(class AI::ActivateJammer const &);

    // RVA: 0x1E | Ordinal: 31
        void ActivateJammer(void);

    // RVA: 0x681 | Ordinal: 1666
        void clone(void) const;

    // RVA: 0x6EE | Ordinal: 1775
        void create(void);

    // RVA: 0x86D | Ordinal: 2158
        void getName(void) const;

    // RVA: 0x9EC | Ordinal: 2541
        void load(class Lua::Config &);

    // RVA: 0xAB8 | Ordinal: 2745
        void params(void) const;

    // RVA: 0x231 | Ordinal: 562
        void _ActivateJammer(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_ACTIVATEJAMMER_HPP
