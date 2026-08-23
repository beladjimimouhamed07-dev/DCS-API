#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: GestureComplexImpl
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class GestureComplexImpl
{
public:

    // RVA: 0x4C | Ordinal: 77
        void GestureComplexImpl(void);

    // RVA: 0xAB2 | Ordinal: 2739
        void clear(void);

    // RVA: 0xEAA | Ordinal: 3755
        void get_attach_pos(unsigned int, class wPosition3<float> &);

    // RVA: 0xEED | Ordinal: 3822
        void get_control_type(unsigned int);

    // RVA: 0xF09 | Ordinal: 3850
        void get_debug_intersection(unsigned int, class wPosition3<float> &, class osg::BoundingBoxImpl<class osg::Vec3f> &);

    // RVA: 0xF34 | Ordinal: 3893
        void get_finger_box(unsigned int, unsigned int, class wPosition3<float> &, class osg::BoundingBoxImpl<class osg::Vec3f> &);

    // RVA: 0xF35 | Ordinal: 3894
        void get_finger_pos(unsigned int, unsigned int, bool);

    // RVA: 0xF36 | Ordinal: 3895
        void get_finger_pos_past(unsigned int, unsigned int);

    // RVA: 0xF37 | Ordinal: 3896
        void get_finger_sphere(unsigned int, unsigned int, class osg::Vec3f &, float &);

    // RVA: 0x1240 | Ordinal: 4673
        void intersect(unsigned int) const;

    // RVA: 0x1241 | Ordinal: 4674
        void intersect(void) const;

    // RVA: 0x1814 | Ordinal: 6165
        void set_action(unsigned int, struct cockpit::RepeaterData &);

    // RVA: 0x188A | Ordinal: 6283
        void set_finger_intersect(unsigned int, unsigned int);

    // RVA: 0x18AC | Ordinal: 6317
        void set_intersect_box(unsigned int, class ed::Ptr<class cockpit::clickableElementData, struct ed::DefaultDeleter> &);

    // RVA: 0x1A86 | Ordinal: 6791
        void update(unsigned int, struct vrHand const &);

    // RVA: 0x1B4D | Ordinal: 6990
        void update_camera(class wPosition3<float> const &, class wPosition3<float> const &, class osg::Vec3f const &);

    // RVA: 0x1B98 | Ordinal: 7065
        void valid(unsigned int) const;

    // RVA: 0x1B99 | Ordinal: 7066
        void valid(void) const;

    // RVA: 0x1B9B | Ordinal: 7068
        void validate(unsigned int, bool);

    // RVA: 0x2A5 | Ordinal: 678
        void _GestureComplexImpl(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_GESTURECOMPLEXIMPL_HPP
