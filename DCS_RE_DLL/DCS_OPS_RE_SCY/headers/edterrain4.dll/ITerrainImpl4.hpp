#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: ITerrainImpl4
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class ITerrainImpl4
{
public:

    // RVA: 0x5 | Ordinal: 6
        void ITerrainImpl4(class landscape4::lTerraDispatchImpl *);

    // RVA: 0x13D | Ordinal: 318
        void addEventHandler(class ITerrainImpl4::EventHandler const *);

    // RVA: 0x1E8 | Ordinal: 489
        void createContext(void) const;

    // RVA: 0x1EB | Ordinal: 492
        void createPathCB(class osg::Vec3d const &, class osg::Vec3d const &, unsigned int, class std::function<float __cdecl(struct edterrain::SurfaceEdgeData const &)>) const;

    // RVA: 0x244 | Ordinal: 581
        void envelope(class osg::Vec3d const &, class osg::Vec3d const &, class osg::Vec3f *, int) const;

    // RVA: 0x248 | Ordinal: 585
        void exit(char const *);

    // RVA: 0x26D | Ordinal: 622
        void findClosestValidPointCB(class osg::Vec3d const &, class std::function<float __cdecl(struct edterrain::SurfaceEdgeData const &)>) const;

    // RVA: 0x273 | Ordinal: 628
        void findZone(class osg::Vec3d const &) const;

    // RVA: 0x27A | Ordinal: 635
        void fromLatLon(double, double, double &, double &) const;

    // RVA: 0x27B | Ordinal: 636
        void fromLatLon(double, double, class osg::Vec3d &) const;

    // RVA: 0x27C | Ordinal: 637
        void fromLockonToMGRS(double, double, int) const;

    // RVA: 0x27D | Ordinal: 638
        void fromMGRStoLockon(class ed::basic_string<char> const &, double &, double &) const;

    // RVA: 0x27F | Ordinal: 640
        void fromUTMtoLockon(class osg::Vec2d const &) const;

    // RVA: 0x2B4 | Ordinal: 693
        void getCivilTrafficRoute(int) const;

    // RVA: 0x2B5 | Ordinal: 694
        void getCivilTrafficRouteCount(void) const;

    // RVA: 0x2D9 | Ordinal: 730
        void getCurrentContext(void) const;

    // RVA: 0x2DB | Ordinal: 732
        void getCurrentSeasonName(void) const;

    // RVA: 0x2E7 | Ordinal: 744
        void getDirtyHeight(double, double, double);

    // RVA: 0x2E8 | Ordinal: 745
        void getDispatcher(void);

    // RVA: 0x2FC | Ordinal: 765
        void getGeoPointByName(class ed::basic_string<char> const &);

    // RVA: 0x371 | Ordinal: 882
        void getPointOnSurface(class osg::Vec3d const &, struct edterrain::PointOnSurface::InternalCache *) const;

    // RVA: 0x387 | Ordinal: 904
        void getRasterChartCoverage(class osg::BoundingBoxImpl<class osg::Vec3f> const &, enum edterrain::enRasterChartScale);

    // RVA: 0x398 | Ordinal: 921
        void getRoadNetwork(char const *);

    // RVA: 0x39F | Ordinal: 928
        void getSceneObjectArgs(unsigned int) const;

    // RVA: 0x3A2 | Ordinal: 931
        void getSceneObjectPosition(unsigned int) const;

    // RVA: 0x3A4 | Ordinal: 933
        void getSceneObjectSeed(unsigned int) const;

    // RVA: 0x3A5 | Ordinal: 934
        void getSceneObjectType(unsigned int) const;

    // RVA: 0x3A8 | Ordinal: 937
        void getSeaLevel(void) const;

    // RVA: 0x3B5 | Ordinal: 950
        void getSemanticName(int);

    // RVA: 0x3E4 | Ordinal: 997
        void getTechSkinByDate(int, int);

    // RVA: 0x3E6 | Ordinal: 999
        void getTempratureRangeByDate(int, int);

    // RVA: 0x3E7 | Ordinal: 1000
        void getTerrainCfg(void);

    // RVA: 0x3EA | Ordinal: 1003
        void getTextureMode(void) const;

    // RVA: 0x419 | Ordinal: 1050
        void getZone(int) const;

    // RVA: 0x421 | Ordinal: 1058
        void init(char const *, class std::function<void __cdecl(float, class ed::basic_string<char> const &)>);

    // RVA: 0x432 | Ordinal: 1075
        void intersection(class osg::Vec3d const &, class osg::Vec3d const &) const;

    // RVA: 0x463 | Ordinal: 1124
        void isSceneObjectValid(unsigned int) const;

    // RVA: 0x4AA | Ordinal: 1195
        void loadPath(class ed::basic_string<char> const &) const;

    // RVA: 0x4CC | Ordinal: 1229
        void openTerrain(char const *, struct lua_State *, class ed::ITerrainSecurity *);

    // RVA: 0x4D3 | Ordinal: 1236
        void parseMnemonicId(char const *);

    // RVA: 0x506 | Ordinal: 1287
        void queryAmbientSounds(class osg::Vec3d const &, double, class ed::vector<struct edterrain::AmbientSoundData, class ed::allocator<struct edterrain::AmbientSoundData>> &);

    // RVA: 0x512 | Ordinal: 1299
        void querySceneObjectsCB(class osg::BoundingBoxImpl<class osg::Vec3f> const &, unsigned int, class std::function<enum edterrain::enQueryObjectBehavior __cdecl(unsigned int, struct edterrain::ModelIntersectionData const &)>) const;

    // RVA: 0x513 | Ordinal: 1300
        void querySceneObjectsCB(class osg::Polytope const &, unsigned int, class std::function<enum edterrain::enQueryObjectBehavior __cdecl(unsigned int)>) const;

    // RVA: 0x514 | Ordinal: 1301
        void querySceneObjectsCB(class osg::Polytope const &, unsigned int, class std::function<enum edterrain::enQueryObjectBehavior __cdecl(unsigned int, struct edterrain::ModelIntersectionData const &)>) const;

    // RVA: 0x515 | Ordinal: 1302
        void querySceneObjectsCB(class osg::Vec3d const &, class osg::Vec3d const &, unsigned int, class std::function<enum edterrain::enQueryObjectBehavior __cdecl(unsigned int, struct edterrain::ModelIntersectionData const &)>) const;

    // RVA: 0x518 | Ordinal: 1305
        void querySurfaceMesh(class osg::BoundingBoxImpl<class osg::Vec3f> const &, class osg::Matrixd const &, int, class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> &, class ed::vector<class osg::Vec3i, class ed::allocator<class osg::Vec3i>> &) const;

    // RVA: 0x51B | Ordinal: 1308
        void querySurfaceMeshEx(struct edterrain::SurfaceMeshQuery const &, struct edterrain::SurfaceMesh &) const;

    // RVA: 0x525 | Ordinal: 1318
        void release(void);

    // RVA: 0x528 | Ordinal: 1321
        void removeEventHandler(class ITerrainImpl4::EventHandler const *);

    // RVA: 0x55E | Ordinal: 1375
        void savePath(class edterrain::IRoute *, class ed::basic_string<char> const &) const;

    // RVA: 0x56A | Ordinal: 1387
        void setCurrentContext(class edterrain::ITerrainContext *);

    // RVA: 0x56C | Ordinal: 1389
        void setDate(int, int);

    // RVA: 0x586 | Ordinal: 1415
        void setTextureMode(bool);

    // RVA: 0x5B1 | Ordinal: 1458
        void toLatLon(class osg::Vec3d const &, double &, double &) const;

    // RVA: 0x5B2 | Ordinal: 1459
        void toLatLon(double, double, double &, double &) const;
};

// DCS_OPS_RE_EDTERRAIN4.DLL_ITERRAINIMPL4_HPP
