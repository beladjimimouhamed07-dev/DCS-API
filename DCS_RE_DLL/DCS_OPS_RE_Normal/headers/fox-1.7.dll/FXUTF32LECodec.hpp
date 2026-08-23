#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXUTF32LECodec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXUTF32LECodec
{
public:

    // RVA: 0x33C | Ordinal: 829
        void FXUTF32LECodec(class FX::FXUTF32LECodec const &);

    // RVA: 0x33D | Ordinal: 830
        void FXUTF32LECodec(void);

    // RVA: 0x9AB | Ordinal: 2476
        void aliases(void) const;

    // RVA: 0x146D | Ordinal: 5230
        void getMetaClass(void) const;

    // RVA: 0x17ED | Ordinal: 6126
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1CA8 | Ordinal: 7337
        void manufacture(void);

    // RVA: 0x1CFF | Ordinal: 7424
        void mb2wc(unsigned int &, char const *, int) const;

    // RVA: 0x1E3E | Ordinal: 7743
        void mibEnum(void) const;

    // RVA: 0x1E6E | Ordinal: 7791
        void mimeName(void) const;

    // RVA: 0x1F05 | Ordinal: 7942
        void name(void) const;

    // RVA: 0x2FA5 | Ordinal: 12198
        void wc2mb(char *, int, unsigned int) const;

    // RVA: 0x4E2 | Ordinal: 1251
        void _FXUTF32LECodec(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXUTF32LECODEC_HPP
