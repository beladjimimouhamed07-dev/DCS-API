#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrainExtra4.dll
// Class: HeightMesh
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace edtex {

class HeightMesh
{
public:

    // RVA: 0x19 | Ordinal: 26
        void addMesh(struct offshore::Mesh &);

    // RVA: 0x30 | Ordinal: 49
        void getHeight(class osg::Vec3d const &);

    // RVA: 0x32 | Ordinal: 51
        void getPolygonHeight(class osg::Vec3d const &, double &, double &);

    // RVA: 0x34 | Ordinal: 53
        void init(struct offshore::Scene &, int, class ed::basic_string<char>);
};

} // namespace edtex

// DCS_OPS_RE_EDTERRAINEXTRA4.DLL_HEIGHTMESH_HPP
