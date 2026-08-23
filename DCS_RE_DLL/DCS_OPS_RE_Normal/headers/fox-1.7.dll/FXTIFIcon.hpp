#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXTIFIcon
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXTIFIcon
{
public:

    // RVA: 0x2FF | Ordinal: 768
        void FXTIFIcon(void);

    // RVA: 0x300 | Ordinal: 769
        void FXTIFIcon(class FX::FXApp *, void const *, unsigned int, unsigned int, int, int);

    // RVA: 0x1095 | Ordinal: 4246
        void getCodec(void) const;

    // RVA: 0x1452 | Ordinal: 5203
        void getMetaClass(void) const;

    // RVA: 0x17D2 | Ordinal: 6099
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B77 | Ordinal: 7032
        void loadPixels(class FX::FXStream &);

    // RVA: 0x1C8F | Ordinal: 7312
        void manufacture(void);

    // RVA: 0x28A3 | Ordinal: 10404
        void savePixels(class FX::FXStream &) const;

    // RVA: 0x29F3 | Ordinal: 10740
        void setCodec(unsigned int);

    // RVA: 0x4C3 | Ordinal: 1220
        void _FXTIFIcon(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXTIFICON_HPP
