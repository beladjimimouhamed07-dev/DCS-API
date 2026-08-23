#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: ShipHoldPoint
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class ShipHoldPoint
{
public:

    // RVA: 0x17C | Ordinal: 381
        void ShipHoldPoint(class AI::ShipHoldPoint &&);

    // RVA: 0x17D | Ordinal: 382
        void ShipHoldPoint(class AI::ShipHoldPoint const &);

    // RVA: 0x17E | Ordinal: 383
        void ShipHoldPoint(void);

    // RVA: 0x6CC | Ordinal: 1741
        void clone(void) const;

    // RVA: 0x73D | Ordinal: 1854
        void create(void);

    // RVA: 0x807 | Ordinal: 2056
        void getCategory(void) const;

    // RVA: 0x8B8 | Ordinal: 2233
        void getName(void) const;

    // RVA: 0xA3C | Ordinal: 2621
        void load(class Lua::Config &);

    // RVA: 0x2AC | Ordinal: 685
        void _ShipHoldPoint(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_SHIPHOLDPOINT_HPP
