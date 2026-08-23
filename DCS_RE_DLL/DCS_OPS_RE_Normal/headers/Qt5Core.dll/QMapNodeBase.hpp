#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QMapNodeBase
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QMapNodeBase
{
public:

    // RVA: 0xA1D | Ordinal: 2590
        void color(void) const;

    // RVA: 0x142A | Ordinal: 5163
        void nextNode(void);

    // RVA: 0x142B | Ordinal: 5164
        void nextNode(void) const;

    // RVA: 0x14AE | Ordinal: 5295
        void parent(void) const;

    // RVA: 0x152E | Ordinal: 5423
        void previousNode(void);

    // RVA: 0x152F | Ordinal: 5424
        void previousNode(void) const;

    // RVA: 0x1953 | Ordinal: 6484
        void setColor(enum QMapNodeBase::Color);

    // RVA: 0x1A37 | Ordinal: 6712
        void setParent(struct QMapNodeBase *);
};

// DCS_OPS_RE_QT5CORE.DLL_QMAPNODEBASE_HPP
