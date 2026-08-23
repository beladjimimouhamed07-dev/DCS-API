#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QPaintEngineEx
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPaintEngineEx
{
public:

    // RVA: 0x1F8 | Ordinal: 505
        void QPaintEngineEx(class QPaintEngineExPrivate &);

    // RVA: 0x1F9 | Ordinal: 506
        void QPaintEngineEx(void);

    // RVA: 0xA7B | Ordinal: 2684
        void beginNativePainting(void);

    // RVA: 0xBC7 | Ordinal: 3016
        void clip(class QPainterPath const &, enum Qt::ClipOperation);

    // RVA: 0xBC8 | Ordinal: 3017
        void clip(class QRect const &, enum Qt::ClipOperation);

    // RVA: 0xBC9 | Ordinal: 3018
        void clip(class QRegion const &, enum Qt::ClipOperation);

    // RVA: 0xCC6 | Ordinal: 3271
        void createState(class QPainterState *) const;

    // RVA: 0xD55 | Ordinal: 3414
        void d_func(void);

    // RVA: 0xD56 | Ordinal: 3415
        void d_func(void) const;

    // RVA: 0xE9C | Ordinal: 3741
        void draw(class QVectorPath const &);

    // RVA: 0xEB7 | Ordinal: 3768
        void drawEllipse(class QRect const &);

    // RVA: 0xEB8 | Ordinal: 3769
        void drawEllipse(class QRectF const &);

    // RVA: 0xEC5 | Ordinal: 3782
        void drawImage(class QPointF const &, class QImage const &);

    // RVA: 0xEDD | Ordinal: 3806
        void drawLines(class QLine const *, int);

    // RVA: 0xEDE | Ordinal: 3807
        void drawLines(class QLineF const *, int);

    // RVA: 0xEEC | Ordinal: 3821
        void drawPath(class QPainterPath const &);

    // RVA: 0xEF8 | Ordinal: 3833
        void drawPixmap(class QPointF const &, class QPixmap const &);

    // RVA: 0xF08 | Ordinal: 3849
        void drawPixmapFragments(class QPainter::PixmapFragment const *, int, class QPixmap const &, class QFlags<enum QPainter::PixmapFragmentHint>);

    // RVA: 0xF12 | Ordinal: 3859
        void drawPoints(class QPoint const *, int);

    // RVA: 0xF13 | Ordinal: 3860
        void drawPoints(class QPointF const *, int);

    // RVA: 0xF1F | Ordinal: 3872
        void drawPolygon(class QPoint const *, int, enum QPaintEngine::PolygonDrawMode);

    // RVA: 0xF20 | Ordinal: 3873
        void drawPolygon(class QPointF const *, int, enum QPaintEngine::PolygonDrawMode);

    // RVA: 0xF33 | Ordinal: 3892
        void drawRects(class QRect const *, int);

    // RVA: 0xF34 | Ordinal: 3893
        void drawRects(class QRectF const *, int);

    // RVA: 0xF3F | Ordinal: 3904
        void drawRoundedRect(class QRectF const &, double, double, enum Qt::SizeMode);

    // RVA: 0xF48 | Ordinal: 3913
        void drawStaticTextItem(class QStaticTextItem *);

    // RVA: 0xF5E | Ordinal: 3935
        void drawTiledPixmap(class QRectF const &, class QPixmap const &, class QPointF const &);

    // RVA: 0xFBA | Ordinal: 4027
        void endNativePainting(void);

    // RVA: 0x1047 | Ordinal: 4168
        void fillRect(class QRectF const &, class QBrush const &);

    // RVA: 0x1048 | Ordinal: 4169
        void fillRect(class QRectF const &, class QColor const &);

    // RVA: 0x1093 | Ordinal: 4244
        void flags(void) const;

    // RVA: 0x5712 | Ordinal: 22291
        void requiresPretransformedGlyphPositions(class QFontEngine *, class QTransform const &) const;

    // RVA: 0x5BB1 | Ordinal: 23474
        void setState(class QPainterState *);

    // RVA: 0x5D10 | Ordinal: 23825
        void shouldDrawCachedGlyphs(class QFontEngine *, class QTransform const &) const;

    // RVA: 0x5D9B | Ordinal: 23964
        void state(void);

    // RVA: 0x5D9C | Ordinal: 23965
        void state(void) const;

    // RVA: 0x5E22 | Ordinal: 24099
        void stroke(class QVectorPath const &, class QPen const &);

    // RVA: 0x5E9C | Ordinal: 24221
        void sync(void);

    // RVA: 0x60C9 | Ordinal: 24778
        void updateState(class QPaintEngineState const &);

    // RVA: 0x4B0 | Ordinal: 1201
        void _QPaintEngineEx(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QPAINTENGINEEX_HPP
