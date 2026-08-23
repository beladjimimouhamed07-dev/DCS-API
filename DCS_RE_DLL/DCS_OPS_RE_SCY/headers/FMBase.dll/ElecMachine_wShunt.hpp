#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: ElecMachine_wShunt
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace Elec {

class ElecMachine_wShunt
{
public:

    // RVA: 0x6C | Ordinal: 109
        void ElecMachine_wShunt(class EagleFM::Elec::ElecMachine_wShunt const &);

    // RVA: 0x6D | Ordinal: 110
        void ElecMachine_wShunt(double, double, double, double, double, double, double);

    // RVA: 0x390 | Ordinal: 913
        void GetMoment(void) const;

    // RVA: 0x5C8 | Ordinal: 1481
        void getMaxU_Varied(void);

    // RVA: 0x632 | Ordinal: 1587
        void getRStartActual(void) const;

    // RVA: 0x6FE | Ordinal: 1791
        void get_kContr(void) const;

    // RVA: 0x82F | Ordinal: 2096
        void setCoolerParameters(bool, double);

    // RVA: 0x8A1 | Ordinal: 2210
        void setMaxVoltageCorrection(double);

    // RVA: 0x8D9 | Ordinal: 2266
        void setR_Arm(double);

    // RVA: 0x8DA | Ordinal: 2267
        void setR_Exc(double);

    // RVA: 0x8DB | Ordinal: 2268
        void setR_Start(bool, double);

    // RVA: 0x937 | Ordinal: 2360
        void set_cKem(double);

    // RVA: 0x93F | Ordinal: 2368
        void set_kReg(double);

    // RVA: 0x940 | Ordinal: 2369
        void set_maxU(double);

    // RVA: 0x944 | Ordinal: 2373
        void set_polarity(enum EagleFM::Elec::polarity_enum);

    // RVA: 0x947 | Ordinal: 2376
        void set_tau(double);

    // RVA: 0x954 | Ordinal: 2389
        void simulate(double, double, double, double);

    // RVA: 0x9A3 | Ordinal: 2468
        void updateTemperature(double, double, double, double);

    // RVA: 0x9A6 | Ordinal: 2471
        void updateTotalImpedance(void);

    // RVA: 0x19A | Ordinal: 411
        void _ElecMachine_wShunt(void);
};

} // namespace Elec
} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_ELECMACHINE_WSHUNT_HPP
