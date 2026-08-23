#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: speedtree7.dll
// Class: 1>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class _1_
{
public:

    // RVA: 0x17A | Ordinal: 379
        void Allocate(unsigned __int64);

    // RVA: 0x19D | Ordinal: 414
        void Deallocate(char *);

    // RVA: 0x19E | Ordinal: 415
        void Deallocate(struct SpeedTree::CScopeTrace::SNode **);

    // RVA: 0x19F | Ordinal: 416
        void Deallocate(class SpeedTree::CBasicFixedString<256> *);

    // RVA: 0x278 | Ordinal: 633
        void SetExternalMemory(unsigned char *, unsigned __int64);

    // RVA: 0x27D | Ordinal: 638
        void SetHeapDescription(char const *);

    // RVA: 0x2B6 | Ordinal: 695
        void clear(void);

    // RVA: 0x2D0 | Ordinal: 721
        void push_back(class SpeedTree::CBasicFixedString<256> const &);

    // RVA: 0x2D2 | Ordinal: 723
        void reserve(unsigned __int64);

    // RVA: 0x2D5 | Ordinal: 726
        void resize(unsigned __int64);

    // RVA: 0x2D9 | Ordinal: 730
        void size(void) const;
};

// DCS_OPS_RE_SPEEDTREE7.DLL_1_HPP
