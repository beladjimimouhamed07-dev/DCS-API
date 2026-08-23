#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: ContextBase
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace GraphicsCore {

class ContextBase
{
public:

    // RVA: 0x9 | Ordinal: 10
        void ContextBase(void);

    // RVA: 0x111 | Ordinal: 274
        void analyticSunColor(float, class osg::Vec3f const &, class osg::Vec3f const &);

    // RVA: 0x11B | Ordinal: 284
        void bindContextToGPU(int, int, struct render::FrameContext const &, struct render::ViewportContext const &, struct enlight::ShadowParams const &);

    // RVA: 0x11C | Ordinal: 285
        void bindViewportContextToGPU(int, struct render::ViewportContext const &, struct enlight::ShadowParams const *);

    // RVA: 0x121 | Ordinal: 290
        void buildSceneRenderContext(struct render::SceneRenderContext &);

    // RVA: 0x16B | Ordinal: 364
        void getAmbientCBuffer(void) const;

    // RVA: 0x16C | Ordinal: 365
        void getAtmosphereRadiusKm(void) const;

    // RVA: 0x176 | Ordinal: 375
        void getCurrentContext(void);

    // RVA: 0x183 | Ordinal: 388
        void getFlatShadowAlpha(void) const;

    // RVA: 0x197 | Ordinal: 408
        void getParserFrame(void) const;

    // RVA: 0x198 | Ordinal: 409
        void getPerFrameCBuffer(void) const;

    // RVA: 0x199 | Ordinal: 410
        void getPerViewCBuffer(void) const;

    // RVA: 0x19A | Ordinal: 411
        void getPlanetRadiusKm(void) const;

    // RVA: 0x19C | Ordinal: 413
        void getPrevFrameOriginTransform(void) const;

    // RVA: 0x19D | Ordinal: 414
        void getPrevFrameViewProjMatrix(void) const;

    // RVA: 0x19E | Ordinal: 415
        void getRenderFrame(void) const;

    // RVA: 0x1B0 | Ordinal: 433
        void getStackSize(void);

    // RVA: 0x1B3 | Ordinal: 436
        void getSunIntensity(void) const;

    // RVA: 0x1B4 | Ordinal: 437
        void getSunMoonDir(void) const;

    // RVA: 0x1B6 | Ordinal: 439
        void getSurfaceNormal(void) const;

    // RVA: 0x1CE | Ordinal: 463
        void init(void);

    // RVA: 0x221 | Ordinal: 546
        void pop(void);

    // RVA: 0x22E | Ordinal: 559
        void push(class GraphicsCore::ContextBase *);

    // RVA: 0x23C | Ordinal: 573
        void release(void);

    // RVA: 0x275 | Ordinal: 630
        void setAmbientCBuffer(class render::ConstantBuffer);

    // RVA: 0x27A | Ordinal: 635
        void setBuildProjMatrixCallback(class std::function<void __cdecl(class GraphicsCore::ContextBase const &, class osg::Matrixf &)> const &);

    // RVA: 0x27C | Ordinal: 637
        void setCameraHeight(double);

    // RVA: 0x27D | Ordinal: 638
        void setCascadeShadowParams(struct enlight::ShadowParams const &);

    // RVA: 0x27E | Ordinal: 639
        void setClipCockpitMatrix(class osg::Matrixf const &);

    // RVA: 0x27F | Ordinal: 640
        void setCloudVolumeTransform(class osg::Vec3f const &, class osg::Vec3f const &);

    // RVA: 0x28F | Ordinal: 656
        void setParamsNVD(class osg::Vec4f const &);

    // RVA: 0x290 | Ordinal: 657
        void setPosNVD(class osg::Vec3f const &);

    // RVA: 0x293 | Ordinal: 660
        void setShadowMatrix(class osg::Matrixf const &);

    // RVA: 0x294 | Ordinal: 661
        void setShadowParamsCallback(class std::function<struct enlight::ShadowParams __cdecl(class GraphicsCore::ContextBase const &, bool)>);

    // RVA: 0x29A | Ordinal: 667
        void setSurfaceNormal(class osg::Vec3f const &);

    // RVA: 0x29E | Ordinal: 671
        void setVolumetricFog(float, float, float);

    // RVA: 0x29F | Ordinal: 672
        void setVolumetricFogColor(class osg::Vec3f);

    // RVA: 0x2A0 | Ordinal: 673
        void setVolumetricFogUniformity(float);

    // RVA: 0x2A5 | Ordinal: 678
        void shadowMapFarDistance(void) const;

    // RVA: 0x2BA | Ordinal: 699
        void updateBuffers(int);

    // RVA: 0x2C5 | Ordinal: 710
        void updatePerFrameCBuffer(int);
};

} // namespace GraphicsCore

// DCS_OPS_RE_GRAPHICSCORE.DLL_CONTEXTBASE_HPP
