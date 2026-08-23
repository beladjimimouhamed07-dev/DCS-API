#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: Strafing
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class Strafing
{
public:

    // RVA: 0x18E | Ordinal: 399
        void Strafing(class AI::Strafing &&);

    // RVA: 0x18F | Ordinal: 400
        void Strafing(class AI::Strafing const &);

    // RVA: 0x190 | Ordinal: 401
        void Strafing(void);

    // RVA: 0x6D1 | Ordinal: 1746
        void clone(void) const;

    // RVA: 0x743 | Ordinal: 1860
        void create(void);

    // RVA: 0x808 | Ordinal: 2057
        void getCategory(void) const;

    // RVA: 0x8BD | Ordinal: 2238
        void getName(void) const;

    // RVA: 0xA41 | Ordinal: 2626
        void load(class Lua::Config &);

    // RVA: 0xAF8 | Ordinal: 2809
        void params(void) const;

    // RVA: 0x2B2 | Ordinal: 691
        void _Strafing(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_STRAFING_HPP
