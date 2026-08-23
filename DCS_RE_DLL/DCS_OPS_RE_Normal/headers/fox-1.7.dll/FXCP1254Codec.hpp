#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXCP1254Codec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXCP1254Codec
{
public:

    // RVA: 0x45 | Ordinal: 70
        void FXCP1254Codec(class FX::FXCP1254Codec const &);

    // RVA: 0x46 | Ordinal: 71
        void FXCP1254Codec(void);

    // RVA: 0x991 | Ordinal: 2450
        void aliases(void) const;

    // RVA: 0x1391 | Ordinal: 5010
        void getMetaClass(void) const;

    // RVA: 0x170F | Ordinal: 5904
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1BD3 | Ordinal: 7124
        void manufacture(void);

    // RVA: 0x1CE4 | Ordinal: 7397
        void mb2wc(unsigned int &, char const *, int) const;

    // RVA: 0x1E24 | Ordinal: 7717
        void mibEnum(void) const;

    // RVA: 0x1E54 | Ordinal: 7765
        void mimeName(void) const;

    // RVA: 0x1EE8 | Ordinal: 7913
        void name(void) const;

    // RVA: 0x2F8A | Ordinal: 12171
        void wc2mb(char *, int, unsigned int) const;

    // RVA: 0x3B5 | Ordinal: 950
        void _FXCP1254Codec(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXCP1254CODEC_HPP
