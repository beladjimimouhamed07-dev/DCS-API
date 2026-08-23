#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXRASIcon
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXRASIcon
{
public:

    // RVA: 0x26F | Ordinal: 624
        void FXRASIcon(void);

    // RVA: 0x270 | Ordinal: 625
        void FXRASIcon(class FX::FXApp *, void const *, unsigned int, unsigned int, int, int);

    // RVA: 0x1431 | Ordinal: 5170
        void getMetaClass(void) const;

    // RVA: 0x17B1 | Ordinal: 6066
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B71 | Ordinal: 7026
        void loadPixels(class FX::FXStream &);

    // RVA: 0x1C6E | Ordinal: 7279
        void manufacture(void);

    // RVA: 0x289D | Ordinal: 10398
        void savePixels(class FX::FXStream &) const;

    // RVA: 0x489 | Ordinal: 1162
        void _FXRASIcon(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXRASICON_HPP
