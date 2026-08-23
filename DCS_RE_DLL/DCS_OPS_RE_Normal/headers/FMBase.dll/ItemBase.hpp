#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: ItemBase
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace Elec {

class ItemBase
{
public:

    // RVA: 0x38F | Ordinal: 912
        void GetInputItem(int);

    // RVA: 0x391 | Ordinal: 914
        void GetOutputItem(int);

    // RVA: 0xC3 | Ordinal: 196
        void ItemBase(void);

    // RVA: 0x3B5 | Ordinal: 950
        void UpdateVoltage(double);

    // RVA: 0x449 | Ordinal: 1098
        void callOnOffHandlers(int);

    // RVA: 0x44A | Ordinal: 1099
        void canReceiveFrom(class EagleFM::Elec::ItemBase const *) const;

    // RVA: 0x44E | Ordinal: 1103
        void canTransmitTo(class EagleFM::Elec::ItemBase const *) const;

    // RVA: 0x455 | Ordinal: 1110
        void checkConformity(enum EagleFM::Elec::ConformityCriteria);

    // RVA: 0x456 | Ordinal: 1111
        void checkConformityRecursively(enum EagleFM::Elec::ConformityCriteria);

    // RVA: 0x45B | Ordinal: 1116
        void checkVoltageChange(void);

    // RVA: 0x460 | Ordinal: 1121
        void clear(void);

    // RVA: 0x462 | Ordinal: 1123
        void clearRefs(void);

    // RVA: 0x463 | Ordinal: 1124
        void clearTemporaryData(void);

    // RVA: 0x464 | Ordinal: 1125
        void clearTemporaryDataRecursively(void);

    // RVA: 0x468 | Ordinal: 1129
        void connect(class EagleFM::Elec::ItemBase &);

    // RVA: 0x46D | Ordinal: 1134
        void connectAfterMe(class EagleFM::Elec::ItemBase *);

    // RVA: 0x474 | Ordinal: 1141
        void connectBeforeMe(class EagleFM::Elec::ItemBase *);

    // RVA: 0x483 | Ordinal: 1156
        void disconnect(class EagleFM::Elec::ItemBase &);

    // RVA: 0x4A0 | Ordinal: 1185
        void doTrace3(char *);

    // RVA: 0x51A | Ordinal: 1307
        void getCurrent(void) const;

    // RVA: 0x528 | Ordinal: 1321
        void getDbgID(void) const;

    // RVA: 0x529 | Ordinal: 1322
        void getDebugMode(void) const;

    // RVA: 0x5DD | Ordinal: 1502
        void getNominalVoltage(void) const;

    // RVA: 0x639 | Ordinal: 1594
        void getReducedVoltage(void) const;

    // RVA: 0x6D6 | Ordinal: 1751
        void getVoltage(void) const;

    // RVA: 0x6D7 | Ordinal: 1752
        void getVoltageFromInput(class EagleFM::Elec::ItemBase *);

    // RVA: 0x6D8 | Ordinal: 1753
        void getVoltageFromInputs(double);

    // RVA: 0x774 | Ordinal: 1909
        void injectToDebugUI(char const *);

    // RVA: 0x786 | Ordinal: 1927
        void isPowered(void) const;

    // RVA: 0x7AB | Ordinal: 1964
        void propagateLoadAccumulatorShPtr(class std::shared_ptr<class EagleFM::Elec::PtrKeeper<class EagleFM::Elec::ItemBase>> const &, class EagleFM::Elec::ItemBase *);

    // RVA: 0x7B1 | Ordinal: 1970
        void pushLoadAccumulatorShPtr(class std::shared_ptr<class EagleFM::Elec::PtrKeeper<class EagleFM::Elec::ItemBase>> const &);

    // RVA: 0x7BB | Ordinal: 1980
        void regSelfAsLoadAccumulator(void);

    // RVA: 0x7DF | Ordinal: 2016
        void reset(void);

    // RVA: 0x7E3 | Ordinal: 2020
        void resetDebugUI(void);

    // RVA: 0x7F5 | Ordinal: 2038
        void savePreviousVoltage(void);

    // RVA: 0x824 | Ordinal: 2085
        void setConductance(double);

    // RVA: 0x839 | Ordinal: 2106
        void setDbgID(int);

    // RVA: 0x83A | Ordinal: 2107
        void setDebugMode(bool);

    // RVA: 0x857 | Ordinal: 2136
        void setFailure(bool);

    // RVA: 0x89D | Ordinal: 2206
        void setLoadR(double);

    // RVA: 0x8AB | Ordinal: 2220
        void setNominalVoltage(double);

    // RVA: 0x922 | Ordinal: 2339
        void setVoltsThresholds(double, double);

    // RVA: 0x992 | Ordinal: 2451
        void updateChildrenVoltage(void);

    // RVA: 0x993 | Ordinal: 2452
        void updateConductance(double);

    // RVA: 0x997 | Ordinal: 2456
        void updateLoadAccumulatorsConductance(class ed::vector<class std::shared_ptr<class EagleFM::Elec::PtrKeeper<class EagleFM::Elec::ItemBase>>, class ed::allocator<class std::shared_ptr<class EagleFM::Elec::PtrKeeper<class EagleFM::Elec::ItemBase>>>> &, double);

    // RVA: 0x99A | Ordinal: 2459
        void updateLoadR(double);

    // RVA: 0x99E | Ordinal: 2463
        void updateOwnVoltage(double);

    // RVA: 0x1B4 | Ordinal: 437
        void _ItemBase(void);
};

} // namespace Elec
} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_ITEMBASE_HPP
