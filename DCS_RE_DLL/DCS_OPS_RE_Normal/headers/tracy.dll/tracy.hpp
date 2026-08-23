#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: tracy.dll
// Class: tracy
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class tracy
{
public:

    // RVA: 0x0 | Ordinal: 1
        void CallTrace(int);

    // RVA: 0x1 | Ordinal: 2
        void GetFrequencyQpc(void);

    // RVA: 0x2 | Ordinal: 3
        void GetGpuCtx(void);

    // RVA: 0x3 | Ordinal: 4
        void GetGpuCtxCounter(void);

    // RVA: 0x4 | Ordinal: 5
        void GetInitTime(void);

    // RVA: 0x5 | Ordinal: 6
        void GetLockCounter(void);

    // RVA: 0x6 | Ordinal: 7
        void GetProfiler(void);

    // RVA: 0x7 | Ordinal: 8
        void GetQueue(void);

    // RVA: 0x8 | Ordinal: 9
        void GetThreadHandle(void);

    // RVA: 0xA | Ordinal: 11
        void GetThreadName(unsigned __int64);

    // RVA: 0xB | Ordinal: 12
        void GetToken(void);

    // RVA: 0xC | Ordinal: 13
        void InitRPMallocThread(void);

    // RVA: 0xD | Ordinal: 14
        void ProfilerAvailable(void);

    // RVA: 0xE | Ordinal: 15
        void SetThreadName(char const *);

    // RVA: 0xF | Ordinal: 16
        void rpfree(void *);

    // RVA: 0x10 | Ordinal: 17
        void rpmalloc(unsigned __int64);

    // RVA: 0x11 | Ordinal: 18
        void rpmalloc_finalize(void);

    // RVA: 0x12 | Ordinal: 19
        void rpmalloc_initialize(void);

    // RVA: 0x13 | Ordinal: 20
        void rpmalloc_thread_finalize(void);

    // RVA: 0x14 | Ordinal: 21
        void rpmalloc_thread_initialize(void);

    // RVA: 0x15 | Ordinal: 22
        void rprealloc(void *, unsigned __int64);
};

// DCS_OPS_RE_TRACY.DLL_TRACY_HPP
