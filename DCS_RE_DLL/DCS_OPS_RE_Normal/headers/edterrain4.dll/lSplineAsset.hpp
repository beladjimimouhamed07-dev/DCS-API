#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: lSplineAsset
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace assets {

class lSplineAsset
{
public:

    // RVA: 0x1A8 | Ordinal: 425
        void buildStripe(struct offshore::Scene &, int, struct offshore::Spline const &) const;

    // RVA: 0x1AF | Ordinal: 432
        void calcProfileBypass(void);

    // RVA: 0x1B0 | Ordinal: 433
        void calcProfileClosing(double);

    // RVA: 0x1B1 | Ordinal: 434
        void calcProfileFirstLastSymmetric(double);

    // RVA: 0x1B2 | Ordinal: 435
        void calcProfileSymmetric(double);

    // RVA: 0x226 | Ordinal: 551
        void dump(bool, class ed::basic_string<char> const &, class DumpHelper::AdditionalData *);

    // RVA: 0x23D | Ordinal: 574
        void dumpToOffshore(struct offshore::Scene &, int);

    // RVA: 0x24B | Ordinal: 588
        void exportDetails(struct offshore::Scene &, int, class osg::Matrixd const &, class ed::set<class ed::basic_string<char>, struct std::less<class ed::basic_string<char>>, class ed::allocator<class ed::basic_string<char>>> &, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x24D | Ordinal: 590
        void exportGeometryManifolds(struct offshore::Mesh &, int, class ed::vector<struct assets::lAsset::Manifold, class ed::allocator<struct assets::lAsset::Manifold>> &, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &, bool);

    // RVA: 0x24E | Ordinal: 591
        void exportNoise(struct offshore::Scene &, int, class osg::Matrixd const &);

    // RVA: 0x250 | Ordinal: 593
        void exportTrafficLanes(struct offshore::Scene &, int, class osg::Matrixd const &, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x2A3 | Ordinal: 676
        void getBottomOffset(void) const;

    // RVA: 0x2E1 | Ordinal: 738
        void getDefaultVisibleDetails(class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> &) const;

    // RVA: 0x307 | Ordinal: 776
        void getLeftOffset(void) const;

    // RVA: 0x385 | Ordinal: 902
        void getProfileRadius(void) const;

    // RVA: 0x386 | Ordinal: 903
        void getProfileSegmentsCount(void) const;

    // RVA: 0x391 | Ordinal: 914
        void getRightOffset(void) const;

    // RVA: 0x3BA | Ordinal: 955
        void getSnapDistance(void) const;

    // RVA: 0x3ED | Ordinal: 1006
        void getTopOffset(void) const;

    // RVA: 0x3F0 | Ordinal: 1009
        void getTraficLane(int, bool, float) const;

    // RVA: 0x416 | Ordinal: 1047
        void getWidth(int) const;

    // RVA: 0x42F | Ordinal: 1072
        void instanceSplineAssetSegment(class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &, class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &, class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &, class osg::Vec3d const *, class osg::Vec3d const *, class ed::vector<double, class ed::allocator<double>> const &, struct offshore::Mesh &, class std::function<struct offshore::Mesh * __cdecl(int, int &, int &, int &, int &)> *, class std::function<int __cdecl(int, int, class osg::Vec3d const &, class osg::Vec3d const &)> *) const;

    // RVA: 0x43B | Ordinal: 1084
        void isAutoCreateTailsPointAssets(void) const;

    // RVA: 0x43D | Ordinal: 1086
        void isClosedProfile(void) const;

    // RVA: 0x441 | Ordinal: 1090
        void isCompatibleNode(struct offshore::Scene &, int) const;

    // RVA: 0x442 | Ordinal: 1091
        void isConnectTails(void) const;

    // RVA: 0x445 | Ordinal: 1094
        void isCopyMappingFromParentAsset(void) const;

    // RVA: 0x447 | Ordinal: 1096
        void isCutin(void) const;

    // RVA: 0x449 | Ordinal: 1098
        void isCutinToPure(void) const;

    // RVA: 0x44B | Ordinal: 1100
        void isDockableWith(struct assets::lSplineAsset const &, bool) const;

    // RVA: 0x44E | Ordinal: 1103
        void isGeneratePointInstances(void) const;

    // RVA: 0x450 | Ordinal: 1105
        void isInteractive(void) const;

    // RVA: 0x451 | Ordinal: 1106
        void isLakeShoreline(void) const;

    // RVA: 0x457 | Ordinal: 1112
        void isOneWaySlope(void) const;

    // RVA: 0x458 | Ordinal: 1113
        void isOneway(void) const;

    // RVA: 0x45B | Ordinal: 1116
        void isOnlay(void) const;

    // RVA: 0x465 | Ordinal: 1126
        void isSeaShoreline(void) const;

    // RVA: 0x46A | Ordinal: 1131
        void isSymmetricFrontLast(void) const;

    // RVA: 0x46B | Ordinal: 1132
        void isSymmetricProfile(void) const;

    // RVA: 0x46C | Ordinal: 1133
        void isUnderBridgeSeparator(void) const;

    // RVA: 0x47 | Ordinal: 72
        void lSplineAsset(void);

    // RVA: 0x500 | Ordinal: 1281
        void profilePoint(int) const;

    // RVA: 0x502 | Ordinal: 1283
        void projectPointToProfile(class osg::Vec3d const &, class osg::Vec3d &, class osg::Vec3d &, double &) const;

    // RVA: 0x533 | Ordinal: 1332
        void rotateClosedSymmetricProfile(double);

    // RVA: 0x5AB | Ordinal: 1452
        void surfaceType(void) const;

    // RVA: 0x5D3 | Ordinal: 1492
        void waterPolygonCount(void) const;
};

} // namespace assets

// DCS_OPS_RE_EDTERRAIN4.DLL_LSPLINEASSET_HPP
