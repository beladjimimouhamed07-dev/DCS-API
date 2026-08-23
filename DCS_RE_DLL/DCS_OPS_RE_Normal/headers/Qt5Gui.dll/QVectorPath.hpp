#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QVectorPath
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QVectorPath
{
public:

    // RVA: 0x3BE | Ordinal: 959
        void QVectorPath(double const *, int, enum QPainterPath::ElementType const *, unsigned int);

    // RVA: 0x963 | Ordinal: 2404
        void addCacheData(class QPaintEngineEx *, void *, void (__cdecl *)(class QPaintEngineEx *, void *)) const;

    // RVA: 0xC56 | Ordinal: 3159
        void controlPointRect(void) const;

    // RVA: 0xC66 | Ordinal: 3175
        void convertToPainterPath(void) const;

    // RVA: 0xF7A | Ordinal: 3963
        void elementCount(void) const;

    // RVA: 0xF7C | Ordinal: 3965
        void elements(void) const;

    // RVA: 0x4E61 | Ordinal: 20066
        void hasExplicitOpen(void) const;

    // RVA: 0x4E6C | Ordinal: 20077
        void hasImplicitClose(void) const;

    // RVA: 0x4E81 | Ordinal: 20098
        void hasWindingFill(void) const;

    // RVA: 0x4EAE | Ordinal: 20143
        void hints(void) const;

    // RVA: 0x4FD4 | Ordinal: 20437
        void isCacheable(void) const;

    // RVA: 0x4FF6 | Ordinal: 20471
        void isConvex(void) const;

    // RVA: 0x5001 | Ordinal: 20482
        void isCurved(void) const;

    // RVA: 0x5019 | Ordinal: 20506
        void isEmpty(void) const;

    // RVA: 0x506C | Ordinal: 20589
        void isRect(void) const;

    // RVA: 0x51B6 | Ordinal: 20919
        void lookupCacheData(class QPaintEngineEx *) const;

    // RVA: 0x51DD | Ordinal: 20958
        void makeCacheable(void) const;

    // RVA: 0x547E | Ordinal: 21631
        void points(void) const;

    // RVA: 0x547F | Ordinal: 21632
        void polygonFlags(enum QPaintEngine::PolygonDrawMode);

    // RVA: 0x5CF9 | Ordinal: 23802
        void shape(void) const;

    // RVA: 0x551 | Ordinal: 1362
        void _QVectorPath(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QVECTORPATH_HPP
