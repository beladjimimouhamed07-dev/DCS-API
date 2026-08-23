#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QRhiCommandBuffer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QRhiCommandBuffer
{
public:

    // RVA: 0x29E | Ordinal: 671
        void QRhiCommandBuffer(class QRhiImplementation *);

    // RVA: 0xA73 | Ordinal: 2676
        void beginComputePass(class QRhiResourceUpdateBatch *);

    // RVA: 0xA76 | Ordinal: 2679
        void beginExternal(void);

    // RVA: 0xA82 | Ordinal: 2691
        void beginPass(class QRhiRenderTarget *, class QColor const &, class QRhiDepthStencilClearValue const &, class QRhiResourceUpdateBatch *);

    // RVA: 0xDB7 | Ordinal: 3512
        void debugMarkBegin(class QByteArray const &);

    // RVA: 0xDB8 | Ordinal: 3513
        void debugMarkEnd(void);

    // RVA: 0xDB9 | Ordinal: 3514
        void debugMarkMsg(class QByteArray const &);

    // RVA: 0xE66 | Ordinal: 3687
        void dispatch(int, int, int);

    // RVA: 0xE9D | Ordinal: 3742
        void draw(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0xED2 | Ordinal: 3795
        void drawIndexed(unsigned int, unsigned int, unsigned int, int, unsigned int);

    // RVA: 0xFB1 | Ordinal: 4018
        void endComputePass(class QRhiResourceUpdateBatch *);

    // RVA: 0xFB5 | Ordinal: 4022
        void endExternal(void);

    // RVA: 0xFC2 | Ordinal: 4035
        void endPass(class QRhiResourceUpdateBatch *);

    // RVA: 0x5320 | Ordinal: 21281
        void nativeHandles(void);

    // RVA: 0x5741 | Ordinal: 22338
        void resourceType(void) const;

    // RVA: 0x574C | Ordinal: 22349
        void resourceUpdate(class QRhiResourceUpdateBatch *);

    // RVA: 0x5864 | Ordinal: 22629
        void setBlendConstants(class QColor const &);

    // RVA: 0x58DA | Ordinal: 22747
        void setComputePipeline(class QRhiComputePipeline *);

    // RVA: 0x59DA | Ordinal: 23003
        void setGraphicsPipeline(class QRhiGraphicsPipeline *);

    // RVA: 0x5B6E | Ordinal: 23407
        void setScissor(class QRhiScissor const &);

    // RVA: 0x5B80 | Ordinal: 23425
        void setShaderResources(class QRhiShaderResourceBindings *, int, struct QPair<int, unsigned int> const *);

    // RVA: 0x5BBC | Ordinal: 23485
        void setStencilRef(unsigned int);

    // RVA: 0x5C9A | Ordinal: 23707
        void setVertexInput(int, int, struct QPair<class QRhiBuffer *, unsigned int> const *, class QRhiBuffer *, unsigned int, enum QRhiCommandBuffer::IndexFormat);

    // RVA: 0x5CA6 | Ordinal: 23719
        void setViewport(class QRhiViewport const &);

    // RVA: 0x4F7 | Ordinal: 1272
        void _QRhiCommandBuffer(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QRHICOMMANDBUFFER_HPP
