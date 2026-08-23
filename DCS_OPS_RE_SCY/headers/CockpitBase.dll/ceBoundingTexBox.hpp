#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ceBoundingTexBox
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ceBoundingTexBox
{
public:

    // RVA: 0x94C | Ordinal: 2381
        void apply(void);

    // RVA: 0x95F | Ordinal: 2400
        void assign(class osg::BoundingBoxImpl<class osg::Vec3f> const &);

    // RVA: 0x229 | Ordinal: 554
        void ceBoundingTexBox(class cockpit::ceBoundingTexBox const &);

    // RVA: 0x22A | Ordinal: 555
        void ceBoundingTexBox(void);

    // RVA: 0xA92 | Ordinal: 2707
        void class_name(void) const;

    // RVA: 0xB19 | Ordinal: 2842
        void copy(void);

    // RVA: 0xE3D | Ordinal: 3646
        void getValue(struct lua_State *, class ed::basic_string<char> const &) const;

    // RVA: 0x160A | Ordinal: 5643
        void rescale(void);

    // RVA: 0x17EC | Ordinal: 6125
        void setValue(struct lua_State *, class ed::basic_string<char> const &);

    // RVA: 0x394 | Ordinal: 917
        void _ceBoundingTexBox(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CEBOUNDINGTEXBOX_HPP
