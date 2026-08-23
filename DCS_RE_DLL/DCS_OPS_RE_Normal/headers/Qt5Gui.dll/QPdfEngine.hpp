#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QPdfEngine
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPdfEngine
{
public:

    // RVA: 0x214 | Ordinal: 533
        void QPdfEngine(class QPdfEnginePrivate &);

    // RVA: 0x215 | Ordinal: 534
        void QPdfEngine(void);

    // RVA: 0x979 | Ordinal: 2426
        void addFileAttachment(class QString const &, class QByteArray const &, class QString const &);

    // RVA: 0xA6A | Ordinal: 2667
        void begin(class QPaintDevice *);

    // RVA: 0xD5C | Ordinal: 3421
        void d_func(void);

    // RVA: 0xD5D | Ordinal: 3422
        void d_func(void) const;

    // RVA: 0xE8A | Ordinal: 3723
        void documentXmpMetadata(void) const;

    // RVA: 0xEC0 | Ordinal: 3777
        void drawHyperlink(class QRectF const &, class QUrl const &);

    // RVA: 0xECF | Ordinal: 3792
        void drawImage(class QRectF const &, class QImage const &, class QRectF const &, class QFlags<enum Qt::ImageConversionFlag>);

    // RVA: 0xEE7 | Ordinal: 3816
        void drawLines(class QLineF const *, int);

    // RVA: 0xEEE | Ordinal: 3823
        void drawPath(class QPainterPath const &);

    // RVA: 0xF04 | Ordinal: 3845
        void drawPixmap(class QRectF const &, class QPixmap const &, class QRectF const &);

    // RVA: 0xF18 | Ordinal: 3865
        void drawPoints(class QPointF const *, int);

    // RVA: 0xF25 | Ordinal: 3878
        void drawPolygon(class QPointF const *, int, enum QPaintEngine::PolygonDrawMode);

    // RVA: 0xF39 | Ordinal: 3898
        void drawRects(class QRectF const *, int);

    // RVA: 0xF58 | Ordinal: 3929
        void drawTextItem(class QPointF const &, class QTextItem const &);

    // RVA: 0xF62 | Ordinal: 3939
        void drawTiledPixmap(class QRectF const &, class QPixmap const &, class QPointF const &);

    // RVA: 0xFA6 | Ordinal: 4007
        void end(void);

    // RVA: 0x52A7 | Ordinal: 21160
        void metric(enum QPaintDevice::PaintDeviceMetric) const;

    // RVA: 0x533B | Ordinal: 21308
        void newPage(void);

    // RVA: 0x53D8 | Ordinal: 21465
        void pageLayout(void) const;

    // RVA: 0x572F | Ordinal: 22320
        void resolution(void) const;

    // RVA: 0x588A | Ordinal: 22667
        void setBrush(void);

    // RVA: 0x5951 | Ordinal: 22866
        void setDocumentXmpMetadata(class QByteArray const &);

    // RVA: 0x5AC3 | Ordinal: 23236
        void setOutputFilename(class QString const &);

    // RVA: 0x5ACE | Ordinal: 23247
        void setPageLayout(class QPageLayout const &);

    // RVA: 0x5AD1 | Ordinal: 23250
        void setPageMargins(class QMarginsF const &, enum QPageLayout::Unit);

    // RVA: 0x5AD3 | Ordinal: 23252
        void setPageOrientation(enum QPageLayout::Orientation);

    // RVA: 0x5AD7 | Ordinal: 23256
        void setPageSize(class QPageSize const &);

    // RVA: 0x5AE8 | Ordinal: 23273
        void setPdfVersion(enum QPdfEngine::PdfVersion);

    // RVA: 0x5AED | Ordinal: 23278
        void setPen(void);

    // RVA: 0x5B3C | Ordinal: 23357
        void setResolution(int);

    // RVA: 0x5CE6 | Ordinal: 23783
        void setupGraphicsState(class QFlags<enum QPaintEngine::DirtyFlag>);

    // RVA: 0x606A | Ordinal: 24683
        void type(void) const;

    // RVA: 0x60BB | Ordinal: 24764
        void updateClipPath(class QPainterPath const &, enum Qt::ClipOperation);

    // RVA: 0x60CA | Ordinal: 24779
        void updateState(class QPaintEngineState const &);

    // RVA: 0x4BA | Ordinal: 1211
        void _QPdfEngine(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QPDFENGINE_HPP
