#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXMenuSeparator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXMenuSeparator
{
public:

    // RVA: 0x21D | Ordinal: 542
        void FXMenuSeparator(void);

    // RVA: 0x21E | Ordinal: 543
        void FXMenuSeparator(class FX::FXComposite *, class FX::FXObject *, unsigned int, unsigned int);

    // RVA: 0x1135 | Ordinal: 4406
        void getDefaultHeight(void);

    // RVA: 0x118B | Ordinal: 4492
        void getDefaultWidth(void);

    // RVA: 0x1292 | Ordinal: 4755
        void getHiliteColor(void) const;

    // RVA: 0x141E | Ordinal: 5151
        void getMetaClass(void) const;

    // RVA: 0x15A7 | Ordinal: 5544
        void getShadowColor(void) const;

    // RVA: 0x179E | Ordinal: 6047
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B11 | Ordinal: 6930
        void load(class FX::FXStream &);

    // RVA: 0x1C5B | Ordinal: 7260
        void manufacture(void);

    // RVA: 0x247E | Ordinal: 9343
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2842 | Ordinal: 10307
        void save(class FX::FXStream &) const;

    // RVA: 0x2B35 | Ordinal: 11062
        void setHiliteColor(unsigned int);

    // RVA: 0x2CEA | Ordinal: 11499
        void setShadowColor(unsigned int);

    // RVA: 0x46B | Ordinal: 1132
        void _FXMenuSeparator(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXMENUSEPARATOR_HPP
