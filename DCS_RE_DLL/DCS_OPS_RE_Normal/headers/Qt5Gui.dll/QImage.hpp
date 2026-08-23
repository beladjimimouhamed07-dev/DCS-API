#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QImage
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QImage
{
public:

    // RVA: 0x135 | Ordinal: 310
        void QImage(class QImage &&);

    // RVA: 0x136 | Ordinal: 311
        void QImage(class QImage const &);

    // RVA: 0x137 | Ordinal: 312
        void QImage(class QSize const &, enum QImage::Format);

    // RVA: 0x138 | Ordinal: 313
        void QImage(class QString const &, char const *);

    // RVA: 0x139 | Ordinal: 314
        void QImage(int, int, enum QImage::Format);

    // RVA: 0x13A | Ordinal: 315
        void QImage(unsigned char *, int, int, int, enum QImage::Format, void (__cdecl *)(void *), void *);

    // RVA: 0x13B | Ordinal: 316
        void QImage(unsigned char *, int, int, enum QImage::Format, void (__cdecl *)(void *), void *);

    // RVA: 0x13C | Ordinal: 317
        void QImage(unsigned char const *, int, int, int, enum QImage::Format, void (__cdecl *)(void *), void *);

    // RVA: 0x13D | Ordinal: 318
        void QImage(unsigned char const *, int, int, enum QImage::Format, void (__cdecl *)(void *), void *);

    // RVA: 0x13E | Ordinal: 319
        void QImage(char const *const *const);

    // RVA: 0x13F | Ordinal: 320
        void QImage(void);

    // RVA: 0x9C4 | Ordinal: 2501
        void allGray(void) const;

    // RVA: 0x9D1 | Ordinal: 2514
        void alphaChannel(void) const;

    // RVA: 0xA11 | Ordinal: 2578
        void applyColorTransform(class QColorTransform const &);

    // RVA: 0xA98 | Ordinal: 2713
        void bitPlaneCount(void) const;

    // RVA: 0xA9E | Ordinal: 2719
        void bits(void);

    // RVA: 0xA9F | Ordinal: 2720
        void bits(void) const;

    // RVA: 0xB25 | Ordinal: 2854
        void byteCount(void) const;

    // RVA: 0xB27 | Ordinal: 2856
        void bytesPerLine(void) const;

    // RVA: 0xB2C | Ordinal: 2861
        void cacheKey(void) const;

    // RVA: 0xBF4 | Ordinal: 3061
        void color(int) const;

    // RVA: 0xBF9 | Ordinal: 3066
        void colorCount(void) const;

    // RVA: 0xC01 | Ordinal: 3074
        void colorSpace(void) const;

    // RVA: 0xC03 | Ordinal: 3076
        void colorTable(void) const;

    // RVA: 0xC37 | Ordinal: 3128
        void constBits(void) const;

    // RVA: 0xC3A | Ordinal: 3131
        void constScanLine(int) const;

    // RVA: 0xC5E | Ordinal: 3167
        void convertTo(enum QImage::Format, class QFlags<enum Qt::ImageConversionFlag>);

    // RVA: 0xC5F | Ordinal: 3168
        void convertToColorSpace(class QColorSpace const &);

    // RVA: 0xC60 | Ordinal: 3169
        void convertToFormat(enum QImage::Format, class QVector<unsigned int> const &, class QFlags<enum Qt::ImageConversionFlag>) const;

    // RVA: 0xC61 | Ordinal: 3170
        void convertToFormat(enum QImage::Format, class QFlags<enum Qt::ImageConversionFlag>) const;

    // RVA: 0xC64 | Ordinal: 3173
        void convertToFormat_helper(enum QImage::Format, class QFlags<enum Qt::ImageConversionFlag>) const;

    // RVA: 0xC65 | Ordinal: 3174
        void convertToFormat_inplace(enum QImage::Format, class QFlags<enum Qt::ImageConversionFlag>);

    // RVA: 0xC6A | Ordinal: 3179
        void convertedToColorSpace(class QColorSpace const &) const;

    // RVA: 0xC70 | Ordinal: 3185
        void copy(class QRect const &) const;

    // RVA: 0xC71 | Ordinal: 3186
        void copy(int, int, int, int) const;

    // RVA: 0xC9C | Ordinal: 3229
        void createAlphaMask(class QFlags<enum Qt::ImageConversionFlag>) const;

    // RVA: 0xCA5 | Ordinal: 3238
        void createHeuristicMask(bool) const;

    // RVA: 0xCAC | Ordinal: 3245
        void createMaskFromColor(unsigned int, enum Qt::MaskMode) const;

    // RVA: 0xDB1 | Ordinal: 3506
        void data_ptr(void);

    // RVA: 0xDEA | Ordinal: 3563
        void depth(void) const;

    // RVA: 0xE20 | Ordinal: 3617
        void detach(void);

    // RVA: 0xE33 | Ordinal: 3636
        void devType(void) const;

    // RVA: 0xE4E | Ordinal: 3663
        void devicePixelRatio(void) const;

    // RVA: 0xE92 | Ordinal: 3731
        void dotsPerMeterX(void) const;

    // RVA: 0xE94 | Ordinal: 3733
        void dotsPerMeterY(void) const;

    // RVA: 0x1035 | Ordinal: 4150
        void fill(class QColor const &);

    // RVA: 0x1036 | Ordinal: 4151
        void fill(unsigned int);

    // RVA: 0x1037 | Ordinal: 4152
        void fill(enum Qt::GlobalColor);

    // RVA: 0x10E9 | Ordinal: 4330
        void format(void) const;

    // RVA: 0x1131 | Ordinal: 4402
        void fromData(class QByteArray const &, char const *);

    // RVA: 0x1132 | Ordinal: 4403
        void fromData(unsigned char const *, int, char const *);

    // RVA: 0x4E51 | Ordinal: 20050
        void hasAlphaChannel(void) const;

    // RVA: 0x4E90 | Ordinal: 20113
        void height(void) const;

    // RVA: 0x4FAE | Ordinal: 20399
        void invertPixels(enum QImage::InvertMode);

    // RVA: 0x5004 | Ordinal: 20485
        void isDetached(void) const;

    // RVA: 0x502A | Ordinal: 20523
        void isGrayscale(void) const;

    // RVA: 0x5051 | Ordinal: 20562
        void isNull(void) const;

    // RVA: 0x5180 | Ordinal: 20865
        void load(class QString const &, char const *);

    // RVA: 0x5181 | Ordinal: 20866
        void load(class QIODevice *, char const *);

    // RVA: 0x518A | Ordinal: 20875
        void loadFromData(class QByteArray const &, char const *);

    // RVA: 0x518B | Ordinal: 20876
        void loadFromData(unsigned char const *, int, char const *);

    // RVA: 0x52A2 | Ordinal: 21155
        void metric(enum QPaintDevice::PaintDeviceMetric) const;

    // RVA: 0x52D8 | Ordinal: 21209
        void mirrored(bool, bool) const;

    // RVA: 0x52DB | Ordinal: 21212
        void mirrored_helper(bool, bool) const;

    // RVA: 0x52DC | Ordinal: 21213
        void mirrored_inplace(bool, bool);

    // RVA: 0x5372 | Ordinal: 21363
        void numBytes(void) const;

    // RVA: 0x5373 | Ordinal: 21364
        void numColors(void) const;

    // RVA: 0x538D | Ordinal: 21390
        void offset(void) const;

    // RVA: 0x53E6 | Ordinal: 21479
        void paintEngine(void) const;

    // RVA: 0x544B | Ordinal: 21580
        void pixel(class QPoint const &) const;

    // RVA: 0x544C | Ordinal: 21581
        void pixel(int, int) const;

    // RVA: 0x544D | Ordinal: 21582
        void pixelColor(class QPoint const &) const;

    // RVA: 0x544E | Ordinal: 21583
        void pixelColor(int, int) const;

    // RVA: 0x5451 | Ordinal: 21586
        void pixelFormat(void) const;

    // RVA: 0x5452 | Ordinal: 21587
        void pixelIndex(class QPoint const &) const;

    // RVA: 0x5453 | Ordinal: 21588
        void pixelIndex(int, int) const;

    // RVA: 0x5686 | Ordinal: 22151
        void rect(void) const;

    // RVA: 0x56B0 | Ordinal: 22193
        void reinterpretAsFormat(enum QImage::Format);

    // RVA: 0x575A | Ordinal: 22363
        void rgbSwapped(void) const;

    // RVA: 0x575D | Ordinal: 22366
        void rgbSwapped_helper(void) const;

    // RVA: 0x575E | Ordinal: 22367
        void rgbSwapped_inplace(void);

    // RVA: 0x579D | Ordinal: 22430
        void save(class QString const &, char const *, int) const;

    // RVA: 0x579E | Ordinal: 22431
        void save(class QIODevice *, char const *, int) const;

    // RVA: 0x57B2 | Ordinal: 22451
        void scaled(class QSize const &, enum Qt::AspectRatioMode, enum Qt::TransformationMode) const;

    // RVA: 0x57B3 | Ordinal: 22452
        void scaled(int, int, enum Qt::AspectRatioMode, enum Qt::TransformationMode) const;

    // RVA: 0x57BA | Ordinal: 22459
        void scaledToHeight(int, enum Qt::TransformationMode) const;

    // RVA: 0x57BC | Ordinal: 22461
        void scaledToWidth(int, enum Qt::TransformationMode) const;

    // RVA: 0x57C1 | Ordinal: 22466
        void scanLine(int);

    // RVA: 0x57C2 | Ordinal: 22467
        void scanLine(int) const;

    // RVA: 0x57FF | Ordinal: 22528
        void serialNumber(void) const;

    // RVA: 0x5824 | Ordinal: 22565
        void setAlphaChannel(class QImage const &);

    // RVA: 0x58B8 | Ordinal: 22713
        void setColor(int, unsigned int);

    // RVA: 0x58BE | Ordinal: 22719
        void setColorCount(int);

    // RVA: 0x58C2 | Ordinal: 22723
        void setColorSpace(class QColorSpace const &);

    // RVA: 0x58C4 | Ordinal: 22725
        void setColorTable(class QVector<unsigned int>);

    // RVA: 0x5944 | Ordinal: 22853
        void setDevicePixelRatio(double);

    // RVA: 0x5953 | Ordinal: 22868
        void setDotsPerMeterX(int);

    // RVA: 0x5955 | Ordinal: 22870
        void setDotsPerMeterY(int);

    // RVA: 0x5A9F | Ordinal: 23200
        void setNumColors(int);

    // RVA: 0x5AA9 | Ordinal: 23210
        void setOffset(class QPoint const &);

    // RVA: 0x5AF0 | Ordinal: 23281
        void setPixel(class QPoint const &, unsigned int);

    // RVA: 0x5AF1 | Ordinal: 23282
        void setPixel(int, int, unsigned int);

    // RVA: 0x5AF2 | Ordinal: 23283
        void setPixelColor(class QPoint const &, class QColor const &);

    // RVA: 0x5AF3 | Ordinal: 23284
        void setPixelColor(int, int, class QColor const &);

    // RVA: 0x5BEC | Ordinal: 23533
        void setText(class QString const &, class QString const &);

    // RVA: 0x5BED | Ordinal: 23534
        void setText(char const *, char const *, class QString const &);

    // RVA: 0x5D2F | Ordinal: 23856
        void size(void) const;

    // RVA: 0x5D45 | Ordinal: 23878
        void sizeInBytes(void) const;

    // RVA: 0x5D58 | Ordinal: 23897
        void smoothScaled(int, int) const;

    // RVA: 0x5E83 | Ordinal: 24196
        void swap(class QImage &);

    // RVA: 0x5EEC | Ordinal: 24301
        void text(class QString const &) const;

    // RVA: 0x5EED | Ordinal: 24302
        void text(class QImageTextKeyLang const &) const;

    // RVA: 0x5EEE | Ordinal: 24303
        void text(char const *, char const *) const;

    // RVA: 0x5F06 | Ordinal: 24327
        void textKeys(void) const;

    // RVA: 0x5F08 | Ordinal: 24329
        void textLanguages(void) const;

    // RVA: 0x5F0A | Ordinal: 24331
        void textList(void) const;

    // RVA: 0x5F51 | Ordinal: 24402
        void toImageFormat(class QPixelFormat);

    // RVA: 0x5F5C | Ordinal: 24413
        void toPixelFormat(enum QImage::Format);

    // RVA: 0x6035 | Ordinal: 24630
        void transformed(class QMatrix const &, enum Qt::TransformationMode) const;

    // RVA: 0x6036 | Ordinal: 24631
        void transformed(class QTransform const &, enum Qt::TransformationMode) const;

    // RVA: 0x605B | Ordinal: 24668
        void trueMatrix(class QMatrix const &, int, int);

    // RVA: 0x605C | Ordinal: 24669
        void trueMatrix(class QTransform const &, int, int);

    // RVA: 0x60E8 | Ordinal: 24809
        void valid(class QPoint const &) const;

    // RVA: 0x60E9 | Ordinal: 24810
        void valid(int, int) const;

    // RVA: 0x614F | Ordinal: 24912
        void width(void) const;

    // RVA: 0x450 | Ordinal: 1105
        void _QImage(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QIMAGE_HPP
