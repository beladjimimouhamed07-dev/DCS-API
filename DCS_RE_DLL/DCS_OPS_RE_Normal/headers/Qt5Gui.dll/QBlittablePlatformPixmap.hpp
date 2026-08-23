#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QBlittablePlatformPixmap
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QBlittablePlatformPixmap
{
public:

    // RVA: 0x96 | Ordinal: 151
        void QBlittablePlatformPixmap(void);

    // RVA: 0xAAA | Ordinal: 2731
        void blittable(void) const;

    // RVA: 0xB0F | Ordinal: 2832
        void buffer(void);

    // RVA: 0xE4C | Ordinal: 3661
        void devicePixelRatio(void) const;

    // RVA: 0x1033 | Ordinal: 4148
        void fill(class QColor const &);

    // RVA: 0x1147 | Ordinal: 4424
        void fromImage(class QImage const &, class QFlags<enum Qt::ImageConversionFlag>);

    // RVA: 0x4E50 | Ordinal: 20049
        void hasAlphaChannel(void) const;

    // RVA: 0x521C | Ordinal: 21021
        void markRasterOverlay(class QPainterPath const &);

    // RVA: 0x521D | Ordinal: 21022
        void markRasterOverlay(class QPointF const &, class QTextItem const &);

    // RVA: 0x521E | Ordinal: 21023
        void markRasterOverlay(class QRectF const &);

    // RVA: 0x521F | Ordinal: 21024
        void markRasterOverlay(class QVectorPath const &);

    // RVA: 0x5220 | Ordinal: 21025
        void markRasterOverlay(class QPoint const *, int);

    // RVA: 0x5221 | Ordinal: 21026
        void markRasterOverlay(class QPointF const *, int);

    // RVA: 0x5222 | Ordinal: 21027
        void markRasterOverlay(class QRect const *, int);

    // RVA: 0x5223 | Ordinal: 21028
        void markRasterOverlay(class QRectF const *, int);

    // RVA: 0x52A1 | Ordinal: 21154
        void metric(enum QPaintDevice::PaintDeviceMetric) const;

    // RVA: 0x53E5 | Ordinal: 21478
        void paintEngine(void) const;

    // RVA: 0x5720 | Ordinal: 22305
        void resize(int, int);

    // RVA: 0x5865 | Ordinal: 22630
        void setBlittable(class QBlittable *);

    // RVA: 0x5943 | Ordinal: 22852
        void setDevicePixelRatio(double);

    // RVA: 0x5F47 | Ordinal: 24392
        void toImage(void) const;

    // RVA: 0x60A6 | Ordinal: 24743
        void unmarkRasterOverlay(class QRectF const &);

    // RVA: 0x418 | Ordinal: 1049
        void _QBlittablePlatformPixmap(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QBLITTABLEPLATFORMPIXMAP_HPP
