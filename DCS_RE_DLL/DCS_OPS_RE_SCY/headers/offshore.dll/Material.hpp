#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: offshore.dll
// Class: Material
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace offshore {

class Material
{
public:

    // RVA: 0x107 | Ordinal: 264
        void dump(struct _iobuf *);

    // RVA: 0x16D | Ordinal: 366
        void getParam(class ed::basic_string<char> const &);

    // RVA: 0x16E | Ordinal: 367
        void getParam(class ed::basic_string<char> const &, int &);

    // RVA: 0x16F | Ordinal: 368
        void getParam(class ed::basic_string<char> const &, class ed::basic_string<char> &);

    // RVA: 0x170 | Ordinal: 369
        void getParams(class boost::container::flat_map<class ed::basic_string<char>, class ed::basic_string<char>, struct std::less<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char>, class ed::basic_string<char>>>> &) const;

    // RVA: 0x21A | Ordinal: 539
        void setEmptyParam(class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x22E | Ordinal: 559
        void setParam(class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x22F | Ordinal: 560
        void setParam(class ed::basic_string<char> const &, int);

    // RVA: 0x230 | Ordinal: 561
        void setParams(class boost::container::flat_map<class ed::basic_string<char>, class ed::basic_string<char>, struct std::less<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char>, class ed::basic_string<char>>>> const &);
};

} // namespace offshore

// DCS_OPS_RE_OFFSHORE.DLL_MATERIAL_HPP
