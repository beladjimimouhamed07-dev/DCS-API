#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QRasterPlatformPixmap
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QRasterPlatformPixmap
{
public:

    // RVA: 0x280 | Ordinal: 641
        void QRasterPlatformPixmap(class QRasterPlatformPixmap const &);

    // RVA: 0x281 | Ordinal: 642
        void QRasterPlatformPixmap(enum QPlatformPixmap::PixelType);

    // RVA: 0xB11 | Ordinal: 2834
        void buffer(void);

    // RVA: 0xC75 | Ordinal: 3190
        void copy(class QPlatformPixmap const *, class QRect const &);

    // RVA: 0xCA0 | Ordinal: 3233
        void createCompatiblePlatformPixmap(void) const;

    // RVA: 0xCB6 | Ordinal: 3255
        void createPixmapForImage(class QImage, class QFlags<enum Qt::ImageConversionFlag>);

    // RVA: 0xE53 | Ordinal: 3668
        void devicePixelRatio(void) const;

    // RVA: 0x103E | Ordinal: 4159
        void fill(class QColor const &);

    // RVA: 0x1134 | Ordinal: 4405
        void fromData(unsigned char const *, unsigned int, char const *, class QFlags<enum Qt::ImageConversionFlag>);

    // RVA: 0x114A | Ordinal: 4427
        void fromImage(class QImage const &, class QFlags<enum Qt::ImageConversionFlag>);

    // RVA: 0x114D | Ordinal: 4430
        void fromImageInPlace(class QImage &, class QFlags<enum Qt::ImageConversionFlag>);

    // RVA: 0x1150 | Ordinal: 4433
        void fromImageReader(class QImageReader *, class QFlags<enum Qt::ImageConversionFlag>);

    // RVA: 0x4E53 | Ordinal: 20052
        void hasAlphaChannel(void) const;

    // RVA: 0x52AB | Ordinal: 21164
        void metric(enum QPaintDevice::PaintDeviceMetric) const;

    // RVA: 0x53ED | Ordinal: 21486
        void paintEngine(void) const;

    // RVA: 0x5721 | Ordinal: 22306
        void resize(int, int);

    // RVA: 0x57E5 | Ordinal: 22502
        void scroll(int, int, class QRect const &);

    // RVA: 0x5947 | Ordinal: 22856
        void setDevicePixelRatio(double);

    // RVA: 0x5EA3 | Ordinal: 24228
        void systemNativeFormat(void);

    // RVA: 0x5F4F | Ordinal: 24400
        void toImage(class QRect const &) const;

    // RVA: 0x5F50 | Ordinal: 24401
        void toImage(void) const;

    // RVA: 0x4EC | Ordinal: 1261
        void _QRasterPlatformPixmap(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QRASTERPLATFORMPIXMAP_HPP
