#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edObjects.dll
// Class: HierarchyLayer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class HierarchyLayer
{
public:

    // RVA: 0x9F | Ordinal: 160
        void Build(void);

    // RVA: 0xA0 | Ordinal: 161
        void CalculateBoxes(void);

    // RVA: 0xA | Ordinal: 11
        void HierarchyLayer(class HierarchyLayer const &);

    // RVA: 0xB | Ordinal: 12
        void HierarchyLayer(void);

    // RVA: 0x10A | Ordinal: 267
        void PreserveHere(class HierarchyNode *);

    // RVA: 0x119 | Ordinal: 282
        void SetAcceptance(bool);

    // RVA: 0x130 | Ordinal: 305
        void Subdivide(void);

    // RVA: 0x3F | Ordinal: 64
        void _HierarchyLayer(void);
};

// DCS_OPS_RE_EDOBJECTS.DLL_HIERARCHYLAYER_HPP
