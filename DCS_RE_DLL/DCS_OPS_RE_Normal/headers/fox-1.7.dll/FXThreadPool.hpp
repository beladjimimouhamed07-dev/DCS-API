#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXThreadPool
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXThreadPool
{
public:

    // RVA: 0x318 | Ordinal: 793
        void FXThreadPool(unsigned int);

    // RVA: 0x959 | Ordinal: 2394
        void active(void) const;

    // RVA: 0xE57 | Ordinal: 3672
        void execute(class FX::FXRunnable *, __int64);

    // RVA: 0xE5A | Ordinal: 3675
        void executeAndWait(class FX::FXRunnable *, __int64);

    // RVA: 0xE5B | Ordinal: 3676
        void executeAndWaitFor(class FX::FXRunnable *, class FX::FXCompletion &, __int64);

    // RVA: 0x11EB | Ordinal: 4588
        void getExpiration(void) const;

    // RVA: 0x1365 | Ordinal: 4966
        void getMaximumThreads(void) const;

    // RVA: 0x1480 | Ordinal: 5249
        void getMinimumThreads(void) const;

    // RVA: 0x154F | Ordinal: 5456
        void getRunningTasks(void) const;

    // RVA: 0x1550 | Ordinal: 5457
        void getRunningThreads(void) const;

    // RVA: 0x15B8 | Ordinal: 5561
        void getSize(void) const;

    // RVA: 0x15D2 | Ordinal: 5587
        void getStackSize(void) const;

    // RVA: 0x18D3 | Ordinal: 6356
        void instance(void);

    // RVA: 0x18D4 | Ordinal: 6357
        void instance(class FX::FXThreadPool *);

    // RVA: 0x27CE | Ordinal: 10191
        void run(void);

    // RVA: 0x27D7 | Ordinal: 10200
        void runWhile(class FX::FXCompletion &, __int64);

    // RVA: 0x2A83 | Ordinal: 10884
        void setExpiration(__int64);

    // RVA: 0x2BF3 | Ordinal: 11252
        void setMaximumThreads(unsigned int);

    // RVA: 0x2C03 | Ordinal: 11268
        void setMinimumThreads(unsigned int);

    // RVA: 0x2CFC | Ordinal: 11517
        void setSize(unsigned int);

    // RVA: 0x2D17 | Ordinal: 11544
        void setStackSize(unsigned __int64);

    // RVA: 0x2E54 | Ordinal: 11861
        void start(unsigned int);

    // RVA: 0x2E58 | Ordinal: 11865
        void startWorker(void);

    // RVA: 0x2E5E | Ordinal: 11871
        void stop(void);

    // RVA: 0x2F72 | Ordinal: 12147
        void wait(void);

    // RVA: 0x2F73 | Ordinal: 12148
        void waitFor(class FX::FXCompletion &);

    // RVA: 0x4D0 | Ordinal: 1233
        void _FXThreadPool(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXTHREADPOOL_HPP
