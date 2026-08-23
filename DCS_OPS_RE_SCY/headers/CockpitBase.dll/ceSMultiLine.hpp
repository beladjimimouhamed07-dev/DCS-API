#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ceSMultiLine
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ceSMultiLine
{
public:

    // RVA: 0x950 | Ordinal: 2385
        void apply(void);

    // RVA: 0x23E | Ordinal: 575
        void ceSMultiLine(class cockpit::ceSMultiLine const &);

    // RVA: 0x23F | Ordinal: 576
        void ceSMultiLine(void);

    // RVA: 0xA9B | Ordinal: 2716
        void class_name(void) const;

    // RVA: 0xB22 | Ordinal: 2851
        void copy(void);

    // RVA: 0xE46 | Ordinal: 3655
        void getValue(struct lua_State *, class ed::basic_string<char> const &) const;

    // RVA: 0x1789 | Ordinal: 6026
        void setPointAtIndex(unsigned int, class osg::Vec3f const &, bool);

    // RVA: 0x17F5 | Ordinal: 6134
        void setValue(struct lua_State *, class ed::basic_string<char> const &);

    // RVA: 0x18D2 | Ordinal: 6355
        void set_mat_params(class cockpit::ccIndicationRenderParser const &, class Graphics::RenderObject *);

    // RVA: 0x39E | Ordinal: 927
        void _ceSMultiLine(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CESMULTILINE_HPP
