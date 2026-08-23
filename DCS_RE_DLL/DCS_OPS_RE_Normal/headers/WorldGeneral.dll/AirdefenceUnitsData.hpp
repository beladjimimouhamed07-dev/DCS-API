#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: AirdefenceUnitsData
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {
namespace Threat {

class AirdefenceUnitsData
{
public:

    // RVA: 0x2E | Ordinal: 47
        void AirdefenceUnitsData(class AI::Threat::AirdefenceUnitsData &&);

    // RVA: 0x2F | Ordinal: 48
        void AirdefenceUnitsData(class AI::Threat::AirdefenceUnitsData const &);

    // RVA: 0x30 | Ordinal: 49
        void AirdefenceUnitsData(void);

    // RVA: 0x648 | Ordinal: 1609
        void checkAndAdd(class MovingObject *, unsigned int);

    // RVA: 0x649 | Ordinal: 1610
        void checkAndAdd(class wControl *, unsigned int);

    // RVA: 0x678 | Ordinal: 1657
        void clearDeads(void);

    // RVA: 0x780 | Ordinal: 1921
        void empty(void) const;

    // RVA: 0xAAC | Ordinal: 2733
        void onUnitDeath(unsigned int);

    // RVA: 0x238 | Ordinal: 569
        void _AirdefenceUnitsData(void);
};

} // namespace Threat
} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_AIRDEFENCEUNITSDATA_HPP
