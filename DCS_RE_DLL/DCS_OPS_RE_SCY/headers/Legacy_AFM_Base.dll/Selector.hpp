#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: Selector
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class Selector
{
public:

    // RVA: 0x36E | Ordinal: 879
        void Construct(void);

    // RVA: 0x388 | Ordinal: 905
        void ConstructSelectorPosition_01(class AFM::Wire *);

    // RVA: 0x389 | Ordinal: 906
        void ConstructSelectorPosition_02(class AFM::Wire *);

    // RVA: 0x38A | Ordinal: 907
        void ConstructSelectorPosition_03(class AFM::Wire *);

    // RVA: 0x38B | Ordinal: 908
        void ConstructSelectorPosition_04(class AFM::Wire *);

    // RVA: 0x38C | Ordinal: 909
        void ConstructSelectorPosition_05(class AFM::Wire *);

    // RVA: 0x38D | Ordinal: 910
        void ConstructSelectorPosition_06(class AFM::Wire *);

    // RVA: 0x38E | Ordinal: 911
        void ConstructSelectorPosition_07(class AFM::Wire *);

    // RVA: 0x38F | Ordinal: 912
        void ConstructSelectorPosition_08(class AFM::Wire *);

    // RVA: 0x390 | Ordinal: 913
        void ConstructSelectorPosition_09(class AFM::Wire *);

    // RVA: 0x391 | Ordinal: 914
        void ConstructSelectorPosition_10(class AFM::Wire *);

    // RVA: 0x3D0 | Ordinal: 977
        void Create(void);

    // RVA: 0x494 | Ordinal: 1173
        void LockInputWire(class AFM::Wire *);

    // RVA: 0xB7 | Ordinal: 184
        void Selector(class AFM::Selector &&);

    // RVA: 0xB8 | Ordinal: 185
        void Selector(class AFM::Selector const &);

    // RVA: 0xB9 | Ordinal: 186
        void Selector(void);

    // RVA: 0x4EF | Ordinal: 1264
        void Simulation(void);

    // RVA: 0x614 | Ordinal: 1557
        void getIPointerInputWire(class AFM::Wire **);

    // RVA: 0x641 | Ordinal: 1602
        void getIPointerOutputWire_01(class AFM::Wire **);

    // RVA: 0x642 | Ordinal: 1603
        void getIPointerOutputWire_02(class AFM::Wire **);

    // RVA: 0x643 | Ordinal: 1604
        void getIPointerOutputWire_03(class AFM::Wire **);

    // RVA: 0x644 | Ordinal: 1605
        void getIPointerOutputWire_04(class AFM::Wire **);

    // RVA: 0x645 | Ordinal: 1606
        void getIPointerOutputWire_05(class AFM::Wire **);

    // RVA: 0x646 | Ordinal: 1607
        void getIPointerOutputWire_06(class AFM::Wire **);

    // RVA: 0x647 | Ordinal: 1608
        void getIPointerOutputWire_07(class AFM::Wire **);

    // RVA: 0x648 | Ordinal: 1609
        void getIPointerOutputWire_08(class AFM::Wire **);

    // RVA: 0x649 | Ordinal: 1610
        void getIPointerOutputWire_09(class AFM::Wire **);

    // RVA: 0x64A | Ordinal: 1611
        void getIPointerOutputWire_10(class AFM::Wire **);

    // RVA: 0x72C | Ordinal: 1837
        void getSelectorPosition(int *);

    // RVA: 0x8AE | Ordinal: 2223
        void setSelectorPosition(int);

    // RVA: 0x13F | Ordinal: 320
        void _Selector(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_SELECTOR_HPP
