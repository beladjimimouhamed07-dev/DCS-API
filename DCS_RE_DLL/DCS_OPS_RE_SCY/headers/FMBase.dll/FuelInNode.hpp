#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: FuelInNode
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class FuelInNode
{
public:

    // RVA: 0x82 | Ordinal: 131
        void FuelInNode(class EagleFM::FuelInNode const &);

    // RVA: 0x83 | Ordinal: 132
        void FuelInNode(double);

    // RVA: 0x4A4 | Ordinal: 1189
        void drainDry(void);

    // RVA: 0x4AA | Ordinal: 1195
        void fillUp(void);

    // RVA: 0x5AD | Ordinal: 1454
        void getLeftInputLine(void);

    // RVA: 0x5AE | Ordinal: 1455
        void getLeftInputLine(void) const;

    // RVA: 0x5EB | Ordinal: 1516
        void getOutputLine(void);

    // RVA: 0x5EC | Ordinal: 1517
        void getOutputLine(void) const;

    // RVA: 0x654 | Ordinal: 1621
        void getRelativeVolumeRatio(void) const;

    // RVA: 0x658 | Ordinal: 1625
        void getRightInputLine(void);

    // RVA: 0x659 | Ordinal: 1626
        void getRightInputLine(void) const;

    // RVA: 0x88D | Ordinal: 2190
        void setK_LeftToRight(double);

    // RVA: 0x896 | Ordinal: 2199
        void setLeftInputLine(class EagleFM::FuelPipeline *);

    // RVA: 0x8EE | Ordinal: 2287
        void setRightInputLine(class EagleFM::FuelPipeline *);

    // RVA: 0x959 | Ordinal: 2394
        void simulate(double);

    // RVA: 0x1A4 | Ordinal: 421
        void _FuelInNode(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_FUELINNODE_HPP
