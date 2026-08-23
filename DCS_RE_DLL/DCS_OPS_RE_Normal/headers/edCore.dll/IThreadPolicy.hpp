#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: IThreadPolicy
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace ed {

class IThreadPolicy
{
public:

    // RVA: 0x60 | Ordinal: 97
        void IThreadPolicy(struct ed::IThreadPolicy const &);

    // RVA: 0x61 | Ordinal: 98
        void IThreadPolicy(void);

    // RVA: 0x154 | Ordinal: 341
        void applyPolicyToThisThread(enum ed::ThreadWorkload);

    // RVA: 0x170 | Ordinal: 369
        void clearProvider(void);

    // RVA: 0x26E | Ordinal: 623
        void instance(void);

    // RVA: 0x335 | Ordinal: 822
        void registerThreadsGroup(enum ed::ThreadWorkload, unsigned int, struct ed::thread::ThreadInfo const &);

    // RVA: 0x38D | Ordinal: 910
        void setProvider(class std::unique_ptr<struct ed::IThreadPolicy, struct std::default_delete<struct ed::IThreadPolicy>> &&);

    // RVA: 0xBA | Ordinal: 187
        void _IThreadPolicy(void);
};

} // namespace ed

// DCS_OPS_RE_EDCORE.DLL_ITHREADPOLICY_HPP
