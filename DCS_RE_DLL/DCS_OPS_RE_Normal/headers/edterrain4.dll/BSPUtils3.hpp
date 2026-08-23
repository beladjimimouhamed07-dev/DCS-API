#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: BSPUtils3
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape4 {

class BSPUtils3
{
public:

    // RVA: 0x188 | Ordinal: 393
        void buildEdges(class ed::vector<struct offshore::Polygon, class ed::allocator<struct offshore::Polygon>> const &, class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &, class ed::vector<struct offshore::Edge32, class ed::allocator<struct offshore::Edge32>> &, class ed::vector<struct landscape4::BSPUtils3::EdgePolygon, class ed::allocator<struct landscape4::BSPUtils3::EdgePolygon>> &);

    // RVA: 0x18A | Ordinal: 395
        void buildEdgesDibitsetTable(class ed::vector<struct offshore::Edge32, class ed::allocator<struct offshore::Edge32>> const &, class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &, class ed::vector<struct offshore::Polygon, class ed::allocator<struct offshore::Polygon>> const &, class ed::vector<class landscape4::BSPUtils3::DibitVector, class ed::allocator<class landscape4::BSPUtils3::DibitVector>> &);

    // RVA: 0x260 | Ordinal: 609
        void findBestEdge(class landscape4::BSPUtils3::DibitVector const &, class ed::vector<struct landscape4::BSPUtils3::EdgePolygon, class ed::allocator<struct landscape4::BSPUtils3::EdgePolygon>> const &, class ed::vector<class landscape4::BSPUtils3::DibitVector, class ed::allocator<class landscape4::BSPUtils3::DibitVector>> const &, struct landscape4::BSPUtils3::PolygonPositions &);

    // RVA: 0x26E | Ordinal: 623
        void findHeuristicEdgeForFastBSP(struct offshore::Mesh const &, class landscape4::BSPUtils3::DibitVector const &, class ed::vector<struct offshore::Edge32, class ed::allocator<struct offshore::Edge32>> const &, class ed::vector<struct landscape4::BSPUtils3::EdgePolygon, class ed::allocator<struct landscape4::BSPUtils3::EdgePolygon>> const &, struct landscape4::BSPUtils3::PolygonPositions &);
};

} // namespace landscape4

// DCS_OPS_RE_EDTERRAIN4.DLL_BSPUTILS3_HPP
