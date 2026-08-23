#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: speedtree7.dll
// Class: 0>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class _0_
{
public:

    // RVA: 0x17C | Ordinal: 381
        void Allocate(unsigned __int64);

    // RVA: 0x17D | Ordinal: 382
        void Allocate(class SpeedTree::CBasicFixedString<256> const &, void *);

    // RVA: 0x1A0 | Ordinal: 417
        void Deallocate(class SpeedTree::CBasicFixedString<1024> *);

    // RVA: 0x1A1 | Ordinal: 418
        void Deallocate(void *&);

    // RVA: 0x23A | Ordinal: 571
        void Ptr(void *) const;

    // RVA: 0x23F | Ordinal: 576
        void Rebalance(void *);

    // RVA: 0x27B | Ordinal: 636
        void SetExternalMemory(unsigned char *, unsigned __int64);

    // RVA: 0x27E | Ordinal: 639
        void SetHeapDescription(char const *);

    // RVA: 0x2B0 | Ordinal: 689
        void back(void);

    // RVA: 0x2B1 | Ordinal: 690
        void begin(void);

    // RVA: 0x2B5 | Ordinal: 694
        void capacity(void) const;

    // RVA: 0x2B9 | Ordinal: 698
        void clear(void);

    // RVA: 0x2BD | Ordinal: 702
        void empty(void) const;

    // RVA: 0x2BF | Ordinal: 704
        void end(void);

    // RVA: 0x2C0 | Ordinal: 705
        void erase(class SpeedTree::CMap<class SpeedTree::CBasicFixedString<256>, struct SResourceEntry, class SpeedTree::CLess<class SpeedTree::CBasicFixedString<256>>, 0>::iterator);

    // RVA: 0x2C2 | Ordinal: 707
        void find(class SpeedTree::CBasicFixedString<256> const &) const;

    // RVA: 0x2C5 | Ordinal: 710
        void insert(class SpeedTree::CBasicFixedString<1024> *, class SpeedTree::CBasicFixedString<1024> const &);

    // RVA: 0x2CF | Ordinal: 720
        void pop_back(void);

    // RVA: 0x2D1 | Ordinal: 722
        void push_back(class SpeedTree::CBasicFixedString<1024> const &);

    // RVA: 0x2D4 | Ordinal: 725
        void reserve(unsigned __int64);
};

// DCS_OPS_RE_SPEEDTREE7.DLL_0_HPP
