#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Svg.dll
// Class: QSvgRenderer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QSvgRenderer
{
public:

    // RVA: 0x52 | Ordinal: 83
        void QSvgRenderer(class QByteArray const &, class QObject *);

    // RVA: 0x53 | Ordinal: 84
        void QSvgRenderer(class QString const &, class QObject *);

    // RVA: 0x54 | Ordinal: 85
        void QSvgRenderer(class QObject *);

    // RVA: 0x55 | Ordinal: 86
        void QSvgRenderer(class QXmlStreamReader *, class QObject *);

    // RVA: 0x118 | Ordinal: 281
        void animated(void) const;

    // RVA: 0x11B | Ordinal: 284
        void animationDuration(void) const;

    // RVA: 0x12B | Ordinal: 300
        void aspectRatioMode(void) const;

    // RVA: 0x137 | Ordinal: 312
        void boundsOnElement(class QString const &) const;

    // RVA: 0x140 | Ordinal: 321
        void currentFrame(void) const;

    // RVA: 0x146 | Ordinal: 327
        void d_func(void);

    // RVA: 0x147 | Ordinal: 328
        void d_func(void) const;

    // RVA: 0x14C | Ordinal: 333
        void defaultSize(void) const;

    // RVA: 0x167 | Ordinal: 360
        void elementExists(class QString const &) const;

    // RVA: 0x170 | Ordinal: 369
        void framesPerSecond(void) const;

    // RVA: 0x17E | Ordinal: 383
        void isValid(void) const;

    // RVA: 0x181 | Ordinal: 386
        void load(class QByteArray const &);

    // RVA: 0x182 | Ordinal: 387
        void load(class QString const &);

    // RVA: 0x183 | Ordinal: 388
        void load(class QXmlStreamReader *);

    // RVA: 0x18A | Ordinal: 395
        void matrixForElement(class QString const &) const;

    // RVA: 0x18D | Ordinal: 398
        void metaObject(void) const;

    // RVA: 0x1A8 | Ordinal: 425
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1AB | Ordinal: 428
        void qt_metacast(char const *);

    // RVA: 0x1AE | Ordinal: 431
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1B3 | Ordinal: 436
        void render(class QPainter *);

    // RVA: 0x1B4 | Ordinal: 437
        void render(class QPainter *, class QRectF const &);

    // RVA: 0x1B5 | Ordinal: 438
        void render(class QPainter *, class QString const &, class QRectF const &);

    // RVA: 0x1B9 | Ordinal: 442
        void repaintNeeded(void);

    // RVA: 0x1D9 | Ordinal: 474
        void setAspectRatioMode(enum Qt::AspectRatioMode);

    // RVA: 0x1DC | Ordinal: 477
        void setCurrentFrame(int);

    // RVA: 0x1EB | Ordinal: 492
        void setFramesPerSecond(int);

    // RVA: 0x216 | Ordinal: 535
        void setViewBox(class QRect const &);

    // RVA: 0x217 | Ordinal: 536
        void setViewBox(class QRectF const &);

    // RVA: 0x233 | Ordinal: 564
        void tr(char const *, char const *, int);

    // RVA: 0x236 | Ordinal: 567
        void trUtf8(char const *, char const *, int);

    // RVA: 0x239 | Ordinal: 570
        void transformForElement(class QString const &) const;

    // RVA: 0x25B | Ordinal: 604
        void viewBox(void) const;

    // RVA: 0x25E | Ordinal: 607
        void viewBoxF(void) const;

    // RVA: 0x8F | Ordinal: 144
        void _QSvgRenderer(void);
};

// DCS_OPS_RE_QT5SVG.DLL_QSVGRENDERER_HPP
