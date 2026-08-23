#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: lRoadCovering
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape4 {

class lRoadCovering
{
public:

    // RVA: 0x1BA | Ordinal: 443
        void canAttach(struct landscape4::lRoadCovering const &) const;

    // RVA: 0x43 | Ordinal: 68
        void lRoadCovering(void);

    // RVA: 0x4D4 | Ordinal: 1237
        void parseSample(struct offshore::Mesh const &, struct offshore::Spline const &, struct offshore::Material const &, class std::map<class ed::basic_string<char>, class ed::basic_string<char>, struct std::less<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, class ed::basic_string<char>>>> const &);

    // RVA: 0x566 | Ordinal: 1383
        void set(struct offshore::Mesh &, struct offshore::Spline &, struct offshore::Material &, class std::map<class ed::basic_string<char>, class ed::basic_string<char>, struct std::less<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, class ed::basic_string<char>>>> &);

    // RVA: 0x565 | Ordinal: 1382
        void set3d(struct offshore::Mesh const &, struct offshore::Spline const &, struct offshore::Material const &, class std::map<class ed::basic_string<char>, class ed::basic_string<char>, struct std::less<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, class ed::basic_string<char>>>> const &);
};

} // namespace landscape4

// DCS_OPS_RE_EDTERRAIN4.DLL_LROADCOVERING_HPP
