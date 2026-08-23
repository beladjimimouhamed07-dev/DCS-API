#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: MaterialAlias
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape4 {

class MaterialAlias
{
public:

    // RVA: 0xA | Ordinal: 11
        void MaterialAlias(struct landscape4::MaterialAlias const &);

    // RVA: 0xB | Ordinal: 12
        void MaterialAlias(void);

    // RVA: 0x316 | Ordinal: 791
        void getManifoldForSourceUvSet(class ed::basic_string<char> const &, class boost::container::flat_map<class ed::basic_string<char>, class ed::basic_string<char>, struct std::less<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char>, class ed::basic_string<char>>>> const &);

    // RVA: 0x3D3 | Ordinal: 980
        void getStream(class ed::basic_string<char> const &);

    // RVA: 0x3D6 | Ordinal: 983
        void getStreamForSourceUvSet(class ed::basic_string<char> const &, class boost::container::flat_map<class ed::basic_string<char>, class ed::basic_string<char>, struct std::less<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char>, class ed::basic_string<char>>>> const &);

    // RVA: 0x40A | Ordinal: 1035
        void getUvStreamForTexture(class ed::basic_string<char> const &);

    // RVA: 0x41C | Ordinal: 1053
        void hasStream(class ed::basic_string<char> const &);

    // RVA: 0x46D | Ordinal: 1134
        void isUseMaterialParamsArray(void) const;

    // RVA: 0x5D6 | Ordinal: 1495
        void worldSpacePoint(class ed::basic_string<char> const &, class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &) const;

    // RVA: 0x52 | Ordinal: 83
        void _MaterialAlias(void);
};

} // namespace landscape4

// DCS_OPS_RE_EDTERRAIN4.DLL_MATERIALALIAS_HPP
