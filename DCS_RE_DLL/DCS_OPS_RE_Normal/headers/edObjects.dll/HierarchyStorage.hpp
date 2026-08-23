#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edObjects.dll
// Class: HierarchyStorage
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class HierarchyStorage
{
public:

    // RVA: 0x98 | Ordinal: 153
        void AddObjectPrivate(class viObject *);

    // RVA: 0xC8 | Ordinal: 201
        void GetCount(void);

    // RVA: 0xD4 | Ordinal: 213
        void GetObjects(class viSearch *);

    // RVA: 0xE6 | Ordinal: 231
        void GetStatistics(char *const);

    // RVA: 0xE | Ordinal: 15
        void HierarchyStorage(class HierarchyStorage const &);

    // RVA: 0xF | Ordinal: 16
        void HierarchyStorage(unsigned int, class HierarchyNode *);

    // RVA: 0xF7 | Ordinal: 248
        void Name(void);

    // RVA: 0x10C | Ordinal: 269
        void Purge(unsigned int);

    // RVA: 0x116 | Ordinal: 279
        void RemoveObjectPrivate(class viObject *);

    // RVA: 0x41 | Ordinal: 66
        void _HierarchyStorage(void);
};

// DCS_OPS_RE_EDOBJECTS.DLL_HIERARCHYSTORAGE_HPP
