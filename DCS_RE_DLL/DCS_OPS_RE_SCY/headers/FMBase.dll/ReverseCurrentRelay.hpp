#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: ReverseCurrentRelay
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace Elec {

class ReverseCurrentRelay
{
public:

    // RVA: 0x120 | Ordinal: 289
        void ReverseCurrentRelay(class EagleFM::Elec::ReverseCurrentRelay const &);

    // RVA: 0x121 | Ordinal: 290
        void ReverseCurrentRelay(double, double);

    // RVA: 0x775 | Ordinal: 1910
        void injectToDebugUI(char const *);

    // RVA: 0x798 | Ordinal: 1945
        void modifyDebugUI(struct EagleFM::Elec::DbgUI::SliderMinMax<float>, struct EagleFM::Elec::DbgUI::SliderMinMax<float>);

    // RVA: 0x7E4 | Ordinal: 2021
        void resetDebugUI(void);

    // RVA: 0x832 | Ordinal: 2099
        void setCurrentOff(double);

    // RVA: 0x84A | Ordinal: 2123
        void setEMF_thresholdOn(double);

    // RVA: 0x86D | Ordinal: 2158
        void setGenerator(class EagleFM::Elec::Source *);

    // RVA: 0x96E | Ordinal: 2415
        void simulate(void);

    // RVA: 0x1D1 | Ordinal: 466
        void _ReverseCurrentRelay(void);
};

} // namespace Elec
} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_REVERSECURRENTRELAY_HPP
