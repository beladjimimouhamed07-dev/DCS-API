#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: SimpleOctTreeLoad
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class SimpleOctTreeLoad
{
public:

    // RVA: 0xA82 | Ordinal: 2691
        void check_segment(class osg::Vec3f const &, class osg::Vec3f const &);

    // RVA: 0xA8A | Ordinal: 2699
        void check_sphere(class osg::Vec3f const &, float const &);

    // RVA: 0x15E0 | Ordinal: 5601
        void remove_from_node(void);

    // RVA: 0x16A7 | Ordinal: 5800
        void setBoundingBox(class osg::BoundingBoxImpl<class osg::Vec3f> const &);

    // RVA: 0x2BC | Ordinal: 701
        void _SimpleOctTreeLoad(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_SIMPLEOCTTREELOAD_HPP
