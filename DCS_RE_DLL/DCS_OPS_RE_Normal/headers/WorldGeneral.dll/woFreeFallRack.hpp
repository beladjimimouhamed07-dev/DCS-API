#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: woFreeFallRack
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class woFreeFallRack
{
public:

    // RVA: 0x553 | Ordinal: 1364
        void Create(unsigned long, class IwoAIPilon *);

    // RVA: 0x581 | Ordinal: 1410
        void GetPoint(double);

    // RVA: 0x582 | Ordinal: 1411
        void GetPoint(void);

    // RVA: 0x589 | Ordinal: 1418
        void GetPosition(void);

    // RVA: 0x5C5 | Ordinal: 1478
        void OnParentDeath(void);

    // RVA: 0x5CE | Ordinal: 1487
        void Position(double);

    // RVA: 0x5F8 | Ordinal: 1529
        void UseChildren(double, enum viArgumentPurpose);

    // RVA: 0x761 | Ordinal: 1890
        void deepCopyPilon(class IwoAIPilon *, class woFreeFallRack *);

    // RVA: 0x8DC | Ordinal: 2269
        void getPositionInParentSpace(double);

    // RVA: 0x214 | Ordinal: 533
        void woFreeFallRack(void);

    // RVA: 0x2E5 | Ordinal: 742
        void _woFreeFallRack(void);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_WOFREEFALLRACK_HPP
