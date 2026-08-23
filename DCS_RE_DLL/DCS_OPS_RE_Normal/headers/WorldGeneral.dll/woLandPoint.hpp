#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: woLandPoint
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class woLandPoint
{
public:

    // RVA: 0x554 | Ordinal: 1365
        void Create(class lLandObject *, unsigned int, bool);

    // RVA: 0x56B | Ordinal: 1388
        void GetDrawArguments(void);

    // RVA: 0x572 | Ordinal: 1395
        void GetModel(void);

    // RVA: 0x575 | Ordinal: 1398
        void GetModelParams(void);

    // RVA: 0x576 | Ordinal: 1399
        void GetModelParams(void) const;

    // RVA: 0x583 | Ordinal: 1412
        void GetPoint(void);

    // RVA: 0x5A9 | Ordinal: 1450
        void Is_Target(void);

    // RVA: 0x5CF | Ordinal: 1488
        void Position(double);

    // RVA: 0x5D0 | Ordinal: 1489
        void Position(void);

    // RVA: 0x630 | Ordinal: 1585
        void assign(class lLandObject *, unsigned int, bool);

    // RVA: 0x6E3 | Ordinal: 1764
        void controlPoint(double &);

    // RVA: 0x78C | Ordinal: 1933
        void eraseRecord(void);

    // RVA: 0x7A1 | Ordinal: 1954
        void fillInitData(struct InitNetPoint &) const;

    // RVA: 0x84D | Ordinal: 2126
        void getLandObject(void);

    // RVA: 0x84E | Ordinal: 2127
        void getLandPoint(unsigned int, bool);

    // RVA: 0x8D2 | Ordinal: 2259
        void getObjectType(void) const;

    // RVA: 0xA60 | Ordinal: 2657
        void makeRecord(void);

    // RVA: 0xA9A | Ordinal: 2715
        void onLandObjectDestroy(class lLandObject *);

    // RVA: 0xC31 | Ordinal: 3122
        void type(void) const;

    // RVA: 0x218 | Ordinal: 537
        void woLandPoint(void);

    // RVA: 0x2E8 | Ordinal: 745
        void _woLandPoint(void);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_WOLANDPOINT_HPP
