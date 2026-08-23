#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Visualizer.dll
// Class: DemoScene
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class DemoScene
{
public:

    // RVA: 0x10 | Ordinal: 17
        void DemoScene(class smSceneManager *, struct lua_State *);

    // RVA: 0x89 | Ordinal: 138
        void addCameraInstance(class osg::Vec3f const &);

    // RVA: 0x8A | Ordinal: 139
        void addCameraL(struct lua_State *);

    // RVA: 0x8C | Ordinal: 141
        void addComponentL(struct lua_State *);

    // RVA: 0x8D | Ordinal: 142
        void addCustomMeshEntity(class osg::Matrixf const &);

    // RVA: 0x8E | Ordinal: 143
        void addCustomMeshInstance(class osg::Matrixf const &, class osg::BoundingBoxImpl<class osg::Vec3f> const &, struct render::ISceneParsable *);

    // RVA: 0x8F | Ordinal: 144
        void addCustomMeshInstance(class osg::Matrixf const &, class ed::Ptr<class Graphics::Geometry, struct ed::DefaultDeleter>, class Graphics::MaterialPtr);

    // RVA: 0x90 | Ordinal: 145
        void addDummyInstance(class osg::Vec3f const &);

    // RVA: 0x91 | Ordinal: 146
        void addDummyL(struct lua_State *);

    // RVA: 0x92 | Ordinal: 147
        void addFlightKnot(struct lua_State *);

    // RVA: 0x93 | Ordinal: 148
        void addInteractiveModelInstance(char const *, class osg::Matrixf const &, bool);

    // RVA: 0x94 | Ordinal: 149
        void addInteractiveModelInstance(char const *, class osg::Vec3f const &, bool);

    // RVA: 0x95 | Ordinal: 150
        void addInteractiveModelL(struct lua_State *);

    // RVA: 0x96 | Ordinal: 151
        void addLightInstance(char const *, class osg::Vec3f const &, class osg::Vec3f const &, class osg::Vec4f const &);

    // RVA: 0x97 | Ordinal: 152
        void addLightL(struct lua_State *);

    // RVA: 0x98 | Ordinal: 153
        void addModelInstance(char const *, class osg::Matrixf const &, bool);

    // RVA: 0x99 | Ordinal: 154
        void addModelInstance(char const *, class osg::Vec3f const &, bool);

    // RVA: 0x9A | Ordinal: 155
        void addModelL(struct lua_State *);

    // RVA: 0x9B | Ordinal: 156
        void addMouseInteractionL(struct lua_State *);

    // RVA: 0x9D | Ordinal: 158
        void addTargetPoint(struct lua_State *);

    // RVA: 0x9F | Ordinal: 160
        void addWayPoint(struct lua_State *);

    // RVA: 0xA0 | Ordinal: 161
        void addWeaponStationEntity(void);

    // RVA: 0xA1 | Ordinal: 162
        void addWeaponStationToAircraftL(struct lua_State *);

    // RVA: 0xA4 | Ordinal: 165
        void attachL(struct lua_State *);

    // RVA: 0xA9 | Ordinal: 170
        void clearL(struct lua_State *);

    // RVA: 0xAF | Ordinal: 176
        void createInstanceL(struct lua_State *);

    // RVA: 0xB8 | Ordinal: 185
        void detachL(struct lua_State *);

    // RVA: 0xBA | Ordinal: 187
        void doLoadScene(struct lua_State *, char const *, char const *);

    // RVA: 0xBB | Ordinal: 188
        void draw(struct DemoScene::Viewport const *, class Graphics::Camera const *);

    // RVA: 0xBF | Ordinal: 192
        void drawToEnvironmentL(struct lua_State *);

    // RVA: 0xC0 | Ordinal: 193
        void emitEvent(enum DemoScene::EventType);

    // RVA: 0xC5 | Ordinal: 198
        void getActiveCamera(void) const;

    // RVA: 0xC6 | Ordinal: 199
        void getActiveCameraPos(void);

    // RVA: 0xC7 | Ordinal: 200
        void getActiveCameraPosProj(void);

    // RVA: 0xCB | Ordinal: 204
        void getArgumentL(struct lua_State *);

    // RVA: 0xCF | Ordinal: 208
        void getCameraFrontWorldSpace(float, float);

    // RVA: 0xDC | Ordinal: 221
        void getFlightKnot(struct lua_State *);

    // RVA: 0xE0 | Ordinal: 225
        void getIsInFlight(struct lua_State *);

    // RVA: 0xE1 | Ordinal: 226
        void getModelActiveColliderL(struct lua_State *);

    // RVA: 0xE2 | Ordinal: 227
        void getModelBBoxL(struct lua_State *);

    // RVA: 0xE3 | Ordinal: 228
        void getModelInteractionPointL(struct lua_State *);

    // RVA: 0xE4 | Ordinal: 229
        void getModelRadiusL(struct lua_State *);

    // RVA: 0xEE | Ordinal: 239
        void getPositionWorldL(struct lua_State *);

    // RVA: 0xF4 | Ordinal: 245
        void getSceneMoonDirection(void);

    // RVA: 0xF5 | Ordinal: 246
        void getSceneSunDirection(void);

    // RVA: 0xFE | Ordinal: 255
        void handleEvent(void);

    // RVA: 0x103 | Ordinal: 260
        void init(void);

    // RVA: 0x10F | Ordinal: 272
        void loadScene(struct lua_State *, char const *, char const *);

    // RVA: 0x110 | Ordinal: 273
        void loadScene(char const *, char const *);

    // RVA: 0x111 | Ordinal: 274
        void loadScriptL(struct lua_State *);

    // RVA: 0x113 | Ordinal: 276
        void lookAtL(struct lua_State *);

    // RVA: 0x115 | Ordinal: 278
        void moveL(struct lua_State *);

    // RVA: 0x116 | Ordinal: 279
        void onBeforeReset(void);

    // RVA: 0x118 | Ordinal: 281
        void onLoadScene(void);

    // RVA: 0x11C | Ordinal: 285
        void parseTerrain(void);

    // RVA: 0x11D | Ordinal: 286
        void prebuildSkyboxUsed(void) const;

    // RVA: 0x11E | Ordinal: 287
        void preloadModel(char const *);

    // RVA: 0x11F | Ordinal: 288
        void preloadModelL(struct lua_State *);

    // RVA: 0x120 | Ordinal: 289
        void prepareForRendering(struct DemoScene::Viewport const *, class wPosition3<float> const *, struct ed::ProjectionDesc const *);

    // RVA: 0x122 | Ordinal: 291
        void present(struct DemoScene::Viewport const *);

    // RVA: 0x126 | Ordinal: 295
        void regLuaFunctions(struct lua_State *);

    // RVA: 0x127 | Ordinal: 296
        void reinit(void);

    // RVA: 0x12A | Ordinal: 299
        void releaseInstanceL(struct lua_State *);

    // RVA: 0x12C | Ordinal: 301
        void removeEntity(class Entity *);

    // RVA: 0x12D | Ordinal: 302
        void removeEntityUnsafe(class Entity *);

    // RVA: 0x12E | Ordinal: 303
        void removeL(struct lua_State *);

    // RVA: 0x130 | Ordinal: 305
        void reset(void);

    // RVA: 0x133 | Ordinal: 308
        void rotateL(struct lua_State *);

    // RVA: 0x136 | Ordinal: 311
        void scaleL(struct lua_State *);

    // RVA: 0x137 | Ordinal: 312
        void setActiveCamera(class CameraComponent *);

    // RVA: 0x138 | Ordinal: 313
        void setActiveCameraPos(class wPosition3<float> &);

    // RVA: 0x13A | Ordinal: 315
        void setAircraftBoardNumberL(struct lua_State *);

    // RVA: 0x13B | Ordinal: 316
        void setArgumentL(struct lua_State *);

    // RVA: 0x13E | Ordinal: 319
        void setCameraActive(struct lua_State *);

    // RVA: 0x13F | Ordinal: 320
        void setCameraBoundingBox(struct lua_State *);

    // RVA: 0x140 | Ordinal: 321
        void setCameraExposureCorrectionL(struct lua_State *);

    // RVA: 0x141 | Ordinal: 322
        void setCameraFarClip(struct lua_State *);

    // RVA: 0x142 | Ordinal: 323
        void setCameraFov(struct lua_State *);

    // RVA: 0x143 | Ordinal: 324
        void setCameraNearClip(struct lua_State *);

    // RVA: 0x144 | Ordinal: 325
        void setCameraProjection(struct lua_State *);

    // RVA: 0x145 | Ordinal: 326
        void setCameraVideoMode(struct lua_State *);

    // RVA: 0x146 | Ordinal: 327
        void setCelestialBodies(bool);

    // RVA: 0x147 | Ordinal: 328
        void setCelestialBodiesL(struct lua_State *);

    // RVA: 0x148 | Ordinal: 329
        void setCirrus(bool);

    // RVA: 0x14A | Ordinal: 331
        void setClouds(float, float, float);

    // RVA: 0x14B | Ordinal: 332
        void setCloudsCirrusL(struct lua_State *);

    // RVA: 0x14C | Ordinal: 333
        void setCloudsL(struct lua_State *);

    // RVA: 0x14D | Ordinal: 334
        void setColorGradingLut(char const *);

    // RVA: 0x14E | Ordinal: 335
        void setColorGradingLutL(struct lua_State *);

    // RVA: 0x150 | Ordinal: 337
        void setDOFEffect(float);

    // RVA: 0x151 | Ordinal: 338
        void setDOFEffectL(struct lua_State *);

    // RVA: 0x152 | Ordinal: 339
        void setEnable(bool);

    // RVA: 0x153 | Ordinal: 340
        void setEnableL(struct lua_State *);

    // RVA: 0x154 | Ordinal: 341
        void setEnvironmentMap(char const *, float, char const *);

    // RVA: 0x155 | Ordinal: 342
        void setEnvironmentMapL(struct lua_State *);

    // RVA: 0x156 | Ordinal: 343
        void setFlightSpeed(struct lua_State *);

    // RVA: 0x157 | Ordinal: 344
        void setFlightTargetOffset(struct lua_State *);

    // RVA: 0x15E | Ordinal: 351
        void setLensEffects(bool);

    // RVA: 0x15F | Ordinal: 352
        void setLensEffectsL(struct lua_State *);

    // RVA: 0x160 | Ordinal: 353
        void setLightAmount(struct lua_State *);

    // RVA: 0x161 | Ordinal: 354
        void setLightAngles(struct lua_State *);

    // RVA: 0x162 | Ordinal: 355
        void setLightRadius(struct lua_State *);

    // RVA: 0x165 | Ordinal: 358
        void setLiveryL(struct lua_State *);

    // RVA: 0x166 | Ordinal: 359
        void setMSAA(enum render::MSAA_ENUM);

    // RVA: 0x167 | Ordinal: 360
        void setMSAAL(struct lua_State *);

    // RVA: 0x168 | Ordinal: 361
        void setMoonDirection(float, float);

    // RVA: 0x169 | Ordinal: 362
        void setMoonDirectionL(struct lua_State *);

    // RVA: 0x172 | Ordinal: 371
        void setObjectLivery(class Entity *, char const *, char const *);

    // RVA: 0x173 | Ordinal: 372
        void setOrientL(struct lua_State *);

    // RVA: 0x177 | Ordinal: 376
        void setPositionL(struct lua_State *);

    // RVA: 0x17A | Ordinal: 379
        void setSky(bool);

    // RVA: 0x17B | Ordinal: 380
        void setSkyL(struct lua_State *);

    // RVA: 0x17D | Ordinal: 382
        void setSunDirection(float, float);

    // RVA: 0x17E | Ordinal: 383
        void setSunDirectionL(struct lua_State *);

    // RVA: 0x17F | Ordinal: 384
        void setTerrainMode(enum DemoScene::TerrainMode);

    // RVA: 0x180 | Ordinal: 385
        void setTerrainModeL(struct lua_State *);

    // RVA: 0x181 | Ordinal: 386
        void setTerrainSampleOptions(struct render::ParseSampleOptions *);

    // RVA: 0x183 | Ordinal: 388
        void setUpdateFuncL(struct lua_State *);

    // RVA: 0x184 | Ordinal: 389
        void setUpdateFuncName(char const *);

    // RVA: 0x189 | Ordinal: 394
        void startFly(struct lua_State *);

    // RVA: 0x18C | Ordinal: 397
        void update(struct DemoScene::Viewport const *, class wPosition3<float> const *);

    // RVA: 0x192 | Ordinal: 403
        void updateModelVisibility(class Entity *, bool);

    // RVA: 0x195 | Ordinal: 406
        void updateTransform(class Entity *, class osg::Matrixf const &);

    // RVA: 0x199 | Ordinal: 410
        void waitForModels(class ed::span<struct model_resource_to_load, -1>);

    // RVA: 0x19A | Ordinal: 411
        void waitForModelsL(struct lua_State *);

    // RVA: 0x24 | Ordinal: 37
        void _DemoScene(void);
};

// DCS_OPS_RE_VISUALIZER.DLL_DEMOSCENE_HPP
