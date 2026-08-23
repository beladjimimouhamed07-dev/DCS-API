#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: lAssetFile
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace assets {

class lAssetFile
{
public:

    // RVA: 0x1AE | Ordinal: 431
        void calcNewContourIndices(struct assets::lPointAsset &, class ed::vector<struct offshore::Spline, class ed::allocator<struct offshore::Spline>> const &, class ed::vector<class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>>, class ed::allocator<class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>>>>);

    // RVA: 0x1CC | Ordinal: 461
        void clear(void);

    // RVA: 0x1E1 | Ordinal: 482
        void copyFrom(class landscape4::lDataFile *);

    // RVA: 0x21B | Ordinal: 540
        void dump(bool);

    // RVA: 0x283 | Ordinal: 644
        void generateDerivedPointAssets(struct offshore::Scene &, int, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &, class DumpHelper::AdditionalData *);

    // RVA: 0x284 | Ordinal: 645
        void generateLakeAsset(void);

    // RVA: 0x287 | Ordinal: 648
        void generateSingleRoadsJunctionAssets(class ed::basic_string<char> const &, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x28B | Ordinal: 652
        void generateTwoRoadsJunctionAssets(class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x29C | Ordinal: 669
        void getAsset(class ed::basic_string<char> const &);

    // RVA: 0x29D | Ordinal: 670
        void getAssetGlobalIndex(class assets::lAsset const *);

    // RVA: 0x324 | Ordinal: 805
        void getMaterials(class ed::vector<struct landscape4::Material const *, class ed::allocator<struct landscape4::Material const *>> &) const;

    // RVA: 0x338 | Ordinal: 825
        void getMeshAsset(class ed::basic_string<char> const &);

    // RVA: 0x33B | Ordinal: 828
        void getMetaAsset(class ed::basic_string<char> const &);

    // RVA: 0x36C | Ordinal: 877
        void getPointAsset(class ed::basic_string<char> const &);

    // RVA: 0x3C1 | Ordinal: 962
        void getSplineAsset(class ed::basic_string<char> const &);

    // RVA: 0x3E0 | Ordinal: 993
        void getTailPointAssetForSpline(class ed::basic_string<char> const &, bool);

    // RVA: 0x3F9 | Ordinal: 1018
        void getTwoRoadsJunctionAsset(class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x3FA | Ordinal: 1019
        void getTwoRoadsJunctionBinding(class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x32 | Ordinal: 51
        void lAssetFile(void);

    // RVA: 0x480 | Ordinal: 1153
        void load(class io::MmfStream &);

    // RVA: 0x4E5 | Ordinal: 1254
        void postloading(class landscape4::lTerraDispatchImpl *);

    // RVA: 0x53E | Ordinal: 1343
        void save(char const *);

    // RVA: 0x5C4 | Ordinal: 1477
        void updateAssetsByNames(void);

    // RVA: 0x5F | Ordinal: 96
        void _lAssetFile(void);
};

} // namespace assets

// DCS_OPS_RE_EDTERRAIN4.DLL_LASSETFILE_HPP
