#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: ExternalCargoUnLoad
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class ExternalCargoUnLoad
{
public:

    // RVA: 0xB5 | Ordinal: 182
        void ExternalCargoUnLoad(class AI::ExternalCargoUnLoad &&);

    // RVA: 0xB6 | Ordinal: 183
        void ExternalCargoUnLoad(class AI::ExternalCargoUnLoad const &);

    // RVA: 0xB7 | Ordinal: 184
        void ExternalCargoUnLoad(void);

    // RVA: 0x6A9 | Ordinal: 1706
        void clone(void) const;

    // RVA: 0x716 | Ordinal: 1815
        void create(void);

    // RVA: 0x7F1 | Ordinal: 2034
        void getCategory(void) const;

    // RVA: 0x894 | Ordinal: 2197
        void getName(void) const;

    // RVA: 0xA15 | Ordinal: 2582
        void load(class Lua::Config &);

    // RVA: 0x266 | Ordinal: 615
        void _ExternalCargoUnLoad(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_EXTERNALCARGOUNLOAD_HPP
