#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: FollowBigFormation
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class FollowBigFormation
{
public:

    // RVA: 0xD7 | Ordinal: 216
        void FollowBigFormation(class AI::FollowBigFormation &&);

    // RVA: 0xD8 | Ordinal: 217
        void FollowBigFormation(class AI::FollowBigFormation const &);

    // RVA: 0xD9 | Ordinal: 218
        void FollowBigFormation(void);

    // RVA: 0x6B0 | Ordinal: 1713
        void clone(void) const;

    // RVA: 0x71D | Ordinal: 1822
        void create(void);

    // RVA: 0x7FA | Ordinal: 2043
        void getCategory(void) const;

    // RVA: 0x89B | Ordinal: 2204
        void getName(void) const;

    // RVA: 0xA1D | Ordinal: 2590
        void load(class Lua::Config &);

    // RVA: 0xAE2 | Ordinal: 2787
        void params(void) const;

    // RVA: 0x271 | Ordinal: 626
        void _FollowBigFormation(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_FOLLOWBIGFORMATION_HPP
