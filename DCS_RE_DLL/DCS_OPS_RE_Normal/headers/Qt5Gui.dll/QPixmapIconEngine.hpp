#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QPixmapIconEngine
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPixmapIconEngine
{
public:

    // RVA: 0x22E | Ordinal: 559
        void QPixmapIconEngine(class QPixmapIconEngine const &);

    // RVA: 0x22F | Ordinal: 560
        void QPixmapIconEngine(void);

    // RVA: 0x95A | Ordinal: 2395
        void actualSize(class QSize const &, enum QIcon::Mode, enum QIcon::State);

    // RVA: 0x976 | Ordinal: 2423
        void addFile(class QString const &, class QSize const &, enum QIcon::Mode, enum QIcon::State);

    // RVA: 0x989 | Ordinal: 2442
        void addPixmap(class QPixmap const &, enum QIcon::Mode, enum QIcon::State);

    // RVA: 0xA84 | Ordinal: 2693
        void bestMatch(class QSize const &, enum QIcon::Mode, enum QIcon::State, bool);

    // RVA: 0xBE4 | Ordinal: 3045
        void clone(void) const;

    // RVA: 0x50EF | Ordinal: 20720
        void key(void) const;

    // RVA: 0x53E1 | Ordinal: 21474
        void paint(class QPainter *, class QRect const &, enum QIcon::Mode, enum QIcon::State);

    // RVA: 0x5463 | Ordinal: 21604
        void pixmap(class QSize const &, enum QIcon::Mode, enum QIcon::State);

    // RVA: 0x5674 | Ordinal: 22133
        void read(class QDataStream &);

    // RVA: 0x6061 | Ordinal: 24674
        void tryMatch(class QSize const &, enum QIcon::Mode, enum QIcon::State);

    // RVA: 0x6132 | Ordinal: 24883
        void virtual_hook(int, void *);

    // RVA: 0x619B | Ordinal: 24988
        void write(class QDataStream &) const;

    // RVA: 0x4C2 | Ordinal: 1219
        void _QPixmapIconEngine(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QPIXMAPICONENGINE_HPP
