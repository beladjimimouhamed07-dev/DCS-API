#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: offshore.dll
// Class: Grid2dMask
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace offshore {

class Grid2dMask
{
public:

    // RVA: 0xCB | Ordinal: 204
        void checkArea(class osg::BoundingBoxImpl<class osg::Vec3f>);

    // RVA: 0xCC | Ordinal: 205
        void checkSegment(class osg::Vec3d, class osg::Vec3d);

    // RVA: 0x1BF | Ordinal: 448
        void markArea(class osg::BoundingBoxImpl<class osg::Vec3f>);

    // RVA: 0x1C1 | Ordinal: 450
        void markSegment(class osg::Vec3d, class osg::Vec3d);
};

} // namespace offshore

// DCS_OPS_RE_OFFSHORE.DLL_GRID2DMASK_HPP
