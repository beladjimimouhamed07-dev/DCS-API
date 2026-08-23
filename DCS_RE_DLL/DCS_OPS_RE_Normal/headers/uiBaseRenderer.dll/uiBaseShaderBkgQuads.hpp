#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: uiBaseRenderer.dll
// Class: uiBaseShaderBkgQuads
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class uiBaseShaderBkgQuads
{
public:

    // RVA: 0x2F | Ordinal: 48
        void addQuad(struct uiBaseShaderBkgQuads::BkgQuad const &);

    // RVA: 0x38 | Ordinal: 57
        void draw(class uiBaseShader *) const;

    // RVA: 0x8A | Ordinal: 139
        void setTexture(class ed::Ptr<class uiBaseTexture, class uiTextureCleaner>);

    // RVA: 0xC | Ordinal: 13
        void uiBaseShaderBkgQuads(class uiBaseShaderBkgQuads const &);

    // RVA: 0xD | Ordinal: 14
        void uiBaseShaderBkgQuads(void);

    // RVA: 0x21 | Ordinal: 34
        void _uiBaseShaderBkgQuads(void);
};

// DCS_OPS_RE_UIBASERENDERER.DLL_UIBASESHADERBKGQUADS_HPP
