#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edObjects.dll
// Class: HierarchyLinearNode
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class HierarchyLinearNode
{
public:

    // RVA: 0x97 | Ordinal: 152
        void AddObject(class HierarchyNode *);

    // RVA: 0xB6 | Ordinal: 183
        void DeleteObjects(void);

    // RVA: 0xC2 | Ordinal: 195
        void GetBox(void) const;

    // RVA: 0xC7 | Ordinal: 200
        void GetCount(void);

    // RVA: 0xD3 | Ordinal: 212
        void GetObjects(class viSearch *, enum IntersectionType);

    // RVA: 0xC | Ordinal: 13
        void HierarchyLinearNode(class HierarchyLinearNode const &);

    // RVA: 0xD | Ordinal: 14
        void HierarchyLinearNode(void);

    // RVA: 0x10B | Ordinal: 268
        void PreserveHere(class HierarchyNode *);

    // RVA: 0x115 | Ordinal: 278
        void RemoveObject(class HierarchyNode *);

    // RVA: 0x147 | Ordinal: 328
        void WasInSearch(class viSearch *);

    // RVA: 0x40 | Ordinal: 65
        void _HierarchyLinearNode(void);
};

// DCS_OPS_RE_EDOBJECTS.DLL_HIERARCHYLINEARNODE_HPP
