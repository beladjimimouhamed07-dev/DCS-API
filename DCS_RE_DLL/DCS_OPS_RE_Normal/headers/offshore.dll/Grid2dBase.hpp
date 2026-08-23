#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: offshore.dll
// Class: Grid2dBase
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace offshore {

class Grid2dBase
{
public:

    // RVA: 0x147 | Ordinal: 328
        void getDimensions(void);

    // RVA: 0x196 | Ordinal: 407
        void indexByPos(class osg::Vec3d, class osg::Vec2i &);

    // RVA: 0x197 | Ordinal: 408
        void init(double, class osg::BoundingBoxImpl<class osg::Vec3f>);

    // RVA: 0x1B8 | Ordinal: 441
        void isValidIndex(class osg::Vec2i);

    // RVA: 0x1D5 | Ordinal: 470
        void queryBoundingBox(class osg::BoundingBoxImpl<class osg::Vec3f>, class std::function<void __cdecl(class osg::Vec2i)>);
};

} // namespace offshore

// DCS_OPS_RE_OFFSHORE.DLL_GRID2DBASE_HPP
