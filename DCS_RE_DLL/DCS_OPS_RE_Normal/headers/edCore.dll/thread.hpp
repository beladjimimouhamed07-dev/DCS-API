#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: thread
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace ed {

class thread
{
public:

    // RVA: 0x13C | Ordinal: 317
        void _get_current_thread_id(void);

    // RVA: 0x150 | Ordinal: 337
        void alive(void);

    // RVA: 0x156 | Ordinal: 343
        void available_hardware_concurrency(void);

    // RVA: 0x1A0 | Ordinal: 417
        void detach(void);

    // RVA: 0x224 | Ordinal: 549
        void get_id(void) const;

    // RVA: 0x234 | Ordinal: 565
        void hardware_concurrency(void);

    // RVA: 0x283 | Ordinal: 644
        void join(void);

    // RVA: 0x284 | Ordinal: 645
        void joinable(void);

    // RVA: 0x2B6 | Ordinal: 695
        void name(void) const;

    // RVA: 0x394 | Ordinal: 917
        void set_affinity(unsigned __int64);

    // RVA: 0x39D | Ordinal: 926
        void set_ideal_core(signed char);

    // RVA: 0x3A0 | Ordinal: 929
        void set_memory_priority(enum ed::thread::MemoryPriority);

    // RVA: 0x3A2 | Ordinal: 931
        void set_priority(enum ed::thread::Priority);

    // RVA: 0x3A6 | Ordinal: 935
        void set_throttling(enum ed::thread::Throttling);

    // RVA: 0x3C3 | Ordinal: 964
        void terminate(void);

    // RVA: 0xA1 | Ordinal: 162
        void thread(class std::function<void __cdecl(void)>, struct ed::thread::ThreadInfo const &, char const *);

    // RVA: 0xA2 | Ordinal: 163
        void thread(class std::function<void __cdecl(void)>, char const *);

    // RVA: 0xA3 | Ordinal: 164
        void thread(class std::function<void __cdecl(void)>, enum ed::thread::Priority, unsigned __int64, char const *);

    // RVA: 0xA4 | Ordinal: 165
        void thread(class std::function<void __cdecl(void)>, unsigned __int64, char const *);

    // RVA: 0xA5 | Ordinal: 166
        void thread(void);
};

} // namespace ed

// DCS_OPS_RE_EDCORE.DLL_THREAD_HPP
