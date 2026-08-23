#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXBMPIcon
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXBMPIcon
{
public:

    // RVA: 0x30 | Ordinal: 49
        void FXBMPIcon(void);

    // RVA: 0x31 | Ordinal: 50
        void FXBMPIcon(class FX::FXApp *, void const *, unsigned int, unsigned int, int, int);

    // RVA: 0x1387 | Ordinal: 5000
        void getMetaClass(void) const;

    // RVA: 0x1705 | Ordinal: 5894
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B56 | Ordinal: 6999
        void loadPixels(class FX::FXStream &);

    // RVA: 0x1BC9 | Ordinal: 7114
        void manufacture(void);

    // RVA: 0x2882 | Ordinal: 10371
        void savePixels(class FX::FXStream &) const;

    // RVA: 0x3AA | Ordinal: 939
        void _FXBMPIcon(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXBMPICON_HPP
