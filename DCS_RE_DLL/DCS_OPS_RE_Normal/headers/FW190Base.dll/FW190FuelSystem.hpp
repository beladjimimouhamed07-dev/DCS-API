#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FW190Base.dll
// Class: FW190FuelSystem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace FW190 {

class FW190FuelSystem
{
public:

    // RVA: 0x9 | Ordinal: 10
        void FW190FuelSystem(class EagleFM::DynamicBody &, class EagleFM::Elec::Wire *, class EagleFM::Sensor **, class PropertyTable_<double> &, class EagleFM::AerodyneFM *, double);

    // RVA: 0xA | Ordinal: 11
        void FW190FuelSystem(class EagleFM::FW190::FW190FuelSystem const &);

    // RVA: 0x54 | Ordinal: 85
        void doSimulate(void);

    // RVA: 0x58 | Ordinal: 89
        void fuel_depletion(void);

    // RVA: 0x5C | Ordinal: 93
        void getAuxTankFuelType(void);

    // RVA: 0x5E | Ordinal: 95
        void getBoostMixt(void) const;

    // RVA: 0x67 | Ordinal: 104
        void getElectricPumpActive(void) const;

    // RVA: 0x6E | Ordinal: 111
        void getExternalFuel(void) const;

    // RVA: 0x76 | Ordinal: 119
        void getInternalFuel(void) const;

    // RVA: 0x7F | Ordinal: 128
        void getRefuelFlow(double *) const;

    // RVA: 0x9C | Ordinal: 157
        void initAirStart(void);

    // RVA: 0xA1 | Ordinal: 162
        void initColdStart(void);

    // RVA: 0xA7 | Ordinal: 168
        void initHotStart(void);

    // RVA: 0xAB | Ordinal: 172
        void initMotor(class EagleFM::PistonEngine *);

    // RVA: 0xAE | Ordinal: 175
        void initPreStart(void);

    // RVA: 0xBA | Ordinal: 187
        void repair(void);

    // RVA: 0xD0 | Ordinal: 209
        void setBoostMixt(double);

    // RVA: 0xDD | Ordinal: 222
        void setInsideFuel(double);

    // RVA: 0xDF | Ordinal: 224
        void setMW50TankContentsType(enum stored_liquid_type);

    // RVA: 0xE2 | Ordinal: 227
        void setPayloadFuel(double, class Math::Vector<3, double>);

    // RVA: 0xE4 | Ordinal: 229
        void setRefuelFlow(double);

    // RVA: 0xE6 | Ordinal: 231
        void setSensors(void);

    // RVA: 0xED | Ordinal: 238
        void setUnlimitedFuel(bool);

    // RVA: 0xF6 | Ordinal: 247
        void startFailure(enum WorldGeneral::Failures, class ed::basic_string<char> const &);

    // RVA: 0xFB | Ordinal: 252
        void updateFuelMasses(void);

    // RVA: 0x1B | Ordinal: 28
        void _FW190FuelSystem(void);
};

} // namespace FW190
} // namespace EagleFM

// DCS_OPS_RE_FW190BASE.DLL_FW190FUELSYSTEM_HPP
