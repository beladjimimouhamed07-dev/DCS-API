#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: Embarking
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class Embarking
{
public:

    // RVA: 0xA0 | Ordinal: 161
        void Embarking(class AI::Embarking &&);

    // RVA: 0xA1 | Ordinal: 162
        void Embarking(class AI::Embarking const &);

    // RVA: 0xA2 | Ordinal: 163
        void Embarking(void);

    // RVA: 0x6A2 | Ordinal: 1699
        void clone(void) const;

    // RVA: 0x70F | Ordinal: 1808
        void create(void);

    // RVA: 0x7EA | Ordinal: 2027
        void getCategory(void) const;

    // RVA: 0x88D | Ordinal: 2190
        void getName(void) const;

    // RVA: 0xA0E | Ordinal: 2575
        void load(class Lua::Config &);

    // RVA: 0xAD5 | Ordinal: 2774
        void params(void) const;

    // RVA: 0x25F | Ordinal: 608
        void _Embarking(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_EMBARKING_HPP
