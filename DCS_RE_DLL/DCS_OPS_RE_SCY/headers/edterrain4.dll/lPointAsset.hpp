#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: lPointAsset
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace assets {

class lPointAsset
{
public:

    // RVA: 0x1A7 | Ordinal: 424
        void buildStripe(struct offshore::Scene &, int, class osg::Matrixd const &) const;

    // RVA: 0x1C0 | Ordinal: 449
        void checkContours(class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &, class osg::Vec3d const &);

    // RVA: 0x223 | Ordinal: 548
        void dump(bool, class ed::basic_string<char> const &, class DumpHelper::AdditionalData *);

    // RVA: 0x23C | Ordinal: 573
        void dumpToOffshore(struct offshore::Scene &, int, bool, bool, bool, bool, class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> *, class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> *) const;

    // RVA: 0x249 | Ordinal: 586
        void exportAnchors(struct offshore::Scene &, int, class std::map<class ed::basic_string<char>, class assets::lAsset *, struct std::less<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, class assets::lAsset *>>> const &, bool, bool, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x24A | Ordinal: 587
        void exportCenterLines(struct offshore::Scene &, int, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x24C | Ordinal: 589
        void exportGeometry(struct offshore::Scene &, int, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &, struct offshore::Scene *, int, bool, double, class DumpHelper::AdditionalData *);

    // RVA: 0x251 | Ordinal: 594
        void exportWaterPolygons(class osg::Matrixd const &, class std::map<class ed::basic_string<char>, class assets::lAsset *, struct std::less<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, class assets::lAsset *>>> const &, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x261 | Ordinal: 610
        void findClosestAnchor(class osg::Vec3d const &) const;

    // RVA: 0x282 | Ordinal: 643
        void generateAssetLod(double, double, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x288 | Ordinal: 649
        void generateSortedAnchors(void);

    // RVA: 0x289 | Ordinal: 650
        void generateStaticPointAsset(struct offshore::Scene &, int, class std::map<class ed::basic_string<char>, class assets::lAsset *, struct std::less<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, class assets::lAsset *>>> const &, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &, class ed::vector<bool, class ed::allocator<bool>> *);

    // RVA: 0x28C | Ordinal: 653
        void generateVertIndexForPointInstance(void);

    // RVA: 0x2A1 | Ordinal: 674
        void getBindingPosition(int, int, class osg::Vec3d &) const;

    // RVA: 0x2A2 | Ordinal: 675
        void getBindingSpline(int, int, struct offshore::Spline &) const;

    // RVA: 0x2AF | Ordinal: 688
        void getCenterlinesBetweenTwoAnchors(int, int) const;

    // RVA: 0x2C4 | Ordinal: 709
        void getContour(int, int) const;

    // RVA: 0x2C5 | Ordinal: 710
        void getContourSpline(int, int) const;

    // RVA: 0x2C8 | Ordinal: 713
        void getContoursCount(int) const;

    // RVA: 0x304 | Ordinal: 773
        void getInternalRoad(int, int, bool &);

    // RVA: 0x384 | Ordinal: 901
        void getProfileBindingPoints(int, struct assets::lSplineAsset const *, bool, class ed::vector<int, class ed::allocator<int>> &) const;

    // RVA: 0x3BB | Ordinal: 956
        void getSortedAnchors(int, int) const;

    // RVA: 0x429 | Ordinal: 1066
        void instance(struct offshore::Scene &, int, int, class osg::Matrixd const &);

    // RVA: 0x42A | Ordinal: 1067
        void instanceCrossLines(struct offshore::Scene &, int, class std::map<class ed::basic_string<char>, class assets::lAsset *, struct std::less<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, class assets::lAsset *>>> const &, bool, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &, double);

    // RVA: 0x438 | Ordinal: 1081
        void isAnchorContourInAnchorPlane(int) const;

    // RVA: 0x439 | Ordinal: 1082
        void isAnchorContourInAnchorPlane(int, int, class osg::Matrixd const &) const;

    // RVA: 0x43A | Ordinal: 1083
        void isAnchorContourIsTube(int);

    // RVA: 0x440 | Ordinal: 1089
        void isCompatibleNode(struct offshore::Scene &, int) const;

    // RVA: 0x444 | Ordinal: 1093
        void isConvexContours(class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &) const;

    // RVA: 0x446 | Ordinal: 1095
        void isCutin(void) const;

    // RVA: 0x448 | Ordinal: 1097
        void isCutinToPure(void) const;

    // RVA: 0x44A | Ordinal: 1099
        void isDerivable(void) const;

    // RVA: 0x453 | Ordinal: 1108
        void isLowPriority(void) const;

    // RVA: 0x45A | Ordinal: 1115
        void isOnlay(void) const;

    // RVA: 0x468 | Ordinal: 1129
        void isStaticPointAsset(void) const;

    // RVA: 0x471 | Ordinal: 1138
        void isValidConnectableIndex(int, int) const;

    // RVA: 0x472 | Ordinal: 1139
        void isValidContours(class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &) const;

    // RVA: 0x3E | Ordinal: 63
        void lPointAsset(void);

    // RVA: 0x4F7 | Ordinal: 1272
        void prepareGeometry(class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x590 | Ordinal: 1425
        void setupGroup(class std::map<class ed::basic_string<char>, class assets::lAsset *, struct std::less<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, class assets::lAsset *>>> const &, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x5AA | Ordinal: 1451
        void surfaceType(void) const;
};

} // namespace assets

// DCS_OPS_RE_EDTERRAIN4.DLL_LPOINTASSET_HPP
