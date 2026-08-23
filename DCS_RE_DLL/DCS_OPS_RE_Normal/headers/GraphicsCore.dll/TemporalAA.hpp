#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: TemporalAA
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace deferredShading {

class TemporalAA
{
public:

    // RVA: 0x4B | Ordinal: 76
        void TemporalAA(class deferredShading::TemporalAA &&);

    // RVA: 0x4C | Ordinal: 77
        void TemporalAA(void);

    // RVA: 0x161 | Ordinal: 354
        void enabled(void) const;

    // RVA: 0x189 | Ordinal: 394
        void getFrameBuffer(void);

    // RVA: 0x1E8 | Ordinal: 489
        void init(class osg::Vec2i const &);

    // RVA: 0x22F | Ordinal: 560
        void quad(int);

    // RVA: 0x248 | Ordinal: 585
        void release(void);

    // RVA: 0x2AB | Ordinal: 684
        void testMotionVectors(int, class render::Texture const &, class render::Texture const &, class render::Texture const &);

    // RVA: 0x81 | Ordinal: 130
        void _TemporalAA(void);
};

} // namespace deferredShading

// DCS_OPS_RE_GRAPHICSCORE.DLL_TEMPORALAA_HPP
