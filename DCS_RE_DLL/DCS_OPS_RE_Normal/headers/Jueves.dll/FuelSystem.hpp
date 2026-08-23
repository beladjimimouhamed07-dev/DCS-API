#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: FuelSystem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace fuels {

class FuelSystem
{
public:

    // RVA: 0x29 | Ordinal: 42
        void FuelSystem(class EagleFM::dcswwii::fuels::FuelSystem const &);

    // RVA: 0x2A | Ordinal: 43
        void FuelSystem(class EagleFM::dcswwii::FlightModel *);

    // RVA: 0x2CB | Ordinal: 716
        void addBoostMixt(double);

    // RVA: 0x2CE | Ordinal: 719
        void addFuel(double);

    // RVA: 0x344 | Ordinal: 837
        void doSimulate(void);

    // RVA: 0x35E | Ordinal: 863
        void getBoostMixt(void);

    // RVA: 0x373 | Ordinal: 884
        void getExternalFuelMass(void);

    // RVA: 0x380 | Ordinal: 897
        void getIndicatedFuelMass(int);

    // RVA: 0x384 | Ordinal: 901
        void getInternalFuelMass(void);

    // RVA: 0x4F2 | Ordinal: 1267
        void removeExternalFuel(int);

    // RVA: 0x535 | Ordinal: 1334
        void setBoostMixt(double);

    // RVA: 0x548 | Ordinal: 1353
        void setExternalFuel(int, double);

    // RVA: 0x59E | Ordinal: 1439
        void setUnlimitedFuel(bool);

    // RVA: 0xF3 | Ordinal: 244
        void _FuelSystem(void);
};

} // namespace fuels
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_FUELSYSTEM_HPP
