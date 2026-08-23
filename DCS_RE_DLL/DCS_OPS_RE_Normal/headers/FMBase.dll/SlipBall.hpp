#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: SlipBall
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class SlipBall
{
public:

    // RVA: 0x12E | Ordinal: 303
        void SlipBall(class EagleFM::SlipBall const &);

    // RVA: 0x12F | Ordinal: 304
        void SlipBall(class EagleFM::DynamicBody *);

    // RVA: 0x4D7 | Ordinal: 1240
        void getBallPos(void) const;

    // RVA: 0x6F6 | Ordinal: 1783
        void get_Acceleration_local(void);

    // RVA: 0x6F7 | Ordinal: 1784
        void get_G_local(void);

    // RVA: 0x6F9 | Ordinal: 1786
        void get_Speed_local(void);

    // RVA: 0x971 | Ordinal: 2418
        void simulate(double);

    // RVA: 0x1D8 | Ordinal: 473
        void _SlipBall(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_SLIPBALL_HPP
