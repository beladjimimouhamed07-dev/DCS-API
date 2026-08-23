#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: PostEffects.dll
// Class: FSR_HDR
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class FSR_HDR
{
public:

    // RVA: 0x0 | Ordinal: 1
        void FSR_HDR(class render::FSR_HDR &&);

    // RVA: 0x1 | Ordinal: 2
        void FSR_HDR(class render::FSR_HDR const &);

    // RVA: 0x2 | Ordinal: 3
        void FSR_HDR(void);

    // RVA: 0x27 | Ordinal: 40
        void upscale(class render::Texture, class osg::Vec2i const &, class render::Texture, class osg::Vec2i const &);

    // RVA: 0x9 | Ordinal: 10
        void _FSR_HDR(void);
};

} // namespace render

// DCS_OPS_RE_POSTEFFECTS.DLL_FSR_HDR_HPP
