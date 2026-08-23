#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: uiBaseRenderer.dll
// Class: uiBaseShaderQuads
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class uiBaseShaderQuads
{
public:

    // RVA: 0x2B | Ordinal: 44
        void addBatchQuad(float, float, float, float, float);

    // RVA: 0x2C | Ordinal: 45
        void addBatchTexArrayCoords(int, float, float, float, float);

    // RVA: 0x2D | Ordinal: 46
        void addBatchTexCoords(float, float, float, float);

    // RVA: 0x31 | Ordinal: 50
        void beginBatch(class ed::Ptr<class uiBaseTexture, class uiTextureCleaner>, int);

    // RVA: 0x33 | Ordinal: 52
        void beginTextureArrayBatch(class uiBaseTextureArray const *, int);

    // RVA: 0x39 | Ordinal: 58
        void draw(class uiBaseShader *) const;

    // RVA: 0x3C | Ordinal: 61
        void drawBatch(class uiBaseShader *, int) const;

    // RVA: 0x40 | Ordinal: 65
        void endBatch(void);

    // RVA: 0x46 | Ordinal: 71
        void getBatchCount(void) const;

    // RVA: 0x72 | Ordinal: 115
        void reset(void);

    // RVA: 0x75 | Ordinal: 118
        void setBatchQuad(int, float, float, float, float);

    // RVA: 0x76 | Ordinal: 119
        void setBatchTexCoords(int, float, float, float, float);

    // RVA: 0xE | Ordinal: 15
        void uiBaseShaderQuads(class uiBaseShaderQuads const &);

    // RVA: 0xF | Ordinal: 16
        void uiBaseShaderQuads(void);

    // RVA: 0x22 | Ordinal: 35
        void _uiBaseShaderQuads(void);
};

// DCS_OPS_RE_UIBASERENDERER.DLL_UIBASESHADERQUADS_HPP
