#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: HydraulicAccumulator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class HydraulicAccumulator
{
public:

    // RVA: 0xA7 | Ordinal: 168
        void HydraulicAccumulator(class EagleFM::HydraulicAccumulator &&);

    // RVA: 0xA8 | Ordinal: 169
        void HydraulicAccumulator(class EagleFM::HydraulicAccumulator const &);

    // RVA: 0xA9 | Ordinal: 170
        void HydraulicAccumulator(double, double, double, bool);

    // RVA: 0x61E | Ordinal: 1567
        void getPressure(void) const;

    // RVA: 0x623 | Ordinal: 1572
        void getPressureInit(void) const;

    // RVA: 0x624 | Ordinal: 1573
        void getPressureMax(void) const;

    // RVA: 0x6DC | Ordinal: 1757
        void getVolume(void) const;

    // RVA: 0x6DF | Ordinal: 1760
        void getVolumeAtPressure(double) const;

    // RVA: 0x6E0 | Ordinal: 1761
        void getVolumeFull(void) const;

    // RVA: 0x6E3 | Ordinal: 1764
        void getVolumeMax(void) const;

    // RVA: 0x71A | Ordinal: 1819
        void init(double, double, double, bool);

    // RVA: 0x78D | Ordinal: 1934
        void join(class EagleFM::HydraulicAccumulator *, double);

    // RVA: 0x81D | Ordinal: 2078
        void setChild(bool);

    // RVA: 0x81E | Ordinal: 2079
        void setChildDeltaPressTerminal(int, double);

    // RVA: 0x924 | Ordinal: 2341
        void setVolume(double);

    // RVA: 0x95F | Ordinal: 2400
        void simulate(double);

    // RVA: 0x98D | Ordinal: 2446
        void takeVolumeBack(void);

    // RVA: 0x1AF | Ordinal: 432
        void _HydraulicAccumulator(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_HYDRAULICACCUMULATOR_HPP
