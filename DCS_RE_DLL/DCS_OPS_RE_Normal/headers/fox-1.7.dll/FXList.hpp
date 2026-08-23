#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXList
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXList
{
public:

    // RVA: 0x1B1 | Ordinal: 434
        void FXList(void);

    // RVA: 0x1B2 | Ordinal: 435
        void FXList(class FX::FXComposite *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int);

    // RVA: 0x9DF | Ordinal: 2528
        void appendItem(class FX::FXString const &, class FX::FXIcon *, void *, bool);

    // RVA: 0x9E0 | Ordinal: 2529
        void appendItem(class FX::FXListItem *, bool);

    // RVA: 0xA01 | Ordinal: 2562
        void ascending(class FX::FXListItem const *, class FX::FXListItem const *);

    // RVA: 0xA07 | Ordinal: 2568
        void ascendingCase(class FX::FXListItem const *, class FX::FXListItem const *);

    // RVA: 0xA8B | Ordinal: 2700
        void canFocus(void) const;

    // RVA: 0xAE8 | Ordinal: 2793
        void clearItems(bool);

    // RVA: 0xBCB | Ordinal: 3020
        void create(void);

    // RVA: 0xBF4 | Ordinal: 3061
        void createItem(class FX::FXString const &, class FX::FXIcon *, void *);

    // RVA: 0xC52 | Ordinal: 3155
        void descending(class FX::FXListItem const *, class FX::FXListItem const *);

    // RVA: 0xC58 | Ordinal: 3161
        void descendingCase(class FX::FXListItem const *, class FX::FXListItem const *);

    // RVA: 0xC61 | Ordinal: 3170
        void deselectItem(int, bool);

    // RVA: 0xCAE | Ordinal: 3247
        void detach(void);

    // RVA: 0xCF1 | Ordinal: 3314
        void disableItem(int);

    // RVA: 0xE15 | Ordinal: 3606
        void enableItem(int);

    // RVA: 0xE6E | Ordinal: 3695
        void extendSelection(int, bool);

    // RVA: 0xE79 | Ordinal: 3706
        void extractItem(int, bool);

    // RVA: 0xEE7 | Ordinal: 3816
        void fillItems(class FX::FXString const &, class FX::FXIcon *, void *, bool);

    // RVA: 0xEE8 | Ordinal: 3817
        void fillItems(char const *const *, class FX::FXIcon *, void *, bool);

    // RVA: 0xEE9 | Ordinal: 3818
        void fillItems(class FX::FXString const *, class FX::FXIcon *, void *, bool);

    // RVA: 0xF22 | Ordinal: 3875
        void findItem(class FX::FXString const &, int, unsigned int) const;

    // RVA: 0xF29 | Ordinal: 3882
        void findItemByData(void *, int, unsigned int) const;

    // RVA: 0x100A | Ordinal: 4107
        void getAnchorItem(void) const;

    // RVA: 0x10B0 | Ordinal: 4273
        void getContentHeight(void);

    // RVA: 0x10BD | Ordinal: 4286
        void getContentWidth(void);

    // RVA: 0x10DB | Ordinal: 4316
        void getCurrentItem(void) const;

    // RVA: 0x1126 | Ordinal: 4391
        void getDefaultHeight(void);

    // RVA: 0x117C | Ordinal: 4477
        void getDefaultWidth(void);

    // RVA: 0x1213 | Ordinal: 4628
        void getFont(void) const;

    // RVA: 0x127C | Ordinal: 4733
        void getHelpText(void) const;

    // RVA: 0x12D4 | Ordinal: 4821
        void getItem(int) const;

    // RVA: 0x12DD | Ordinal: 4830
        void getItemAt(int, int) const;

    // RVA: 0x12E9 | Ordinal: 4842
        void getItemData(int) const;

    // RVA: 0x12F3 | Ordinal: 4852
        void getItemHeight(int) const;

    // RVA: 0x12F6 | Ordinal: 4855
        void getItemIcon(int) const;

    // RVA: 0x1312 | Ordinal: 4883
        void getItemText(int) const;

    // RVA: 0x131B | Ordinal: 4892
        void getItemWidth(int) const;

    // RVA: 0x1345 | Ordinal: 4934
        void getListStyle(void) const;

    // RVA: 0x1409 | Ordinal: 5130
        void getMetaClass(void) const;

    // RVA: 0x14AC | Ordinal: 5293
        void getNumItems(void) const;

    // RVA: 0x14BC | Ordinal: 5309
        void getNumVisible(void) const;

    // RVA: 0x156D | Ordinal: 5486
        void getSelBackColor(void) const;

    // RVA: 0x1582 | Ordinal: 5507
        void getSelTextColor(void) const;

    // RVA: 0x15C7 | Ordinal: 5576
        void getSortFunc(void) const)(class FX::FXListItem const *, class FX::FXListItem const *);

    // RVA: 0x1608 | Ordinal: 5641
        void getTextColor(void) const;

    // RVA: 0x1789 | Ordinal: 6026
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x183B | Ordinal: 6204
        void hitItem(int, int, int) const;

    // RVA: 0x18C4 | Ordinal: 6341
        void insertItem(int, class FX::FXString const &, class FX::FXIcon *, void *, bool);

    // RVA: 0x18C5 | Ordinal: 6342
        void insertItem(int, class FX::FXListItem *, bool);

    // RVA: 0x1966 | Ordinal: 6503
        void isItemCurrent(int) const;

    // RVA: 0x1970 | Ordinal: 6513
        void isItemEnabled(int) const;

    // RVA: 0x1985 | Ordinal: 6534
        void isItemSelected(int) const;

    // RVA: 0x198E | Ordinal: 6543
        void isItemVisible(int) const;

    // RVA: 0x1A1F | Ordinal: 6688
        void killFocus(void);

    // RVA: 0x1A33 | Ordinal: 6708
        void killSelection(bool);

    // RVA: 0x1A4E | Ordinal: 6735
        void layout(void);

    // RVA: 0x1AFB | Ordinal: 6908
        void load(class FX::FXStream &);

    // RVA: 0x1BAE | Ordinal: 7087
        void makeItemVisible(int);

    // RVA: 0x1C46 | Ordinal: 7239
        void manufacture(void);

    // RVA: 0x1EC3 | Ordinal: 7876
        void moveItem(int, int, bool);

    // RVA: 0x1F3F | Ordinal: 8000
        void onAutoScroll(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F73 | Ordinal: 8052
        void onClicked(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2065 | Ordinal: 8294
        void onCmdGetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x217F | Ordinal: 8576
        void onCmdSetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21E5 | Ordinal: 8678
        void onCmdSetValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2246 | Ordinal: 8775
        void onCommand(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x227E | Ordinal: 8831
        void onDoubleClicked(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2293 | Ordinal: 8852
        void onEnter(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22BE | Ordinal: 8895
        void onFocusIn(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22E2 | Ordinal: 8931
        void onFocusOut(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x234A | Ordinal: 9035
        void onKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2372 | Ordinal: 9075
        void onKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2397 | Ordinal: 9112
        void onLeave(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23BB | Ordinal: 9148
        void onLeftBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23E3 | Ordinal: 9188
        void onLeftBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2404 | Ordinal: 9221
        void onLookupTimer(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2430 | Ordinal: 9265
        void onMotion(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2470 | Ordinal: 9329
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24B4 | Ordinal: 9397
        void onQueryHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24D4 | Ordinal: 9429
        void onQueryTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24EF | Ordinal: 9456
        void onRightBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24FC | Ordinal: 9469
        void onRightBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2523 | Ordinal: 9508
        void onTipTimer(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2530 | Ordinal: 9521
        void onTripleClicked(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2543 | Ordinal: 9540
        void onUngrabbed(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x26C1 | Ordinal: 9922
        void prependItem(class FX::FXString const &, class FX::FXIcon *, void *, bool);

    // RVA: 0x26C2 | Ordinal: 9923
        void prependItem(class FX::FXListItem *, bool);

    // RVA: 0x2716 | Ordinal: 10007
        void recalc(void);

    // RVA: 0x271F | Ordinal: 10016
        void recompute(void);

    // RVA: 0x2752 | Ordinal: 10067
        void removeItem(int, bool);

    // RVA: 0x282C | Ordinal: 10285
        void save(class FX::FXStream &) const;

    // RVA: 0x28D7 | Ordinal: 10456
        void selectAll(bool);

    // RVA: 0x28E2 | Ordinal: 10467
        void selectItem(int, bool);

    // RVA: 0x2975 | Ordinal: 10614
        void setAnchorItem(int);

    // RVA: 0x2A15 | Ordinal: 10774
        void setCurrentItem(int, bool);

    // RVA: 0x2A9B | Ordinal: 10908
        void setFocus(void);

    // RVA: 0x2ABD | Ordinal: 10942
        void setFont(class FX::FXFont *);

    // RVA: 0x2B1E | Ordinal: 11039
        void setHelpText(class FX::FXString const &);

    // RVA: 0x2B7B | Ordinal: 11132
        void setItem(int, class FX::FXString const &, class FX::FXIcon *, void *, bool);

    // RVA: 0x2B7C | Ordinal: 11133
        void setItem(int, class FX::FXListItem *, bool);

    // RVA: 0x2B8B | Ordinal: 11148
        void setItemData(int, void *);

    // RVA: 0x2B92 | Ordinal: 11155
        void setItemIcon(int, class FX::FXIcon *, bool);

    // RVA: 0x2BA7 | Ordinal: 11176
        void setItemText(int, class FX::FXString const &);

    // RVA: 0x2BD4 | Ordinal: 11221
        void setListStyle(unsigned int);

    // RVA: 0x2C1E | Ordinal: 11295
        void setNumVisible(int);

    // RVA: 0x2CB8 | Ordinal: 11449
        void setSelBackColor(unsigned int);

    // RVA: 0x2CC7 | Ordinal: 11464
        void setSelTextColor(unsigned int);

    // RVA: 0x2D0A | Ordinal: 11531
        void setSortFunc(int (__cdecl *)(class FX::FXListItem const *, class FX::FXListItem const *));

    // RVA: 0x2D4F | Ordinal: 11600
        void setTextColor(unsigned int);

    // RVA: 0x2E46 | Ordinal: 11847
        void sortItems(void);

    // RVA: 0x2EB6 | Ordinal: 11959
        void toggleItem(int, bool);

    // RVA: 0x2F13 | Ordinal: 12052
        void updateItem(int) const;

    // RVA: 0x44B | Ordinal: 1100
        void _FXList(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXLIST_HPP
