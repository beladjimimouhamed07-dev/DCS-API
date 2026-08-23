#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: TFrameMemoryHeap<0>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class TFrameMemoryHeap_0_
{
public:

    // RVA: 0x35 | Ordinal: 54
        void TFrameMemoryHeap_0_(unsigned __int64, unsigned __int64);

    // RVA: 0x193 | Ordinal: 404
        void create_pool(unsigned __int64);

    // RVA: 0x1CD | Ordinal: 462
        void free_memory(void *, unsigned __int64);

    // RVA: 0x1EF | Ordinal: 496
        void getFrame(void);

    // RVA: 0x220 | Ordinal: 545
        void get_chunk(void *, unsigned __int64);

    // RVA: 0x223 | Ordinal: 548
        void get_from_pool(unsigned __int64);

    // RVA: 0x226 | Ordinal: 551
        void get_max_memory(void);

    // RVA: 0x228 | Ordinal: 553
        void get_memory(unsigned __int64);

    // RVA: 0x238 | Ordinal: 569
        void heapWatch(int, char *, unsigned __int64, void *);

    // RVA: 0x2AB | Ordinal: 684
        void move_left(struct TFrameMemoryHeap<0>::free_chunk *);

    // RVA: 0x2AD | Ordinal: 686
        void move_right(struct TFrameMemoryHeap<0>::free_chunk *);

    // RVA: 0x30E | Ordinal: 783
        void quick_get_memory(unsigned __int64);

    // RVA: 0x33A | Ordinal: 827
        void release_memory(void);

    // RVA: 0x34A | Ordinal: 843
        void remove_chunk(struct TFrameMemoryHeap<0>::free_chunk *);

    // RVA: 0x361 | Ordinal: 866
        void reset_memory(void);

    // RVA: 0x384 | Ordinal: 901
        void setFrame(void *);

    // RVA: 0x3A8 | Ordinal: 937
        void size(void) const;

    // RVA: 0xA8 | Ordinal: 169
        void _TFrameMemoryHeap_0_(void);
};

// DCS_OPS_RE_EDCORE.DLL_TFRAMEMEMORYHEAP_0_HPP
