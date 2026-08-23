#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: Converter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace Elec {

class Converter
{
public:

    // RVA: 0x61 | Ordinal: 98
        void Converter(class EagleFM::Elec::Converter const &);

    // RVA: 0x62 | Ordinal: 99
        void Converter(double, double);

    // RVA: 0x473 | Ordinal: 1140
        void connectBeforeMe(class EagleFM::Elec::ItemBase *);

    // RVA: 0x542 | Ordinal: 1347
        void getEfficiencyCoefficient(void) const;

    // RVA: 0x784 | Ordinal: 1925
        void isPowered(void) const;

    // RVA: 0x7AA | Ordinal: 1963
        void propagateLoadAccumulatorShPtr(class std::shared_ptr<class EagleFM::Elec::PtrKeeper<class EagleFM::Elec::ItemBase>> const &, class EagleFM::Elec::ItemBase *);

    // RVA: 0x7F4 | Ordinal: 2037
        void savePreviousVoltage(void);

    // RVA: 0x84B | Ordinal: 2124
        void setEfficiencyCoefficient(double);

    // RVA: 0x886 | Ordinal: 2183
        void setIsInputDependent(bool);

    // RVA: 0x8AA | Ordinal: 2219
        void setNominalVoltage(double);

    // RVA: 0x8B1 | Ordinal: 2226
        void setOnOff(bool);

    // RVA: 0x998 | Ordinal: 2457
        void updateLoadConductanceForInput(double, int);

    // RVA: 0x99D | Ordinal: 2462
        void updateOwnVoltage(double);

    // RVA: 0x197 | Ordinal: 408
        void _Converter(void);
};

} // namespace Elec
} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_CONVERTER_HPP
