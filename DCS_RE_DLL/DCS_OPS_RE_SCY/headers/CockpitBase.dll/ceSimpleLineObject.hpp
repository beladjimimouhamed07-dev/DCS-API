#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ceSimpleLineObject
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ceSimpleLineObject
{
public:

    // RVA: 0x842 | Ordinal: 2115
        void OnFirstTime(void);

    // RVA: 0x909 | Ordinal: 2314
        void addSegment(class wPosition3<float> const &, float);

    // RVA: 0x90A | Ordinal: 2315
        void addSegment(class osg::Vec3f const &, class osg::Vec3f const &);

    // RVA: 0x953 | Ordinal: 2388
        void apply(void);

    // RVA: 0x244 | Ordinal: 581
        void ceSimpleLineObject(class cockpit::ceSimpleLineObject const &);

    // RVA: 0x245 | Ordinal: 582
        void ceSimpleLineObject(void);

    // RVA: 0xA9E | Ordinal: 2719
        void class_name(void) const;

    // RVA: 0xB25 | Ordinal: 2854
        void copy(void);

    // RVA: 0xCC4 | Ordinal: 3269
        void getGeometry(void) const;

    // RVA: 0xE49 | Ordinal: 3658
        void getValue(struct lua_State *, class ed::basic_string<char> const &) const;

    // RVA: 0xFE4 | Ordinal: 4069
        void get_number_of_segments(void) const;

    // RVA: 0x1015 | Ordinal: 4118
        void get_points_number(void) const;

    // RVA: 0x1390 | Ordinal: 5009
        void length_of_texcoords(void) const;

    // RVA: 0x1612 | Ordinal: 5651
        void rescale(void);

    // RVA: 0x161F | Ordinal: 5664
        void reset(void);

    // RVA: 0x167D | Ordinal: 5758
        void self_render(class cockpit::ccIndicationRenderParser &);

    // RVA: 0x1746 | Ordinal: 5959
        void setLineStrip(class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> const &, unsigned int *);

    // RVA: 0x178A | Ordinal: 6027
        void setPointAtIndex(unsigned int, class osg::Vec3f const &, bool);

    // RVA: 0x17F8 | Ordinal: 6137
        void setValue(struct lua_State *, class ed::basic_string<char> const &);

    // RVA: 0x3A1 | Ordinal: 930
        void _ceSimpleLineObject(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CESIMPLELINEOBJECT_HPP
