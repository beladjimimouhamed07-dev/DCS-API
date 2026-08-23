#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: metaShader.dll
// Class: MetaShaderList
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class MetaShaderList
{
public:

    // RVA: 0xB | Ordinal: 12
        void MetaShaderList(struct render::MetaShaderList &&);

    // RVA: 0xC | Ordinal: 13
        void MetaShaderList(struct render::MetaShaderList const &);

    // RVA: 0xD | Ordinal: 14
        void MetaShaderList(void);

    // RVA: 0x22 | Ordinal: 35
        void applyDefines(class ed::vector<class render::DefinePair, class ed::allocator<class render::DefinePair>> const &);

    // RVA: 0x13 | Ordinal: 20
        void _MetaShaderList(void);
};

} // namespace render

// DCS_OPS_RE_METASHADER.DLL_METASHADERLIST_HPP
