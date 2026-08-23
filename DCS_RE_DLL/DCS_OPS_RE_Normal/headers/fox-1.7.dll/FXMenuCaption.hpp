#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXMenuCaption
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXMenuCaption
{
public:

    // RVA: 0x211 | Ordinal: 530
        void FXMenuCaption(void);

    // RVA: 0x212 | Ordinal: 531
        void FXMenuCaption(class FX::FXComposite *, class FX::FXString const &, class FX::FXIcon *, unsigned int);

    // RVA: 0xBD2 | Ordinal: 3027
        void create(void);

    // RVA: 0xCB3 | Ordinal: 3252
        void detach(void);

    // RVA: 0xCE2 | Ordinal: 3299
        void disable(void);

    // RVA: 0xE06 | Ordinal: 3591
        void enable(void);

    // RVA: 0x1131 | Ordinal: 4402
        void getDefaultHeight(void);

    // RVA: 0x1187 | Ordinal: 4488
        void getDefaultWidth(void);

    // RVA: 0x1216 | Ordinal: 4631
        void getFont(void) const;

    // RVA: 0x127E | Ordinal: 4735
        void getHelpText(void) const;

    // RVA: 0x1291 | Ordinal: 4754
        void getHiliteColor(void) const;

    // RVA: 0x12A9 | Ordinal: 4778
        void getIcon(void) const;

    // RVA: 0x1371 | Ordinal: 4978
        void getMenuStyle(void) const;

    // RVA: 0x1418 | Ordinal: 5145
        void getMetaClass(void) const;

    // RVA: 0x156F | Ordinal: 5488
        void getSelBackColor(void) const;

    // RVA: 0x1584 | Ordinal: 5509
        void getSelTextColor(void) const;

    // RVA: 0x15A6 | Ordinal: 5543
        void getShadowColor(void) const;

    // RVA: 0x15F7 | Ordinal: 5624
        void getText(void) const;

    // RVA: 0x160A | Ordinal: 5643
        void getTextColor(void) const;

    // RVA: 0x163E | Ordinal: 5695
        void getTipText(void) const;

    // RVA: 0x1798 | Ordinal: 6041
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B0C | Ordinal: 6925
        void load(class FX::FXStream &);

    // RVA: 0x1C55 | Ordinal: 7254
        void manufacture(void);

    // RVA: 0x2043 | Ordinal: 8260
        void onCmdGetHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x204D | Ordinal: 8270
        void onCmdGetIconValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x209C | Ordinal: 8349
        void onCmdGetStringValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20AF | Ordinal: 8368
        void onCmdGetTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x215D | Ordinal: 8542
        void onCmdSetHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2167 | Ordinal: 8552
        void onCmdSetIconValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21B8 | Ordinal: 8633
        void onCmdSetStringValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21CB | Ordinal: 8652
        void onCmdSetTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21E7 | Ordinal: 8680
        void onCmdSetValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2479 | Ordinal: 9338
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24B5 | Ordinal: 9398
        void onQueryHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24D5 | Ordinal: 9430
        void onQueryTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2627 | Ordinal: 9768
        void onUpdate(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x283D | Ordinal: 10302
        void save(class FX::FXStream &) const;

    // RVA: 0x2AC0 | Ordinal: 10945
        void setFont(class FX::FXFont *);

    // RVA: 0x2B20 | Ordinal: 11041
        void setHelpText(class FX::FXString const &);

    // RVA: 0x2B34 | Ordinal: 11061
        void setHiliteColor(unsigned int);

    // RVA: 0x2B4B | Ordinal: 11084
        void setIcon(class FX::FXIcon *);

    // RVA: 0x2BFF | Ordinal: 11264
        void setMenuStyle(unsigned int);

    // RVA: 0x2CBA | Ordinal: 11451
        void setSelBackColor(unsigned int);

    // RVA: 0x2CC9 | Ordinal: 11466
        void setSelTextColor(unsigned int);

    // RVA: 0x2CE9 | Ordinal: 11498
        void setShadowColor(unsigned int);

    // RVA: 0x2D3F | Ordinal: 11584
        void setText(class FX::FXString const &);

    // RVA: 0x2D51 | Ordinal: 11602
        void setTextColor(unsigned int);

    // RVA: 0x2D81 | Ordinal: 11650
        void setTipText(class FX::FXString const &);

    // RVA: 0x465 | Ordinal: 1126
        void _FXMenuCaption(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXMENUCAPTION_HPP
