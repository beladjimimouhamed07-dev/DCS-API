#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: TextureCopyPaster
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Graphics {

class TextureCopyPaster
{
public:

    // RVA: 0x13A | Ordinal: 315
        void copyToRT(class render::Texture, class osg::Vec4f const &, bool, enum render::MSAA_ENUM);

    // RVA: 0x1EA | Ordinal: 491
        void init(void);

    // RVA: 0x249 | Ordinal: 586
        void release(void);
};

} // namespace Graphics

// DCS_OPS_RE_GRAPHICSCORE.DLL_TEXTURECOPYPASTER_HPP
