#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXCP850Codec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXCP850Codec
{
public:

    // RVA: 0x51 | Ordinal: 82
        void FXCP850Codec(class FX::FXCP850Codec const &);

    // RVA: 0x52 | Ordinal: 83
        void FXCP850Codec(void);

    // RVA: 0x997 | Ordinal: 2456
        void aliases(void) const;

    // RVA: 0x1397 | Ordinal: 5016
        void getMetaClass(void) const;

    // RVA: 0x1715 | Ordinal: 5910
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1BD9 | Ordinal: 7130
        void manufacture(void);

    // RVA: 0x1CEA | Ordinal: 7403
        void mb2wc(unsigned int &, char const *, int) const;

    // RVA: 0x1E2A | Ordinal: 7723
        void mibEnum(void) const;

    // RVA: 0x1E5A | Ordinal: 7771
        void mimeName(void) const;

    // RVA: 0x1EEE | Ordinal: 7919
        void name(void) const;

    // RVA: 0x2F90 | Ordinal: 12177
        void wc2mb(char *, int, unsigned int) const;

    // RVA: 0x3BB | Ordinal: 956
        void _FXCP850Codec(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXCP850CODEC_HPP
