#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Pathfinder.dll
// Class: MeshPolygon
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace NavMeshData {

class MeshPolygon
{
public:

    // RVA: 0xA | Ordinal: 11
        void MeshPolygon(class NavMeshData::MeshPolygon &&);

    // RVA: 0xB | Ordinal: 12
        void MeshPolygon(class NavMeshData::MeshPolygon const &);

    // RVA: 0xC | Ordinal: 13
        void MeshPolygon(class ed::vector<unsigned int, class ed::allocator<unsigned int>> const &, struct NavMeshData::SurfInfo const &, class ed::vector<class osg::Vec2d, class ed::allocator<class osg::Vec2d>> const &, unsigned int);

    // RVA: 0xD | Ordinal: 14
        void MeshPolygon(void);

    // RVA: 0x53 | Ordinal: 84
        void buildAABB(void);

    // RVA: 0x62 | Ordinal: 99
        void id(void) const;

    // RVA: 0x64 | Ordinal: 101
        void info(void) const;

    // RVA: 0x80 | Ordinal: 129
        void maxX(void) const;

    // RVA: 0x81 | Ordinal: 130
        void maxY(void) const;

    // RVA: 0x83 | Ordinal: 132
        void minX(void) const;

    // RVA: 0x84 | Ordinal: 133
        void minY(void) const;

    // RVA: 0x9E | Ordinal: 159
        void size(void) const;

    // RVA: 0xB1 | Ordinal: 178
        void vert(unsigned int) const;

    // RVA: 0xB4 | Ordinal: 181
        void vertIndexes(void) const;

    // RVA: 0xB5 | Ordinal: 182
        void verts(void) const;

    // RVA: 0x23 | Ordinal: 36
        void _MeshPolygon(void);
};

} // namespace NavMeshData

// DCS_OPS_RE_PATHFINDER.DLL_MESHPOLYGON_HPP
