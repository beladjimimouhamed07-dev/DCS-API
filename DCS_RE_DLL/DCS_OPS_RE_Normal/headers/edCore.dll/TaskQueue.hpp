#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: TaskQueue
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace ed {

class TaskQueue
{
public:

    // RVA: 0x188 | Ordinal: 393
        void create(char const *, unsigned int, struct ed::thread::ThreadInfo const *const);

    // RVA: 0x189 | Ordinal: 394
        void create(char const *, unsigned int, struct ed::thread::ThreadInfo const *const, bool);

    // RVA: 0x18A | Ordinal: 395
        void create(char const *, unsigned int, enum ed::thread::Priority);
};

} // namespace ed

// DCS_OPS_RE_EDCORE.DLL_TASKQUEUE_HPP
