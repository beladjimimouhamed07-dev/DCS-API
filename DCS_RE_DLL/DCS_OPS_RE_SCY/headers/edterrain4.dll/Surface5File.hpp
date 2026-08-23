#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: Surface5File
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape5 {

class Surface5File
{
public:

    // RVA: 0x29 | Ordinal: 42
        void Surface5File(void);

    // RVA: 0x1FA | Ordinal: 507
        void depth(struct landscape5::Surface5File::Square const &, unsigned int) const;

    // RVA: 0x1FB | Ordinal: 508
        void depth(struct landscape5::Surface5File::Square const &, unsigned int, class osg::Vec3d const &) const;

    // RVA: 0x214 | Ordinal: 533
        void dump(struct offshore::Scene &, int, int, int);

    // RVA: 0x215 | Ordinal: 534
        void dump(enum landscape5::Surface5File::TextDumpFlags) const;

    // RVA: 0x216 | Ordinal: 535
        void dump(class osg::BoundingBoxImpl<class osg::Vec3f> const &, struct offshore::Scene &, int, int, class std::function<bool __cdecl(class ed::basic_string<char>)>) const;

    // RVA: 0x245 | Ordinal: 582
        void envelope(class osg::Vec3d const &, class osg::Vec3d const &, class osg::Vec3f *, int, bool);

    // RVA: 0x279 | Ordinal: 634
        void forceload(class osg::Vec3d const &, double);

    // RVA: 0x31F | Ordinal: 800
        void getMaterials(class ed::vector<struct landscape4::Material const *, class ed::allocator<struct landscape4::Material const *>> &) const;

    // RVA: 0x433 | Ordinal: 1076
        void intersection(class osg::Vec3d const &, class osg::Vec3d const &, class osg::Vec3d &, class osg::Vec3d &, unsigned __int64 &, float &);

    // RVA: 0x479 | Ordinal: 1146
        void load(class io::MmfStream &);

    // RVA: 0x4E3 | Ordinal: 1252
        void postloading(class assets::lAssetFile &, class landscape5::SurfaceTile *);

    // RVA: 0x4E4 | Ordinal: 1253
        void postloading(void);

    // RVA: 0x50D | Ordinal: 1294
        void queryRuntimeSceneObjects(struct InternalContext const *, class osg::BoundingBoxImpl<class osg::Vec3f> const &, class std::function<bool __cdecl(class model::IModel *, class osg::Matrixd const &, float, int, int, int, int, int, int, int)> const &);

    // RVA: 0x50E | Ordinal: 1295
        void queryRuntimeSceneObjects(struct InternalContext const *, class osg::BoundingBoxImpl<class osg::Vec3f> const &, int, class std::function<bool __cdecl(class model::IModel *, class osg::Matrixd const &, float, int, int, int, int, int, int, int)> const &);

    // RVA: 0x50F | Ordinal: 1296
        void querySceneObjects(struct InternalContext const *, class osg::BoundingBoxImpl<class osg::Vec3f> const &, class std::function<bool __cdecl(class model::IModel *, class osg::Matrixd const &)> const &);

    // RVA: 0x510 | Ordinal: 1297
        void querySceneObjects(struct InternalContext const *, class osg::Polytope const &, class std::function<bool __cdecl(class model::IModel *, class osg::Matrixd const &)> const &);

    // RVA: 0x511 | Ordinal: 1298
        void querySceneObjects(struct InternalContext const *, class osg::Vec3d const &, class osg::Vec3d const &, class std::function<bool __cdecl(class model::IModel *, class osg::Matrixd const &)> const &);

    // RVA: 0x516 | Ordinal: 1303
        void querySceneObjectsTris(class osg::Matrixd const &, class osg::BoundingBoxImpl<class osg::Vec3f> const &, class std::function<void __cdecl(int, int, int)> const &);

    // RVA: 0x519 | Ordinal: 1306
        void querySurfaceMesh(struct edterrain::SurfaceMeshQuery const &, struct edterrain::SurfaceMesh &) const;

    // RVA: 0x51A | Ordinal: 1307
        void querySurfaceMesh(class osg::BoundingBoxImpl<class osg::Vec3f> const &, class osg::Matrixd const &, int, class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> &, class ed::vector<class osg::Vec3i, class ed::allocator<class osg::Vec3i>> &) const;

    // RVA: 0x536 | Ordinal: 1335
        void save(class ed::basic_string<char> const &);

    // RVA: 0x537 | Ordinal: 1336
        void save(char const *);

    // RVA: 0x57F | Ordinal: 1408
        void setSceneObjectsDensity(float);

    // RVA: 0x5AC | Ordinal: 1453
        void surfaceTypes(struct landscape5::Surface5File::Square const &, unsigned int) const;

    // RVA: 0x5AD | Ordinal: 1454
        void surfaceTypes(struct landscape5::Surface5File::Square const &, unsigned int, class osg::Vec3d const &) const;

    // RVA: 0x5D0 | Ordinal: 1489
        void verticalIntersection(class osg::Vec3d const &, class osg::Vec3d &, class osg::Vec3d &, unsigned __int64 &, float &, struct edterrain::PointOnSurface::InternalCache *, struct landscape5::Surface5File::LOD *, int *, int *);

    // RVA: 0x59 | Ordinal: 90
        void _Surface5File(void);
};

} // namespace landscape5

// DCS_OPS_RE_EDTERRAIN4.DLL_SURFACE5FILE_HPP
