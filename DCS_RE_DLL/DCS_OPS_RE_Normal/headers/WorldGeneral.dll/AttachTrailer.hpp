#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: AttachTrailer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class AttachTrailer
{
public:

    // RVA: 0x31 | Ordinal: 50
        void AttachTrailer(class AI::AttachTrailer &&);

    // RVA: 0x32 | Ordinal: 51
        void AttachTrailer(class AI::AttachTrailer const &);

    // RVA: 0x33 | Ordinal: 52
        void AttachTrailer(void);

    // RVA: 0x685 | Ordinal: 1670
        void clone(void) const;

    // RVA: 0x6F2 | Ordinal: 1779
        void create(void);

    // RVA: 0x7D8 | Ordinal: 2009
        void getCategory(void) const;

    // RVA: 0x871 | Ordinal: 2162
        void getName(void) const;

    // RVA: 0x9F0 | Ordinal: 2545
        void load(class Lua::Config &);

    // RVA: 0xABC | Ordinal: 2749
        void params(void) const;

    // RVA: 0x239 | Ordinal: 570
        void _AttachTrailer(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_ATTACHTRAILER_HPP
