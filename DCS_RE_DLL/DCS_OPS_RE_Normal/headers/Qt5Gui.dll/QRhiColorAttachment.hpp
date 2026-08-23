#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QRhiColorAttachment
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QRhiColorAttachment
{
public:

    // RVA: 0x29B | Ordinal: 668
        void QRhiColorAttachment(class QRhiRenderBuffer *);

    // RVA: 0x29C | Ordinal: 669
        void QRhiColorAttachment(class QRhiTexture *);

    // RVA: 0x29D | Ordinal: 670
        void QRhiColorAttachment(void);

    // RVA: 0x511B | Ordinal: 20764
        void layer(void) const;

    // RVA: 0x5154 | Ordinal: 20821
        void level(void) const;

    // RVA: 0x56F4 | Ordinal: 22261
        void renderBuffer(void) const;

    // RVA: 0x573B | Ordinal: 22332
        void resolveLayer(void) const;

    // RVA: 0x573C | Ordinal: 22333
        void resolveLevel(void) const;

    // RVA: 0x573D | Ordinal: 22334
        void resolveTexture(void) const;

    // RVA: 0x5A26 | Ordinal: 23079
        void setLayer(int);

    // RVA: 0x5A3A | Ordinal: 23099
        void setLevel(int);

    // RVA: 0x5B35 | Ordinal: 23350
        void setRenderBuffer(class QRhiRenderBuffer *);

    // RVA: 0x5B3E | Ordinal: 23359
        void setResolveLayer(int);

    // RVA: 0x5B3F | Ordinal: 23360
        void setResolveLevel(int);

    // RVA: 0x5B40 | Ordinal: 23361
        void setResolveTexture(class QRhiTexture *);

    // RVA: 0x5BFD | Ordinal: 23550
        void setTexture(class QRhiTexture *);

    // RVA: 0x5F18 | Ordinal: 24345
        void texture(void) const;
};

// DCS_OPS_RE_QT5GUI.DLL_QRHICOLORATTACHMENT_HPP
