#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: IElement
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace Cooling {

class IElement
{
public:

    // RVA: 0xB6 | Ordinal: 183
        void IElement(class EagleFM::Cooling::IElement &&);

    // RVA: 0xB7 | Ordinal: 184
        void IElement(class EagleFM::Cooling::IElement const &);

    // RVA: 0xB8 | Ordinal: 185
        void IElement(void);

    // RVA: 0x46A | Ordinal: 1131
        void connectAfter(class EagleFM::Cooling::IElement *);

    // RVA: 0x470 | Ordinal: 1137
        void connectBefore(class EagleFM::Cooling::IElement *);

    // RVA: 0x561 | Ordinal: 1378
        void getFluidFlow(void) const;

    // RVA: 0x6BD | Ordinal: 1726
        void getTout(void) const;

    // RVA: 0x74D | Ordinal: 1870
        void initLiquidType(enum EagleFM::Cooling::LiquidType);

    // RVA: 0x7CA | Ordinal: 1995
        void repair(void);

    // RVA: 0x7D4 | Ordinal: 2005
        void repairAll(void);

    // RVA: 0x860 | Ordinal: 2145
        void setFluidFlow(float);

    // RVA: 0x899 | Ordinal: 2202
        void setLiquidType(enum EagleFM::Cooling::LiquidType);

    // RVA: 0x966 | Ordinal: 2407
        void simulate(double);

    // RVA: 0x97B | Ordinal: 2428
        void simulateNext(double);
};

} // namespace Cooling
} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_IELEMENT_HPP
