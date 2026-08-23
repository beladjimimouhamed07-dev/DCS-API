#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: metaShader.dll
// Class: MetaShaderManager
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class MetaShaderManager
{
public:

    // RVA: 0x2C | Ordinal: 45
        void discardMetaShader(class render::IMetaShader *);

    // RVA: 0x2D | Ordinal: 46
        void discardMetaShaders(void);

    // RVA: 0x32 | Ordinal: 51
        void dump(void);

    // RVA: 0x38 | Ordinal: 57
        void getLoadedMetaShaders(class ed::vector<struct render::UsedMetaShader, class ed::allocator<struct render::UsedMetaShader>> &);

    // RVA: 0x3E | Ordinal: 63
        void instance(void);

    // RVA: 0x40 | Ordinal: 65
        void loadMetaShader(class ed::basic_string<char> const &, class ed::basic_string<char> const &, class ed::vector<class render::DefinePair, class ed::allocator<class render::DefinePair>> const *, class ed::vector<struct RenderAPI::PrecompiledParamDecl, class ed::allocator<struct RenderAPI::PrecompiledParamDecl>> const &);

    // RVA: 0x42 | Ordinal: 67
        void loadMetaShaders(class ed::vector<struct render::UsedMetaShader, class ed::allocator<struct render::UsedMetaShader>> const &, class ed::vector<class ed::Ptr<class render::IMetaShader, struct render::IMetaShader::Deleter>, class ed::allocator<class ed::Ptr<class render::IMetaShader, struct render::IMetaShader::Deleter>>> &);

    // RVA: 0x4B | Ordinal: 76
        void reloadMetaShaders(void);
};

} // namespace render

// DCS_OPS_RE_METASHADER.DLL_METASHADERMANAGER_HPP
