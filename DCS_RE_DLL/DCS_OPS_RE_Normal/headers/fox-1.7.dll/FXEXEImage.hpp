#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXEXEImage
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXEXEImage
{
public:

    // RVA: 0xF2 | Ordinal: 243
        void FXEXEImage(void);

    // RVA: 0xF3 | Ordinal: 244
        void FXEXEImage(class FX::FXApp *, void const *, unsigned int, int, int, int, int);

    // RVA: 0x13D0 | Ordinal: 5073
        void getMetaClass(void) const;

    // RVA: 0x1534 | Ordinal: 5429
        void getResId(void) const;

    // RVA: 0x1536 | Ordinal: 5431
        void getResType(void) const;

    // RVA: 0x174F | Ordinal: 5968
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B5E | Ordinal: 7007
        void loadPixels(class FX::FXStream &);

    // RVA: 0x1C0F | Ordinal: 7184
        void manufacture(void);

    // RVA: 0x288A | Ordinal: 10379
        void savePixels(class FX::FXStream &) const;

    // RVA: 0x2C8F | Ordinal: 11408
        void setResId(int);

    // RVA: 0x2C91 | Ordinal: 11410
        void setResType(int);

    // RVA: 0x3FF | Ordinal: 1024
        void _FXEXEImage(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXEXEIMAGE_HPP
