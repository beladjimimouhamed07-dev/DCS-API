#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXHeader
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXHeader
{
public:

    // RVA: 0x16D | Ordinal: 366
        void FXHeader(void);

    // RVA: 0x16E | Ordinal: 367
        void FXHeader(class FX::FXComposite *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0x9B7 | Ordinal: 2488
        void alphaNumbering(int);

    // RVA: 0x9DB | Ordinal: 2524
        void appendItem(class FX::FXString const &, class FX::FXIcon *, int, void *, bool);

    // RVA: 0x9DC | Ordinal: 2525
        void appendItem(class FX::FXHeaderItem *, bool);

    // RVA: 0xAE6 | Ordinal: 2791
        void clearItems(bool);

    // RVA: 0xBC1 | Ordinal: 3010
        void create(void);

    // RVA: 0xBF2 | Ordinal: 3059
        void createItem(class FX::FXString const &, class FX::FXIcon *, int, void *);

    // RVA: 0xC2F | Ordinal: 3120
        void decimalNumbering(int);

    // RVA: 0xCA4 | Ordinal: 3237
        void detach(void);

    // RVA: 0xDBA | Ordinal: 3515
        void drawSplit(int);

    // RVA: 0xE77 | Ordinal: 3704
        void extractItem(int, bool);

    // RVA: 0xEE1 | Ordinal: 3810
        void fillItems(class FX::FXString const &, class FX::FXIcon *, int, void *, bool);

    // RVA: 0xEE2 | Ordinal: 3811
        void fillItems(char const *const *, class FX::FXIcon *, int, void *, bool);

    // RVA: 0xEE3 | Ordinal: 3812
        void fillItems(class FX::FXString const *, class FX::FXIcon *, int, void *, bool);

    // RVA: 0x101C | Ordinal: 4125
        void getArrowDir(int) const;

    // RVA: 0x102F | Ordinal: 4144
        void getAutoNumbering(void) const)(int);

    // RVA: 0x1121 | Ordinal: 4386
        void getDefaultHeight(void);

    // RVA: 0x1177 | Ordinal: 4472
        void getDefaultWidth(void);

    // RVA: 0x1210 | Ordinal: 4625
        void getFont(void) const;

    // RVA: 0x1258 | Ordinal: 4697
        void getHeaderStyle(void) const;

    // RVA: 0x1278 | Ordinal: 4729
        void getHelpText(void) const;

    // RVA: 0x12D2 | Ordinal: 4819
        void getItem(int) const;

    // RVA: 0x12DB | Ordinal: 4828
        void getItemAt(int) const;

    // RVA: 0x12E7 | Ordinal: 4840
        void getItemData(int) const;

    // RVA: 0x12F5 | Ordinal: 4854
        void getItemIcon(int) const;

    // RVA: 0x12F9 | Ordinal: 4858
        void getItemIconPosition(int) const;

    // RVA: 0x12FB | Ordinal: 4860
        void getItemJustify(int) const;

    // RVA: 0x1300 | Ordinal: 4865
        void getItemOffset(int) const;

    // RVA: 0x1309 | Ordinal: 4874
        void getItemSize(int) const;

    // RVA: 0x1310 | Ordinal: 4881
        void getItemText(int) const;

    // RVA: 0x1317 | Ordinal: 4888
        void getItemTipText(int) const;

    // RVA: 0x13F0 | Ordinal: 5105
        void getMetaClass(void) const;

    // RVA: 0x14AA | Ordinal: 5291
        void getNumItems(void) const;

    // RVA: 0x1508 | Ordinal: 5385
        void getPosition(void) const;

    // RVA: 0x1605 | Ordinal: 5638
        void getTextColor(void) const;

    // RVA: 0x1664 | Ordinal: 5733
        void getTotalSize(void) const;

    // RVA: 0x176F | Ordinal: 6000
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x18C0 | Ordinal: 6337
        void insertItem(int, class FX::FXString const &, class FX::FXIcon *, int, void *, bool);

    // RVA: 0x18C1 | Ordinal: 6338
        void insertItem(int, class FX::FXHeaderItem *, bool);

    // RVA: 0x1982 | Ordinal: 6531
        void isItemPressed(int) const;

    // RVA: 0x1A49 | Ordinal: 6730
        void layout(void);

    // RVA: 0x1AEF | Ordinal: 6896
        void load(class FX::FXStream &);

    // RVA: 0x1BAC | Ordinal: 7085
        void makeItemVisible(int);

    // RVA: 0x1C2E | Ordinal: 7215
        void manufacture(void);

    // RVA: 0x23B8 | Ordinal: 9145
        void onLeftBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23E0 | Ordinal: 9185
        void onLeftBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x242C | Ordinal: 9261
        void onMotion(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x246A | Ordinal: 9323
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24B0 | Ordinal: 9393
        void onQueryHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24D0 | Ordinal: 9425
        void onQueryTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2521 | Ordinal: 9506
        void onTipTimer(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2540 | Ordinal: 9537
        void onUngrabbed(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x26BD | Ordinal: 9918
        void prependItem(class FX::FXString const &, class FX::FXIcon *, int, void *, bool);

    // RVA: 0x26BE | Ordinal: 9919
        void prependItem(class FX::FXHeaderItem *, bool);

    // RVA: 0x2750 | Ordinal: 10065
        void removeItem(int, bool);

    // RVA: 0x2766 | Ordinal: 10087
        void renumberCaptions(class FX::FXString (__cdecl *)(int), int, int);

    // RVA: 0x2820 | Ordinal: 10273
        void save(class FX::FXStream &) const;

    // RVA: 0x2982 | Ordinal: 10627
        void setArrowDir(int, unsigned int);

    // RVA: 0x2995 | Ordinal: 10646
        void setAutoNumbering(class FX::FXString (__cdecl *)(int));

    // RVA: 0x2ABA | Ordinal: 10939
        void setFont(class FX::FXFont *);

    // RVA: 0x2AFF | Ordinal: 11008
        void setHeaderStyle(unsigned int);

    // RVA: 0x2B1A | Ordinal: 11035
        void setHelpText(class FX::FXString const &);

    // RVA: 0x2B77 | Ordinal: 11128
        void setItem(int, class FX::FXString const &, class FX::FXIcon *, int, void *, bool);

    // RVA: 0x2B78 | Ordinal: 11129
        void setItem(int, class FX::FXHeaderItem *, bool);

    // RVA: 0x2B89 | Ordinal: 11146
        void setItemData(int, void *);

    // RVA: 0x2B91 | Ordinal: 11154
        void setItemIcon(int, class FX::FXIcon *, bool);

    // RVA: 0x2B95 | Ordinal: 11158
        void setItemIconPosition(int, unsigned int);

    // RVA: 0x2B97 | Ordinal: 11160
        void setItemJustify(int, unsigned int);

    // RVA: 0x2B9D | Ordinal: 11166
        void setItemPressed(int, bool);

    // RVA: 0x2B9E | Ordinal: 11167
        void setItemSize(int, int);

    // RVA: 0x2BA5 | Ordinal: 11174
        void setItemText(int, class FX::FXString const &);

    // RVA: 0x2BAC | Ordinal: 11181
        void setItemTipText(int, class FX::FXString const &);

    // RVA: 0x2C68 | Ordinal: 11369
        void setPosition(int);

    // RVA: 0x2D4C | Ordinal: 11597
        void setTextColor(unsigned int);

    // RVA: 0x2F11 | Ordinal: 12050
        void updateItem(int) const;

    // RVA: 0x42B | Ordinal: 1068
        void _FXHeader(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXHEADER_HPP
