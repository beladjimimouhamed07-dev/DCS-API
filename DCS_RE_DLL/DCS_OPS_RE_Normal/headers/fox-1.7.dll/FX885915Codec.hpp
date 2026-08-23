#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FX885915Codec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FX885915Codec
{
public:

    // RVA: 0x12 | Ordinal: 19
        void FX885915Codec(class FX::FX885915Codec const &);

    // RVA: 0x13 | Ordinal: 20
        void FX885915Codec(void);

    // RVA: 0x982 | Ordinal: 2435
        void aliases(void) const;

    // RVA: 0x1379 | Ordinal: 4986
        void getMetaClass(void) const;

    // RVA: 0x16F7 | Ordinal: 5880
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1BBB | Ordinal: 7100
        void manufacture(void);

    // RVA: 0x1CD5 | Ordinal: 7382
        void mb2wc(unsigned int &, char const *, int) const;

    // RVA: 0x1E15 | Ordinal: 7702
        void mibEnum(void) const;

    // RVA: 0x1E45 | Ordinal: 7750
        void mimeName(void) const;

    // RVA: 0x1ED9 | Ordinal: 7898
        void name(void) const;

    // RVA: 0x2F7B | Ordinal: 12156
        void wc2mb(char *, int, unsigned int) const;

    // RVA: 0x399 | Ordinal: 922
        void _FX885915Codec(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FX885915CODEC_HPP
