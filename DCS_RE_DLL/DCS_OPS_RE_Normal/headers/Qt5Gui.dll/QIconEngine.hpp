#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QIconEngine
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QIconEngine
{
public:

    // RVA: 0x12F | Ordinal: 304
        void QIconEngine(class QIconEngine const &);

    // RVA: 0x130 | Ordinal: 305
        void QIconEngine(void);

    // RVA: 0x959 | Ordinal: 2394
        void actualSize(class QSize const &, enum QIcon::Mode, enum QIcon::State);

    // RVA: 0x975 | Ordinal: 2422
        void addFile(class QString const &, class QSize const &, enum QIcon::Mode, enum QIcon::State);

    // RVA: 0x988 | Ordinal: 2441
        void addPixmap(class QPixmap const &, enum QIcon::Mode, enum QIcon::State);

    // RVA: 0xA47 | Ordinal: 2632
        void availableSizes(enum QIcon::Mode, enum QIcon::State) const;

    // RVA: 0x4ECC | Ordinal: 20173
        void iconName(void) const;

    // RVA: 0x5050 | Ordinal: 20561
        void isNull(void) const;

    // RVA: 0x50EB | Ordinal: 20716
        void key(void) const;

    // RVA: 0x5462 | Ordinal: 21603
        void pixmap(class QSize const &, enum QIcon::Mode, enum QIcon::State);

    // RVA: 0x566F | Ordinal: 22128
        void read(class QDataStream &);

    // RVA: 0x57B7 | Ordinal: 22456
        void scaledPixmap(class QSize const &, enum QIcon::Mode, enum QIcon::State, double);

    // RVA: 0x6131 | Ordinal: 24882
        void virtual_hook(int, void *);

    // RVA: 0x6195 | Ordinal: 24982
        void write(class QDataStream &) const;

    // RVA: 0x44D | Ordinal: 1102
        void _QIconEngine(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QICONENGINE_HPP
