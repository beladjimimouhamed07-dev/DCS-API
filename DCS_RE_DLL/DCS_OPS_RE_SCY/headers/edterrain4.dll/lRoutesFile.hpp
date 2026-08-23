#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: lRoutesFile
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape4 {

class lRoutesFile
{
public:

    // RVA: 0x14D | Ordinal: 334
        void addRoute(struct landscape4::lRoute const &, class ed::basic_string<char> &, bool);

    // RVA: 0x159 | Ordinal: 346
        void afterLoad(void);

    // RVA: 0x1CF | Ordinal: 464
        void clear(void);

    // RVA: 0x225 | Ordinal: 550
        void dump(struct offshore::Scene &, int);

    // RVA: 0x32B | Ordinal: 812
        void getMaterials(class ed::vector<struct landscape4::Material const *, class ed::allocator<struct landscape4::Material const *>> &) const;

    // RVA: 0x3A0 | Ordinal: 929
        void getSceneObjectId(struct landscape4::lRoutesFile::FragmentRef const &, double);

    // RVA: 0x3A1 | Ordinal: 930
        void getSceneObjectModel(class edterrain::ITerrainContext const *, struct landscape4::lRoutesFile::FragmentRef const &, double, class osg::Vec3d const &, class osg::Vec3d const &, class osg::Matrixd &, unsigned int &);

    // RVA: 0x3A3 | Ordinal: 932
        void getSceneObjectPosition(class edterrain::ITerrainContext const *, unsigned int);

    // RVA: 0x3A7 | Ordinal: 936
        void getSceneObjectType(unsigned int, double);

    // RVA: 0x40B | Ordinal: 1036
        void getVehiclePos(class edterrain::ITerrainContext const *, struct landscape4::lRoutesFile::FragmentRef const &, double, class osg::Matrixd &, int, double *);

    // RVA: 0x427 | Ordinal: 1064
        void initVesselModel(struct landscape4::lRoute const &, struct landscape4::lRoutesFile::VesselModel &, class ed::basic_string<char> &);

    // RVA: 0x428 | Ordinal: 1065
        void initVesselModels(void);

    // RVA: 0x464 | Ordinal: 1125
        void isSceneObjectValid(unsigned int) const;

    // RVA: 0x46 | Ordinal: 71
        void lRoutesFile(void);

    // RVA: 0x496 | Ordinal: 1175
        void load(class ed::basic_string<char> const &);

    // RVA: 0x497 | Ordinal: 1176
        void load(char const *);

    // RVA: 0x498 | Ordinal: 1177
        void load(class io::MmfStream &);

    // RVA: 0x4C9 | Ordinal: 1226
        void objectsCount(void) const;

    // RVA: 0x550 | Ordinal: 1361
        void save(class ed::basic_string<char> const &);

    // RVA: 0x551 | Ordinal: 1362
        void save(char const *);

    // RVA: 0x584 | Ordinal: 1413
        void setTerraDispath(class landscape4::lTerraDispatchImpl *);
};

} // namespace landscape4

// DCS_OPS_RE_EDTERRAIN4.DLL_LROUTESFILE_HPP
