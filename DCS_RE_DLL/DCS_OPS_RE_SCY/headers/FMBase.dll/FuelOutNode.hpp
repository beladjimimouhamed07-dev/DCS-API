#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: FuelOutNode
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class FuelOutNode
{
public:

    // RVA: 0x84 | Ordinal: 133
        void FuelOutNode(class EagleFM::FuelOutNode const &);

    // RVA: 0x85 | Ordinal: 134
        void FuelOutNode(double, double);

    // RVA: 0x4A5 | Ordinal: 1190
        void drainDry(void);

    // RVA: 0x4AB | Ordinal: 1196
        void fillUp(void);

    // RVA: 0x5B1 | Ordinal: 1458
        void getLeftOutputLine(void);

    // RVA: 0x5B2 | Ordinal: 1459
        void getLeftOutputLine(void) const;

    // RVA: 0x655 | Ordinal: 1622
        void getRelativeVolumeRatio(void) const;

    // RVA: 0x65C | Ordinal: 1629
        void getRightOutputLine(void);

    // RVA: 0x65D | Ordinal: 1630
        void getRightOutputLine(void) const;

    // RVA: 0x883 | Ordinal: 2180
        void setInputLine(class EagleFM::FuelPipeline *);

    // RVA: 0x95A | Ordinal: 2395
        void simulate(double);

    // RVA: 0x1A5 | Ordinal: 422
        void _FuelOutNode(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_FUELOUTNODE_HPP
