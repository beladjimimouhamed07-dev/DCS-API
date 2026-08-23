#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXXPMIcon
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXXPMIcon
{
public:

    // RVA: 0x38B | Ordinal: 908
        void FXXPMIcon(void);

    // RVA: 0x38C | Ordinal: 909
        void FXXPMIcon(class FX::FXApp *, char const **, unsigned int, unsigned int, int, int);

    // RVA: 0x1478 | Ordinal: 5241
        void getMetaClass(void) const;

    // RVA: 0x17F8 | Ordinal: 6137
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B7D | Ordinal: 7038
        void loadPixels(class FX::FXStream &);

    // RVA: 0x1CB3 | Ordinal: 7348
        void manufacture(void);

    // RVA: 0x28A9 | Ordinal: 10410
        void savePixels(class FX::FXStream &) const;

    // RVA: 0x4F9 | Ordinal: 1274
        void _FXXPMIcon(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXXPMICON_HPP
