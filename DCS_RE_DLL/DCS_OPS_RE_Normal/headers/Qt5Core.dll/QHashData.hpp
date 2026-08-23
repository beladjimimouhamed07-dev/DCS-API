#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QHashData
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QHashData
{
public:

    // RVA: 0x11E | Ordinal: 287
        void QHashData(void);

    // RVA: 0x835 | Ordinal: 2102
        void allocateNode(int);

    // RVA: 0xC93 | Ordinal: 3220
        void detach_helper(void (__cdecl *)(struct QHashData::Node *, void *), void (__cdecl *)(struct QHashData::Node *), int, int);

    // RVA: 0xE5F | Ordinal: 3680
        void firstNode(void);

    // RVA: 0xE91 | Ordinal: 3730
        void freeNode(void *);

    // RVA: 0xE94 | Ordinal: 3733
        void free_helper(void (__cdecl *)(struct QHashData::Node *));

    // RVA: 0xF74 | Ordinal: 3957
        void hasShrunk(void);

    // RVA: 0x1429 | Ordinal: 5162
        void nextNode(struct QHashData::Node *);

    // RVA: 0x152D | Ordinal: 5422
        void previousNode(struct QHashData::Node *);

    // RVA: 0x178F | Ordinal: 6032
        void rehash(int);

    // RVA: 0x200C | Ordinal: 8205
        void willGrow(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QHASHDATA_HPP
