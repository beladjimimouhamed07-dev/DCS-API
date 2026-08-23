#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: SyncTaskQueue
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace ed {

class SyncTaskQueue
{
public:

    // RVA: 0x8E | Ordinal: 143
        void SyncTaskQueue(void);

    // RVA: 0x157 | Ordinal: 344
        void barrier(void);

    // RVA: 0x1AA | Ordinal: 427
        void empty(void) const;

    // RVA: 0x209 | Ordinal: 522
        void getPoolSize(void) const;

    // RVA: 0x2F8 | Ordinal: 761
        void proceed(double);

    // RVA: 0x305 | Ordinal: 774
        void push_task(class std::function<void __cdecl(void)> &&, class ed::Ptr<class ed::SharedGroupBarrier, struct ed::SharedGroupBarrier::Deleter> &&, char const *);

    // RVA: 0x306 | Ordinal: 775
        void push_task(void (__cdecl *)(void *), void *, class ed::Ptr<class ed::SharedGroupBarrier, struct ed::SharedGroupBarrier::Deleter> &&, char const *);

    // RVA: 0xD2 | Ordinal: 211
        void _SyncTaskQueue(void);
};

} // namespace ed

// DCS_OPS_RE_EDCORE.DLL_SYNCTASKQUEUE_HPP
