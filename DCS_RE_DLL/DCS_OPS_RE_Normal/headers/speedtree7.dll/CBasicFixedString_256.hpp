#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: speedtree7.dll
// Class: CBasicFixedString<256>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace SpeedTree {

class CBasicFixedString_256_
{
public:

    // RVA: 0x6 | Ordinal: 7
        void CBasicFixedString_256_(class SpeedTree::CBasicFixedString<256> const &);

    // RVA: 0x7 | Ordinal: 8
        void CBasicFixedString_256_(char const *);

    // RVA: 0x8 | Ordinal: 9
        void CBasicFixedString_256_(void);

    // RVA: 0x1AD | Ordinal: 430
        void Extension(char) const;

    // RVA: 0x1B2 | Ordinal: 435
        void Format(char const *, ...);

    // RVA: 0x2B2 | Ordinal: 691
        void c_str(void) const;

    // RVA: 0x2BA | Ordinal: 699
        void clear(void);

    // RVA: 0x2BE | Ordinal: 703
        void empty(void) const;

    // RVA: 0x2C1 | Ordinal: 706
        void find(char, unsigned __int64) const;

    // RVA: 0x14A | Ordinal: 331
        void operator_(class SpeedTree::CBasicFixedString<256> const &) const;

    // RVA: 0x2D6 | Ordinal: 727
        void resize(unsigned __int64);

    // RVA: 0x79 | Ordinal: 122
        void _CBasicFixedString_256_(void);
};

} // namespace SpeedTree

// DCS_OPS_RE_SPEEDTREE7.DLL_CBASICFIXEDSTRING_256_HPP
