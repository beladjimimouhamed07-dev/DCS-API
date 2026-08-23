#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edObjects.dll
// Class: viSearch
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class viSearch
{
public:

    // RVA: 0xAA | Ordinal: 171
        void Count(void) const;

    // RVA: 0xBC | Ordinal: 189
        void Finish(void);

    // RVA: 0x12F | Ordinal: 304
        void Store(void);

    // RVA: 0x133 | Ordinal: 308
        void TestAndInsert(class viObject *, bool);

    // RVA: 0x34 | Ordinal: 53
        void viSearch(class ClipVolume const *, bool (__cdecl *)(class viObject *, class viSearch *, void *), void *, unsigned int);

    // RVA: 0x35 | Ordinal: 54
        void viSearch(class ClipVolume const *, bool (__cdecl *)(class viObject *, class viSearch *, void *), void *, class viObject **, unsigned int, unsigned int);

    // RVA: 0x36 | Ordinal: 55
        void viSearch(class ClipVolume const *, class viObject **, unsigned int, unsigned int);
};

// DCS_OPS_RE_EDOBJECTS.DLL_VISEARCH_HPP
