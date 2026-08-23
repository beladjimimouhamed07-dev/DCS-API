#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: lPointOnSurface
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape4 {

class lPointOnSurface
{
public:

    // RVA: 0x246 | Ordinal: 583
        void envelope(class osg::Vec3d const &, class osg::Vec3d const &, class osg::Vec3f *, int, bool);

    // RVA: 0x278 | Ordinal: 633
        void forceLoad(class osg::Vec3d, double);

    // RVA: 0x435 | Ordinal: 1078
        void intersection(class osg::Vec3d const &, class osg::Vec3d const &, class osg::Vec3d *);

    // RVA: 0x4BE | Ordinal: 1215
        void modelIntersection(class osg::Vec3d const &, class osg::Vec3d const &, struct landscape4::lPointOnSurface::ModelIntersectionResult *, enum landscape4::lPointOnSurface::enIntersectionType);

    // RVA: 0x4FE | Ordinal: 1279
        void processSquarePoint(unsigned int, class osg::Vec3d const &);

    // RVA: 0x4FF | Ordinal: 1280
        void processSquareRay(unsigned int, class osg::Vec3d const &, class osg::Vec3d const &, class osg::Vec3d &, unsigned int &, unsigned short &, unsigned short &, unsigned short &);

    // RVA: 0x5C5 | Ordinal: 1478
        void updateCache(class osg::Vec3d const &);
};

} // namespace landscape4

// DCS_OPS_RE_EDTERRAIN4.DLL_LPOINTONSURFACE_HPP
