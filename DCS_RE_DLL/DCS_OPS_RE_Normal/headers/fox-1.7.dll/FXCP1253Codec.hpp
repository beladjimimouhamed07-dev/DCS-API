#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXCP1253Codec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXCP1253Codec
{
public:

    // RVA: 0x43 | Ordinal: 68
        void FXCP1253Codec(class FX::FXCP1253Codec const &);

    // RVA: 0x44 | Ordinal: 69
        void FXCP1253Codec(void);

    // RVA: 0x990 | Ordinal: 2449
        void aliases(void) const;

    // RVA: 0x1390 | Ordinal: 5009
        void getMetaClass(void) const;

    // RVA: 0x170E | Ordinal: 5903
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1BD2 | Ordinal: 7123
        void manufacture(void);

    // RVA: 0x1CE3 | Ordinal: 7396
        void mb2wc(unsigned int &, char const *, int) const;

    // RVA: 0x1E23 | Ordinal: 7716
        void mibEnum(void) const;

    // RVA: 0x1E53 | Ordinal: 7764
        void mimeName(void) const;

    // RVA: 0x1EE7 | Ordinal: 7912
        void name(void) const;

    // RVA: 0x2F89 | Ordinal: 12170
        void wc2mb(char *, int, unsigned int) const;

    // RVA: 0x3B4 | Ordinal: 949
        void _FXCP1253Codec(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXCP1253CODEC_HPP
