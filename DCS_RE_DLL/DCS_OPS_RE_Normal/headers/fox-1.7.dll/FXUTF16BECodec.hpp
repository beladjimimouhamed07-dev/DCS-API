#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXUTF16BECodec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXUTF16BECodec
{
public:

    // RVA: 0x332 | Ordinal: 819
        void FXUTF16BECodec(class FX::FXUTF16BECodec const &);

    // RVA: 0x333 | Ordinal: 820
        void FXUTF16BECodec(void);

    // RVA: 0x9A6 | Ordinal: 2471
        void aliases(void) const;

    // RVA: 0x1468 | Ordinal: 5225
        void getMetaClass(void) const;

    // RVA: 0x17E8 | Ordinal: 6121
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1CA3 | Ordinal: 7332
        void manufacture(void);

    // RVA: 0x1CFA | Ordinal: 7419
        void mb2wc(unsigned int &, char const *, int) const;

    // RVA: 0x1E39 | Ordinal: 7738
        void mibEnum(void) const;

    // RVA: 0x1E69 | Ordinal: 7786
        void mimeName(void) const;

    // RVA: 0x1F00 | Ordinal: 7937
        void name(void) const;

    // RVA: 0x2FA0 | Ordinal: 12193
        void wc2mb(char *, int, unsigned int) const;

    // RVA: 0x4DD | Ordinal: 1246
        void _FXUTF16BECodec(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXUTF16BECODEC_HPP
