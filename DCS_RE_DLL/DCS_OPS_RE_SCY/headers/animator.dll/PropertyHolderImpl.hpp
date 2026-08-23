#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: animator.dll
// Class: PropertyHolderImpl
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Animator {

class PropertyHolderImpl
{
public:

    // RVA: 0x23 | Ordinal: 36
        void PropertyHolderImpl(class Animator::PropertyHolderImpl const &);

    // RVA: 0x24 | Ordinal: 37
        void PropertyHolderImpl(void);

    // RVA: 0xE4 | Ordinal: 229
        void erase_property(class ed::basic_string<char> const &);

    // RVA: 0x169 | Ordinal: 362
        void get_property(class ed::basic_string<char> const &);

    // RVA: 0x19E | Ordinal: 415
        void gui(void);

    // RVA: 0x1C8 | Ordinal: 457
        void reg_property(class ed::basic_string<char> const &, float, class osg::Vec2f);

    // RVA: 0x212 | Ordinal: 531
        void set_property(class ed::basic_string<char> const &, float);

    // RVA: 0x36 | Ordinal: 55
        void _PropertyHolderImpl(void);
};

} // namespace Animator

// DCS_OPS_RE_ANIMATOR.DLL_PROPERTYHOLDERIMPL_HPP
