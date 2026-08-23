#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: renderer.dll
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

    // RVA: 0x9 | Ordinal: 10
        void compileAndLoadShader(char const *, char const *, class render::DefinePair const *, unsigned __int64, class ed::vector<struct RenderAPI::PrecompiledParamDecl, class ed::allocator<struct RenderAPI::PrecompiledParamDecl>> const &, class ed::basic_string<char> *, class ed::vector<unsigned char, class ed::allocator<unsigned char>> *);

    // RVA: 0xA | Ordinal: 11
        void createEmptyShader(char const *);

    // RVA: 0x1A | Ordinal: 27
        void openFromBlobShader(unsigned char const *, unsigned __int64, char const *, class ed::vector<struct RenderAPI::PrecompiledParamDecl, class ed::allocator<struct RenderAPI::PrecompiledParamDecl>> const &);

    // RVA: 0x1B | Ordinal: 28
        void openShader(char const *, class ed::vector<class render::DefinePair, class ed::allocator<class render::DefinePair>> const *, class ed::vector<struct RenderAPI::PrecompiledParamDecl, class ed::allocator<struct RenderAPI::PrecompiledParamDecl>> const &, bool, bool, char const *);
};

// DCS_OPS_RE_RENDERER.DLL_RENDERAPI_HPP
