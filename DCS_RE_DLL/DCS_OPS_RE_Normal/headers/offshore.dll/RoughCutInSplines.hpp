#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: offshore.dll
// Class: RoughCutInSplines
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace offshore {

class RoughCutInSplines
{
public:

    // RVA: 0x5 | Ordinal: 6
        void RoughCutInSplines(struct offshore::Mesh &, double);

    // RVA: 0xF6 | Ordinal: 247
        void cutInConvexPolygon(class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &, class ed::vector<int, class ed::allocator<int>> const *, double);

    // RVA: 0xF7 | Ordinal: 248
        void cutInConvexPolygon(class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &, class ed::vector<int, class ed::allocator<int>> const &, double);

    // RVA: 0xF8 | Ordinal: 249
        void cutInConvexPolygon(class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &, double);

    // RVA: 0xF9 | Ordinal: 250
        void cutInMesh(struct offshore::Mesh const &, double);

    // RVA: 0xFA | Ordinal: 251
        void cutInSpline(struct offshore::SegmentSpline &);

    // RVA: 0xFB | Ordinal: 252
        void cutInSpline(struct offshore::Spline const &);

    // RVA: 0xFC | Ordinal: 253
        void cutInSplines(class ed::vector<struct offshore::SegmentSpline, class ed::allocator<struct offshore::SegmentSpline>> &, class std::function<void __cdecl(int)> *);

    // RVA: 0x128 | Ordinal: 297
        void finish(void);
};

} // namespace offshore

// DCS_OPS_RE_OFFSHORE.DLL_ROUGHCUTINSPLINES_HPP
