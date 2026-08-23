#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: Geometry
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace assets {
namespace lSplineAsset {

class Geometry
{
public:

    // RVA: 0x1A6 | Ordinal: 423
        void buildStripe(struct offshore::Scene &, int, class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &, class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &) const;

    // RVA: 0x208 | Ordinal: 521
        void dump(bool, class ed::basic_string<char> const &);

    // RVA: 0x20A | Ordinal: 523
        void dump(class ed::basic_string<char> const &, bool);

    // RVA: 0x409 | Ordinal: 1034
        void getUvManifold(class ed::basic_string<char> const &);

    // RVA: 0x459 | Ordinal: 1114
        void isOnlay(void) const;

    // RVA: 0x4DE | Ordinal: 1247
        void postloading(class osg::Matrixf const &);

    // RVA: 0x5D2 | Ordinal: 1491
        void visible(void) const;
};

} // namespace lSplineAsset
} // namespace assets

// DCS_OPS_RE_EDTERRAIN4.DLL_GEOMETRY_HPP
