#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: Anchor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace assets {
namespace lPointAsset {

class Anchor
{
public:

    // RVA: 0x17A | Ordinal: 379
        void assignConnectableSplineAssets(class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &, enum assets::lPointAsset::Anchor::ProfileBindingType);

    // RVA: 0x203 | Ordinal: 516
        void dump(bool);

    // RVA: 0x2C0 | Ordinal: 705
        void getConnectableSplineIndex(class ed::basic_string<char> const &) const;

    // RVA: 0x336 | Ordinal: 823
        void getMaxSplineBinding(int &, int &) const;

    // RVA: 0x3C2 | Ordinal: 963
        void getSplineBindingType(class ed::basic_string<char> const &) const;

    // RVA: 0x3F1 | Ordinal: 1010
        void getTransform(void) const;

    // RVA: 0x466 | Ordinal: 1127
        void isSplineAllowable(class ed::basic_string<char> const &) const;

    // RVA: 0x467 | Ordinal: 1128
        void isSplineAllowable(class ed::basic_string<char> const &, bool) const;

    // RVA: 0x51D | Ordinal: 1310
        void readFromOffshore(struct offshore::Scene &, int, class osg::Matrixd &, class std::map<class ed::basic_string<char>, class ed::basic_string<char>, struct std::less<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, class ed::basic_string<char>>>> &, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);
};

} // namespace lPointAsset
} // namespace assets

// DCS_OPS_RE_EDTERRAIN4.DLL_ANCHOR_HPP
