#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: ScriptFile
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class ScriptFile
{
public:

    // RVA: 0x161 | Ordinal: 354
        void ScriptFile(class AI::ScriptFile &&);

    // RVA: 0x162 | Ordinal: 355
        void ScriptFile(class AI::ScriptFile const &);

    // RVA: 0x163 | Ordinal: 356
        void ScriptFile(void);

    // RVA: 0x6C4 | Ordinal: 1733
        void clone(void) const;

    // RVA: 0x735 | Ordinal: 1846
        void create(void);

    // RVA: 0x8B0 | Ordinal: 2225
        void getName(void) const;

    // RVA: 0xA34 | Ordinal: 2613
        void load(class Lua::Config &);

    // RVA: 0xAED | Ordinal: 2798
        void params(void) const;

    // RVA: 0x2A4 | Ordinal: 677
        void _ScriptFile(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_SCRIPTFILE_HPP
