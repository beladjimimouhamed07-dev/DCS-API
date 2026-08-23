#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QImageData
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QImageData
{
public:

    // RVA: 0x140 | Ordinal: 321
        void QImageData(struct QImageData const &);

    // RVA: 0x141 | Ordinal: 322
        void QImageData(void);

    // RVA: 0xB34 | Ordinal: 2869
        void calculateImageParameters(__int64, __int64, __int64);

    // RVA: 0xB88 | Ordinal: 2953
        void checkForAlphaPixels(void) const;

    // RVA: 0xC5C | Ordinal: 3165
        void convertInPlace(enum QImage::Format, class QFlags<enum Qt::ImageConversionFlag>);

    // RVA: 0xC86 | Ordinal: 3207
        void create(class QSize const &, enum QImage::Format);

    // RVA: 0xC87 | Ordinal: 3208
        void create(unsigned char *, int, int, int, enum QImage::Format, bool, void (__cdecl *)(void *), void *);

    // RVA: 0xE72 | Ordinal: 3699
        void doImageIO(class QImage const *, class QImageWriter *, int) const;

    // RVA: 0x1189 | Ordinal: 4490
        void get(class QImage &);

    // RVA: 0x118A | Ordinal: 4491
        void get(class QImage const &);

    // RVA: 0x451 | Ordinal: 1106
        void _QImageData(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QIMAGEDATA_HPP
