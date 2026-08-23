#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QRhiGraphicsPipeline
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QRhiGraphicsPipeline
{
public:

    // RVA: 0x2A8 | Ordinal: 681
        void QRhiGraphicsPipeline(class QRhiImplementation *);

    // RVA: 0xB63 | Ordinal: 2916
        void cbeginShaderStages(void) const;

    // RVA: 0xB64 | Ordinal: 2917
        void cbeginTargetBlends(void) const;

    // RVA: 0xB71 | Ordinal: 2930
        void cendShaderStages(void) const;

    // RVA: 0xB72 | Ordinal: 2931
        void cendTargetBlends(void) const;

    // RVA: 0xCD9 | Ordinal: 3290
        void cullMode(void) const;

    // RVA: 0xDF1 | Ordinal: 3570
        void depthBias(void) const;

    // RVA: 0xDF4 | Ordinal: 3573
        void depthOp(void) const;

    // RVA: 0x1095 | Ordinal: 4246
        void flags(void) const;

    // RVA: 0x116D | Ordinal: 4462
        void frontFace(void) const;

    // RVA: 0x4E5D | Ordinal: 20062
        void hasDepthTest(void) const;

    // RVA: 0x4E5E | Ordinal: 20063
        void hasDepthWrite(void) const;

    // RVA: 0x4E7C | Ordinal: 20093
        void hasStencilTest(void) const;

    // RVA: 0x5177 | Ordinal: 20856
        void lineWidth(void) const;

    // RVA: 0x56FC | Ordinal: 22269
        void renderPassDescriptor(void) const;

    // RVA: 0x5743 | Ordinal: 22340
        void resourceType(void) const;

    // RVA: 0x5792 | Ordinal: 22419
        void sampleCount(void) const;

    // RVA: 0x58E4 | Ordinal: 22757
        void setCullMode(enum QRhiGraphicsPipeline::CullMode);

    // RVA: 0x5921 | Ordinal: 22818
        void setDepthBias(int);

    // RVA: 0x5924 | Ordinal: 22821
        void setDepthOp(enum QRhiGraphicsPipeline::CompareOp);

    // RVA: 0x5928 | Ordinal: 22825
        void setDepthTest(bool);

    // RVA: 0x592A | Ordinal: 22827
        void setDepthWrite(bool);

    // RVA: 0x5980 | Ordinal: 22913
        void setFlags(class QFlags<enum QRhiGraphicsPipeline::Flag>);

    // RVA: 0x59CA | Ordinal: 22987
        void setFrontFace(enum QRhiGraphicsPipeline::FrontFace);

    // RVA: 0x5A42 | Ordinal: 23107
        void setLineWidth(float);

    // RVA: 0x5B38 | Ordinal: 23353
        void setRenderPassDescriptor(class QRhiRenderPassDescriptor *);

    // RVA: 0x5B61 | Ordinal: 23394
        void setSampleCount(int);

    // RVA: 0x5B7F | Ordinal: 23424
        void setShaderResourceBindings(class QRhiShaderResourceBindings *);

    // RVA: 0x5B82 | Ordinal: 23427
        void setShaderStages(class std::initializer_list<class QRhiShaderStage>);

    // RVA: 0x5B94 | Ordinal: 23445
        void setSlopeScaledDepthBias(float);

    // RVA: 0x5BB7 | Ordinal: 23480
        void setStencilBack(struct QRhiGraphicsPipeline::StencilOpState const &);

    // RVA: 0x5BBA | Ordinal: 23483
        void setStencilFront(struct QRhiGraphicsPipeline::StencilOpState const &);

    // RVA: 0x5BBB | Ordinal: 23484
        void setStencilReadMask(unsigned int);

    // RVA: 0x5BBD | Ordinal: 23486
        void setStencilTest(bool);

    // RVA: 0x5BBE | Ordinal: 23487
        void setStencilWriteMask(unsigned int);

    // RVA: 0x5BE9 | Ordinal: 23530
        void setTargetBlends(class std::initializer_list<struct QRhiGraphicsPipeline::TargetBlend>);

    // RVA: 0x5C17 | Ordinal: 23576
        void setTopology(enum QRhiGraphicsPipeline::Topology);

    // RVA: 0x5C9B | Ordinal: 23708
        void setVertexInputLayout(class QRhiVertexInputLayout const &);

    // RVA: 0x5CEF | Ordinal: 23792
        void shaderResourceBindings(void) const;

    // RVA: 0x5D55 | Ordinal: 23894
        void slopeScaledDepthBias(void) const;

    // RVA: 0x5E07 | Ordinal: 24072
        void stencilBack(void) const;

    // RVA: 0x5E0A | Ordinal: 24075
        void stencilFront(void) const;

    // RVA: 0x5E0B | Ordinal: 24076
        void stencilReadMask(void) const;

    // RVA: 0x5E0C | Ordinal: 24077
        void stencilWriteMask(void) const;

    // RVA: 0x5F92 | Ordinal: 24467
        void topology(void) const;

    // RVA: 0x611B | Ordinal: 24860
        void vertexInputLayout(void) const;

    // RVA: 0x4FA | Ordinal: 1275
        void _QRhiGraphicsPipeline(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QRHIGRAPHICSPIPELINE_HPP
