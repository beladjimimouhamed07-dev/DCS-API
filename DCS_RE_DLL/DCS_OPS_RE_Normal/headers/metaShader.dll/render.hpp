#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: metaShader.dll
// Class: render
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class render
{
public:

    // RVA: 0x20 | Ordinal: 33
        void addMetaShaderCache(char const *, char const *, char const *);

    // RVA: 0x25 | Ordinal: 38
        void buildMetaShader(class ed::basic_string<char> const &, class ed::basic_string<char> const &, class ed::vector<class render::DefinePair, class ed::allocator<class render::DefinePair>> const *, class ed::vector<struct RenderAPI::PrecompiledParamDecl, class ed::allocator<struct RenderAPI::PrecompiledParamDecl>> &, class ed::basic_string<char> const &, class ed::basic_string<char> &);

    // RVA: 0x2E | Ordinal: 47
        void discardMetaShaders(void);

    // RVA: 0x3C | Ordinal: 61
        void getUsedMetaShaders(class ed::vector<struct render::UsedMetaShader, class ed::allocator<struct render::UsedMetaShader>> &);

    // RVA: 0x3D | Ordinal: 62
        void initMetaShaderCache(class Lua::Config &);

    // RVA: 0x43 | Ordinal: 68
        void loadMetaShaders(class ed::vector<struct render::UsedMetaShader, class ed::allocator<struct render::UsedMetaShader>> const &, class ed::vector<class ed::Ptr<class render::IMetaShader, struct render::IMetaShader::Deleter>, class ed::allocator<class ed::Ptr<class render::IMetaShader, struct render::IMetaShader::Deleter>>> &);

    // RVA: 0x44 | Ordinal: 69
        void loadShaderList(class ed::basic_string<char> const &, struct render::MetaShaderList &);

    // RVA: 0x49 | Ordinal: 74
        void registerReloadMetaShadersCallback(class render::ReloadMetaShadersCallback *);

    // RVA: 0x4C | Ordinal: 77
        void reloadMetaShaders(void);

    // RVA: 0x4E | Ordinal: 79
        void removeMetaShaderCache(char const *);

    // RVA: 0x52 | Ordinal: 83
        void saveMetaCacheList(class ed::basic_string<char> const &, class ed::basic_string<char> const &, class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> &);

    // RVA: 0x5C | Ordinal: 93
        void unregisterReloadMetaShadersCallback(class render::ReloadMetaShadersCallback *);
};

// DCS_OPS_RE_METASHADER.DLL_RENDER_HPP
