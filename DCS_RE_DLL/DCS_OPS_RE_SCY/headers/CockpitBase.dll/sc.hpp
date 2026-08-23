#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: sc
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class sc
{
public:

    // RVA: 0xC24 | Ordinal: 3109
        void from32bit(class std::basic_string<unsigned int, struct std::char_traits<unsigned int>, class std::allocator<unsigned int>> const &);

    // RVA: 0xC25 | Ordinal: 3110
        void from32bit(class std::basic_string<unsigned int, struct std::char_traits<unsigned int>, class std::allocator<unsigned int>> const &, class ed::basic_string<char> &);

    // RVA: 0x1A3A | Ordinal: 6715
        void to32bit(class ed::basic_string<char> const &);

    // RVA: 0x1A3B | Ordinal: 6716
        void to32bit(class ed::basic_string<char> const &, class std::basic_string<unsigned int, struct std::char_traits<unsigned int>, class std::allocator<unsigned int>> &);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_SC_HPP
