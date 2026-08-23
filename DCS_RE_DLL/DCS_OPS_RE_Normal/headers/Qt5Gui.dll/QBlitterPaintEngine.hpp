#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QBlitterPaintEngine
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QBlitterPaintEngine
{
public:

    // RVA: 0x97 | Ordinal: 152
        void QBlitterPaintEngine(class QBlittablePlatformPixmap *);

    // RVA: 0xA65 | Ordinal: 2662
        void begin(class QPaintDevice *);

    // RVA: 0xB04 | Ordinal: 2821
        void brushChanged(void);

    // RVA: 0xBD1 | Ordinal: 3026
        void clipEnabledChanged(void);

    // RVA: 0xC28 | Ordinal: 3113
        void compositionModeChanged(void);

    // RVA: 0xD17 | Ordinal: 3352
        void d_func(void);

    // RVA: 0xD18 | Ordinal: 3353
        void d_func(void) const;

    // RVA: 0xEA7 | Ordinal: 3752
        void drawCachedGlyphs(int, unsigned int const *, struct QFixedPoint const *, class QFontEngine *);

    // RVA: 0xEB4 | Ordinal: 3765
        void drawEllipse(class QRectF const &);

    // RVA: 0xEC1 | Ordinal: 3778
        void drawImage(class QPointF const &, class QImage const &);

    // RVA: 0xEC2 | Ordinal: 3779
        void drawImage(class QRectF const &, class QImage const &, class QRectF const &, class QFlags<enum Qt::ImageConversionFlag>);

    // RVA: 0xEF5 | Ordinal: 3830
        void drawPixmap(class QPointF const &, class QPixmap const &);

    // RVA: 0xEF6 | Ordinal: 3831
        void drawPixmap(class QRectF const &, class QPixmap const &, class QRectF const &);

    // RVA: 0xF0E | Ordinal: 3855
        void drawPoints(class QPoint const *, int);

    // RVA: 0xF0F | Ordinal: 3856
        void drawPoints(class QPointF const *, int);

    // RVA: 0xF1B | Ordinal: 3868
        void drawPolygon(class QPoint const *, int, enum QPaintEngine::PolygonDrawMode);

    // RVA: 0xF1C | Ordinal: 3869
        void drawPolygon(class QPointF const *, int, enum QPaintEngine::PolygonDrawMode);

    // RVA: 0xF2F | Ordinal: 3888
        void drawRects(class QRect const *, int);

    // RVA: 0xF30 | Ordinal: 3889
        void drawRects(class QRectF const *, int);

    // RVA: 0xF46 | Ordinal: 3911
        void drawStaticTextItem(class QStaticTextItem *);

    // RVA: 0xF52 | Ordinal: 3923
        void drawTextItem(class QPointF const &, class QTextItem const &);

    // RVA: 0xF5C | Ordinal: 3933
        void drawTiledPixmap(class QRectF const &, class QPixmap const &, class QPointF const &);

    // RVA: 0xFA1 | Ordinal: 4002
        void end(void);

    // RVA: 0x1034 | Ordinal: 4149
        void fill(class QVectorPath const &, class QBrush const &);

    // RVA: 0x1040 | Ordinal: 4161
        void fillPath(class QPainterPath const &, struct QSpanData *);

    // RVA: 0x1043 | Ordinal: 4164
        void fillPolygon(class QPointF const *, int, enum QPaintEngine::PolygonDrawMode);

    // RVA: 0x1045 | Ordinal: 4166
        void fillRect(class QRectF const &, class QBrush const &);

    // RVA: 0x1046 | Ordinal: 4167
        void fillRect(class QRectF const &, class QColor const &);

    // RVA: 0x5398 | Ordinal: 21401
        void opacityChanged(void);

    // RVA: 0x5434 | Ordinal: 21557
        void penChanged(void);

    // RVA: 0x56F9 | Ordinal: 22266
        void renderHintsChanged(void);

    // RVA: 0x5BAF | Ordinal: 23472
        void setState(class QPainterState *);

    // RVA: 0x5E20 | Ordinal: 24097
        void stroke(class QVectorPath const &, class QPen const &);

    // RVA: 0x602D | Ordinal: 24622
        void transformChanged(void);

    // RVA: 0x6064 | Ordinal: 24677
        void type(void) const;

    // RVA: 0x419 | Ordinal: 1050
        void _QBlitterPaintEngine(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QBLITTERPAINTENGINE_HPP
