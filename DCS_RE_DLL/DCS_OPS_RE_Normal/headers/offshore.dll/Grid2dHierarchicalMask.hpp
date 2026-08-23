#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: offshore.dll
// Class: Grid2dHierarchicalMask
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace offshore {

class Grid2dHierarchicalMask
{
public:

    // RVA: 0x102 | Ordinal: 259
        void dirtyCheckArea(class osg::BoundingBoxImpl<class osg::Vec3f>);

    // RVA: 0x103 | Ordinal: 260
        void dirtyCheckSegment(class osg::Vec3d, class osg::Vec3d);

    // RVA: 0x198 | Ordinal: 409
        void init(double, class osg::BoundingBoxImpl<class osg::Vec3f>);

    // RVA: 0x1BE | Ordinal: 447
        void markArea(class osg::BoundingBoxImpl<class osg::Vec3f>);

    // RVA: 0x1C0 | Ordinal: 449
        void markSegment(class osg::Vec3d, class osg::Vec3d);
};

} // namespace offshore

// DCS_OPS_RE_OFFSHORE.DLL_GRID2DHIERARCHICALMASK_HPP
