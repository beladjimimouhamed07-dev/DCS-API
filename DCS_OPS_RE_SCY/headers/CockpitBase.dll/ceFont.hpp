#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ceFont
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ceFont
{
public:

    // RVA: 0x22D | Ordinal: 558
        void ceFont(class cockpit::ceFont const &);

    // RVA: 0x22E | Ordinal: 559
        void ceFont(void);

    // RVA: 0xB08 | Ordinal: 2825
        void construct(class Lua::Config &, class osg::Vec4f const &, class ed::basic_string<char> const &);

    // RVA: 0x1142 | Ordinal: 4419
        void imgui_render(void);

    // RVA: 0x117F | Ordinal: 4480
        void init_geometry(class Graphics::RenderObjectDyn &);

    // RVA: 0x18D0 | Ordinal: 6353
        void set_mat_params(class cockpit::ccIndicationRenderParser const &, class Graphics::RenderObject *);

    // RVA: 0x396 | Ordinal: 919
        void _ceFont(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CEFONT_HPP
