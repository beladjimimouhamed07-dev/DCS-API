#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QPixmapBlurFilter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPixmapBlurFilter
{
public:

    // RVA: 0xDE | Ordinal: 223
        void QPixmapBlurFilter(class QObject *);

    // RVA: 0x638 | Ordinal: 1593
        void blurHints(void) const;

    // RVA: 0x650 | Ordinal: 1617
        void boundingRectFor(class QRectF const &) const;

    // RVA: 0x96F | Ordinal: 2416
        void d_func(void);

    // RVA: 0x970 | Ordinal: 2417
        void d_func(void) const;

    // RVA: 0xA90 | Ordinal: 2705
        void draw(class QPainter *, class QPointF const &, class QPixmap const &, class QRectF const &) const;

    // RVA: 0x1161 | Ordinal: 4450
        void metaObject(void) const;

    // RVA: 0x147A | Ordinal: 5243
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x150D | Ordinal: 5390
        void qt_metacast(char const *);

    // RVA: 0x15A3 | Ordinal: 5540
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x15E9 | Ordinal: 5610
        void radius(void) const;

    // RVA: 0x1843 | Ordinal: 6212
        void setBlurHints(class QFlags<enum QGraphicsBlurEffect::BlurHint>);

    // RVA: 0x1B75 | Ordinal: 7030
        void setRadius(double);

    // RVA: 0x20C9 | Ordinal: 8394
        void tr(char const *, char const *, int);

    // RVA: 0x215C | Ordinal: 8541
        void trUtf8(char const *, char const *, int);

    // RVA: 0x233 | Ordinal: 564
        void _QPixmapBlurFilter(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QPIXMAPBLURFILTER_HPP
