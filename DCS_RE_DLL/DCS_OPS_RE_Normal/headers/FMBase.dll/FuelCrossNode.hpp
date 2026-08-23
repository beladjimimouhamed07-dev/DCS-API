#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: FuelCrossNode
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class FuelCrossNode
{
public:

    // RVA: 0x80 | Ordinal: 129
        void FuelCrossNode(class EagleFM::FuelCrossNode const &);

    // RVA: 0x81 | Ordinal: 130
        void FuelCrossNode(double, double, double);

    // RVA: 0x4A3 | Ordinal: 1188
        void drainDry(void);

    // RVA: 0x4A9 | Ordinal: 1194
        void fillUp(void);

    // RVA: 0x5AF | Ordinal: 1456
        void getLeftOutputLine(void);

    // RVA: 0x5B0 | Ordinal: 1457
        void getLeftOutputLine(void) const;

    // RVA: 0x65A | Ordinal: 1627
        void getRightOutputLine(void);

    // RVA: 0x65B | Ordinal: 1628
        void getRightOutputLine(void) const;

    // RVA: 0x718 | Ordinal: 1817
        void init(double, double, double);

    // RVA: 0x88C | Ordinal: 2189
        void setK_LeftToRight(double);

    // RVA: 0x895 | Ordinal: 2198
        void setLeftInputLine(class EagleFM::FuelPipeline *);

    // RVA: 0x8ED | Ordinal: 2286
        void setRightInputLine(class EagleFM::FuelPipeline *);

    // RVA: 0x958 | Ordinal: 2393
        void simulate(double);

    // RVA: 0x1A3 | Ordinal: 420
        void _FuelCrossNode(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_FUELCROSSNODE_HPP
