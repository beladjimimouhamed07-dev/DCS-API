#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXXBMIcon
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXXBMIcon
{
public:

    // RVA: 0x387 | Ordinal: 904
        void FXXBMIcon(void);

    // RVA: 0x388 | Ordinal: 905
        void FXXBMIcon(class FX::FXApp *, unsigned char const *, unsigned char const *, unsigned int, unsigned int, int, int);

    // RVA: 0x1476 | Ordinal: 5239
        void getMetaClass(void) const;

    // RVA: 0x17F6 | Ordinal: 6135
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B7B | Ordinal: 7036
        void loadPixels(class FX::FXStream &);

    // RVA: 0x1CB1 | Ordinal: 7346
        void manufacture(void);

    // RVA: 0x28A7 | Ordinal: 10408
        void savePixels(class FX::FXStream &) const;

    // RVA: 0x4F7 | Ordinal: 1272
        void _FXXBMIcon(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXXBMICON_HPP
