#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QRhiResourceUpdateBatch
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QRhiResourceUpdateBatch
{
public:

    // RVA: 0x2B3 | Ordinal: 692
        void QRhiResourceUpdateBatch(class QRhiImplementation *);

    // RVA: 0xC78 | Ordinal: 3193
        void copyTexture(class QRhiTexture *, class QRhiTexture *, class QRhiTextureCopyDescription const &);

    // RVA: 0x117D | Ordinal: 4478
        void generateMips(class QRhiTexture *, int);

    // RVA: 0x5251 | Ordinal: 21074
        void merge(class QRhiResourceUpdateBatch *);

    // RVA: 0x5677 | Ordinal: 22136
        void readBackBuffer(class QRhiBuffer *, int, int, struct QRhiBufferReadbackResult *);

    // RVA: 0x5678 | Ordinal: 22137
        void readBackTexture(class QRhiReadbackDescription const &, struct QRhiReadbackResult *);

    // RVA: 0x56BD | Ordinal: 22206
        void release(void);

    // RVA: 0x60BD | Ordinal: 24766
        void updateDynamicBuffer(class QRhiBuffer *, int, int, void const *);

    // RVA: 0x60CF | Ordinal: 24784
        void uploadStaticBuffer(class QRhiBuffer *, int, int, void const *);

    // RVA: 0x60D0 | Ordinal: 24785
        void uploadStaticBuffer(class QRhiBuffer *, void const *);

    // RVA: 0x60D1 | Ordinal: 24786
        void uploadTexture(class QRhiTexture *, class QImage const &);

    // RVA: 0x60D2 | Ordinal: 24787
        void uploadTexture(class QRhiTexture *, class QRhiTextureUploadDescription const &);

    // RVA: 0x501 | Ordinal: 1282
        void _QRhiResourceUpdateBatch(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QRHIRESOURCEUPDATEBATCH_HPP
