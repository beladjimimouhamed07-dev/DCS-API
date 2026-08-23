#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QRhiShaderResourceBinding
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QRhiShaderResourceBinding
{
public:

    // RVA: 0x2B7 | Ordinal: 696
        void QRhiShaderResourceBinding(void);

    // RVA: 0xB14 | Ordinal: 2837
        void bufferLoad(int, class QFlags<enum QRhiShaderResourceBinding::StageFlag>, class QRhiBuffer *);

    // RVA: 0xB15 | Ordinal: 2838
        void bufferLoad(int, class QFlags<enum QRhiShaderResourceBinding::StageFlag>, class QRhiBuffer *, int, int);

    // RVA: 0xB16 | Ordinal: 2839
        void bufferLoadStore(int, class QFlags<enum QRhiShaderResourceBinding::StageFlag>, class QRhiBuffer *);

    // RVA: 0xB17 | Ordinal: 2840
        void bufferLoadStore(int, class QFlags<enum QRhiShaderResourceBinding::StageFlag>, class QRhiBuffer *, int, int);

    // RVA: 0xB18 | Ordinal: 2841
        void bufferStore(int, class QFlags<enum QRhiShaderResourceBinding::StageFlag>, class QRhiBuffer *);

    // RVA: 0xB19 | Ordinal: 2842
        void bufferStore(int, class QFlags<enum QRhiShaderResourceBinding::StageFlag>, class QRhiBuffer *, int, int);

    // RVA: 0xDA6 | Ordinal: 3495
        void data(void);

    // RVA: 0xDA7 | Ordinal: 3496
        void data(void) const;

    // RVA: 0x4EEB | Ordinal: 20204
        void imageLoad(int, class QFlags<enum QRhiShaderResourceBinding::StageFlag>, class QRhiTexture *, int);

    // RVA: 0x4EEC | Ordinal: 20205
        void imageLoadStore(int, class QFlags<enum QRhiShaderResourceBinding::StageFlag>, class QRhiTexture *, int);

    // RVA: 0x4EED | Ordinal: 20206
        void imageStore(int, class QFlags<enum QRhiShaderResourceBinding::StageFlag>, class QRhiTexture *, int);

    // RVA: 0x503C | Ordinal: 20541
        void isLayoutCompatible(class QRhiShaderResourceBinding const &) const;

    // RVA: 0x5796 | Ordinal: 22423
        void sampledTexture(int, class QFlags<enum QRhiShaderResourceBinding::StageFlag>, class QRhiTexture *, class QRhiSampler *);

    // RVA: 0x5797 | Ordinal: 22424
        void sampledTextures(int, class QFlags<enum QRhiShaderResourceBinding::StageFlag>, int, struct QRhiShaderResourceBinding::TextureAndSampler const *);

    // RVA: 0x608E | Ordinal: 24719
        void uniformBuffer(int, class QFlags<enum QRhiShaderResourceBinding::StageFlag>, class QRhiBuffer *);

    // RVA: 0x608F | Ordinal: 24720
        void uniformBuffer(int, class QFlags<enum QRhiShaderResourceBinding::StageFlag>, class QRhiBuffer *, int, int);

    // RVA: 0x6090 | Ordinal: 24721
        void uniformBufferWithDynamicOffset(int, class QFlags<enum QRhiShaderResourceBinding::StageFlag>, class QRhiBuffer *, int);
};

// DCS_OPS_RE_QT5GUI.DLL_QRHISHADERRESOURCEBINDING_HPP
