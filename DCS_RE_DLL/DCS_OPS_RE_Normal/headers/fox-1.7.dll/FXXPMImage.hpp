#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXXPMImage
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXXPMImage
{
public:

    // RVA: 0x38D | Ordinal: 910
        void FXXPMImage(void);

    // RVA: 0x38E | Ordinal: 911
        void FXXPMImage(class FX::FXApp *, char const **, unsigned int, int, int);

    // RVA: 0x1479 | Ordinal: 5242
        void getMetaClass(void) const;

    // RVA: 0x17F9 | Ordinal: 6138
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B7E | Ordinal: 7039
        void loadPixels(class FX::FXStream &);

    // RVA: 0x1CB4 | Ordinal: 7349
        void manufacture(void);

    // RVA: 0x28AA | Ordinal: 10411
        void savePixels(class FX::FXStream &) const;

    // RVA: 0x4FA | Ordinal: 1275
        void _FXXPMImage(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXXPMIMAGE_HPP
