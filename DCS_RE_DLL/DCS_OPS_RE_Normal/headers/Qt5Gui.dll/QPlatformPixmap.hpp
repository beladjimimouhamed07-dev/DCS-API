#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QPlatformPixmap
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPlatformPixmap
{
public:

    // RVA: 0x24E | Ordinal: 591
        void QPlatformPixmap(class QPlatformPixmap const &);

    // RVA: 0x24F | Ordinal: 592
        void QPlatformPixmap(enum QPlatformPixmap::PixelType, int);

    // RVA: 0xB10 | Ordinal: 2833
        void buffer(void);

    // RVA: 0xB2F | Ordinal: 2864
        void cacheKey(void) const;

    // RVA: 0xB91 | Ordinal: 2962
        void classId(void) const;

    // RVA: 0xBFB | Ordinal: 3068
        void colorCount(void) const;

    // RVA: 0xC74 | Ordinal: 3189
        void copy(class QPlatformPixmap const *, class QRect const &);

    // RVA: 0xC97 | Ordinal: 3224
        void create(int, int, enum QPlatformPixmap::PixelType);

    // RVA: 0xC9F | Ordinal: 3232
        void createCompatiblePlatformPixmap(void) const;

    // RVA: 0xDEE | Ordinal: 3567
        void depth(void) const;

    // RVA: 0x1133 | Ordinal: 4404
        void fromData(unsigned char const *, unsigned int, char const *, class QFlags<enum Qt::ImageConversionFlag>);

    // RVA: 0x1139 | Ordinal: 4410
        void fromFile(class QString const &, char const *, class QFlags<enum Qt::ImageConversionFlag>);

    // RVA: 0x114C | Ordinal: 4429
        void fromImageInPlace(class QImage &, class QFlags<enum Qt::ImageConversionFlag>);

    // RVA: 0x114F | Ordinal: 4432
        void fromImageReader(class QImageReader *, class QFlags<enum Qt::ImageConversionFlag>);

    // RVA: 0x4E96 | Ordinal: 20119
        void height(void) const;

    // RVA: 0x5054 | Ordinal: 20565
        void isNull(void) const;

    // RVA: 0x5229 | Ordinal: 21034
        void mask(void) const;

    // RVA: 0x545A | Ordinal: 21595
        void pixelType(void) const;

    // RVA: 0x57E4 | Ordinal: 22501
        void scroll(int, int, class QRect const &);

    // RVA: 0x5803 | Ordinal: 22532
        void serialNumber(void) const;

    // RVA: 0x5937 | Ordinal: 22840
        void setDetachNumber(int);

    // RVA: 0x5A56 | Ordinal: 23127
        void setMask(class QBitmap const &);

    // RVA: 0x5B7A | Ordinal: 23419
        void setSerialNumber(int);

    // RVA: 0x5F4E | Ordinal: 24399
        void toImage(class QRect const &) const;

    // RVA: 0x6039 | Ordinal: 24634
        void transformed(class QTransform const &, enum Qt::TransformationMode) const;

    // RVA: 0x6157 | Ordinal: 24920
        void width(void) const;

    // RVA: 0x4DA | Ordinal: 1243
        void _QPlatformPixmap(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QPLATFORMPIXMAP_HPP
