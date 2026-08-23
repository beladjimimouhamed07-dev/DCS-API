#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Terrain.dll
// Class: lWarehouseOwner
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class lWarehouseOwner
{
public:

    // RVA: 0x5A | Ordinal: 91
        void Degrade(bool);

    // RVA: 0x6A | Ordinal: 107
        void ReinitState(void);

    // RVA: 0x70 | Ordinal: 113
        void getStoreType(void) const;

    // RVA: 0x71 | Ordinal: 114
        void getWarehouse(void);

    // RVA: 0x72 | Ordinal: 115
        void getWarehouse(void) const;

    // RVA: 0x14 | Ordinal: 21
        void lWarehouseOwner(class lWarehouseOwner const &);

    // RVA: 0x15 | Ordinal: 22
        void lWarehouseOwner(void);

    // RVA: 0x7D | Ordinal: 126
        void take_missionID(class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x21 | Ordinal: 34
        void _lWarehouseOwner(void);
};

// DCS_OPS_RE_TERRAIN.DLL_LWAREHOUSEOWNER_HPP
