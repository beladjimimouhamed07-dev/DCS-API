#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXColorItem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXColorItem
{
public:

    // RVA: 0x81 | Ordinal: 130
        void FXColorItem(void);

    // RVA: 0x82 | Ordinal: 131
        void FXColorItem(class FX::FXString const &, unsigned int, void *);

    // RVA: 0xD12 | Ordinal: 3347
        void draw(class FX::FXList const *, class FX::FXDC &, int, int, int, int) const;

    // RVA: 0x1097 | Ordinal: 4248
        void getColor(void) const;

    // RVA: 0x125B | Ordinal: 4700
        void getHeight(class FX::FXList const *) const;

    // RVA: 0x13AD | Ordinal: 5038
        void getMetaClass(void) const;

    // RVA: 0x16BB | Ordinal: 5820
        void getWidth(class FX::FXList const *) const;

    // RVA: 0x172B | Ordinal: 5932
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1836 | Ordinal: 6199
        void hitItem(class FX::FXList const *, int, int) const;

    // RVA: 0x1BEF | Ordinal: 7152
        void manufacture(void);

    // RVA: 0x29F5 | Ordinal: 10742
        void setColor(unsigned int);

    // RVA: 0x3D1 | Ordinal: 978
        void _FXColorItem(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXCOLORITEM_HPP
