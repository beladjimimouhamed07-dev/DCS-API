#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXDrawable
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXDrawable
{
public:

    // RVA: 0xEC | Ordinal: 237
        void FXDrawable(class FX::FXApp *, int, int);

    // RVA: 0xED | Ordinal: 238
        void FXDrawable(void);

    // RVA: 0x936 | Ordinal: 2359
        void GetDC(void) const;

    // RVA: 0x93B | Ordinal: 2364
        void ReleaseDC(void *) const;

    // RVA: 0x125D | Ordinal: 4702
        void getHeight(void) const;

    // RVA: 0x13CD | Ordinal: 5070
        void getMetaClass(void) const;

    // RVA: 0x16AE | Ordinal: 5807
        void getVisual(void) const;

    // RVA: 0x16BD | Ordinal: 5822
        void getWidth(void) const;

    // RVA: 0x174C | Ordinal: 5965
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1AC8 | Ordinal: 6857
        void load(class FX::FXStream &);

    // RVA: 0x2791 | Ordinal: 10130
        void resize(int, int);

    // RVA: 0x27F9 | Ordinal: 10234
        void save(class FX::FXStream &) const;

    // RVA: 0x2DD1 | Ordinal: 11730
        void setVisual(class FX::FXVisual *);

    // RVA: 0x3FC | Ordinal: 1021
        void _FXDrawable(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXDRAWABLE_HPP
