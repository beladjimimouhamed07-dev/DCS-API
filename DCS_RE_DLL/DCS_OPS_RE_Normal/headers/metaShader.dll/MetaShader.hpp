#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: metaShader.dll
// Class: MetaShader
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class MetaShader
{
public:

    // RVA: 0x9 | Ordinal: 10
        void MetaShader(class render::MetaShader const &);

    // RVA: 0xA | Ordinal: 11
        void MetaShader(void);

    // RVA: 0x24 | Ordinal: 37
        void bind(struct render::MetaShaderRenderItem *, class render::MetaContext &);

    // RVA: 0x28 | Ordinal: 41
        void compute(struct render::MetaShaderRenderItem *, class render::MetaContext &);

    // RVA: 0x2A | Ordinal: 43
        void createPrecompiledParam(class ed::basic_string<char> const &, class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> &);

    // RVA: 0x31 | Ordinal: 50
        void dump(struct render::MetaShaderRenderItem *, class render::MetaContext &);

    // RVA: 0x39 | Ordinal: 58
        void getName(void);

    // RVA: 0x3A | Ordinal: 59
        void getShader(void);

    // RVA: 0x3F | Ordinal: 64
        void isValid(void) const;

    // RVA: 0x45 | Ordinal: 70
        void open(class ed::basic_string<char> const &, class ed::basic_string<char> const &, class ed::vector<class render::DefinePair, class ed::allocator<class render::DefinePair>> const *);

    // RVA: 0x51 | Ordinal: 82
        void render(struct render::MetaShaderRenderItem *, class render::MetaContext &, int);

    // RVA: 0x54 | Ordinal: 85
        void setPrecompiledParam(unsigned __int64, int) const;

    // RVA: 0x56 | Ordinal: 87
        void setupParams(struct render::MetaShaderRenderItem *, class render::MetaContext &);

    // RVA: 0x12 | Ordinal: 19
        void _MetaShader(void);
};

} // namespace render

// DCS_OPS_RE_METASHADER.DLL_METASHADER_HPP
