#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: HeatExchanger
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace Cooling {

class HeatExchanger
{
public:

    // RVA: 0x9E | Ordinal: 159
        void HeatExchanger(class EagleFM::Cooling::HeatExchanger &&);

    // RVA: 0x9F | Ordinal: 160
        void HeatExchanger(class EagleFM::Cooling::HeatExchanger const &);

    // RVA: 0xA0 | Ordinal: 161
        void HeatExchanger(void);

    // RVA: 0x469 | Ordinal: 1130
        void connectAfter(class EagleFM::Cooling::IElement *);

    // RVA: 0x46F | Ordinal: 1136
        void connectBefore(class EagleFM::Cooling::IElement *);

    // RVA: 0x48F | Ordinal: 1168
        void doSimulate(double);
};

} // namespace Cooling
} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_HEATEXCHANGER_HPP
