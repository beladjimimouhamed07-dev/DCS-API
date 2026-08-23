#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QPixmap
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPixmap
{
public:

    // RVA: 0x226 | Ordinal: 551
        void QPixmap(class QSize const &, int);

    // RVA: 0x227 | Ordinal: 552
        void QPixmap(class QPixmap const &);

    // RVA: 0x228 | Ordinal: 553
        void QPixmap(class QSize const &);

    // RVA: 0x229 | Ordinal: 554
        void QPixmap(class QString const &, char const *, class QFlags<enum Qt::ImageConversionFlag>);

    // RVA: 0x22A | Ordinal: 555
        void QPixmap(int, int);

    // RVA: 0x22B | Ordinal: 556
        void QPixmap(class QPlatformPixmap *);

    // RVA: 0x22C | Ordinal: 557
        void QPixmap(char const *const *const);

    // RVA: 0x22D | Ordinal: 558
        void QPixmap(void);

    // RVA: 0x9D2 | Ordinal: 2515
        void alphaChannel(void) const;

    // RVA: 0xB2E | Ordinal: 2863
        void cacheKey(void) const;

    // RVA: 0xC5A | Ordinal: 3163
        void convertFromImage(class QImage const &, class QFlags<enum Qt::ImageConversionFlag>);

    // RVA: 0xC72 | Ordinal: 3187
        void copy(class QRect const &) const;

    // RVA: 0xC73 | Ordinal: 3188
        void copy(int, int, int, int) const;

    // RVA: 0xCA6 | Ordinal: 3239
        void createHeuristicMask(bool) const;

    // RVA: 0xCAD | Ordinal: 3246
        void createMaskFromColor(class QColor const &, enum Qt::MaskMode) const;

    // RVA: 0xDB5 | Ordinal: 3510
        void data_ptr(void);

    // RVA: 0xDC5 | Ordinal: 3526
        void defaultDepth(void);

    // RVA: 0xDED | Ordinal: 3566
        void depth(void) const;

    // RVA: 0xE26 | Ordinal: 3623
        void detach(void);

    // RVA: 0xE37 | Ordinal: 3640
        void devType(void) const;

    // RVA: 0xE50 | Ordinal: 3665
        void devicePixelRatio(void) const;

    // RVA: 0xE73 | Ordinal: 3700
        void doImageIO(class QImageWriter *, int) const;

    // RVA: 0xE74 | Ordinal: 3701
        void doInit(int, int, int);

    // RVA: 0x103A | Ordinal: 4155
        void fill(class QColor const &);

    // RVA: 0x103B | Ordinal: 4156
        void fill(class QPaintDevice const *, class QPoint const &);

    // RVA: 0x103C | Ordinal: 4157
        void fill(class QPaintDevice const *, int, int);

    // RVA: 0x1148 | Ordinal: 4425
        void fromImage(class QImage &&, class QFlags<enum Qt::ImageConversionFlag>);

    // RVA: 0x1149 | Ordinal: 4426
        void fromImage(class QImage const &, class QFlags<enum Qt::ImageConversionFlag>);

    // RVA: 0x114B | Ordinal: 4428
        void fromImageInPlace(class QImage &, class QFlags<enum Qt::ImageConversionFlag>);

    // RVA: 0x114E | Ordinal: 4431
        void fromImageReader(class QImageReader *, class QFlags<enum Qt::ImageConversionFlag>);

    // RVA: 0x4E09 | Ordinal: 19978
        void grabWidget(class QObject *, class QRect const &);

    // RVA: 0x4E0A | Ordinal: 19979
        void grabWidget(class QObject *, int, int, int, int);

    // RVA: 0x4E0B | Ordinal: 19980
        void grabWindow(unsigned __int64, int, int, int, int);

    // RVA: 0x4E1C | Ordinal: 19997
        void handle(void) const;

    // RVA: 0x4E4E | Ordinal: 20047
        void hasAlpha(void) const;

    // RVA: 0x4E52 | Ordinal: 20051
        void hasAlphaChannel(void) const;

    // RVA: 0x4E95 | Ordinal: 20118
        void height(void) const;

    // RVA: 0x5008 | Ordinal: 20489
        void isDetached(void) const;

    // RVA: 0x5053 | Ordinal: 20564
        void isNull(void) const;

    // RVA: 0x5069 | Ordinal: 20586
        void isQBitmap(void) const;

    // RVA: 0x5184 | Ordinal: 20869
        void load(class QString const &, char const *, class QFlags<enum Qt::ImageConversionFlag>);

    // RVA: 0x518C | Ordinal: 20877
        void loadFromData(class QByteArray const &, char const *, class QFlags<enum Qt::ImageConversionFlag>);

    // RVA: 0x518D | Ordinal: 20878
        void loadFromData(unsigned char const *, unsigned int, char const *, class QFlags<enum Qt::ImageConversionFlag>);

    // RVA: 0x5228 | Ordinal: 21033
        void mask(void) const;

    // RVA: 0x52AA | Ordinal: 21163
        void metric(enum QPaintDevice::PaintDeviceMetric) const;

    // RVA: 0x53EC | Ordinal: 21485
        void paintEngine(void) const;

    // RVA: 0x5689 | Ordinal: 22154
        void rect(void) const;

    // RVA: 0x57A2 | Ordinal: 22435
        void save(class QString const &, char const *, int) const;

    // RVA: 0x57A3 | Ordinal: 22436
        void save(class QIODevice *, char const *, int) const;

    // RVA: 0x57B4 | Ordinal: 22453
        void scaled(class QSize const &, enum Qt::AspectRatioMode, enum Qt::TransformationMode) const;

    // RVA: 0x57B5 | Ordinal: 22454
        void scaled(int, int, enum Qt::AspectRatioMode, enum Qt::TransformationMode) const;

    // RVA: 0x57BB | Ordinal: 22460
        void scaledToHeight(int, enum Qt::TransformationMode) const;

    // RVA: 0x57BD | Ordinal: 22462
        void scaledToWidth(int, enum Qt::TransformationMode) const;

    // RVA: 0x57E1 | Ordinal: 22498
        void scroll(int, int, class QRect const &, class QRegion *);

    // RVA: 0x57E2 | Ordinal: 22499
        void scroll(int, int, int, int, int, int, class QRegion *);

    // RVA: 0x5802 | Ordinal: 22531
        void serialNumber(void) const;

    // RVA: 0x5825 | Ordinal: 22566
        void setAlphaChannel(class QPixmap const &);

    // RVA: 0x5946 | Ordinal: 22855
        void setDevicePixelRatio(double);

    // RVA: 0x5A55 | Ordinal: 23126
        void setMask(class QBitmap const &);

    // RVA: 0x5D38 | Ordinal: 23865
        void size(void) const;

    // RVA: 0x5E8D | Ordinal: 24206
        void swap(class QPixmap &);

    // RVA: 0x5F4C | Ordinal: 24397
        void toImage(void) const;

    // RVA: 0x6037 | Ordinal: 24632
        void transformed(class QMatrix const &, enum Qt::TransformationMode) const;

    // RVA: 0x6038 | Ordinal: 24633
        void transformed(class QTransform const &, enum Qt::TransformationMode) const;

    // RVA: 0x605D | Ordinal: 24670
        void trueMatrix(class QMatrix const &, int, int);

    // RVA: 0x605E | Ordinal: 24671
        void trueMatrix(class QTransform const &, int, int);

    // RVA: 0x6156 | Ordinal: 24919
        void width(void) const;

    // RVA: 0x4C1 | Ordinal: 1218
        void _QPixmap(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QPIXMAP_HPP
