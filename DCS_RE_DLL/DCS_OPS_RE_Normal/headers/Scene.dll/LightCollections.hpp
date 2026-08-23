#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Scene.dll
// Class: LightCollections>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace DCSDemoSceneCollections {

class LightCollections_
{
public:

    // RVA: 0x16 | Ordinal: 23
        void allowSceneWriteAccess(bool) const;

    // RVA: 0x18 | Ordinal: 25
        void batchRenderables(struct render::CollectionInfo const &, class ed::vector<struct render::ISceneRenderable *, class ed::allocator<struct render::ISceneRenderable *>> &, class ed::vector<struct render::ISceneRenderable *, class ed::allocator<struct render::ISceneRenderable *>> &, bool) const;

    // RVA: 0x1A | Ordinal: 27
        void calcClippingVolumeDistanceMax(struct render::CollectionInfo const &, enum DCSDemoSceneCollections::ObjectCollectionType) const;

    // RVA: 0x1B | Ordinal: 28
        void calcClippingVolumeDistanceMax(struct render::CollectionInfo const &, enum DCSSceneCollections::ObjectCollectionType) const;

    // RVA: 0x1C | Ordinal: 29
        void clear(void);

    // RVA: 0x1E | Ordinal: 31
        void collectLights(unsigned int, struct render::LightsCollectionInfo const *const, class ed::vector<struct render::SceneLight *, class ed::allocator<struct render::SceneLight *>> *const) const;

    // RVA: 0x20 | Ordinal: 33
        void collectRenderables(unsigned int, struct render::CollectionInfo const *const, class ed::vector<struct render::ISceneRenderable *, class ed::allocator<struct render::ISceneRenderable *>> *const, class ed::TaskQueue *, unsigned int) const;

    // RVA: 0x22 | Ordinal: 35
        void collectSceneObjectsRenderables(unsigned int, struct render::CollectionInfo const *const, class ed::vector<struct render::ISceneRenderable *, class ed::allocator<struct render::ISceneRenderable *>> *const, class ed::TaskQueue *, unsigned int) const;

    // RVA: 0x24 | Ordinal: 37
        void determineOptimalTasksCount(unsigned int, unsigned int, unsigned int, bool) const;

    // RVA: 0x26 | Ordinal: 39
        void dumpSceneObjectsOnNextCollectRenderablesCall(void) const;

    // RVA: 0x28 | Ordinal: 41
        void enableCollection(enum DCSDemoSceneCollections::LightCollectionType, bool);

    // RVA: 0x29 | Ordinal: 42
        void enableCollection(enum DCSDemoSceneCollections::ObjectCollectionType, bool);

    // RVA: 0x2A | Ordinal: 43
        void enableCollection(enum DCSSceneCollections::LightCollectionType, bool);

    // RVA: 0x2B | Ordinal: 44
        void enableCollection(enum DCSSceneCollections::ObjectCollectionType, bool);

    // RVA: 0x2C | Ordinal: 45
        void enableShadingModel(class std::initializer_list<class render::ShadingModel> const &, bool);

    // RVA: 0x2D | Ordinal: 46
        void enableShadingModel(class render::ShadingModel const &, bool);

    // RVA: 0x30 | Ordinal: 49
        void enableTerrain(bool);

    // RVA: 0x32 | Ordinal: 51
        void enableVisibilityGroup(unsigned char, bool);

    // RVA: 0x34 | Ordinal: 53
        void getCollectLightsStat(void) const;

    // RVA: 0x36 | Ordinal: 55
        void getCollectRenderablesStat(void) const;

    // RVA: 0x38 | Ordinal: 57
        void getDbgSceneObjectsList(void) const;

    // RVA: 0x3A | Ordinal: 59
        void getStatistics(struct SceneStatistics &) const;

    // RVA: 0x3C | Ordinal: 61
        void getTerrainParser(void);

    // RVA: 0x3E | Ordinal: 63
        void groupCollectionsByUniqueFrustum(unsigned int, struct render::CollectionInfo const *const, enum DCSDemoSceneCollections::ObjectCollectionType, struct ed::array<struct Graphics::SceneBase<struct DCSDemoSceneCollections::ObjectCollections, struct DCSDemoSceneCollections::LightCollections>::UniqueClippingVolumeMapAligned, 2> &) const;

    // RVA: 0x3F | Ordinal: 64
        void groupCollectionsByUniqueFrustum(unsigned int, struct render::CollectionInfo const *const, enum DCSSceneCollections::ObjectCollectionType, struct ed::array<struct Graphics::SceneBase<struct DCSSceneCollections::ObjectCollections, struct DCSSceneCollections::LightCollections>::UniqueClippingVolumeMapAligned, 7> &) const;

    // RVA: 0x40 | Ordinal: 65
        void invokeCollectRenderablesEndCallback(void) const;

    // RVA: 0x42 | Ordinal: 67
        void modifyClippingVolumeDistanceMax(struct render::ClippingVolume &, struct render::CollectionInfo const &, double) const;

    // RVA: 0x43 | Ordinal: 68
        void modifyClippingVolumeDistanceMax(struct render::ClippingVolume &, struct render::CollectionInfo const &, enum DCSDemoSceneCollections::ObjectCollectionType) const;

    // RVA: 0x45 | Ordinal: 70
        void modifyClippingVolumeDistanceMax(struct render::ClippingVolume &, struct render::CollectionInfo const &, enum DCSSceneCollections::ObjectCollectionType) const;

