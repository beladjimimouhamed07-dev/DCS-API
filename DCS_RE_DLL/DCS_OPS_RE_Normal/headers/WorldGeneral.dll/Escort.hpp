#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: Escort
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class Escort
{
public:

    // RVA: 0xAF | Ordinal: 176
        void Escort(class AI::Escort &&);

    // RVA: 0xB0 | Ordinal: 177
        void Escort(class AI::Escort const &);

    // RVA: 0xB1 | Ordinal: 178
        void Escort(void);

    // RVA: 0x6A7 | Ordinal: 1704
        void clone(void) const;

    // RVA: 0x714 | Ordinal: 1813
        void create(void);

    // RVA: 0x7EF | Ordinal: 2032
        void getCategory(void) const;

    // RVA: 0x892 | Ordinal: 2195
        void getName(void) const;

    // RVA: 0xA13 | Ordinal: 2580
        void load(class Lua::Config &);

    // RVA: 0xADA | Ordinal: 2779
        void params(void) const;

    // RVA: 0x264 | Ordinal: 613
        void _Escort(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_ESCORT_HPP
