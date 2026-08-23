#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: JetCombustor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class JetCombustor
{
public:

    // RVA: 0xC4 | Ordinal: 197
        void JetCombustor(class EagleFM::JetCombustor &&);

    // RVA: 0xC5 | Ordinal: 198
        void JetCombustor(struct EagleFM::JetCombustorInit const &);

    // RVA: 0xC6 | Ordinal: 199
        void JetCombustor(class EagleFM::JetCombustor const &);

    // RVA: 0xC7 | Ordinal: 200
        void JetCombustor(void);

    // RVA: 0x3DC | Ordinal: 989
        void calcAddTemperature(double, double) const;

    // RVA: 0x3EB | Ordinal: 1004
        void calcAlphaByPressure(double, double, double, double);

    // RVA: 0x3F1 | Ordinal: 1010
        void calcBodyHeatExchange(double, double) const;

    // RVA: 0x3F2 | Ordinal: 1011
        void calcBodyHeatExchangeCoeff(double, double) const;

    // RVA: 0x40C | Ordinal: 1037
        void calcFuelHeat(void) const;

    // RVA: 0x40F | Ordinal: 1040
        void calcFullTemperature(double, double &) const;

    // RVA: 0x421 | Ordinal: 1058
        void calcMultPressure(double) const;

    // RVA: 0x45C | Ordinal: 1117
        void clean(void);

    // RVA: 0x4BC | Ordinal: 1213
        void getAirFlow(void) const;

    // RVA: 0x506 | Ordinal: 1287
        void getCombustion(void) const;

    // RVA: 0x622 | Ordinal: 1571
        void getPressureDrop(void) const;

    // RVA: 0x6AB | Ordinal: 1708
        void getTemperatureBody(void) const;

    // RVA: 0x724 | Ordinal: 1829
        void init(struct EagleFM::JetCombustorInit const &);

    // RVA: 0x802 | Ordinal: 2051
        void setAirFlow(struct EagleFM::AirFlow const &);

    // RVA: 0x909 | Ordinal: 2314
        void setTemperatureBody(double);

    // RVA: 0x968 | Ordinal: 2409
        void simulate(double);

    // RVA: 0x97E | Ordinal: 2431
        void snuffOut(void);

    // RVA: 0x1B5 | Ordinal: 438
        void _JetCombustor(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_JETCOMBUSTOR_HPP
