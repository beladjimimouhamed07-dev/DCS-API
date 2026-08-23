#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: Shadows
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace enlight {

class Shadows
{
public:

    // RVA: 0x49 | Ordinal: 74
        void Shadows(void);

    // RVA: 0xE9 | Ordinal: 234
        void addFrustum(struct ed::FrustumDesc<class osg::Vec3f, 8> const &);

    // RVA: 0xEA | Ordinal: 235
        void addFrustum(class osg::Matrixf const &, class osg::Matrixf const &);

    // RVA: 0x116 | Ordinal: 279
        void begin(int, class osg::Vec3f const &, class osg::Vec3f const &, class osg::Matrixf const &, class osg::BoundingBoxImpl<class osg::Vec3f> const &, class osg::BoundingBoxImpl<class osg::Vec3f> const &);

    // RVA: 0x120 | Ordinal: 289
        void buildDebugDraw(class osg::Matrixf const &, class osg::Vec3f const &);

    // RVA: 0x129 | Ordinal: 298
        void clearDebug(void);

    // RVA: 0x14A | Ordinal: 331
        void debugAvailable(void) const;

    // RVA: 0x14B | Ordinal: 332
        void debugDraw(void) const;

    // RVA: 0x169 | Ordinal: 362
        void flatShadowsDistances(void) const;

    // RVA: 0x1E6 | Ordinal: 487
        void init(struct enlight::Shadows::Setup const &);

    // RVA: 0x200 | Ordinal: 513
        void isValid(void) const;

    // RVA: 0x21F | Ordinal: 544
        void parseShadowMap(class enlight::Shadows::SceneRender *);

    // RVA: 0x233 | Ordinal: 564
        void queryCasters(class enlight::Shadows::SceneRender *);

    // RVA: 0x246 | Ordinal: 583
        void release(void);

    // RVA: 0x261 | Ordinal: 610
        void renderShadowMap(class enlight::Shadows::SceneRender *);

    // RVA: 0x2A6 | Ordinal: 679
        void shadowMapFarDistance(void) const;

    // RVA: 0x2C2 | Ordinal: 707
        void updateParams(class GraphicsCore::ContextBase const &, bool);

    // RVA: 0x2C3 | Ordinal: 708
        void updateParams(class osg::Matrixf const &, class osg::Matrixf const &, class osg::Matrixf const &, bool);

    // RVA: 0x7F | Ordinal: 128
        void _Shadows(void);
};

} // namespace enlight

// DCS_OPS_RE_GRAPHICSCORE.DLL_SHADOWS_HPP
