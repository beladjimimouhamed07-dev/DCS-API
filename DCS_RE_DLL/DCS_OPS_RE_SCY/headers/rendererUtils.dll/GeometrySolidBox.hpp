#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: rendererUtils.dll
// Class: GeometrySolidBox
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class GeometrySolidBox
{
public:

    // RVA: 0x1 | Ordinal: 2
        void GeometrySolidBox(void);

    // RVA: 0x45 | Ordinal: 70
        void bind(class render::Shader &, struct render::ve_handle_s *);

    // RVA: 0x49 | Ordinal: 74
        void bindStructuredBuffer(class render::Shader &, unsigned __int64);

    // RVA: 0x4E | Ordinal: 79
        void discard(void);

    // RVA: 0x7C | Ordinal: 125
        void init(void);

    // RVA: 0x1E | Ordinal: 31
        void _GeometrySolidBox(void);
};

} // namespace render

// DCS_OPS_RE_RENDERERUTILS.DLL_GEOMETRYSOLIDBOX_HPP
