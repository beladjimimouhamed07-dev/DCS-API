#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXURL
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXURL
{
public:

    // RVA: 0xC30 | Ordinal: 3121
        void decode(class FX::FXString const &);

    // RVA: 0xE1A | Ordinal: 3611
        void encode(class FX::FXString const &, char const *);

    // RVA: 0xEB4 | Ordinal: 3765
        void fileFromURL(class FX::FXString const &);

    // RVA: 0xEB5 | Ordinal: 3766
        void fileToURL(class FX::FXString const &);

    // RVA: 0xEB6 | Ordinal: 3767
        void filesFromURIList(class FX::FXString const &);

    // RVA: 0xEB7 | Ordinal: 3768
        void filesToURIList(class FX::FXString const *);

    // RVA: 0xF5A | Ordinal: 3931
        void fragment(class FX::FXString const &);

    // RVA: 0x1842 | Ordinal: 6211
        void host(class FX::FXString const &);

    // RVA: 0x2666 | Ordinal: 9831
        void password(class FX::FXString const &);

    // RVA: 0x266B | Ordinal: 9836
        void path(class FX::FXString const &);

    // RVA: 0x2687 | Ordinal: 9864
        void port(class FX::FXString const &, int);

    // RVA: 0x26D6 | Ordinal: 9943
        void query(class FX::FXString const &);

    // RVA: 0x28C4 | Ordinal: 10437
        void scheme(class FX::FXString const &);

    // RVA: 0x2F32 | Ordinal: 12083
        void username(class FX::FXString const &);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXURL_HPP
