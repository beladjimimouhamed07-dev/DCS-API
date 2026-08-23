#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Transport.dll
// Class: Ship_Descriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class Ship_Descriptor
{
public:

    // RVA: 0xE | Ordinal: 15
        void Ship_Descriptor(struct Ship_Descriptor const &);

    // RVA: 0xF | Ordinal: 16
        void Ship_Descriptor(void);

    // RVA: 0x258 | Ordinal: 601
        void getEquipmentArg(char const *) const;

    // RVA: 0x25A | Ordinal: 603
        void getEquipmentArgValue(char const *, float) const;

    // RVA: 0x3ED | Ordinal: 1006
        void new_woShipConst(void);

    // RVA: 0x427 | Ordinal: 1064
        void read(class Lua::Config &);

    // RVA: 0x2E | Ordinal: 47
        void _Ship_Descriptor(void);
};

// DCS_OPS_RE_TRANSPORT.DLL_SHIP_DESCRIPTOR_HPP
