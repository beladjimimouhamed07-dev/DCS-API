#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QMapDataBase
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QMapDataBase
{
public:

    // RVA: 0x173 | Ordinal: 372
        void QMapDataBase(void);

    // RVA: 0xB2A | Ordinal: 2859
        void createData(void);

    // RVA: 0xB37 | Ordinal: 2872
        void createNode(int, int, struct QMapNodeBase *, bool);

    // RVA: 0xE90 | Ordinal: 3729
        void freeData(struct QMapDataBase *);

    // RVA: 0xE92 | Ordinal: 3731
        void freeNodeAndRebalance(struct QMapNodeBase *);

    // RVA: 0xE93 | Ordinal: 3732
        void freeTree(struct QMapNodeBase *, int);

    // RVA: 0x175B | Ordinal: 5980
        void rebalance(struct QMapNodeBase *);

    // RVA: 0x175C | Ordinal: 5981
        void recalcMostLeftNode(void);

    // RVA: 0x18AD | Ordinal: 6318
        void rotateLeft(struct QMapNodeBase *);

    // RVA: 0x18AE | Ordinal: 6319
        void rotateRight(struct QMapNodeBase *);
};

// DCS_OPS_RE_QT5CORE.DLL_QMAPDATABASE_HPP
