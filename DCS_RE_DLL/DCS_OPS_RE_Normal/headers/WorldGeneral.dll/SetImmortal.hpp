#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: SetImmortal
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class SetImmortal
{
public:

    // RVA: 0x170 | Ordinal: 369
        void SetImmortal(class AI::SetImmortal &&);

    // RVA: 0x171 | Ordinal: 370
        void SetImmortal(class AI::SetImmortal const &);

    // RVA: 0x172 | Ordinal: 371
        void SetImmortal(void);

    // RVA: 0x6C8 | Ordinal: 1737
        void clone(void) const;

    // RVA: 0x739 | Ordinal: 1850
        void create(void);

    // RVA: 0x8B4 | Ordinal: 2229
        void getName(void) const;

    // RVA: 0xA38 | Ordinal: 2617
        void load(class Lua::Config &);

    // RVA: 0xAF1 | Ordinal: 2802
        void params(void) const;

    // RVA: 0x2A8 | Ordinal: 681
        void _SetImmortal(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_SETIMMORTAL_HPP
