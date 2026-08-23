#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXDDSIcon
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXDDSIcon
{
public:

    // RVA: 0xAD | Ordinal: 174
        void FXDDSIcon(void);

    // RVA: 0xAE | Ordinal: 175
        void FXDDSIcon(class FX::FXApp *, void const *, unsigned int, unsigned int, int, int);

    // RVA: 0x13BB | Ordinal: 5052
        void getMetaClass(void) const;

    // RVA: 0x1739 | Ordinal: 5946
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B5B | Ordinal: 7004
        void loadPixels(class FX::FXStream &);

    // RVA: 0x1BFC | Ordinal: 7165
        void manufacture(void);

    // RVA: 0x2887 | Ordinal: 10376
        void savePixels(class FX::FXStream &) const;

    // RVA: 0x3E6 | Ordinal: 999
        void _FXDDSIcon(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXDDSICON_HPP
