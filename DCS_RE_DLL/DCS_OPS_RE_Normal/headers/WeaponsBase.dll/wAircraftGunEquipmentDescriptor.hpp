#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponsBase.dll
// Class: wAircraftGunEquipmentDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAircraftGunEquipmentDescriptor
{
public:

    // RVA: 0x108 | Ordinal: 265
        void createGuns(class IwoLA *, class Lua::Loader *, class ed::vector<class wAircraftGunMount *, class ed::allocator<class wAircraftGunMount *>> &) const;

    // RVA: 0x20C | Ordinal: 525
        void load(class Lua::Config &);
};

// DCS_OPS_RE_WEAPONSBASE.DLL_WAIRCRAFTGUNEQUIPMENTDESCRIPTOR_HPP
