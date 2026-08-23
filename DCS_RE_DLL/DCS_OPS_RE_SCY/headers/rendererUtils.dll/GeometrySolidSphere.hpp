#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: rendererUtils.dll
// Class: GeometrySolidSphere
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class GeometrySolidSphere
{
public:

    // RVA: 0x2 | Ordinal: 3
        void GeometrySolidSphere(void);

    // RVA: 0x46 | Ordinal: 71
        void bind(class render::Shader &, struct render::ve_handle_s *);

    // RVA: 0x4A | Ordinal: 75
        void bindStructuredBuffer(class render::Shader &, unsigned __int64);

    // RVA: 0x4F | Ordinal: 80
        void discard(void);

    // RVA: 0x73 | Ordinal: 116
        void getStructuredBuffer(void);

    // RVA: 0x7D | Ordinal: 126
        void init(int, int, bool);

    // RVA: 0x7E | Ordinal: 127
        void init(enum render::GeometrySolidSphere::Type, unsigned int, bool);

    // RVA: 0x9D | Ordinal: 158
        void primCount(void);

    // RVA: 0x1F | Ordinal: 32
        void _GeometrySolidSphere(void);
};

} // namespace render

// DCS_OPS_RE_RENDERERUTILS.DLL_GEOMETRYSOLIDSPHERE_HPP
