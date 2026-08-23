#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: rendererUtils.dll
// Class: GeometryQuad
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class GeometryQuad
{
public:

    // RVA: 0x0 | Ordinal: 1
        void GeometryQuad(void);

    // RVA: 0x44 | Ordinal: 69
        void bind(class render::Shader &, struct render::ve_handle_s *);

    // RVA: 0x48 | Ordinal: 73
        void bindStructuredBuffer(class render::Shader &, unsigned __int64);

    // RVA: 0x4D | Ordinal: 78
        void discard(void);

    // RVA: 0x7B | Ordinal: 124
        void init(enum render::PRIMTYPE_ENUM const &);

    // RVA: 0x9C | Ordinal: 157
        void primCount(void);

    // RVA: 0x9F | Ordinal: 160
        void primType(void);

    // RVA: 0x1D | Ordinal: 30
        void _GeometryQuad(void);
};

} // namespace render

// DCS_OPS_RE_RENDERERUTILS.DLL_GEOMETRYQUAD_HPP
