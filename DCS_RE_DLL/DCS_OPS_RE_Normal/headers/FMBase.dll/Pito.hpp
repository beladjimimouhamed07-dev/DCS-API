#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: Pito
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class Pito
{
public:

    // RVA: 0x102 | Ordinal: 259
        void Pito(class EagleFM::Pito &&);

    // RVA: 0x103 | Ordinal: 260
        void Pito(class EagleFM::Pito const &);

    // RVA: 0x104 | Ordinal: 261
        void Pito(class EagleFM::DynamicBody *const, double, double, double, bool, double);

    // RVA: 0x4CF | Ordinal: 1232
        void getAtmoPressure(void) const;

    // RVA: 0x4D2 | Ordinal: 1235
        void getAtmoTemperature(void) const;

    // RVA: 0x4EE | Ordinal: 1263
        void getBodyTemperature(void) const;

    // RVA: 0x576 | Ordinal: 1399
        void getFullPressure(void) const;

    // RVA: 0x58C | Ordinal: 1421
        void getIF(void) const;

    // RVA: 0x592 | Ordinal: 1427
        void getIceLayerThickness(void) const;

    // RVA: 0x596 | Ordinal: 1431
        void getIndicatedAirSpeed(void) const;

    // RVA: 0x5BA | Ordinal: 1467
        void getMach(void) const;

    // RVA: 0x629 | Ordinal: 1578
        void getPureAtmoPressure(void) const;

    // RVA: 0x62B | Ordinal: 1580
        void getPureAtmoTemperature(void) const;

    // RVA: 0x6A2 | Ordinal: 1699
        void getTAS(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &) const;

    // RVA: 0x6A8 | Ordinal: 1705
        void getTauDynByIce(void) const;

    // RVA: 0x6A9 | Ordinal: 1706
        void getTauStatByIce(void) const;

    // RVA: 0x6BF | Ordinal: 1728
        void getTrueAirSpeed(void) const;

    // RVA: 0x6D1 | Ordinal: 1746
        void getVerticalSpeed(void) const;

    // RVA: 0x870 | Ordinal: 2161
        void setHeatPower(double);

    // RVA: 0x877 | Ordinal: 2168
        void setIF(double);

    // RVA: 0x969 | Ordinal: 2410
        void simulate(double);

    // RVA: 0x1C8 | Ordinal: 457
        void _Pito(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_PITO_HPP
