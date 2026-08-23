#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QOpenGL2PaintEngineEx
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QOpenGL2PaintEngineEx
{
public:

    // RVA: 0x18F | Ordinal: 400
        void QOpenGL2PaintEngineEx(void);

    // RVA: 0xA67 | Ordinal: 2664
        void begin(class QPaintDevice *);

    // RVA: 0xA7A | Ordinal: 2683
        void beginNativePainting(void);

    // RVA: 0xB05 | Ordinal: 2822
        void brushChanged(void);

    // RVA: 0xB0A | Ordinal: 2827
        void brushOriginChanged(void);

    // RVA: 0xBC6 | Ordinal: 3015
        void clip(class QVectorPath const &, enum Qt::ClipOperation);

    // RVA: 0xBD2 | Ordinal: 3027
        void clipEnabledChanged(void);

    // RVA: 0xC29 | Ordinal: 3114
        void compositionModeChanged(void);

    // RVA: 0xCC5 | Ordinal: 3270
        void createState(class QPainterState *) const;

    // RVA: 0xD2D | Ordinal: 3374
        void d_func(void);

    // RVA: 0xD2E | Ordinal: 3375
        void d_func(void) const;

    // RVA: 0xEC3 | Ordinal: 3780
        void drawImage(class QRectF const &, class QImage const &, class QRectF const &, class QFlags<enum Qt::ImageConversionFlag>);

    // RVA: 0xEF7 | Ordinal: 3832
        void drawPixmap(class QRectF const &, class QPixmap const &, class QRectF const &);

    // RVA: 0xF07 | Ordinal: 3848
        void drawPixmapFragments(class QPainter::PixmapFragment const *, int, class QPixmap const &, class QFlags<enum QPainter::PixmapFragmentHint>);

    // RVA: 0xF47 | Ordinal: 3912
        void drawStaticTextItem(class QStaticTextItem *);

    // RVA: 0xF53 | Ordinal: 3924
        void drawTextItem(class QPointF const &, class QTextItem const &);

    // RVA: 0xF5B | Ordinal: 3932
        void drawTexture(class QRectF const &, unsigned int, class QSize const &, class QRectF const &);

    // RVA: 0xFA3 | Ordinal: 4004
        void end(void);

    // RVA: 0xFB9 | Ordinal: 4026
        void endNativePainting(void);

    // RVA: 0xFC7 | Ordinal: 4040
        void ensureActive(void);

    // RVA: 0x1039 | Ordinal: 4154
        void fill(class QVectorPath const &, class QBrush const &);

    // RVA: 0x4FAC | Ordinal: 20397
        void invalidateState(void);

    // RVA: 0x504D | Ordinal: 20558
        void isNativePaintingActive(void) const;

    // RVA: 0x5399 | Ordinal: 21402
        void opacityChanged(void);

    // RVA: 0x5435 | Ordinal: 21558
        void penChanged(void);

    // RVA: 0x56FA | Ordinal: 22267
        void renderHintsChanged(void);

    // RVA: 0x5711 | Ordinal: 22290
        void requiresPretransformedGlyphPositions(class QFontEngine *, class QTransform const &) const;

    // RVA: 0x5BB0 | Ordinal: 23473
        void setState(class QPainterState *);

    // RVA: 0x5D0F | Ordinal: 23824
        void shouldDrawCachedGlyphs(class QFontEngine *, class QTransform const &) const;

    // RVA: 0x5D99 | Ordinal: 23962
        void state(void);

    // RVA: 0x5D9A | Ordinal: 23963
        void state(void) const;

    // RVA: 0x5E21 | Ordinal: 24098
        void stroke(class QVectorPath const &, class QPen const &);

    // RVA: 0x602E | Ordinal: 24623
        void transformChanged(void);

    // RVA: 0x6067 | Ordinal: 24680
        void type(void) const;

    // RVA: 0x46C | Ordinal: 1133
        void _QOpenGL2PaintEngineEx(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QOPENGL2PAINTENGINEEX_HPP
