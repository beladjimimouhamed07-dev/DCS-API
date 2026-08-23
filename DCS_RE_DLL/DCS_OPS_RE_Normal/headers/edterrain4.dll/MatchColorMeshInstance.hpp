#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: MatchColorMeshInstance
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace assets {
namespace lLinked {

class MatchColorMeshInstance
{
public:

    // RVA: 0x262 | Ordinal: 611
        void findClosestAsset(class osg::Vec3f const &, float) const;

    // RVA: 0x41F | Ordinal: 1056
        void hitsMeshPolygons(class ed::matrixMN<class osg::Vec4f> &, struct offshore::Mesh &, class offshore::PolygonQuadTreeBase<struct offshore::Polygon> &, class ed::vector<int, class ed::allocator<int>> &, class std::map<class assets::lAsset *, class ed::vector<int, class ed::allocator<int>>, struct std::less<class assets::lAsset *>, class ed::allocator<struct std::pair<class assets::lAsset *const, class ed::vector<int, class ed::allocator<int>>>>> &);
};

} // namespace lLinked
} // namespace assets

// DCS_OPS_RE_EDTERRAIN4.DLL_MATCHCOLORMESHINSTANCE_HPP
