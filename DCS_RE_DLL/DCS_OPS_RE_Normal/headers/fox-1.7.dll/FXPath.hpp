#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXPath
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXPath
{
public:

    // RVA: 0x94A | Ordinal: 2379
        void absolute(class FX::FXString const &, class FX::FXString const &);

    // RVA: 0x94B | Ordinal: 2380
        void absolute(class FX::FXString const &);

    // RVA: 0xB80 | Ordinal: 2945
        void contract(class FX::FXString const &, class FX::FXString const &, class FX::FXString const &);

    // RVA: 0xB81 | Ordinal: 2946
        void convert(class FX::FXString const &, char, char);

    // RVA: 0xC4D | Ordinal: 3150
        void dequote(class FX::FXString const &);

    // RVA: 0xCD9 | Ordinal: 3290
        void directory(class FX::FXString const &);

    // RVA: 0xDE2 | Ordinal: 3555
        void drive(class FX::FXString const &);

    // RVA: 0xE24 | Ordinal: 3621
        void enquote(class FX::FXString const &, bool);

    // RVA: 0xE67 | Ordinal: 3688
        void expand(class FX::FXString const &);

    // RVA: 0xE73 | Ordinal: 3700
        void extension(class FX::FXString const &);

    // RVA: 0x18EE | Ordinal: 6383
        void isAbsolute(class FX::FXString const &);

    // RVA: 0x1954 | Ordinal: 6485
        void isHidden(class FX::FXString const &);

    // RVA: 0x1961 | Ordinal: 6498
        void isInside(class FX::FXString const &, class FX::FXString const &);

    // RVA: 0x19EC | Ordinal: 6637
        void isShare(class FX::FXString const &);

    // RVA: 0x1A02 | Ordinal: 6659
        void isTopDirectory(class FX::FXString const &);

    // RVA: 0x1CBB | Ordinal: 7356
        void match(class FX::FXString const &, class FX::FXString const &, unsigned int);

    // RVA: 0x1CBC | Ordinal: 7357
        void match(class FX::FXString const &, char const *, unsigned int);

    // RVA: 0x1CBD | Ordinal: 7358
        void match(char const *, char const *, unsigned int);

    // RVA: 0x1EFF | Ordinal: 7936
        void name(class FX::FXString const &);

    // RVA: 0x272E | Ordinal: 10031
        void relative(class FX::FXString const &, class FX::FXString const &);

    // RVA: 0x272F | Ordinal: 10032
        void relative(class FX::FXString const &);

    // RVA: 0x27B4 | Ordinal: 10165
        void root(class FX::FXString const &);

    // RVA: 0x28CA | Ordinal: 10443
        void search(class FX::FXString const &, class FX::FXString const &);

    // RVA: 0x2DEC | Ordinal: 11757
        void share(class FX::FXString const &);

    // RVA: 0x2E30 | Ordinal: 11825
        void simplify(class FX::FXString const &);

    // RVA: 0x2E68 | Ordinal: 11881
        void stripExtension(class FX::FXString const &);

    // RVA: 0x2E9C | Ordinal: 11933
        void title(class FX::FXString const &);

    // RVA: 0x2EF4 | Ordinal: 12021
        void unique(class FX::FXString const &);

    // RVA: 0x2F0C | Ordinal: 12045
        void upLevel(class FX::FXString const &);

    // RVA: 0x2F4C | Ordinal: 12109
        void validPath(class FX::FXString const &);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXPATH_HPP
