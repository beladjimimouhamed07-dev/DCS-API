#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: speedtree7.dll
// Class: CTimer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace SpeedTree {

class CTimer
{
public:

    // RVA: 0x40 | Ordinal: 65
        void CTimer(bool);

    // RVA: 0x1D0 | Ordinal: 465
        void GetMicroSec(void) const;

    // RVA: 0x1D1 | Ordinal: 466
        void GetMilliSec(void) const;

    // RVA: 0x1DA | Ordinal: 475
        void GetSec(void) const;

    // RVA: 0x210 | Ordinal: 529
        void Mark(int);

    // RVA: 0x240 | Ordinal: 577
        void Recall(int);

    // RVA: 0x294 | Ordinal: 661
        void Start(void);

    // RVA: 0x296 | Ordinal: 663
        void Stop(void) const;
};

} // namespace SpeedTree

// DCS_OPS_RE_SPEEDTREE7.DLL_CTIMER_HPP
