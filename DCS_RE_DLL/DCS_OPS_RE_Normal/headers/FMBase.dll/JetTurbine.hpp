#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: JetTurbine
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class JetTurbine
{
public:

    // RVA: 0xD8 | Ordinal: 217
        void JetTurbine(class EagleFM::JetTurbine &&);

    // RVA: 0xD9 | Ordinal: 218
        void JetTurbine(struct EagleFM::JetTurbineInit const &);

    // RVA: 0xDA | Ordinal: 219
        void JetTurbine(class EagleFM::JetTurbine const &);

    // RVA: 0xDB | Ordinal: 220
        void JetTurbine(void);

    // RVA: 0x3C8 | Ordinal: 969
        void addNuData(double, double);

    // RVA: 0x3EA | Ordinal: 1003
        void calcAirMassFlow(double, double, double);

    // RVA: 0x422 | Ordinal: 1059
        void calcMultTemperature(double, double) const;

    // RVA: 0x423 | Ordinal: 1060
        void calcNu(double, double, double, double);

    // RVA: 0x42A | Ordinal: 1067
        void calcPower(double, double, double, double &, double &);

    // RVA: 0x42B | Ordinal: 1068
        void calcPowerByNu(double, double, double, double &, double &);

    // RVA: 0x4B5 | Ordinal: 1206
        void getAMF_CorrMax(void) const;

    // RVA: 0x58B | Ordinal: 1420
        void getIF(void) const;

    // RVA: 0x61D | Ordinal: 1566
        void getPressure0(void) const;

    // RVA: 0x6AA | Ordinal: 1707
        void getTemperature0(void) const;

    // RVA: 0x727 | Ordinal: 1832
        void init(struct EagleFM::JetTurbineInit const &);

    // RVA: 0x876 | Ordinal: 2167
        void setIF(double);

    // RVA: 0x1BC | Ordinal: 445
        void _JetTurbine(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_JETTURBINE_HPP
