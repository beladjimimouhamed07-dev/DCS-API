#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: navGraph5File
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape5 {

class navGraph5File
{
public:

    // RVA: 0x121 | Ordinal: 290
        void DBGgetPointAssetById(unsigned char) const;

    // RVA: 0x187 | Ordinal: 392
        void buildDepths(void);

    // RVA: 0x1E6 | Ordinal: 487
        void correctSurfaceEdgePosition(struct landscape5::navGraph5FileHelper::SurfaceEdgePosition const &, struct landscape5::navGraph5FileHelper::SurfaceEdgePosition const &, struct landscape5::navGraph5FileHelper::SurfaceEdgePosition *, struct landscape5::navGraph5FileHelper::SurfaceEdgePosition *);

    // RVA: 0x22B | Ordinal: 556
        void dump(struct offshore::Scene &) const;

    // RVA: 0x240 | Ordinal: 577
        void edgePositionToPoint(struct landscape5::navGraph5FileHelper::SurfaceEdgePosition const &, float *);

    // RVA: 0x26C | Ordinal: 621
        void findClosestValidPoint(class osg::Vec3d const &, class std::function<float __cdecl(struct edterrain::SurfaceEdgeData const &)>);

    // RVA: 0x271 | Ordinal: 626
        void findPath(class ed::vector<unsigned int, class ed::allocator<unsigned int>> &, struct landscape5::navGraph5FileHelper::SurfaceEdgePosition const &, struct landscape5::navGraph5FileHelper::SurfaceEdgePosition const &, class std::function<float __cdecl(struct edterrain::SurfaceEdgeData const &)>, class landscape5::Scene5File &);

    // RVA: 0x270 | Ordinal: 625
        void findPath2(class ed::vector<struct landscape5::navGraph5FileHelper::SurfaceEdgePosition, class ed::allocator<struct landscape5::navGraph5FileHelper::SurfaceEdgePosition>> &, class osg::Vec3d const &, class osg::Vec3d const &, class std::function<float __cdecl(struct edterrain::SurfaceEdgeData const &)>, class landscape5::Scene5File &);

    // RVA: 0x2D6 | Ordinal: 727
        void getCrossroadInfo(unsigned int, unsigned int, unsigned int, class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> *);

    // RVA: 0x2D5 | Ordinal: 726
        void getCrossroadInfo2(unsigned int, unsigned int, unsigned int, class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> *);

    // RVA: 0x2EC | Ordinal: 749
        void getEdgeTypes(int, int) const;

    // RVA: 0x2ED | Ordinal: 750
        void getEdgeWidth(int, int) const;

    // RVA: 0x330 | Ordinal: 817
        void getMaterials(class ed::vector<struct landscape4::Material const *, class ed::allocator<struct landscape4::Material const *>> &) const;

    // RVA: 0x334 | Ordinal: 821
        void getMaxDepth(int, int) const;

    // RVA: 0x36B | Ordinal: 876
        void getPointAndStartEndIndex(class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &, double, int *, int *);

    // RVA: 0x399 | Ordinal: 922
        void getRoadSplineInfo(unsigned int, unsigned int, class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> *);

    // RVA: 0x3F5 | Ordinal: 1014
        void getTrisAndType(class osg::Vec3d const &, class osg::Vec3d *, class osg::Vec3d *, class osg::Vec3d *, double *);

    // RVA: 0x3F6 | Ordinal: 1015
        void getTrisType(class osg::Vec3d const &, double *);

    // RVA: 0x3F7 | Ordinal: 1016
        void getTrisType(class osg::Vec3d const &, class osg::Vec3d const &, class ed::vector<unsigned int, class ed::allocator<unsigned int>> *, class ed::vector<unsigned int, class ed::allocator<unsigned int>> *);

    // RVA: 0x3F8 | Ordinal: 1017
        void getTwoRoadConnectionInfo(unsigned int, unsigned int, class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> *);

    // RVA: 0x49F | Ordinal: 1184
        void load(class io::MmfStream &);

    // RVA: 0x4B | Ordinal: 76
        void navGraph5File(void);

    // RVA: 0x4DB | Ordinal: 1244
        void pointToEdgePosition(class osg::Vec3d const &);

    // RVA: 0x4FD | Ordinal: 1278
        void processBridge(class landscape5::Scene5File &, unsigned int, unsigned int, class ed::vector<unsigned __int64, class ed::allocator<unsigned __int64>> *);

    // RVA: 0x50A | Ordinal: 1291
        void queryRangeTris(double, double, double, double, class ed::vector<unsigned int, class ed::allocator<unsigned int>> *);

    // RVA: 0x50B | Ordinal: 1292
        void queryRangeTrisLine(double, double, double, double, double, class ed::vector<unsigned int, class ed::allocator<unsigned int>> *, class ed::vector<unsigned int, class ed::allocator<unsigned int>> *, class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> *, class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> *);

    // RVA: 0x50C | Ordinal: 1293
        void queryRangeVerts(double, double, double, double, class ed::vector<unsigned int, class ed::allocator<unsigned int>> *);

    // RVA: 0x559 | Ordinal: 1370
        void save(class ed::basic_string<char> const &);

    // RVA: 0x55A | Ordinal: 1371
        void save(char const *);

    // RVA: 0x5CA | Ordinal: 1483
        void updateTreeBoundary(void);

    // RVA: 0x6E | Ordinal: 111
        void _navGraph5File(void);
};

} // namespace landscape5

// DCS_OPS_RE_EDTERRAIN4.DLL_NAVGRAPH5FILE_HPP
