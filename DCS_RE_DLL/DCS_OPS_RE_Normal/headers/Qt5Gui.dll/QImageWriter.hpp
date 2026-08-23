#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QImageWriter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QImageWriter
{
public:

    // RVA: 0x14D | Ordinal: 334
        void QImageWriter(class QString const &, class QByteArray const &);

    // RVA: 0x14E | Ordinal: 335
        void QImageWriter(class QIODevice *, class QByteArray const &);

    // RVA: 0x14F | Ordinal: 336
        void QImageWriter(void);

    // RVA: 0xB40 | Ordinal: 2881
        void canWrite(void) const;

    // RVA: 0xC2D | Ordinal: 3118
        void compression(void) const;

    // RVA: 0xE02 | Ordinal: 3587
        void description(void) const;

    // RVA: 0xE3A | Ordinal: 3643
        void device(void) const;

    // RVA: 0xFE4 | Ordinal: 4069
        void error(void) const;

    // RVA: 0xFE7 | Ordinal: 4072
        void errorString(void) const;

    // RVA: 0x102C | Ordinal: 4141
        void fileName(void) const;

    // RVA: 0x10EC | Ordinal: 4333
        void format(void) const;

    // RVA: 0x1177 | Ordinal: 4472
        void gamma(void) const;

    // RVA: 0x4EE8 | Ordinal: 20201
        void imageFormatsForMimeType(class QByteArray const &);

    // RVA: 0x53A7 | Ordinal: 21416
        void optimizedWrite(void) const;

    // RVA: 0x54EE | Ordinal: 21743
        void progressiveScanWrite(void) const;

    // RVA: 0x565A | Ordinal: 22107
        void quality(void) const;

    // RVA: 0x58D8 | Ordinal: 22745
        void setCompression(int);

    // RVA: 0x592C | Ordinal: 22829
        void setDescription(class QString const &);

    // RVA: 0x593B | Ordinal: 22844
        void setDevice(class QIODevice *);

    // RVA: 0x596D | Ordinal: 22894
        void setFileName(class QString const &);

    // RVA: 0x59B3 | Ordinal: 22964
        void setFormat(class QByteArray const &);

    // RVA: 0x59CF | Ordinal: 22992
        void setGamma(float);

    // RVA: 0x5AB1 | Ordinal: 23218
        void setOptimizedWrite(bool);

    // RVA: 0x5B19 | Ordinal: 23322
        void setProgressiveScanWrite(bool);

    // RVA: 0x5B1F | Ordinal: 23328
        void setQuality(int);

    // RVA: 0x5BCF | Ordinal: 23504
        void setSubType(class QByteArray const &);

    // RVA: 0x5BEE | Ordinal: 23535
        void setText(class QString const &, class QString const &);

    // RVA: 0x5C1D | Ordinal: 23582
        void setTransformation(class QFlags<enum QImageIOHandler::Transformation>);

    // RVA: 0x5E44 | Ordinal: 24133
        void subType(void) const;

    // RVA: 0x5E56 | Ordinal: 24151
        void supportedImageFormats(void);

    // RVA: 0x5E58 | Ordinal: 24153
        void supportedMimeTypes(void);

    // RVA: 0x5E5C | Ordinal: 24157
        void supportedSubTypes(void) const;

    // RVA: 0x5E69 | Ordinal: 24170
        void supportsOption(enum QImageIOHandler::ImageOption) const;

    // RVA: 0x5FA6 | Ordinal: 24487
        void tr(char const *, char const *, int);

    // RVA: 0x5FED | Ordinal: 24558
        void trUtf8(char const *, char const *, int);

    // RVA: 0x6031 | Ordinal: 24626
        void transformation(void) const;

    // RVA: 0x6197 | Ordinal: 24984
        void write(class QImage const &);

    // RVA: 0x457 | Ordinal: 1112
        void _QImageWriter(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QIMAGEWRITER_HPP
