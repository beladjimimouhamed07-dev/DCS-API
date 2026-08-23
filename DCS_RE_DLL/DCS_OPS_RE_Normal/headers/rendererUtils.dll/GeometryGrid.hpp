#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: rendererUtils.dll
// Class: GeometryGrid
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class GeometryGrid
{
public:

    // RVA: 0x43 | Ordinal: 68
        void bind(class render::Shader &, struct render::ve_handle_s *);

    // RVA: 0x47 | Ordinal: 72
        void bindStructuredBuffer(class render::Shader &, unsigned __int64);

    // RVA: 0x4C | Ordinal: 77
        void discard(void);

    // RVA: 0x7A | Ordinal: 123
        void init(class osg::Vec2i const &, class osg::Vec2d const &, enum render::PRIMTYPE_ENUM const &);

    // RVA: 0x9B | Ordinal: 156
        void primCount(void);

    // RVA: 0x9E | Ordinal: 159
        void primType(void);
};

} // namespace render

// DCS_OPS_RE_RENDERERUTILS.DLL_GEOMETRYGRID_HPP