    // RVA: 0x46 | Ordinal: 71
        void modifyLightClippingVolumeDistanceMax(struct render::ClippingVolume &, struct render::LightsCollectionInfo const &, enum DCSDemoSceneCollections::LightCollectionType) const;

    // RVA: 0x47 | Ordinal: 72
        void modifyLightClippingVolumeDistanceMax(struct render::ClippingVolume &, struct render::LightsCollectionInfo const &, enum DCSSceneCollections::LightCollectionType) const;

    // RVA: 0x48 | Ordinal: 73
        void optimizeSearchStructures(class std::initializer_list<enum DCSDemoSceneCollections::ObjectCollectionType>, unsigned int);

    // RVA: 0x49 | Ordinal: 74
        void optimizeSearchStructures(class std::initializer_list<enum DCSSceneCollections::ObjectCollectionType>, unsigned int);

    // RVA: 0x4A | Ordinal: 75
        void registerSceneRenderablesBatcher(class std::unique_ptr<struct render::ISceneRenderablesBatcher, struct std::default_delete<struct render::ISceneRenderablesBatcher>>);

    // RVA: 0x4C | Ordinal: 77
        void setCollectRenderablesThreadsMax(unsigned int);

    // RVA: 0x4E | Ordinal: 79
        void setDebugRenderer(struct render::IDebugRenderer *);

    // RVA: 0x50 | Ordinal: 81
        void setLightFrustumDistanceProvider(class std::function<float __cdecl(enum DCSDemoSceneCollections::LightCollectionType, struct render::LightsCollectionInfo const &)> const &);

    // RVA: 0x51 | Ordinal: 82
        void setLightFrustumDistanceProvider(class std::function<float __cdecl(enum DCSSceneCollections::LightCollectionType, struct render::LightsCollectionInfo const &)> const &);

    // RVA: 0x52 | Ordinal: 83
        void setObjectFrustumDistanceProvider(class std::function<float __cdecl(enum DCSDemoSceneCollections::ObjectCollectionType, struct render::CollectionInfo const &)> const &);

    // RVA: 0x53 | Ordinal: 84
        void setObjectFrustumDistanceProvider(class std::function<float __cdecl(enum DCSSceneCollections::ObjectCollectionType, struct render::CollectionInfo const &)> const &);

    // RVA: 0x54 | Ordinal: 85
        void setOnCollectRenderablesEndCallback(class std::function<void __cdecl(class osg::Vec3f const *, unsigned int)> const &);

    // RVA: 0x56 | Ordinal: 87
        void setSuitableLightCollectionInfosProvider(class std::function<bool __cdecl(enum DCSDemoSceneCollections::LightCollectionType, struct render::LightsCollectionInfo const &)> const &);

    // RVA: 0x57 | Ordinal: 88
        void setSuitableLightCollectionInfosProvider(class std::function<bool __cdecl(enum DCSSceneCollections::LightCollectionType, struct render::LightsCollectionInfo const &)> const &);

    // RVA: 0x58 | Ordinal: 89
        void setSuitableObjectCollectionInfosProvider(class std::function<bool __cdecl(enum DCSDemoSceneCollections::ObjectCollectionType, struct render::CollectionInfo const &)> const &);

    // RVA: 0x59 | Ordinal: 90
        void setSuitableObjectCollectionInfosProvider(class std::function<bool __cdecl(enum DCSSceneCollections::ObjectCollectionType, struct render::CollectionInfo const &)> const &);

    // RVA: 0x5A | Ordinal: 91
        void setTerrainParser(struct render::ISceneParsable *);

    // RVA: 0x5C | Ordinal: 93
        void setVisibilityGroup(unsigned char, enum Graphics::VisibilityListType, class render::ViewportTag const *, unsigned int);

    // RVA: 0x5E | Ordinal: 95
        void setVisibilityGroupMode(unsigned char, enum Graphics::VisibilityListType);

    // RVA: 0x60 | Ordinal: 97
        void shadingModelIsActive(enum render::ShadingModelEnum, class render::ViewportTag const &) const;

    // RVA: 0x62 | Ordinal: 99
        void sortAndBatchRenderables(unsigned int, struct render::CollectionInfo const *const, class ed::vector<struct render::ISceneRenderable *, class ed::allocator<struct render::ISceneRenderable *>> *const, class ed::TaskQueue *) const;

    // RVA: 0x64 | Ordinal: 101
        void sortAndBatchSingleCollection(struct render::CollectionInfo const &, class ed::vector<struct render::ISceneRenderable *, class ed::allocator<struct render::ISceneRenderable *>> &, class ed::vector<struct render::ISceneRenderable *, class ed::allocator<struct render::ISceneRenderable *>> &) const;

    // RVA: 0x66 | Ordinal: 103
        void spectrumModelIsActive(enum render::SpectrumModelEnum, class render::ViewportTag const &) const;

    // RVA: 0x68 | Ordinal: 105
        void terrainIsEnabled(void) const;

    // RVA: 0x6A | Ordinal: 107
        void updateOrphans(void);

    // RVA: 0x6C | Ordinal: 109
        void updateVisibilityGroup(unsigned char, bool, class render::ViewportTag const *, unsigned int);

    // RVA: 0x6E | Ordinal: 111
        void waitObjectCollectionGathering(void) const;
};

} // namespace DCSDemoSceneCollections

// DCS_OPS_RE_SCENE.DLL_LIGHTCOLLECTIONS_HPP
