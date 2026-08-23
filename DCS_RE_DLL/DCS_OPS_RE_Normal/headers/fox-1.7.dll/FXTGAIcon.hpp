#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXTGAIcon
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXTGAIcon
{
public:

    // RVA: 0x2FB | Ordinal: 764
        void FXTGAIcon(void);

    // RVA: 0x2FC | Ordinal: 765
        void FXTGAIcon(class FX::FXApp *, void const *, unsigned int, unsigned int, int, int);

    // RVA: 0x1450 | Ordinal: 5201
        void getMetaClass(void) const;

    // RVA: 0x17D0 | Ordinal: 6097
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B75 | Ordinal: 7030
        void loadPixels(class FX::FXStream &);

    // RVA: 0x1C8D | Ordinal: 7310
        void manufacture(void);

    // RVA: 0x28A1 | Ordinal: 10402
        void savePixels(class FX::FXStream &) const;

    // RVA: 0x4C1 | Ordinal: 1218
        void _FXTGAIcon(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXTGAICON_HPP
