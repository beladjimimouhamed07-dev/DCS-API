#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: FuelPipeline
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class FuelPipeline
{
public:

    // RVA: 0x86 | Ordinal: 135
        void FuelPipeline(double);

    // RVA: 0x3CA | Ordinal: 971
        void addVolume(double);

    // RVA: 0x4A6 | Ordinal: 1191
        void drainDry(void);

    // RVA: 0x4AC | Ordinal: 1197
        void fillUp(void);

    // RVA: 0x601 | Ordinal: 1538
        void getPin(void);

    // RVA: 0x619 | Ordinal: 1562
        void getPout(void);

    // RVA: 0x6DA | Ordinal: 1755
        void getVolume(void) const;

    // RVA: 0x6E2 | Ordinal: 1763
        void getVolumeMax(void) const;

    // RVA: 0x6E6 | Ordinal: 1767
        void getVolumeReq(void) const;

    // RVA: 0x8C1 | Ordinal: 2242
        void setPin(bool);

    // RVA: 0x8D3 | Ordinal: 2260
        void setPout(bool);

    // RVA: 0x8EC | Ordinal: 2285
        void setRelativeVolumeRatio(double);

    // RVA: 0x923 | Ordinal: 2340
        void setVolume(double);

    // RVA: 0x926 | Ordinal: 2343
        void setVolumeMax(double);

    // RVA: 0x98C | Ordinal: 2445
        void takeVolume(double);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_FUELPIPELINE_HPP
