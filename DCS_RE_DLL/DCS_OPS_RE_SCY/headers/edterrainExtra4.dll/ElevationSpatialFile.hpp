#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrainExtra4.dll
// Class: ElevationSpatialFile
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace edtex {

class ElevationSpatialFile
{
public:

    // RVA: 0x2 | Ordinal: 3
        void ElevationSpatialFile(void);

    // RVA: 0x18 | Ordinal: 25
        void addElevationMap(class ed::basic_string<char> const &, struct utm_private::projection_t const &, class osg::BoundingBoxImpl<class osg::Vec3d> const &);

    // RVA: 0x1A | Ordinal: 27
        void addSeabedMap(class ed::basic_string<char> const &, struct utm_private::projection_t const &, class osg::BoundingBoxImpl<class osg::Vec3d> const &);

    // RVA: 0x1B | Ordinal: 28
        void addSurfaceTypeMesh(struct offshore::Mesh const &, class ed::mmfMatrixMN<int> &&, class ed::vector<int, class ed::allocator<int>> const &);

    // RVA: 0x27 | Ordinal: 40
        void dump(class ed::matrixMN<class osg::Vec4f> &) const;

    // RVA: 0x28 | Ordinal: 41
        void dump(class ed::matrixMN<class osg::Vec4f> &, float) const;

    // RVA: 0x29 | Ordinal: 42
        void dumpSurfaceTypes(struct offshore::Scene &, int) const;

    // RVA: 0x2E | Ordinal: 47
        void getHeight(class osg::Vec3d const &) const;

    // RVA: 0x2F | Ordinal: 48
        void getHeight(class osg::Vec3d const &, float, class osg::Vec2d *) const;

    // RVA: 0x33 | Ordinal: 52
        void getSurfaceType(class osg::Vec3d const &) const;

    // RVA: 0x35 | Ordinal: 54
        void load(class io::MmfStream &, double);

    // RVA: 0x3F | Ordinal: 64
        void save(class ed::basic_string<char> const &);

    // RVA: 0xA | Ordinal: 11
        void _ElevationSpatialFile(void);
};

} // namespace edtex

// DCS_OPS_RE_EDTERRAINEXTRA4.DLL_ELEVATIONSPATIALFILE_HPP
