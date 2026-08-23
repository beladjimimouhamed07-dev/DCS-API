#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: animator.dll
// Class: Timer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Animator {

class Timer
{
public:

    // RVA: 0x60 | Ordinal: 97
        void Get(void);

    // RVA: 0x68 | Ordinal: 105
        void GetScale(void);

    // RVA: 0x6F | Ordinal: 112
        void Set(double);

    // RVA: 0x70 | Ordinal: 113
        void SetScale(double);

    // RVA: 0x71 | Ordinal: 114
        void Start(void);

    // RVA: 0x72 | Ordinal: 115
        void Stop(void);

    // RVA: 0x25 | Ordinal: 38
        void Timer(void);

    // RVA: 0xF2 | Ordinal: 243
        void getTime(void);

    // RVA: 0x209 | Ordinal: 522
        void set_loop(double);

    // RVA: 0x224 | Ordinal: 549
        void stopped(void);
};

} // namespace Animator

// DCS_OPS_RE_ANIMATOR.DLL_TIMER_HPP
