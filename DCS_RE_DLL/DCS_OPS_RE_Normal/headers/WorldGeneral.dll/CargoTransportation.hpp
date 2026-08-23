#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: CargoTransportation
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class CargoTransportation
{
public:

    // RVA: 0x55 | Ordinal: 86
        void CargoTransportation(class AI::CargoTransportation &&);

    // RVA: 0x56 | Ordinal: 87
        void CargoTransportation(class AI::CargoTransportation const &);

    // RVA: 0x57 | Ordinal: 88
        void CargoTransportation(void);

    // RVA: 0x68F | Ordinal: 1680
        void clone(void) const;

    // RVA: 0x6FC | Ordinal: 1789
        void create(void);

    // RVA: 0x7E2 | Ordinal: 2019
        void getCategory(void) const;

    // RVA: 0x87B | Ordinal: 2172
        void getName(void) const;

    // RVA: 0x9FB | Ordinal: 2556
        void load(class Lua::Config &);

    // RVA: 0xAC4 | Ordinal: 2757
        void params(void) const;

    // RVA: 0x245 | Ordinal: 582
        void _CargoTransportation(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_CARGOTRANSPORTATION_HPP
