#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: SyncTask
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace ed {

class SyncTask
{
public:

    // RVA: 0x8C | Ordinal: 141
        void SyncTask(class std::function<void __cdecl(void)> &&, class ed::Ptr<class ed::SharedGroupBarrier, struct ed::SharedGroupBarrier::Deleter> &&, char const *);

    // RVA: 0x8D | Ordinal: 142
        void SyncTask(void (__cdecl *)(void *), void *, class ed::Ptr<class ed::SharedGroupBarrier, struct ed::SharedGroupBarrier::Deleter> &&, char const *);

    // RVA: 0x186 | Ordinal: 391
        void create(class std::function<void __cdecl(void)> &&, class ed::Ptr<class ed::SharedGroupBarrier, struct ed::SharedGroupBarrier::Deleter> &&, char const *);

    // RVA: 0x187 | Ordinal: 392
        void create(void (__cdecl *)(void *), void *, class ed::Ptr<class ed::SharedGroupBarrier, struct ed::SharedGroupBarrier::Deleter> &&, char const *);

    // RVA: 0x19E | Ordinal: 415
        void destroy(void);

    // RVA: 0x1EC | Ordinal: 493
        void getDebugName(void) const;

    // RVA: 0x368 | Ordinal: 873
        void run(void);

    // RVA: 0xD1 | Ordinal: 210
        void _SyncTask(void);
};

} // namespace ed

// DCS_OPS_RE_EDCORE.DLL_SYNCTASK_HPP
