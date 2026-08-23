#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QPageSize
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPageSize
{
public:

    // RVA: 0x1E7 | Ordinal: 488
        void QPageSize(class QPageSizePrivate &);

    // RVA: 0x1E8 | Ordinal: 489
        void QPageSize(class QString const &, class QSize const &, class QString const &);

    // RVA: 0x1E9 | Ordinal: 490
        void QPageSize(int, class QSize const &, class QString const &);

    // RVA: 0x1EA | Ordinal: 491
        void QPageSize(class QPageSize const &);

    // RVA: 0x1EB | Ordinal: 492
        void QPageSize(class QSize const &, class QString const &, enum QPageSize::SizeMatchPolicy);

    // RVA: 0x1EC | Ordinal: 493
        void QPageSize(class QSizeF const &, enum QPageSize::Unit, class QString const &, enum QPageSize::SizeMatchPolicy);

    // RVA: 0x1ED | Ordinal: 494
        void QPageSize(enum QPageSize::PageSizeId);

    // RVA: 0x1EE | Ordinal: 495
        void QPageSize(void);

    // RVA: 0xDDC | Ordinal: 3549
        void definitionSize(void) const;

    // RVA: 0xDDD | Ordinal: 3550
        void definitionSize(enum QPageSize::PageSizeId);

    // RVA: 0xDDE | Ordinal: 3551
        void definitionUnits(void) const;

    // RVA: 0xDDF | Ordinal: 3552
        void definitionUnits(enum QPageSize::PageSizeId);

    // RVA: 0x4ED1 | Ordinal: 20178
        void id(void) const;

    // RVA: 0x4ED2 | Ordinal: 20179
        void id(class QSize const &, enum QPageSize::SizeMatchPolicy);

    // RVA: 0x4ED3 | Ordinal: 20180
        void id(class QSizeF const &, enum QPageSize::Unit, enum QPageSize::SizeMatchPolicy);

    // RVA: 0x4ED4 | Ordinal: 20181
        void id(int);

    // RVA: 0x501E | Ordinal: 20511
        void isEquivalentTo(class QPageSize const &) const;

    // RVA: 0x509D | Ordinal: 20638
        void isValid(void) const;

    // RVA: 0x50ED | Ordinal: 20718
        void key(void) const;

    // RVA: 0x50EE | Ordinal: 20719
        void key(enum QPageSize::PageSizeId);

    // RVA: 0x5312 | Ordinal: 21267
        void name(void) const;

    // RVA: 0x5313 | Ordinal: 21268
        void name(enum QPageSize::PageSizeId);

    // RVA: 0x5687 | Ordinal: 22152
        void rect(enum QPageSize::Unit) const;

    // RVA: 0x568E | Ordinal: 22159
        void rectPixels(int) const;

    // RVA: 0x568F | Ordinal: 22160
        void rectPoints(void) const;

    // RVA: 0x5D35 | Ordinal: 23862
        void size(enum QPageSize::Unit) const;

    // RVA: 0x5D36 | Ordinal: 23863
        void size(enum QPageSize::PageSizeId, enum QPageSize::Unit);

    // RVA: 0x5D47 | Ordinal: 23880
        void sizePixels(int) const;

    // RVA: 0x5D48 | Ordinal: 23881
        void sizePixels(enum QPageSize::PageSizeId, int);

    // RVA: 0x5D49 | Ordinal: 23882
        void sizePoints(void) const;

    // RVA: 0x5D4A | Ordinal: 23883
        void sizePoints(enum QPageSize::PageSizeId);

    // RVA: 0x5E88 | Ordinal: 24201
        void swap(class QPageSize &);

    // RVA: 0x618C | Ordinal: 24973
        void windowsId(void) const;

    // RVA: 0x618D | Ordinal: 24974
        void windowsId(enum QPageSize::PageSizeId);

    // RVA: 0x4A9 | Ordinal: 1194
        void _QPageSize(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QPAGESIZE_HPP
