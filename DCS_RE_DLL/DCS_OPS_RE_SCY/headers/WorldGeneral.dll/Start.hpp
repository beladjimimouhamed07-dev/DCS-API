#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: Start
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class Start
{
public:

    // RVA: 0x185 | Ordinal: 390
        void Start(class AI::Start &&);

    // RVA: 0x186 | Ordinal: 391
        void Start(class AI::Start const &);

    // RVA: 0x187 | Ordinal: 392
        void Start(void);

    // RVA: 0x6CE | Ordinal: 1743
        void clone(void) const;

    // RVA: 0x740 | Ordinal: 1857
        void create(void);

    // RVA: 0x8BA | Ordinal: 2235
        void getName(void) const;

    // RVA: 0xA3E | Ordinal: 2623
        void load(class Lua::Config &);

    // RVA: 0xAF5 | Ordinal: 2806
        void params(void) const;

    // RVA: 0x2AF | Ordinal: 688
        void _Start(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_START_HPP
