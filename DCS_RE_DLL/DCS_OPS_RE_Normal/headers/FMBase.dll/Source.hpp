#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: Source
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace Elec {

class Source
{
public:

    // RVA: 0x130 | Ordinal: 305
        void Source(class EagleFM::Elec::Source const &);

    // RVA: 0x131 | Ordinal: 306
        void Source(void);

    // RVA: 0x44C | Ordinal: 1101
        void canReceiveFrom(class EagleFM::Elec::ItemBase const *) const;

    // RVA: 0x477 | Ordinal: 1144
        void connectBeforeMe(class EagleFM::Elec::ItemBase *);

    // RVA: 0x4B8 | Ordinal: 1209
        void getAdditionalImpedance(void);

    // RVA: 0x51B | Ordinal: 1308
        void getCurrent(void) const;

    // RVA: 0x540 | Ordinal: 1345
        void getEMF(void) const;

    // RVA: 0x59D | Ordinal: 1438
        void getInternalConductance(void) const;

    // RVA: 0x59F | Ordinal: 1440
        void getInternalImpedance(void) const;

    // RVA: 0x5A2 | Ordinal: 1443
        void getIsOnline(void) const;

    // RVA: 0x5CD | Ordinal: 1486
        void getModelingTime(void) const;

    // RVA: 0x68A | Ordinal: 1675
        void getShortCircuitCurrent(void) const;

    // RVA: 0x707 | Ordinal: 1800
        void get_tC(void) const;

    // RVA: 0x800 | Ordinal: 2049
        void setAdditionalImpedance(bool, double);

    // RVA: 0x80E | Ordinal: 2063
        void setBasicImpedance(double);

    // RVA: 0x81A | Ordinal: 2075
        void setCallTime(double);

    // RVA: 0x872 | Ordinal: 2163
        void setHeatingParameters(double, double, double);

    // RVA: 0x885 | Ordinal: 2182
        void setInternalImpedance(double);

    // RVA: 0x887 | Ordinal: 2184
        void setIsOnline(bool);

    // RVA: 0x888 | Ordinal: 2185
        void setIsSourceLine(void);

    // RVA: 0x8A5 | Ordinal: 2214
        void setModelingTime(double);

    // RVA: 0x8AC | Ordinal: 2221
        void setNominalVoltage(double);

    // RVA: 0x946 | Ordinal: 2375
        void set_tC(double);

    // RVA: 0x9A0 | Ordinal: 2465
        void updateOwnVoltage(double);

    // RVA: 0x9A1 | Ordinal: 2466
        void updateOwnVoltageWhenOffline(void);

    // RVA: 0x9A4 | Ordinal: 2469
        void updateTemperature(double, double, double);

    // RVA: 0x9A5 | Ordinal: 2470
        void updateTime(void);

    // RVA: 0x9A7 | Ordinal: 2472
        void updateTotalImpedance(void);

    // RVA: 0x1D9 | Ordinal: 474
        void _Source(void);
};

} // namespace Elec
} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_SOURCE_HPP
