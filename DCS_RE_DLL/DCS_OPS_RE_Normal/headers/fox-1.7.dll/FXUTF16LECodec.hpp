#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXUTF16LECodec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXUTF16LECodec
{
public:

    // RVA: 0x336 | Ordinal: 823
        void FXUTF16LECodec(class FX::FXUTF16LECodec const &);

    // RVA: 0x337 | Ordinal: 824
        void FXUTF16LECodec(void);

    // RVA: 0x9A8 | Ordinal: 2473
        void aliases(void) const;

    // RVA: 0x146A | Ordinal: 5227
        void getMetaClass(void) const;

    // RVA: 0x17EA | Ordinal: 6123
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1CA5 | Ordinal: 7334
        void manufacture(void);

    // RVA: 0x1CFC | Ordinal: 7421
        void mb2wc(unsigned int &, char const *, int) const;

    // RVA: 0x1E3B | Ordinal: 7740
        void mibEnum(void) const;

    // RVA: 0x1E6B | Ordinal: 7788
        void mimeName(void) const;

    // RVA: 0x1F02 | Ordinal: 7939
        void name(void) const;

    // RVA: 0x2FA2 | Ordinal: 12195
        void wc2mb(char *, int, unsigned int) const;

    // RVA: 0x4DF | Ordinal: 1248
        void _FXUTF16LECodec(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXUTF16LECODEC_HPP
