#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: metaShader.dll
// Class: BaseBinder
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class BaseBinder
{
public:

    // RVA: 0x0 | Ordinal: 1
        void BaseBinder(class BaseBinder &&);

    // RVA: 0x1 | Ordinal: 2
        void BaseBinder(class BaseBinder const &);

    // RVA: 0x2 | Ordinal: 3
        void BaseBinder(void);

    // RVA: 0x23 | Ordinal: 36
        void bind(class render::IMetaShader *, struct render::ShaderSubItem *, struct BaseBinder::RenderSubItem *);

    // RVA: 0x2F | Ordinal: 48
        void dump(class render::IMetaShader *, struct render::ShaderSubItem *, struct render::RenderSubItem *, class render::MetaContext &);

    // RVA: 0x47 | Ordinal: 72
        void postprocessing(class render::IMetaShader *, struct render::ShaderSubItem *);

    // RVA: 0x48 | Ordinal: 73
        void preprocessing(class render::IMetaShader *, struct render::BindVariable const &, enum render::VariableOccurrenceType, class ed::basic_string<char> &, struct render::ShaderSubItem *);

    // RVA: 0x50 | Ordinal: 81
        void render(class render::IMetaShader *, struct render::ShaderSubItem *, struct render::RenderSubItem *, class render::MetaContext &);
};

// DCS_OPS_RE_METASHADER.DLL_BASEBINDER_HPP
