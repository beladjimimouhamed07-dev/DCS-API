#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXCP1252Codec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXCP1252Codec
{
public:

    // RVA: 0x41 | Ordinal: 66
        void FXCP1252Codec(class FX::FXCP1252Codec const &);

    // RVA: 0x42 | Ordinal: 67
        void FXCP1252Codec(void);

    // RVA: 0x98F | Ordinal: 2448
        void aliases(void) const;

    // RVA: 0x138F | Ordinal: 5008
        void getMetaClass(void) const;

    // RVA: 0x170D | Ordinal: 5902
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1BD1 | Ordinal: 7122
        void manufacture(void);

    // RVA: 0x1CE2 | Ordinal: 7395
        void mb2wc(unsigned int &, char const *, int) const;

    // RVA: 0x1E22 | Ordinal: 7715
        void mibEnum(void) const;

    // RVA: 0x1E52 | Ordinal: 7763
        void mimeName(void) const;

    // RVA: 0x1EE6 | Ordinal: 7911
        void name(void) const;

    // RVA: 0x2F88 | Ordinal: 12169
        void wc2mb(char *, int, unsigned int) const;

    // RVA: 0x3B3 | Ordinal: 948
        void _FXCP1252Codec(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXCP1252CODEC_HPP
