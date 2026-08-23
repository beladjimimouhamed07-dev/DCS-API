#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: warehouse_manager
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class warehouse_manager
{
public:

    // RVA: 0x75D | Ordinal: 1886
        void create_warehouse(class MovingObject *);

    // RVA: 0x75E | Ordinal: 1887
        void create_warehouse(class lWarehouseOwner *);

    // RVA: 0x75F | Ordinal: 1888
        void create_warehouse(void);

    // RVA: 0x7B1 | Ordinal: 1970
        void finish(void);

    // RVA: 0x7B7 | Ordinal: 1976
        void for_each(class std::function<void __cdecl(class IwWarehouse *)>);

    // RVA: 0x7C5 | Ordinal: 1990
        void get(class ed::basic_string<char> const &);

    // RVA: 0xB4E | Ordinal: 2895
        void read_mission(void);

    // RVA: 0xC14 | Ordinal: 3093
        void start(void);

    // RVA: 0xC6B | Ordinal: 3180
        void warehouse_id_for_airport(int);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_WAREHOUSE_MANAGER_HPP
