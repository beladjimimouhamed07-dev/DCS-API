#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: UniModelDesc.dll
// Class: Properties
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace model {

class Properties
{
public:

    // RVA: 0x1B | Ordinal: 28
        void add(class ed::Ptr<class model::IProperty, struct model::IObjectDeleter>);

    // RVA: 0xA9 | Ordinal: 170
        void get_dyn(class std::basic_string_view<char, struct std::char_traits<char>>, enum model::pt::PropertyType) const;

    // RVA: 0xAC | Ordinal: 173
        void get_static_val(class std::basic_string_view<char, struct std::char_traits<char>>, float &) const;

    // RVA: 0xAD | Ordinal: 174
        void get_static_val(class std::basic_string_view<char, struct std::char_traits<char>>, class ed::basic_string<char> &) const;

    // RVA: 0xAE | Ordinal: 175
        void get_static_val(class std::basic_string_view<char, struct std::char_traits<char>>, class osg::Vec2f &) const;

    // RVA: 0xAF | Ordinal: 176
        void get_static_val(class std::basic_string_view<char, struct std::char_traits<char>>, class osg::Vec3f &) const;

    // RVA: 0xB0 | Ordinal: 177
        void get_static_val(class std::basic_string_view<char, struct std::char_traits<char>>, class osg::Vec4f &) const;

    // RVA: 0xB1 | Ordinal: 178
        void get_static_val_def(class std::basic_string_view<char, struct std::char_traits<char>>, class ed::basic_string<char> const &) const;

    // RVA: 0xB2 | Ordinal: 179
        void get_static_val_def(class std::basic_string_view<char, struct std::char_traits<char>>, class osg::Vec2f) const;

    // RVA: 0xB3 | Ordinal: 180
        void get_static_val_def(class std::basic_string_view<char, struct std::char_traits<char>>, class osg::Vec3f) const;

    // RVA: 0xB4 | Ordinal: 181
        void get_static_val_def(class std::basic_string_view<char, struct std::char_traits<char>>, class osg::Vec4f) const;

    // RVA: 0xB5 | Ordinal: 182
        void get_static_val_def(class std::basic_string_view<char, struct std::char_traits<char>>, float) const;

    // RVA: 0xE6 | Ordinal: 231
        void remove(class ed::Ptr<class model::IProperty, struct model::IObjectDeleter>);

    // RVA: 0xE7 | Ordinal: 232
        void remove(class std::basic_string_view<char, struct std::char_traits<char>>);

    // RVA: 0x11 | Ordinal: 18
        void _Properties(void);
};

} // namespace model

// DCS_OPS_RE_UNIMODELDESC.DLL_PROPERTIES_HPP
