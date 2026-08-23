#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXJPGIcon
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXJPGIcon
{
public:

    // RVA: 0x19F | Ordinal: 416
        void FXJPGIcon(void);

    // RVA: 0x1A0 | Ordinal: 417
        void FXJPGIcon(class FX::FXApp *, void const *, unsigned int, unsigned int, int, int, int);

    // RVA: 0x1404 | Ordinal: 5125
        void getMetaClass(void) const;

    // RVA: 0x1516 | Ordinal: 5399
        void getQuality(void) const;

    // RVA: 0x1784 | Ordinal: 6021
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B69 | Ordinal: 7018
        void loadPixels(class FX::FXStream &);

    // RVA: 0x1C41 | Ordinal: 7234
        void manufacture(void);

    // RVA: 0x2895 | Ordinal: 10390
        void savePixels(class FX::FXStream &) const;

    // RVA: 0x2C73 | Ordinal: 11380
        void setQuality(int);

    // RVA: 0x443 | Ordinal: 1092
        void _FXJPGIcon(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXJPGICON_HPP
