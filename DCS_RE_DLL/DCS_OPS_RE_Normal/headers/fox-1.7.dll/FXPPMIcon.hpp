#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXPPMIcon
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXPPMIcon
{
public:

    // RVA: 0x23B | Ordinal: 572
        void FXPPMIcon(void);

    // RVA: 0x23C | Ordinal: 573
        void FXPPMIcon(class FX::FXApp *, void const *, unsigned int, unsigned int, int, int);

    // RVA: 0x1429 | Ordinal: 5162
        void getMetaClass(void) const;

    // RVA: 0x17A9 | Ordinal: 6058
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B6F | Ordinal: 7024
        void loadPixels(class FX::FXStream &);

    // RVA: 0x1C66 | Ordinal: 7271
        void manufacture(void);

    // RVA: 0x289B | Ordinal: 10396
        void savePixels(class FX::FXStream &) const;

    // RVA: 0x479 | Ordinal: 1146
        void _FXPPMIcon(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXPPMICON_HPP
