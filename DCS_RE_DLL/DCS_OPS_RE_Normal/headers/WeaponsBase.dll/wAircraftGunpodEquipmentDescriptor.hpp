#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponsBase.dll
// Class: wAircraftGunpodEquipmentDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAircraftGunpodEquipmentDescriptor
{
public:

    // RVA: 0x106 | Ordinal: 263
        void createGunpod(class IwoLA *, class IwoAIPilon *, class Lua::Loader *, class ed::vector<class wAircraftGunMount *, class ed::allocator<class wAircraftGunMount *>> &);

    // RVA: 0x20E | Ordinal: 527
        void load(class wDatabaseLoader *);

    // RVA: 0x12 | Ordinal: 19
        void wAircraftGunpodEquipmentDescriptor(class ed::basic_string<char> const &);
};

// DCS_OPS_RE_WEAPONSBASE.DLL_WAIRCRAFTGUNPODEQUIPMENTDESCRIPTOR_HPP
