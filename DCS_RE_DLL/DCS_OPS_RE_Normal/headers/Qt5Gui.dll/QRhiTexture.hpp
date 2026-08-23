#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QRhiTexture
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QRhiTexture
{
public:

    // RVA: 0x2BE | Ordinal: 703
        void QRhiTexture(class QRhiImplementation *, enum QRhiTexture::Format, class QSize const &, int, class QFlags<enum QRhiTexture::Flag>);

    // RVA: 0xB1A | Ordinal: 2843
        void buildFrom(struct QRhiTexture::NativeTexture);

    // RVA: 0x1098 | Ordinal: 4249
        void flags(void) const;

    // RVA: 0x10F7 | Ordinal: 4344
        void format(void) const;

    // RVA: 0x5333 | Ordinal: 21300
        void nativeTexture(void);

    // RVA: 0x5458 | Ordinal: 21593
        void pixelSize(void) const;

    // RVA: 0x574A | Ordinal: 22347
        void resourceType(void) const;

    // RVA: 0x5795 | Ordinal: 22422
        void sampleCount(void) const;

    // RVA: 0x5983 | Ordinal: 22916
        void setFlags(class QFlags<enum QRhiTexture::Flag>);

    // RVA: 0x59B9 | Ordinal: 22970
        void setFormat(enum QRhiTexture::Format);

    // RVA: 0x5A9B | Ordinal: 23196
        void setNativeLayout(int);

    // RVA: 0x5AF7 | Ordinal: 23288
        void setPixelSize(class QSize const &);

    // RVA: 0x5B64 | Ordinal: 23397
        void setSampleCount(int);

    // RVA: 0x506 | Ordinal: 1287
        void _QRhiTexture(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QRHITEXTURE_HPP
