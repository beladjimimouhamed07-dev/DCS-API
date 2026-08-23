#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXToolTip
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXToolTip
{
public:

    // RVA: 0x324 | Ordinal: 805
        void FXToolTip(void);

    // RVA: 0x325 | Ordinal: 806
        void FXToolTip(class FX::FXApp *, unsigned int, int, int, int, int);

    // RVA: 0x932 | Ordinal: 2355
        void GetClass(void) const;

    // RVA: 0xA52 | Ordinal: 2643
        void autoplace(void);

    // RVA: 0xBE4 | Ordinal: 3045
        void create(void);

    // RVA: 0xCC1 | Ordinal: 3266
        void detach(void);

    // RVA: 0xD04 | Ordinal: 3333
        void doesOverrideRedirect(void) const;

    // RVA: 0xD07 | Ordinal: 3336
        void doesSaveUnder(void) const;

    // RVA: 0x1159 | Ordinal: 4442
        void getDefaultHeight(void);

    // RVA: 0x11AF | Ordinal: 4528
        void getDefaultWidth(void);

    // RVA: 0x121F | Ordinal: 4640
        void getFont(void) const;

    // RVA: 0x1461 | Ordinal: 5218
        void getMetaClass(void) const;

    // RVA: 0x15FE | Ordinal: 5631
        void getText(void) const;

    // RVA: 0x1613 | Ordinal: 5652
        void getTextColor(void) const;

    // RVA: 0x17E1 | Ordinal: 6114
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B41 | Ordinal: 6978
        void load(class FX::FXStream &);

    // RVA: 0x1C9D | Ordinal: 7326
        void manufacture(void);

    // RVA: 0x20A1 | Ordinal: 8354
        void onCmdGetStringValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21BD | Ordinal: 8638
        void onCmdSetStringValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x249B | Ordinal: 9372
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x251D | Ordinal: 9502
        void onTipHide(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x251E | Ordinal: 9503
        void onTipShow(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x262D | Ordinal: 9774
        void onUpdate(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2671 | Ordinal: 9842
        void place(int, int);

    // RVA: 0x2872 | Ordinal: 10355
        void save(class FX::FXStream &) const;

    // RVA: 0x2AC9 | Ordinal: 10954
        void setFont(class FX::FXFont *);

    // RVA: 0x2D45 | Ordinal: 11590
        void setText(class FX::FXString const &);

    // RVA: 0x2D5A | Ordinal: 11611
        void setTextColor(unsigned int);

    // RVA: 0x2DF9 | Ordinal: 11770
        void show(void);

    // RVA: 0x4D6 | Ordinal: 1239
        void _FXToolTip(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXTOOLTIP_HPP
