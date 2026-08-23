#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXIconList
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXIconList
{
public:

    // RVA: 0x189 | Ordinal: 394
        void FXIconList(void);

    // RVA: 0x18A | Ordinal: 395
        void FXIconList(class FX::FXComposite *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int);

    // RVA: 0x9D5 | Ordinal: 2518
        void appendHeader(class FX::FXString const &, class FX::FXIcon *, int);

    // RVA: 0x9DD | Ordinal: 2526
        void appendItem(class FX::FXString const &, class FX::FXIcon *, class FX::FXIcon *, void *, bool);

    // RVA: 0x9DE | Ordinal: 2527
        void appendItem(class FX::FXIconItem *, bool);

    // RVA: 0xA00 | Ordinal: 2561
        void ascending(class FX::FXIconItem const *, class FX::FXIconItem const *);

    // RVA: 0xA06 | Ordinal: 2567
        void ascendingCase(class FX::FXIconItem const *, class FX::FXIconItem const *);

    // RVA: 0xA88 | Ordinal: 2697
        void canFocus(void) const;

    // RVA: 0xAE7 | Ordinal: 2792
        void clearItems(bool);

    // RVA: 0xB23 | Ordinal: 2852
        void compareSection(char const *, char const *, int);

    // RVA: 0xB25 | Ordinal: 2854
        void compareSectionCase(char const *, char const *, int);

    // RVA: 0xBC5 | Ordinal: 3014
        void create(void);

    // RVA: 0xBF3 | Ordinal: 3060
        void createItem(class FX::FXString const &, class FX::FXIcon *, class FX::FXIcon *, void *);

    // RVA: 0xC51 | Ordinal: 3154
        void descending(class FX::FXIconItem const *, class FX::FXIconItem const *);

    // RVA: 0xC57 | Ordinal: 3160
        void descendingCase(class FX::FXIconItem const *, class FX::FXIconItem const *);

    // RVA: 0xC60 | Ordinal: 3169
        void deselectItem(int, bool);

    // RVA: 0xCA9 | Ordinal: 3242
        void detach(void);

    // RVA: 0xCF0 | Ordinal: 3313
        void disableItem(int);

    // RVA: 0xE14 | Ordinal: 3605
        void enableItem(int);

    // RVA: 0xE20 | Ordinal: 3617
        void endLasso(void);

    // RVA: 0xE6D | Ordinal: 3694
        void extendSelection(int, bool);

    // RVA: 0xE78 | Ordinal: 3705
        void extractItem(int, bool);

    // RVA: 0xEE4 | Ordinal: 3813
        void fillItems(class FX::FXString const &, class FX::FXIcon *, class FX::FXIcon *, void *, bool);

    // RVA: 0xEE5 | Ordinal: 3814
        void fillItems(char const **, class FX::FXIcon *, class FX::FXIcon *, void *, bool);

    // RVA: 0xEE6 | Ordinal: 3815
        void fillItems(class FX::FXString const *, class FX::FXIcon *, class FX::FXIcon *, void *, bool);

    // RVA: 0xF21 | Ordinal: 3874
        void findItem(class FX::FXString const &, int, unsigned int) const;

    // RVA: 0xF28 | Ordinal: 3881
        void findItemByData(void *, int, unsigned int) const;

    // RVA: 0x1009 | Ordinal: 4106
        void getAnchorItem(void) const;

    // RVA: 0x10AE | Ordinal: 4271
        void getContentHeight(void);

    // RVA: 0x10BB | Ordinal: 4284
        void getContentWidth(void);

    // RVA: 0x10DA | Ordinal: 4315
        void getCurrentItem(void) const;

    // RVA: 0x1211 | Ordinal: 4626
        void getFont(void) const;

    // RVA: 0x1252 | Ordinal: 4691
        void getHeader(void) const;

    // RVA: 0x1255 | Ordinal: 4694
        void getHeaderIcon(int) const;

    // RVA: 0x1257 | Ordinal: 4696
        void getHeaderSize(int) const;

    // RVA: 0x125A | Ordinal: 4699
        void getHeaderText(int) const;

    // RVA: 0x1279 | Ordinal: 4730
        void getHelpText(void) const;

    // RVA: 0x12D3 | Ordinal: 4820
        void getItem(int) const;

    // RVA: 0x12DC | Ordinal: 4829
        void getItemAt(int, int) const;

    // RVA: 0x12DF | Ordinal: 4832
        void getItemBigIcon(int) const;

    // RVA: 0x12E8 | Ordinal: 4841
        void getItemData(int) const;

    // RVA: 0x12F2 | Ordinal: 4851
        void getItemHeight(void) const;

    // RVA: 0x12FD | Ordinal: 4862
        void getItemMiniIcon(int) const;

    // RVA: 0x130C | Ordinal: 4877
        void getItemSpace(void) const;

    // RVA: 0x1311 | Ordinal: 4882
        void getItemText(int) const;

    // RVA: 0x131A | Ordinal: 4891
        void getItemWidth(void) const;

    // RVA: 0x1344 | Ordinal: 4933
        void getListStyle(void) const;

    // RVA: 0x13FB | Ordinal: 5116
        void getMetaClass(void) const;

    // RVA: 0x149D | Ordinal: 5278
        void getNumCols(void) const;

    // RVA: 0x14A7 | Ordinal: 5288
        void getNumHeaders(void) const;

    // RVA: 0x14AB | Ordinal: 5292
        void getNumItems(void) const;

    // RVA: 0x14B5 | Ordinal: 5302
        void getNumRows(void) const;

    // RVA: 0x156C | Ordinal: 5485
        void getSelBackColor(void) const;

    // RVA: 0x1581 | Ordinal: 5506
        void getSelTextColor(void) const;

    // RVA: 0x15C6 | Ordinal: 5575
        void getSortFunc(void) const)(class FX::FXIconItem const *, class FX::FXIconItem const *);

    // RVA: 0x1606 | Ordinal: 5639
        void getTextColor(void) const;

    // RVA: 0x1698 | Ordinal: 5785
        void getVisibleHeight(void) const;

    // RVA: 0x16A9 | Ordinal: 5802
        void getVisibleY(void) const;

    // RVA: 0x16DC | Ordinal: 5853
        void getrowscols(int &, int &, int, int) const;

    // RVA: 0x177B | Ordinal: 6012
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x183A | Ordinal: 6203
        void hitItem(int, int, int, int, int) const;

    // RVA: 0x18C2 | Ordinal: 6339
        void insertItem(int, class FX::FXString const &, class FX::FXIcon *, class FX::FXIcon *, void *, bool);

    // RVA: 0x18C3 | Ordinal: 6340
        void insertItem(int, class FX::FXIconItem *, bool);

    // RVA: 0x1965 | Ordinal: 6502
        void isItemCurrent(int) const;

    // RVA: 0x196F | Ordinal: 6512
        void isItemEnabled(int) const;

    // RVA: 0x1984 | Ordinal: 6533
        void isItemSelected(int) const;

    // RVA: 0x198D | Ordinal: 6542
        void isItemVisible(int) const;

    // RVA: 0x1A1E | Ordinal: 6687
        void killFocus(void);

    // RVA: 0x1A32 | Ordinal: 6707
        void killSelection(bool);

    // RVA: 0x1A3B | Ordinal: 6716
        void lassoChanged(int, int, int, int, int, int, int, int, bool);

    // RVA: 0x1A4B | Ordinal: 6732
        void layout(void);

    // RVA: 0x1AF3 | Ordinal: 6900
        void load(class FX::FXStream &);

    // RVA: 0x1BAD | Ordinal: 7086
        void makeItemVisible(int);

    // RVA: 0x1C39 | Ordinal: 7226
        void manufacture(void);

    // RVA: 0x1EB2 | Ordinal: 7859
        void moveContents(int, int);

    // RVA: 0x1EC2 | Ordinal: 7875
        void moveItem(int, int, bool);

    // RVA: 0x1F3E | Ordinal: 7999
        void onAutoScroll(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F6C | Ordinal: 8045
        void onChgHeader(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F72 | Ordinal: 8051
        void onClicked(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F87 | Ordinal: 8072
        void onClkHeader(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F96 | Ordinal: 8087
        void onCmdArrangeByColumns(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F97 | Ordinal: 8088
        void onCmdArrangeByRows(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x200D | Ordinal: 8206
        void onCmdDeselectAll(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2063 | Ordinal: 8292
        void onCmdGetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2140 | Ordinal: 8513
        void onCmdSelectAll(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2149 | Ordinal: 8522
        void onCmdSelectInverse(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x217D | Ordinal: 8574
        void onCmdSetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21E2 | Ordinal: 8675
        void onCmdSetValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21FF | Ordinal: 8704
        void onCmdShowBigIcons(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2200 | Ordinal: 8705
        void onCmdShowDetails(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2204 | Ordinal: 8709
        void onCmdShowMiniIcons(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2245 | Ordinal: 8774
        void onCommand(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x227D | Ordinal: 8830
        void onDoubleClicked(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2292 | Ordinal: 8851
        void onEnter(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22BC | Ordinal: 8893
        void onFocusIn(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22E0 | Ordinal: 8929
        void onFocusOut(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2348 | Ordinal: 9033
        void onKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2370 | Ordinal: 9073
        void onKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2396 | Ordinal: 9111
        void onLeave(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23B9 | Ordinal: 9146
        void onLeftBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23E1 | Ordinal: 9186
        void onLeftBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2403 | Ordinal: 9220
        void onLookupTimer(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x242D | Ordinal: 9262
        void onMotion(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x246B | Ordinal: 9324
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24B1 | Ordinal: 9394
        void onQueryHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24D1 | Ordinal: 9426
        void onQueryTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24ED | Ordinal: 9454
        void onRightBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24FA | Ordinal: 9467
        void onRightBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2522 | Ordinal: 9507
        void onTipTimer(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x252F | Ordinal: 9520
        void onTripleClicked(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2541 | Ordinal: 9538
        void onUngrabbed(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2562 | Ordinal: 9571
        void onUpdArrangeByColumns(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2563 | Ordinal: 9572
        void onUpdArrangeByRows(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25F0 | Ordinal: 9713
        void onUpdShowBigIcons(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25F1 | Ordinal: 9714
        void onUpdShowDetails(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25F5 | Ordinal: 9718
        void onUpdShowMiniIcons(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2694 | Ordinal: 9877
        void position(int, int, int, int);

    // RVA: 0x26BF | Ordinal: 9920
        void prependItem(class FX::FXString const &, class FX::FXIcon *, class FX::FXIcon *, void *, bool);

    // RVA: 0x26C0 | Ordinal: 9921
        void prependItem(class FX::FXIconItem *, bool);

    // RVA: 0x2715 | Ordinal: 10006
        void recalc(void);

    // RVA: 0x271E | Ordinal: 10015
        void recompute(void);

    // RVA: 0x274C | Ordinal: 10061
        void removeHeader(int);

    // RVA: 0x2751 | Ordinal: 10066
        void removeItem(int, bool);

    // RVA: 0x2794 | Ordinal: 10133
        void resize(int, int);

    // RVA: 0x2824 | Ordinal: 10277
        void save(class FX::FXStream &) const;

    // RVA: 0x28D6 | Ordinal: 10455
        void selectAll(bool);

    // RVA: 0x28DF | Ordinal: 10464
        void selectInRectangle(int, int, int, int, bool);

    // RVA: 0x28E1 | Ordinal: 10466
        void selectItem(int, bool);

    // RVA: 0x2974 | Ordinal: 10613
        void setAnchorItem(int);

    // RVA: 0x2A14 | Ordinal: 10773
        void setCurrentItem(int, bool);

    // RVA: 0x2A9A | Ordinal: 10907
        void setFocus(void);

    // RVA: 0x2ABB | Ordinal: 10940
        void setFont(class FX::FXFont *);

    // RVA: 0x2AFC | Ordinal: 11005
        void setHeaderIcon(int, class FX::FXIcon *);

    // RVA: 0x2AFE | Ordinal: 11007
        void setHeaderSize(int, int);

    // RVA: 0x2B01 | Ordinal: 11010
        void setHeaderText(int, class FX::FXString const &);

    // RVA: 0x2B05 | Ordinal: 11014
        void setHeaders(class FX::FXString const &, int);

    // RVA: 0x2B06 | Ordinal: 11015
        void setHeaders(char const **, int);

    // RVA: 0x2B1B | Ordinal: 11036
        void setHelpText(class FX::FXString const &);

    // RVA: 0x2B79 | Ordinal: 11130
        void setItem(int, class FX::FXString const &, class FX::FXIcon *, class FX::FXIcon *, void *, bool);

    // RVA: 0x2B7A | Ordinal: 11131
        void setItem(int, class FX::FXIconItem *, bool);

    // RVA: 0x2B81 | Ordinal: 11138
        void setItemBigIcon(int, class FX::FXIcon *, bool);

    // RVA: 0x2B8A | Ordinal: 11147
        void setItemData(int, void *);

    // RVA: 0x2B99 | Ordinal: 11162
        void setItemMiniIcon(int, class FX::FXIcon *, bool);

    // RVA: 0x2BA1 | Ordinal: 11170
        void setItemSpace(int);

    // RVA: 0x2BA6 | Ordinal: 11175
        void setItemText(int, class FX::FXString const &);

    // RVA: 0x2BD3 | Ordinal: 11220
        void setListStyle(unsigned int);

    // RVA: 0x2CB7 | Ordinal: 11448
        void setSelBackColor(unsigned int);

    // RVA: 0x2CC6 | Ordinal: 11463
        void setSelTextColor(unsigned int);

    // RVA: 0x2D09 | Ordinal: 11530
        void setSortFunc(int (__cdecl *)(class FX::FXIconItem const *, class FX::FXIconItem const *));

    // RVA: 0x2D4D | Ordinal: 11598
        void setTextColor(unsigned int);

    // RVA: 0x2E45 | Ordinal: 11846
        void sortItems(void);

    // RVA: 0x2E57 | Ordinal: 11864
        void startLasso(int, int);

    // RVA: 0x2EB5 | Ordinal: 11958
        void toggleItem(int, bool);

    // RVA: 0x2F12 | Ordinal: 12051
        void updateItem(int) const;

    // RVA: 0x2F16 | Ordinal: 12055
        void updateLasso(int, int);

    // RVA: 0x439 | Ordinal: 1082
        void _FXIconList(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXICONLIST_HPP
