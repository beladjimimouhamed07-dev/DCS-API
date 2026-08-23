#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: ElectricMotorDC
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace Elec {

class ElectricMotorDC
{
public:

    // RVA: 0x71 | Ordinal: 114
        void ElectricMotorDC(struct EagleFM::Elec::ElectricMotorDC::Parameters const &);

    // RVA: 0x72 | Ordinal: 115
        void ElectricMotorDC(class EagleFM::Elec::ElectricMotorDC const &);

    // RVA: 0x73 | Ordinal: 116
        void ElectricMotorDC(void);

    // RVA: 0x466 | Ordinal: 1127
        void connect(class EagleFM::Elec::ItemBase &, class EagleFM::Elec::ItemBase &);

    // RVA: 0x467 | Ordinal: 1128
        void connect(class EagleFM::Elec::ItemBase &);

    // RVA: 0x535 | Ordinal: 1334
        void getDirection(void) const;

    // RVA: 0x5CE | Ordinal: 1487
        void getMoment(void) const;

    // RVA: 0x5E3 | Ordinal: 1508
        void getOmega(void) const;

    // RVA: 0x6AE | Ordinal: 1711
        void getTempr(void) const;

    // RVA: 0x780 | Ordinal: 1921
        void isFailed(void) const;

    // RVA: 0x785 | Ordinal: 1926
        void isPowered(void) const;

    // RVA: 0x84C | Ordinal: 2125
        void setElecParams(double, enum EagleFM::Elec::LoadUnits, double, struct std::pair<double, double>);

    // RVA: 0x856 | Ordinal: 2135
        void setFailure(bool);

    // RVA: 0x86F | Ordinal: 2160
        void setHeatParams(double, double, double, double);

    // RVA: 0x8A2 | Ordinal: 2211
        void setMechParams(double, double, double);

    // RVA: 0x8BA | Ordinal: 2235
        void setParams(struct EagleFM::Elec::ElectricMotorDC::Parameters const &);

    // RVA: 0x957 | Ordinal: 2392
        void simulate(double, double, double, double);

    // RVA: 0x984 | Ordinal: 2437
        void stopRotation(bool);

    // RVA: 0x19D | Ordinal: 414
        void _ElectricMotorDC(void);
};

} // namespace Elec
} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_ELECTRICMOTORDC_HPP
