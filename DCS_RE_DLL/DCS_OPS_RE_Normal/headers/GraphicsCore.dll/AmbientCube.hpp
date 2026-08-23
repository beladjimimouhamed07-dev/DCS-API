#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: AmbientCube
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace environment {

class AmbientCube
{
public:

    // RVA: 0x0 | Ordinal: 1
        void AmbientCube(void);

    // RVA: 0x11D | Ordinal: 286
        void build(class render::Texture const &, bool, bool);

    // RVA: 0x172 | Ordinal: 371
        void getConstantBuffer(void);

    // RVA: 0x1B2 | Ordinal: 435
        void getStructuredBuffer(void);

    // RVA: 0x1CA | Ordinal: 459
        void init(void);

    // RVA: 0x23A | Ordinal: 571
        void release(void);

    // RVA: 0x271 | Ordinal: 626
        void restoreCBuffer(void);

    // RVA: 0x27B | Ordinal: 636
        void setCBuffer(class osg::Vec4f const *const);

    // RVA: 0x28B | Ordinal: 652
        void setNextSurfaceColor(class render::Texture const &);

    // RVA: 0x2B1 | Ordinal: 690
        void update(float, float);
};

} // namespace environment

// DCS_OPS_RE_GRAPHICSCORE.DLL_AMBIENTCUBE_HPP
