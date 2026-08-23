#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: CargoTransportationPlane
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class CargoTransportationPlane
{
public:

    // RVA: 0x58 | Ordinal: 89
        void CargoTransportationPlane(class AI::CargoTransportationPlane &&);

    // RVA: 0x59 | Ordinal: 90
        void CargoTransportationPlane(class AI::CargoTransportationPlane const &);

    // RVA: 0x5A | Ordinal: 91
        void CargoTransportationPlane(void);

    // RVA: 0x690 | Ordinal: 1681
        void clone(void) const;

    // RVA: 0x6FD | Ordinal: 1790
        void create(void);

    // RVA: 0x7E3 | Ordinal: 2020
        void getCategory(void) const;

    // RVA: 0x87C | Ordinal: 2173
        void getName(void) const;

    // RVA: 0x9FC | Ordinal: 2557
        void load(class Lua::Config &);

    // RVA: 0xAC5 | Ordinal: 2758
        void params(void) const;

    // RVA: 0x246 | Ordinal: 583
        void _CargoTransportationPlane(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_CARGOTRANSPORTATIONPLANE_HPP
