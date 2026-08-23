#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QPaintEngine
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPaintEngine
{
public:

    // RVA: 0x1F6 | Ordinal: 503
        void QPaintEngine(class QPaintEnginePrivate &, class QFlags<enum QPaintEngine::PaintEngineFeature>);

    // RVA: 0x1F7 | Ordinal: 504
        void QPaintEngine(class QFlags<enum QPaintEngine::PaintEngineFeature>);

    // RVA: 0xA39 | Ordinal: 2618
        void autoDestruct(void) const;

    // RVA: 0xBB1 | Ordinal: 2994
        void clearDirty(class QFlags<enum QPaintEngine::DirtyFlag>);

    // RVA: 0xC6C | Ordinal: 3181
        void coordinateOffset(void) const;

    // RVA: 0xD53 | Ordinal: 3412
        void d_func(void);

    // RVA: 0xD54 | Ordinal: 3413
        void d_func(void) const;

    // RVA: 0xEB5 | Ordinal: 3766
        void drawEllipse(class QRect const &);

    // RVA: 0xEB6 | Ordinal: 3767
        void drawEllipse(class QRectF const &);

    // RVA: 0xEC4 | Ordinal: 3781
        void drawImage(class QRectF const &, class QImage const &, class QRectF const &, class QFlags<enum Qt::ImageConversionFlag>);

    // RVA: 0xEDB | Ordinal: 3804
        void drawLines(class QLine const *, int);

    // RVA: 0xEDC | Ordinal: 3805
        void drawLines(class QLineF const *, int);

    // RVA: 0xEEB | Ordinal: 3820
        void drawPath(class QPainterPath const &);

    // RVA: 0xF10 | Ordinal: 3857
        void drawPoints(class QPoint const *, int);

    // RVA: 0xF11 | Ordinal: 3858
        void drawPoints(class QPointF const *, int);

    // RVA: 0xF1D | Ordinal: 3870
        void drawPolygon(class QPoint const *, int, enum QPaintEngine::PolygonDrawMode);

    // RVA: 0xF1E | Ordinal: 3871
        void drawPolygon(class QPointF const *, int, enum QPaintEngine::PolygonDrawMode);

    // RVA: 0xF31 | Ordinal: 3890
        void drawRects(class QRect const *, int);

    // RVA: 0xF32 | Ordinal: 3891
        void drawRects(class QRectF const *, int);

    // RVA: 0xF54 | Ordinal: 3925
        void drawTextItem(class QPointF const &, class QTextItem const &);

    // RVA: 0xF5D | Ordinal: 3934
        void drawTiledPixmap(class QRectF const &, class QPixmap const &, class QPointF const &);

    // RVA: 0x108C | Ordinal: 4237
        void fix_neg_rect(int *, int *, int *, int *);

    // RVA: 0x4E66 | Ordinal: 20071
        void hasFeature(class QFlags<enum QPaintEngine::PaintEngineFeature>) const;

    // RVA: 0x4FBD | Ordinal: 20414
        void isActive(void) const;

    // RVA: 0x5021 | Ordinal: 20514
        void isExtended(void) const;

    // RVA: 0x53E4 | Ordinal: 21477
        void paintDevice(void) const;

    // RVA: 0x53F9 | Ordinal: 21498
        void painter(void) const;

    // RVA: 0x5816 | Ordinal: 22551
        void setActive(bool);

    // RVA: 0x5852 | Ordinal: 22611
        void setAutoDestruct(bool);

    // RVA: 0x5949 | Ordinal: 22858
        void setDirty(class QFlags<enum QPaintEngine::DirtyFlag>);

    // RVA: 0x5ADD | Ordinal: 23262
        void setPaintDevice(class QPaintDevice *);

    // RVA: 0x5BD9 | Ordinal: 23514
        void setSystemClip(class QRegion const &);

    // RVA: 0x5BDA | Ordinal: 23515
        void setSystemRect(class QRect const &);

    // RVA: 0x5E9E | Ordinal: 24223
        void syncState(void);

    // RVA: 0x5EA1 | Ordinal: 24226
        void systemClip(void) const;

    // RVA: 0x5EA4 | Ordinal: 24229
        void systemRect(void) const;

    // RVA: 0x5ED1 | Ordinal: 24274
        void testDirty(class QFlags<enum QPaintEngine::DirtyFlag>);

    // RVA: 0x4AF | Ordinal: 1200
        void _QPaintEngine(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QPAINTENGINE_HPP
