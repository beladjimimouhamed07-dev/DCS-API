#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QRhiTextureRenderTargetDescription
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QRhiTextureRenderTargetDescription
{
public:

    // RVA: 0x2C1 | Ordinal: 706
        void QRhiTextureRenderTargetDescription(class QRhiTextureRenderTargetDescription &&);

    // RVA: 0x2C2 | Ordinal: 707
        void QRhiTextureRenderTargetDescription(class QRhiTextureRenderTargetDescription const &);

    // RVA: 0x2C3 | Ordinal: 708
        void QRhiTextureRenderTargetDescription(class QRhiColorAttachment const &);

    // RVA: 0x2C4 | Ordinal: 709
        void QRhiTextureRenderTargetDescription(class QRhiColorAttachment const &, class QRhiRenderBuffer *);

    // RVA: 0x2C5 | Ordinal: 710
        void QRhiTextureRenderTargetDescription(class QRhiColorAttachment const &, class QRhiTexture *);

    // RVA: 0x2C6 | Ordinal: 711
        void QRhiTextureRenderTargetDescription(void);

    // RVA: 0xB61 | Ordinal: 2914
        void cbeginColorAttachments(void) const;

    // RVA: 0xB6F | Ordinal: 2928
        void cendColorAttachments(void) const;

    // RVA: 0xBF8 | Ordinal: 3065
        void colorAttachmentAt(int) const;

    // RVA: 0xDF6 | Ordinal: 3575
        void depthStencilBuffer(void) const;

    // RVA: 0xDF8 | Ordinal: 3577
        void depthTexture(void) const;

    // RVA: 0x58BD | Ordinal: 22718
        void setColorAttachments(class std::initializer_list<class QRhiColorAttachment>);

    // RVA: 0x5926 | Ordinal: 22823
        void setDepthStencilBuffer(class QRhiRenderBuffer *);

    // RVA: 0x5929 | Ordinal: 22826
        void setDepthTexture(class QRhiTexture *);

    // RVA: 0x508 | Ordinal: 1289
        void _QRhiTextureRenderTargetDescription(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QRHITEXTURERENDERTARGETDESCRIPTION_HPP
