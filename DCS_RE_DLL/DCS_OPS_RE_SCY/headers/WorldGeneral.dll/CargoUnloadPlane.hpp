#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: CargoUnloadPlane
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class CargoUnloadPlane
{
public:

    // RVA: 0x5B | Ordinal: 92
        void CargoUnloadPlane(class AI::CargoUnloadPlane &&);

    // RVA: 0x5C | Ordinal: 93
        void CargoUnloadPlane(class AI::CargoUnloadPlane const &);

    // RVA: 0x5D | Ordinal: 94
        void CargoUnloadPlane(void);

    // RVA: 0x691 | Ordinal: 1682
        void clone(void) const;

    // RVA: 0x6FE | Ordinal: 1791
        void create(void);

    // RVA: 0x7E4 | Ordinal: 2021
        void getCategory(void) const;

    // RVA: 0x87D | Ordinal: 2174
        void getName(void) const;

    // RVA: 0x9FD | Ordinal: 2558
        void load(class Lua::Config &);

    // RVA: 0xAC6 | Ordinal: 2759
        void params(void) const;

    // RVA: 0x247 | Ordinal: 584
        void _CargoUnloadPlane(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_CARGOUNLOADPLANE_HPP
