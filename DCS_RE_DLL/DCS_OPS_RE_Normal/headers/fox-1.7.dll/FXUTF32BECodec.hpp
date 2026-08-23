#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXUTF32BECodec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXUTF32BECodec
{
public:

    // RVA: 0x338 | Ordinal: 825
        void FXUTF32BECodec(class FX::FXUTF32BECodec const &);

    // RVA: 0x339 | Ordinal: 826
        void FXUTF32BECodec(void);

    // RVA: 0x9A9 | Ordinal: 2474
        void aliases(void) const;

    // RVA: 0x146B | Ordinal: 5228
        void getMetaClass(void) const;

    // RVA: 0x17EB | Ordinal: 6124
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1CA6 | Ordinal: 7335
        void manufacture(void);

    // RVA: 0x1CFD | Ordinal: 7422
        void mb2wc(unsigned int &, char const *, int) const;

    // RVA: 0x1E3C | Ordinal: 7741
        void mibEnum(void) const;

    // RVA: 0x1E6C | Ordinal: 7789
        void mimeName(void) const;

    // RVA: 0x1F03 | Ordinal: 7940
        void name(void) const;

    // RVA: 0x2FA3 | Ordinal: 12196
        void wc2mb(char *, int, unsigned int) const;

    // RVA: 0x4E0 | Ordinal: 1249
        void _FXUTF32BECodec(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXUTF32BECODEC_HPP
