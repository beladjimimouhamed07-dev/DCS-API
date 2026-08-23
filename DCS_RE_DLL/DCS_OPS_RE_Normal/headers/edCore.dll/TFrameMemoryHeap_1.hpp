#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: TFrameMemoryHeap<1>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class TFrameMemoryHeap_1_
{
public:

    // RVA: 0x34 | Ordinal: 53
        void TFrameMemoryHeap_1_(unsigned __int64, unsigned __int64);

    // RVA: 0x192 | Ordinal: 403
        void create_pool(unsigned __int64);

    // RVA: 0x1CC | Ordinal: 461
        void free_memory(void *, unsigned __int64);

    // RVA: 0x1EE | Ordinal: 495
        void getFrame(void);

    // RVA: 0x21F | Ordinal: 544
        void get_chunk(void *, unsigned __int64);

    // RVA: 0x222 | Ordinal: 547
        void get_from_pool(unsigned __int64);

    // RVA: 0x225 | Ordinal: 550
        void get_max_memory(void);

    // RVA: 0x227 | Ordinal: 552
        void get_memory(unsigned __int64);

    // RVA: 0x237 | Ordinal: 568
        void heapWatch(int, char *, unsigned __int64, void *);

    // RVA: 0x2AA | Ordinal: 683
        void move_left(struct TFrameMemoryHeap<1>::free_chunk *);

    // RVA: 0x2AC | Ordinal: 685
        void move_right(struct TFrameMemoryHeap<1>::free_chunk *);

    // RVA: 0x30D | Ordinal: 782
        void quick_get_memory(unsigned __int64);

    // RVA: 0x339 | Ordinal: 826
        void release_memory(void);

    // RVA: 0x349 | Ordinal: 842
        void remove_chunk(struct TFrameMemoryHeap<1>::free_chunk *);

    // RVA: 0x360 | Ordinal: 865
        void reset_memory(void);

    // RVA: 0x383 | Ordinal: 900
        void setFrame(void *);

    // RVA: 0x3A7 | Ordinal: 936
        void size(void) const;

    // RVA: 0xA7 | Ordinal: 168
        void _TFrameMemoryHeap_1_(void);
};

// DCS_OPS_RE_EDCORE.DLL_TFRAMEMEMORYHEAP_1_HPP
