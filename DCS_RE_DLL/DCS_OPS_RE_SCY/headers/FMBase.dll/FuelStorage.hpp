#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: FuelStorage
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class FuelStorage
{
public:

    // RVA: 0x8B | Ordinal: 140
        void FuelStorage(class EagleFM::FuelStorage const &);

    // RVA: 0x8C | Ordinal: 141
        void FuelStorage(class EagleFM::DynamicBody *, class Math::Vector<3, double>, double);

    // RVA: 0x5AC | Ordinal: 1453
        void getLeakage(void) const;

    // RVA: 0x5E2 | Ordinal: 1507
        void getNy(void) const;

    // RVA: 0x611 | Ordinal: 1554
        void getPos(void) const;

    // RVA: 0x656 | Ordinal: 1623
        void getRelativeVolumeRatio(void) const;

    // RVA: 0x6DB | Ordinal: 1756
        void getVolume(void) const;

    // RVA: 0x6E5 | Ordinal: 1766
        void getVolumePositive(void) const;

    // RVA: 0x7C7 | Ordinal: 1992
        void repair(void);

    // RVA: 0x83F | Ordinal: 2112
        void setDeliveryNegative(double);

    // RVA: 0x893 | Ordinal: 2196
        void setLeakage(double, double);

    // RVA: 0x894 | Ordinal: 2197
        void setLeakage(enum WorldGeneral::Failures);

    // RVA: 0x8AD | Ordinal: 2222
        void setNyInvTau(double);

    // RVA: 0x8CB | Ordinal: 2252
        void setPos(class Math::Vector<3, double>);

    // RVA: 0x927 | Ordinal: 2344
        void setVolumeNegativeMax(double);

    // RVA: 0x928 | Ordinal: 2345
        void setVolumeNyLimit(double);

    // RVA: 0x929 | Ordinal: 2346
        void setVolumePositive(double);

    // RVA: 0x95C | Ordinal: 2397
        void simulate(double);

    // RVA: 0x1A7 | Ordinal: 424
        void _FuelStorage(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_FUELSTORAGE_HPP
