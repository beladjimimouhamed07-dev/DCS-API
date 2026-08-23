#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: AI
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class AI
{
public:

    // RVA: 0x620 | Ordinal: 1569
        void aiInit(void);

    // RVA: 0x64E | Ordinal: 1615
        void checkGroupSpawnConditions(class Lua::Config &, class RandomObject &);

    // RVA: 0xA4C | Ordinal: 2637
        void loadCommand(class Lua::Config &, class ed::basic_string<char> &);

    // RVA: 0xA51 | Ordinal: 2642
        void loadTask(class Lua::Config &, class ed::basic_string<char> &);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_AI_HPP
