#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: SetFrequency
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class SetFrequency
{
public:

    // RVA: 0x16A | Ordinal: 363
        void SetFrequency(class AI::SetFrequency &&);

    // RVA: 0x16B | Ordinal: 364
        void SetFrequency(class AI::SetFrequency const &);

    // RVA: 0x16C | Ordinal: 365
        void SetFrequency(void);

    // RVA: 0x6C6 | Ordinal: 1735
        void clone(void) const;

    // RVA: 0x737 | Ordinal: 1848
        void create(void);

    // RVA: 0x8B2 | Ordinal: 2227
        void getName(void) const;

    // RVA: 0xA36 | Ordinal: 2615
        void load(class Lua::Config &);

    // RVA: 0xAEF | Ordinal: 2800
        void params(void) const;

    // RVA: 0x2A6 | Ordinal: 679
        void _SetFrequency(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_SETFREQUENCY_HPP
