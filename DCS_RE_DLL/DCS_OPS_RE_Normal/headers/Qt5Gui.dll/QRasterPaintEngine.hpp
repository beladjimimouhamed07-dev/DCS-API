#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QRasterPaintEngine
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QRasterPaintEngine
{
public:

    // RVA: 0x27E | Ordinal: 639
        void QRasterPaintEngine(class QRasterPaintEnginePrivate &, class QPaintDevice *);

    // RVA: 0x27F | Ordinal: 640
        void QRasterPaintEngine(class QPaintDevice *);

    // RVA: 0x9E0 | Ordinal: 2529
        void alphaPenBlt(void const *, int, int, int, int, int, int, bool);

    // RVA: 0xA6B | Ordinal: 2668
        void begin(class QPaintDevice *);

    // RVA: 0xB06 | Ordinal: 2823
        void brushChanged(void);

    // RVA: 0xB0B | Ordinal: 2828
        void brushOriginChanged(void);

    // RVA: 0xBC2 | Ordinal: 3011
        void clearTypeFontsEnabled(void);

    // RVA: 0xBCB | Ordinal: 3020
        void clip(class QRect const &, enum Qt::ClipOperation);

    // RVA: 0xBCC | Ordinal: 3021
        void clip(class QRegion const &, enum Qt::ClipOperation);

    // RVA: 0xBCD | Ordinal: 3022
        void clip(class QVectorPath const &, enum Qt::ClipOperation);

    // RVA: 0xBCF | Ordinal: 3024
        void clipBoundingRect(void) const;

    // RVA: 0xBD0 | Ordinal: 3025
        void clipData(void) const;

    // RVA: 0xBD3 | Ordinal: 3028
        void clipEnabledChanged(void);

    // RVA: 0xBDD | Ordinal: 3038
        void clipType(void) const;

    // RVA: 0xC2A | Ordinal: 3115
        void compositionModeChanged(void);

    // RVA: 0xC6D | Ordinal: 3182
        void coordinateOffset(void) const;

    // RVA: 0xCC7 | Ordinal: 3272
        void createState(class QPainterState *) const;

    // RVA: 0xD72 | Ordinal: 3443
        void d_func(void);

    // RVA: 0xD73 | Ordinal: 3444
        void d_func(void) const;

    // RVA: 0xEA4 | Ordinal: 3749
        void drawBitmap(class QPointF const &, class QImage const &, struct QSpanData *);

    // RVA: 0xEA8 | Ordinal: 3753
        void drawCachedGlyphs(int, unsigned int const *, struct QFixedPoint const *, class QFontEngine *);

    // RVA: 0xEBE | Ordinal: 3775
        void drawEllipse(class QRectF const &);

    // RVA: 0xED0 | Ordinal: 3793
        void drawImage(class QPointF const &, class QImage const &);

    // RVA: 0xED1 | Ordinal: 3794
        void drawImage(class QRectF const &, class QImage const &, class QRectF const &, class QFlags<enum Qt::ImageConversionFlag>);

    // RVA: 0xEE8 | Ordinal: 3817
        void drawLines(class QLine const *, int);

    // RVA: 0xEE9 | Ordinal: 3818
        void drawLines(class QLineF const *, int);

    // RVA: 0xF05 | Ordinal: 3846
        void drawPixmap(class QPointF const &, class QPixmap const &);

    // RVA: 0xF06 | Ordinal: 3847
        void drawPixmap(class QRectF const &, class QPixmap const &, class QRectF const &);

    // RVA: 0xF19 | Ordinal: 3866
        void drawPoints(class QPoint const *, int);

    // RVA: 0xF1A | Ordinal: 3867
        void drawPoints(class QPointF const *, int);

    // RVA: 0xF26 | Ordinal: 3879
        void drawPolygon(class QPoint const *, int, enum QPaintEngine::PolygonDrawMode);

    // RVA: 0xF27 | Ordinal: 3880
        void drawPolygon(class QPointF const *, int, enum QPaintEngine::PolygonDrawMode);

    // RVA: 0xF3A | Ordinal: 3899
        void drawRects(class QRect const *, int);

    // RVA: 0xF3B | Ordinal: 3900
        void drawRects(class QRectF const *, int);

    // RVA: 0xF49 | Ordinal: 3914
        void drawStaticTextItem(class QStaticTextItem *);

    // RVA: 0xF5A | Ordinal: 3931
        void drawTextItem(class QPointF const &, class QTextItem const &);

    // RVA: 0xF63 | Ordinal: 3940
        void drawTiledPixmap(class QRectF const &, class QPixmap const &, class QPointF const &);

    // RVA: 0xFA7 | Ordinal: 4008
        void end(void);

    // RVA: 0xFC9 | Ordinal: 4042
        void ensureBrush(class QBrush const &);

    // RVA: 0xFCA | Ordinal: 4043
        void ensureBrush(void);

    // RVA: 0xFD6 | Ordinal: 4055
        void ensureOutlineMapper(void);

    // RVA: 0xFD7 | Ordinal: 4056
        void ensurePen(class QPen const &);

    // RVA: 0xFD8 | Ordinal: 4057
        void ensurePen(void);

    // RVA: 0xFD9 | Ordinal: 4058
        void ensureRasterState(void);

    // RVA: 0x103D | Ordinal: 4158
        void fill(class QVectorPath const &, class QBrush const &);

    // RVA: 0x1042 | Ordinal: 4163
        void fillPath(class QPainterPath const &, struct QSpanData *);

    // RVA: 0x1044 | Ordinal: 4165
        void fillPolygon(class QPointF const *, int, enum QPaintEngine::PolygonDrawMode);

    // RVA: 0x1058 | Ordinal: 4185
        void fillRect(class QRectF const &, struct QSpanData *);

    // RVA: 0x1059 | Ordinal: 4186
        void fillRect(class QRectF const &, class QBrush const &);

    // RVA: 0x105A | Ordinal: 4187
        void fillRect(class QRectF const &, class QColor const &);

    // RVA: 0x119F | Ordinal: 4512
        void getDC(void) const;

    // RVA: 0x4F06 | Ordinal: 20231
        void init(void);

    // RVA: 0x539A | Ordinal: 21403
        void opacityChanged(void);

    // RVA: 0x5436 | Ordinal: 21559
        void penChanged(void);

    // RVA: 0x5666 | Ordinal: 22119
        void rasterBuffer(void);

    // RVA: 0x56C1 | Ordinal: 22210
        void releaseDC(struct HDC__*) const;

    // RVA: 0x56FB | Ordinal: 22268
        void renderHintsChanged(void);

    // RVA: 0x5713 | Ordinal: 22292
        void requiresPretransformedGlyphPositions(class QFontEngine *, class QTransform const &) const;

    // RVA: 0x58B0 | Ordinal: 22705
        void setClipRectInDeviceCoords(class QRect const &, enum Qt::ClipOperation);

    // RVA: 0x58F6 | Ordinal: 22775
        void setDC(struct HDC__*);

    // RVA: 0x5BB2 | Ordinal: 23475
        void setState(class QPainterState *);

    // RVA: 0x5D11 | Ordinal: 23826
        void shouldDrawCachedGlyphs(class QFontEngine *, class QTransform const &) const;

    // RVA: 0x5D9E | Ordinal: 23967
        void state(void);

    // RVA: 0x5D9F | Ordinal: 23968
        void state(void) const;

    // RVA: 0x5E23 | Ordinal: 24100
        void stroke(class QVectorPath const &, class QPen const &);

    // RVA: 0x5F5B | Ordinal: 24412
        void toNormalizedFillRect(class QRectF const &);

    // RVA: 0x602F | Ordinal: 24624
        void transformChanged(void);

    // RVA: 0x606B | Ordinal: 24684
        void type(void) const;

    // RVA: 0x60BA | Ordinal: 24763
        void updateBrush(class QBrush const &);

    // RVA: 0x60C3 | Ordinal: 24772
        void updateMatrix(class QTransform const &);

    // RVA: 0x60C4 | Ordinal: 24773
        void updateOutlineMapper(void);

    // RVA: 0x60C6 | Ordinal: 24775
        void updatePen(class QPen const &);

    // RVA: 0x60C7 | Ordinal: 24776
        void updateRasterState(void);

    // RVA: 0x4EB | Ordinal: 1260
        void _QRasterPaintEngine(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QRASTERPAINTENGINE_HPP
