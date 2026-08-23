#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QRhiRenderBuffer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QRhiRenderBuffer
{
public:

    // RVA: 0x2AF | Ordinal: 688
        void QRhiRenderBuffer(class QRhiImplementation *, enum QRhiRenderBuffer::Type, class QSize const &, int, class QFlags<enum QRhiRenderBuffer::Flag>);

    // RVA: 0x1096 | Ordinal: 4247
        void flags(void) const;

    // RVA: 0x5457 | Ordinal: 21592
        void pixelSize(void) const;

    // RVA: 0x5744 | Ordinal: 22341
        void resourceType(void) const;

    // RVA: 0x5793 | Ordinal: 22420
        void sampleCount(void) const;

    // RVA: 0x5981 | Ordinal: 22914
        void setFlags(class QFlags<enum QRhiRenderBuffer::Flag>);

    // RVA: 0x5AF6 | Ordinal: 23287
        void setPixelSize(class QSize const &);

    // RVA: 0x5B62 | Ordinal: 23395
        void setSampleCount(int);

    // RVA: 0x5C22 | Ordinal: 23587
        void setType(enum QRhiRenderBuffer::Type);

    // RVA: 0x606D | Ordinal: 24686
        void type(void) const;

    // RVA: 0x4FD | Ordinal: 1278
        void _QRhiRenderBuffer(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QRHIRENDERBUFFER_HPP
