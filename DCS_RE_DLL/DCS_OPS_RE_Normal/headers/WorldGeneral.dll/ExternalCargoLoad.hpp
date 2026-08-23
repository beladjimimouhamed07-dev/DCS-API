#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: ExternalCargoLoad
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class ExternalCargoLoad
{
public:

    // RVA: 0xB2 | Ordinal: 179
        void ExternalCargoLoad(class AI::ExternalCargoLoad &&);

    // RVA: 0xB3 | Ordinal: 180
        void ExternalCargoLoad(class AI::ExternalCargoLoad const &);

    // RVA: 0xB4 | Ordinal: 181
        void ExternalCargoLoad(void);

    // RVA: 0x6A8 | Ordinal: 1705
        void clone(void) const;

    // RVA: 0x715 | Ordinal: 1814
        void create(void);

    // RVA: 0x7F0 | Ordinal: 2033
        void getCategory(void) const;

    // RVA: 0x893 | Ordinal: 2196
        void getName(void) const;

    // RVA: 0xA14 | Ordinal: 2581
        void load(class Lua::Config &);

    // RVA: 0x265 | Ordinal: 614
        void _ExternalCargoLoad(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_EXTERNALCARGOLOAD_HPP
