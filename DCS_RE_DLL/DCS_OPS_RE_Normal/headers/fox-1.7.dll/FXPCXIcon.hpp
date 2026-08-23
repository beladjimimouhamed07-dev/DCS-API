#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXPCXIcon
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXPCXIcon
{
public:

    // RVA: 0x233 | Ordinal: 564
        void FXPCXIcon(void);

    // RVA: 0x234 | Ordinal: 565
        void FXPCXIcon(class FX::FXApp *, void const *, unsigned int, unsigned int, int, int);

    // RVA: 0x1425 | Ordinal: 5158
        void getMetaClass(void) const;

    // RVA: 0x17A5 | Ordinal: 6054
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B6B | Ordinal: 7020
        void loadPixels(class FX::FXStream &);

    // RVA: 0x1C62 | Ordinal: 7267
        void manufacture(void);

    // RVA: 0x2897 | Ordinal: 10392
        void savePixels(class FX::FXStream &) const;

    // RVA: 0x475 | Ordinal: 1142
        void _FXPCXIcon(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXPCXICON_HPP
