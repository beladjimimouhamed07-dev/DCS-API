#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: uiBaseRenderer.dll
// Class: uiPolyLine
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class uiPolyLine
{
public:

    // RVA: 0x42 | Ordinal: 67
        void free_resources(void);

    // RVA: 0x8F | Ordinal: 144
        void set_texture(class ed::Ptr<class uiBaseTexture, class uiTextureCleaner>);

    // RVA: 0x90 | Ordinal: 145
        void set_texture(class std::basic_string_view<char, struct std::char_traits<char>>, class osg::RectImpl<class osg::Vec2i> const &);
};

// DCS_OPS_RE_UIBASERENDERER.DLL_UIPOLYLINE_HPP
