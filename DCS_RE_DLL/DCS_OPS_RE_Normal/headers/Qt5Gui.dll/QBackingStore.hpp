#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QBackingStore
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QBackingStore
{
public:

    // RVA: 0x8C | Ordinal: 141
        void QBackingStore(class QWindow *);

    // RVA: 0xA7E | Ordinal: 2687
        void beginPaint(class QRegion const &);

    // RVA: 0xFBE | Ordinal: 4031
        void endPaint(void);

    // RVA: 0x10A1 | Ordinal: 4258
        void flush(class QRegion const &, class QWindow *, class QPoint const &);

    // RVA: 0x4E17 | Ordinal: 19992
        void handle(void) const;

    // RVA: 0x4E7B | Ordinal: 20092
        void hasStaticContents(void) const;

    // RVA: 0x53E3 | Ordinal: 21476
        void paintDevice(void);

    // RVA: 0x571F | Ordinal: 22304
        void resize(class QSize const &);

    // RVA: 0x57E0 | Ordinal: 22497
        void scroll(class QRegion const &, int, int);

    // RVA: 0x5BB4 | Ordinal: 23477
        void setStaticContents(class QRegion const &);

    // RVA: 0x5D2B | Ordinal: 23852
        void size(void) const;

    // RVA: 0x5DA3 | Ordinal: 23972
        void staticContents(void) const;

    // RVA: 0x6166 | Ordinal: 24935
        void window(void) const;

    // RVA: 0x414 | Ordinal: 1045
        void _QBackingStore(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QBACKINGSTORE_HPP
