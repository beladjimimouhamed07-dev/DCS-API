#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ceBoundingMeshBox
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ceBoundingMeshBox
{
public:

    // RVA: 0x83C | Ordinal: 2109
        void OnFirstTime(void);

    // RVA: 0x94B | Ordinal: 2380
        void apply(void);

    // RVA: 0x95E | Ordinal: 2399
        void assign(class osg::BoundingBoxImpl<class osg::Vec3f> const &);

    // RVA: 0x227 | Ordinal: 552
        void ceBoundingMeshBox(class cockpit::ceBoundingMeshBox const &);

    // RVA: 0x228 | Ordinal: 553
        void ceBoundingMeshBox(void);

    // RVA: 0xA91 | Ordinal: 2706
        void class_name(void) const;

    // RVA: 0xB18 | Ordinal: 2841
        void copy(void);

    // RVA: 0xE3C | Ordinal: 3645
        void getValue(struct lua_State *, class ed::basic_string<char> const &) const;

    // RVA: 0x1609 | Ordinal: 5642
        void rescale(void);

    // RVA: 0x17EB | Ordinal: 6124
        void setValue(struct lua_State *, class ed::basic_string<char> const &);

    // RVA: 0x393 | Ordinal: 916
        void _ceBoundingMeshBox(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CEBOUNDINGMESHBOX_HPP
