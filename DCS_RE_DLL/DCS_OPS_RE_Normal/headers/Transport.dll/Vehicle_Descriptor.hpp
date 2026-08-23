#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Transport.dll
// Class: Vehicle_Descriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class Vehicle_Descriptor
{
public:

    // RVA: 0x14 | Ordinal: 21
        void Vehicle_Descriptor(struct Vehicle_Descriptor const &);

    // RVA: 0x15 | Ordinal: 22
        void Vehicle_Descriptor(void);

    // RVA: 0x259 | Ordinal: 602
        void getEquipmentArg(char const *) const;

    // RVA: 0x25B | Ordinal: 604
        void getEquipmentArgValue(char const *, float) const;

    // RVA: 0x429 | Ordinal: 1066
        void read(class Lua::Config &);

    // RVA: 0x42B | Ordinal: 1068
        void readSuspension(class Lua::Config &);

    // RVA: 0x42C | Ordinal: 1069
        void readTransmission(class Lua::Config &);

    // RVA: 0x506 | Ordinal: 1287
        void skeletonHuman(void) const;

    // RVA: 0x31 | Ordinal: 50
        void _Vehicle_Descriptor(void);
};

// DCS_OPS_RE_TRANSPORT.DLL_VEHICLE_DESCRIPTOR_HPP
