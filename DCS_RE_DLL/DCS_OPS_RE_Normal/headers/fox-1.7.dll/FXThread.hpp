#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXThread
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXThread
{
public:

    // RVA: 0x315 | Ordinal: 790
        void FXThread(void);

    // RVA: 0x97A | Ordinal: 2427
        void affinity(unsigned __int64);

    // RVA: 0x97B | Ordinal: 2428
        void affinity(void) const;

    // RVA: 0xAA4 | Ordinal: 2725
        void cancel(void);

    // RVA: 0xBF7 | Ordinal: 3064
        void createStorageKey(void);

    // RVA: 0xC0C | Ordinal: 3085
        void current(void);

    // RVA: 0xC48 | Ordinal: 3145
        void deleteStorageKey(unsigned __int64);

    // RVA: 0xCBF | Ordinal: 3264
        void detach(void);

    // RVA: 0xE64 | Ordinal: 3685
        void exit(int);

    // RVA: 0xF6C | Ordinal: 3949
        void function(void *);

    // RVA: 0x15DE | Ordinal: 5599
        void getStorage(unsigned __int64);

    // RVA: 0x184A | Ordinal: 6219
        void id(void) const;

    // RVA: 0x1A0D | Ordinal: 6670
        void join(int &);

    // RVA: 0x1A0E | Ordinal: 6671
        void join(void);

    // RVA: 0x267C | Ordinal: 9853
        void policy(enum FX::FXThread::Policy);

    // RVA: 0x267D | Ordinal: 9854
        void policy(void) const;

    // RVA: 0x26CC | Ordinal: 9933
        void priority(enum FX::FXThread::Priority);

    // RVA: 0x26CD | Ordinal: 9934
        void priority(void) const;

    // RVA: 0x26CF | Ordinal: 9936
        void processor(void);

    // RVA: 0x26D0 | Ordinal: 9937
        void processors(void);

    // RVA: 0x27A4 | Ordinal: 10149
        void resume(void);

    // RVA: 0x27D9 | Ordinal: 10202
        void running(void) const;

    // RVA: 0x28EA | Ordinal: 10475
        void self(class FX::FXThread *);

    // RVA: 0x28EB | Ordinal: 10476
        void self(void);

    // RVA: 0x2D26 | Ordinal: 11559
        void setStorage(unsigned __int64, void *);

    // RVA: 0x2E3D | Ordinal: 11838
        void sleep(__int64);

    // RVA: 0x2E53 | Ordinal: 11860
        void start(unsigned __int64);

    // RVA: 0x2E80 | Ordinal: 11905
        void suspend(void);

    // RVA: 0x2E9B | Ordinal: 11932
        void time(void);

    // RVA: 0x2F74 | Ordinal: 12149
        void wakeat(__int64);

    // RVA: 0x300B | Ordinal: 12300
        void yield(void);

    // RVA: 0x4CE | Ordinal: 1231
        void _FXThread(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXTHREAD_HPP
