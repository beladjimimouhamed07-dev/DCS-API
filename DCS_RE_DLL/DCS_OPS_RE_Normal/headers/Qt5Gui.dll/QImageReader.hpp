#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QImageReader
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QImageReader
{
public:

    // RVA: 0x148 | Ordinal: 329
        void QImageReader(class QString const &, class QByteArray const &);

    // RVA: 0x149 | Ordinal: 330
        void QImageReader(class QIODevice *, class QByteArray const &);

    // RVA: 0x14A | Ordinal: 331
        void QImageReader(void);

    // RVA: 0xA3A | Ordinal: 2619
        void autoDetectImageFormat(void) const;

    // RVA: 0xA3B | Ordinal: 2620
        void autoTransform(void) const;

    // RVA: 0xA58 | Ordinal: 2649
        void backgroundColor(void) const;

    // RVA: 0xB3A | Ordinal: 2875
        void canRead(void) const;

    // RVA: 0xBD7 | Ordinal: 3032
        void clipRect(void) const;

    // RVA: 0xCEC | Ordinal: 3309
        void currentImageNumber(void) const;

    // RVA: 0xCEE | Ordinal: 3311
        void currentImageRect(void) const;

    // RVA: 0xDBA | Ordinal: 3515
        void decideFormatFromContent(void) const;

    // RVA: 0xE39 | Ordinal: 3642
        void device(void) const;

    // RVA: 0xFE3 | Ordinal: 4068
        void error(void) const;

    // RVA: 0xFE6 | Ordinal: 4071
        void errorString(void) const;

    // RVA: 0x102B | Ordinal: 4140
        void fileName(void) const;

    // RVA: 0x10EB | Ordinal: 4332
        void format(void) const;

    // RVA: 0x1176 | Ordinal: 4471
        void gamma(void) const;

    // RVA: 0x4EE2 | Ordinal: 20195
        void imageCount(void) const;

    // RVA: 0x4EE3 | Ordinal: 20196
        void imageFormat(void) const;

    // RVA: 0x4EE4 | Ordinal: 20197
        void imageFormat(class QString const &);

    // RVA: 0x4EE5 | Ordinal: 20198
        void imageFormat(class QIODevice *);

    // RVA: 0x4EE7 | Ordinal: 20200
        void imageFormatsForMimeType(class QByteArray const &);

    // RVA: 0x50E3 | Ordinal: 20708
        void jumpToImage(int);

    // RVA: 0x50E6 | Ordinal: 20711
        void jumpToNextImage(void);

    // RVA: 0x51BA | Ordinal: 20923
        void loopCount(void) const;

    // RVA: 0x534B | Ordinal: 21324
        void nextImageDelay(void) const;

    // RVA: 0x5659 | Ordinal: 22106
        void quality(void) const;

    // RVA: 0x5670 | Ordinal: 22129
        void read(void);

    // RVA: 0x5671 | Ordinal: 22130
        void read(class QImage *);

    // RVA: 0x57B6 | Ordinal: 22455
        void scaledClipRect(void) const;

    // RVA: 0x57B8 | Ordinal: 22457
        void scaledSize(void) const;

    // RVA: 0x5853 | Ordinal: 22612
        void setAutoDetectImageFormat(bool);

    // RVA: 0x5855 | Ordinal: 22614
        void setAutoTransform(bool);

    // RVA: 0x585B | Ordinal: 22620
        void setBackgroundColor(class QColor const &);

    // RVA: 0x58AB | Ordinal: 22700
        void setClipRect(class QRect const &);

    // RVA: 0x5914 | Ordinal: 22805
        void setDecideFormatFromContent(bool);

    // RVA: 0x593A | Ordinal: 22843
        void setDevice(class QIODevice *);

    // RVA: 0x596C | Ordinal: 22893
        void setFileName(class QString const &);

    // RVA: 0x59B2 | Ordinal: 22963
        void setFormat(class QByteArray const &);

    // RVA: 0x59CE | Ordinal: 22991
        void setGamma(float);

    // RVA: 0x5B1E | Ordinal: 23327
        void setQuality(int);

    // RVA: 0x5B69 | Ordinal: 23402
        void setScaledClipRect(class QRect const &);

    // RVA: 0x5B6A | Ordinal: 23403
        void setScaledSize(class QSize const &);

    // RVA: 0x5D30 | Ordinal: 23857
        void size(void) const;

    // RVA: 0x5E43 | Ordinal: 24132
        void subType(void) const;

    // RVA: 0x5E55 | Ordinal: 24150
        void supportedImageFormats(void);

    // RVA: 0x5E57 | Ordinal: 24152
        void supportedMimeTypes(void);

    // RVA: 0x5E5B | Ordinal: 24156
        void supportedSubTypes(void) const;

    // RVA: 0x5E5F | Ordinal: 24160
        void supportsAnimation(void) const;

    // RVA: 0x5E68 | Ordinal: 24169
        void supportsOption(enum QImageIOHandler::ImageOption) const;

    // RVA: 0x5EEF | Ordinal: 24304
        void text(class QString const &) const;

    // RVA: 0x5F07 | Ordinal: 24328
        void textKeys(void) const;

    // RVA: 0x5FA5 | Ordinal: 24486
        void tr(char const *, char const *, int);

    // RVA: 0x5FEC | Ordinal: 24557
        void trUtf8(char const *, char const *, int);

    // RVA: 0x6030 | Ordinal: 24625
        void transformation(void) const;

    // RVA: 0x455 | Ordinal: 1110
        void _QImageReader(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QIMAGEREADER_HPP
