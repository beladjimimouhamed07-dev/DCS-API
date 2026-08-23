#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: metaShader.dll
// Class: RenderAPI
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class RenderAPI
{
public:

    // RVA: 0x41 | Ordinal: 66
        void loadMetaShader(class ed::basic_string<char> const &, class ed::basic_string<char> const &, class ed::vector<class render::DefinePair, class ed::allocator<class render::DefinePair>> const *, class ed::vector<struct RenderAPI::PrecompiledParamDecl, class ed::allocator<struct RenderAPI::PrecompiledParamDecl>> const &);

    // RVA: 0x4A | Ordinal: 75
        void releaseMetaShader(class render::IMetaShader *);
};

// DCS_OPS_RE_METASHADER.DLL_RENDERAPI_HPP
