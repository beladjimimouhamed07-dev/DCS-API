#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: enlight.dll
// Class: CloudsModule
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class CloudsModule
{
public:

    // RVA: 0x10 | Ordinal: 17
        void CloudsModule(void);

    // RVA: 0x59 | Ordinal: 90
        void addAtmosphereSamplingPass(class render::RenderGraph &, struct render::FrameContext const &, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphBuffer, struct render::ISceneRenderContextBinder const &, struct enlight::CloudsSamplingParams const &, struct render::ILightProbesProvider const *);

    // RVA: 0x5B | Ordinal: 92
        void addCubePass(class render::RenderGraph &, class osg::Vec3d const &, class osg::Vec3f const &, class render::IRenderGraphDependencyList const *);

    // RVA: 0x63 | Ordinal: 100
        void addUpdatePass(class render::RenderGraph &, struct render::FrameContext const &, class osg::Vec3f const &, class render::RenderGraphTexture, bool, struct render::ISceneRenderContextBinder const &);

    // RVA: 0x85 | Ordinal: 134
        void createRenderer(int, int, enum render::MSAA_ENUM, struct enlight::CloudsDetailPreset const *, char const *);

    // RVA: 0x97 | Ordinal: 152
        void getCloudVolumeOffset(void) const;

    // RVA: 0x98 | Ordinal: 153
        void getCloudVolumeScale(void) const;

    // RVA: 0x99 | Ordinal: 154
        void getCloudsCubeMap(void);

    // RVA: 0x9A | Ordinal: 155
        void getCloudsDensityMap(void);

    // RVA: 0x9B | Ordinal: 156
        void getCloudsLightMap(void);

    // RVA: 0x9C | Ordinal: 157
        void getCloudsLightMapSP(void);

    // RVA: 0x9D | Ordinal: 158
        void getCloudsPresetInfo(void) const;

    // RVA: 0xAE | Ordinal: 175
        void init(class render::RenderGraph &, struct enlight::CloudsInitializer const &, int, int, int, int);

    // RVA: 0xB9 | Ordinal: 186
        void isInitialized(void) const;

    // RVA: 0xE3 | Ordinal: 228
        void requestCloudDensitySamples(class ed::span<class osg::Vec3f const, -1>, class ed::span<float, -1>);

    // RVA: 0xEF | Ordinal: 240
        void setDensityParams(struct enlight::CloudsDensityMapPreset const &, float, float);

    // RVA: 0xF7 | Ordinal: 248
        void setModelsVFS(class std::shared_ptr<class edvfs::IVFSandbox>);

    // RVA: 0xF9 | Ordinal: 250
        void setParams(class std::array<class osg::Vec4f, 3> const &, float);

    // RVA: 0x2F | Ordinal: 48
        void _CloudsModule(void);
};

} // namespace render

// DCS_OPS_RE_ENLIGHT.DLL_CLOUDSMODULE_HPP
