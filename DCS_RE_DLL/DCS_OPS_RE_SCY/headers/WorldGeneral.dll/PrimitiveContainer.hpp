#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: PrimitiveContainer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class PrimitiveContainer
{
public:

    // RVA: 0x625 | Ordinal: 1574
        void annotateBox(class osg::BoundingBoxImpl<class osg::Vec3f> const &, class osg::Matrixd const &, class osg::Vec3d const &, unsigned int);

    // RVA: 0x626 | Ordinal: 1575
        void annotateCircle(class osg::Vec3d const &, double, class osg::Vec3d const &, int, unsigned int);

    // RVA: 0x627 | Ordinal: 1576
        void annotateCylinder(float, float, int, class osg::Vec3f const &, class osg::Vec3d const &, unsigned int);

    // RVA: 0x628 | Ordinal: 1577
        void annotateFrustum(float, float, class osg::Matrixd const &, class osg::Vec3d const &, unsigned int);

    // RVA: 0x629 | Ordinal: 1578
        void annotateLine(class osg::Vec3d const &, class osg::Vec3d const &, class osg::Vec3d const &, unsigned int);

    // RVA: 0x62A | Ordinal: 1579
        void annotatePolyLine(class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> const &&, class osg::Vec3d const &, unsigned int);

    // RVA: 0x62B | Ordinal: 1580
        void annotateSphere(double, class osg::Vec3f const &, class osg::Vec3d const &, unsigned int);

    // RVA: 0x62D | Ordinal: 1582
        void annotateText(class std::basic_string_view<char, struct std::char_traits<char>>, class osg::Vec3d const &, class osg::Vec3d const &);

    // RVA: 0x62C | Ordinal: 1581
        void annotateText2(class std::basic_string_view<char, struct std::char_traits<char>>, class osg::Matrixd const &, class osg::Vec3d const &, unsigned int);

    // RVA: 0xB7A | Ordinal: 2939
        void reset(void);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_PRIMITIVECONTAINER_HPP
