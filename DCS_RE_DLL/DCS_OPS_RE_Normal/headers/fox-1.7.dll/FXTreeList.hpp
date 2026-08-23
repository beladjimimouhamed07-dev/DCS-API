#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXTreeList
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXTreeList
{
public:

    // RVA: 0x32C | Ordinal: 813
        void FXTreeList(void);

    // RVA: 0x32D | Ordinal: 814
        void FXTreeList(class FX::FXComposite *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int);

    // RVA: 0x9E2 | Ordinal: 2531
        void appendItem(class FX::FXTreeItem *, class FX::FXTreeItem *, bool);

    // RVA: 0x9E3 | Ordinal: 2532
        void appendItem(class FX::FXTreeItem *, class FX::FXString const &, class FX::FXIcon *, class FX::FXIcon *, void *, bool);

    // RVA: 0xA02 | Ordinal: 2563
        void ascending(class FX::FXTreeItem const *, class FX::FXTreeItem const *);

    // RVA: 0xA08 | Ordinal: 2569
        void ascendingCase(class FX::FXTreeItem const *, class FX::FXTreeItem const *);

    // RVA: 0xA9E | Ordinal: 2719
        void canFocus(void) const;

    // RVA: 0xAEB | Ordinal: 2796
        void clearItems(bool);

    // RVA: 0xB02 | Ordinal: 2819
        void closeItem(class FX::FXTreeItem *, bool);

    // RVA: 0xB09 | Ordinal: 2826
        void collapseTree(class FX::FXTreeItem *, bool);

    // RVA: 0xBE7 | Ordinal: 3048
        void create(void);

    // RVA: 0xBF6 | Ordinal: 3063
        void createItem(class FX::FXString const &, class FX::FXIcon *, class FX::FXIcon *, void *);

    // RVA: 0xC53 | Ordinal: 3156
        void descending(class FX::FXTreeItem const *, class FX::FXTreeItem const *);

    // RVA: 0xC59 | Ordinal: 3162
        void descendingCase(class FX::FXTreeItem const *, class FX::FXTreeItem const *);

    // RVA: 0xC62 | Ordinal: 3171
        void deselectItem(class FX::FXTreeItem *, bool);

    // RVA: 0xCC4 | Ordinal: 3269
        void detach(void);

    // RVA: 0xCF4 | Ordinal: 3317
        void disableItem(class FX::FXTreeItem *);

    // RVA: 0xE18 | Ordinal: 3609
        void enableItem(class FX::FXTreeItem *);

    // RVA: 0xE6A | Ordinal: 3691
        void expandTree(class FX::FXTreeItem *, bool);

    // RVA: 0xE72 | Ordinal: 3699
        void extendSelection(class FX::FXTreeItem *, bool);

    // RVA: 0xE7C | Ordinal: 3709
        void extractItem(class FX::FXTreeItem *, bool);

    // RVA: 0xEED | Ordinal: 3822
        void fillItems(class FX::FXTreeItem *, class FX::FXString const &, class FX::FXIcon *, class FX::FXIcon *, void *, bool);

    // RVA: 0xEEE | Ordinal: 3823
        void fillItems(class FX::FXTreeItem *, char const *const *, class FX::FXIcon *, class FX::FXIcon *, void *, bool);

    // RVA: 0xEEF | Ordinal: 3824
        void fillItems(class FX::FXTreeItem *, class FX::FXString const *, class FX::FXIcon *, class FX::FXIcon *, void *, bool);

    // RVA: 0xF24 | Ordinal: 3877
        void findItem(class FX::FXString const &, class FX::FXTreeItem *, unsigned int) const;

    // RVA: 0xF2B | Ordinal: 3884
        void findItemByData(void *, class FX::FXTreeItem *, unsigned int) const;

    // RVA: 0x100B | Ordinal: 4108
        void getAnchorItem(void) const;

    // RVA: 0x10B6 | Ordinal: 4279
        void getContentHeight(void);

    // RVA: 0x10C3 | Ordinal: 4292
        void getContentWidth(void);

    // RVA: 0x10DD | Ordinal: 4318
        void getCurrentItem(void) const;

    // RVA: 0x115B | Ordinal: 4444
        void getDefaultHeight(void);

    // RVA: 0x11B1 | Ordinal: 4530
        void getDefaultWidth(void);

    // RVA: 0x1200 | Ordinal: 4609
        void getFirstItem(void) const;

    // RVA: 0x1220 | Ordinal: 4641
        void getFont(void) const;

    // RVA: 0x128A | Ordinal: 4747
        void getHelpText(void) const;

    // RVA: 0x12C8 | Ordinal: 4809
        void getIndent(void) const;

    // RVA: 0x12DE | Ordinal: 4831
        void getItemAt(int, int) const;

    // RVA: 0x12E2 | Ordinal: 4835
        void getItemClosedIcon(class FX::FXTreeItem const *) const;

    // RVA: 0x12EC | Ordinal: 4845
        void getItemData(class FX::FXTreeItem const *) const;

    // RVA: 0x12F4 | Ordinal: 4853
        void getItemHeight(class FX::FXTreeItem const *) const;

    // RVA: 0x1302 | Ordinal: 4867
        void getItemOpenIcon(class FX::FXTreeItem const *) const;

    // RVA: 0x1315 | Ordinal: 4886
        void getItemText(class FX::FXTreeItem const *) const;

    // RVA: 0x131C | Ordinal: 4893
        void getItemWidth(class FX::FXTreeItem const *) const;

    // RVA: 0x1331 | Ordinal: 4914
        void getLastItem(void) const;

    // RVA: 0x133D | Ordinal: 4926
        void getLineColor(void) const;

    // RVA: 0x1346 | Ordinal: 4935
        void getListStyle(void) const;

    // RVA: 0x1465 | Ordinal: 5222
        void getMetaClass(void) const;

    // RVA: 0x14AE | Ordinal: 5295
        void getNumItems(void) const;

    // RVA: 0x14BF | Ordinal: 5312
        void getNumVisible(void) const;

    // RVA: 0x1576 | Ordinal: 5495
        void getSelBackColor(void) const;

    // RVA: 0x158B | Ordinal: 5516
        void getSelTextColor(void) const;

    // RVA: 0x15C9 | Ordinal: 5578
        void getSortFunc(void) const)(class FX::FXTreeItem const *, class FX::FXTreeItem const *);

    // RVA: 0x1614 | Ordinal: 5653
        void getTextColor(void) const;

    // RVA: 0x17E5 | Ordinal: 6118
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x183E | Ordinal: 6207
        void hitItem(class FX::FXTreeItem const *, int, int) const;

    // RVA: 0x18C7 | Ordinal: 6344
        void insertItem(class FX::FXTreeItem *, class FX::FXTreeItem *, class FX::FXTreeItem *, bool);

    // RVA: 0x18C8 | Ordinal: 6345
        void insertItem(class FX::FXTreeItem *, class FX::FXTreeItem *, class FX::FXString const &, class FX::FXIcon *, class FX::FXIcon *, void *, bool);

    // RVA: 0x1969 | Ordinal: 6506
        void isItemCurrent(class FX::FXTreeItem const *) const;

    // RVA: 0x1973 | Ordinal: 6516
        void isItemEnabled(class FX::FXTreeItem const *) const;

    // RVA: 0x1978 | Ordinal: 6521
        void isItemExpanded(class FX::FXTreeItem const *) const;

    // RVA: 0x197D | Ordinal: 6526
        void isItemLeaf(class FX::FXTreeItem const *) const;

    // RVA: 0x1981 | Ordinal: 6530
        void isItemOpened(class FX::FXTreeItem const *) const;

    // RVA: 0x1987 | Ordinal: 6536
        void isItemSelected(class FX::FXTreeItem const *) const;

    // RVA: 0x1990 | Ordinal: 6545
        void isItemVisible(class FX::FXTreeItem const *) const;

    // RVA: 0x1A2D | Ordinal: 6702
        void killFocus(void);

    // RVA: 0x1A37 | Ordinal: 6712
        void killSelection(bool);

    // RVA: 0x1A6E | Ordinal: 6767
        void layout(void);

    // RVA: 0x1B45 | Ordinal: 6982
        void load(class FX::FXStream &);

    // RVA: 0x1BAF | Ordinal: 7088
        void makeItemVisible(class FX::FXTreeItem *);

    // RVA: 0x1CA0 | Ordinal: 7329
        void manufacture(void);

    // RVA: 0x1EC5 | Ordinal: 7878
        void moveItem(class FX::FXTreeItem *, class FX::FXTreeItem *, class FX::FXTreeItem *);

    // RVA: 0x1F45 | Ordinal: 8006
        void onAutoScroll(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F75 | Ordinal: 8054
        void onClicked(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2248 | Ordinal: 8777
        void onCommand(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2280 | Ordinal: 8833
        void onDoubleClicked(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22A3 | Ordinal: 8868
        void onEnter(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22C9 | Ordinal: 8906
        void onFocusIn(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22ED | Ordinal: 8942
        void onFocusOut(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2363 | Ordinal: 9060
        void onKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x238B | Ordinal: 9100
        void onKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23A7 | Ordinal: 9128
        void onLeave(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23CF | Ordinal: 9168
        void onLeftBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23F7 | Ordinal: 9208
        void onLeftBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2405 | Ordinal: 9222
        void onLookupTimer(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2442 | Ordinal: 9283
        void onMotion(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x249C | Ordinal: 9373
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24C0 | Ordinal: 9409
        void onQueryHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24E1 | Ordinal: 9442
        void onQueryTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24F4 | Ordinal: 9461
        void onRightBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2501 | Ordinal: 9474
        void onRightBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2525 | Ordinal: 9510
        void onTipTimer(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2532 | Ordinal: 9523
        void onTripleClicked(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2550 | Ordinal: 9553
        void onUngrabbed(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2649 | Ordinal: 9802
        void openItem(class FX::FXTreeItem *, bool);

    // RVA: 0x26C4 | Ordinal: 9925
        void prependItem(class FX::FXTreeItem *, class FX::FXTreeItem *, bool);

    // RVA: 0x26C5 | Ordinal: 9926
        void prependItem(class FX::FXTreeItem *, class FX::FXString const &, class FX::FXIcon *, class FX::FXIcon *, void *, bool);

    // RVA: 0x271B | Ordinal: 10012
        void recalc(void);

    // RVA: 0x2721 | Ordinal: 10018
        void recompute(void);

    // RVA: 0x2755 | Ordinal: 10070
        void removeItem(class FX::FXTreeItem *, bool);

    // RVA: 0x2758 | Ordinal: 10073
        void removeItems(class FX::FXTreeItem *, class FX::FXTreeItem *, bool);

    // RVA: 0x2876 | Ordinal: 10359
        void save(class FX::FXStream &) const;

    // RVA: 0x28DA | Ordinal: 10459
        void selectAll(bool);

    // RVA: 0x28E3 | Ordinal: 10468
        void selectItem(class FX::FXTreeItem *, bool);

    // RVA: 0x2977 | Ordinal: 10616
        void setAnchorItem(class FX::FXTreeItem *);

    // RVA: 0x2A18 | Ordinal: 10777
        void setCurrentItem(class FX::FXTreeItem *, bool);

    // RVA: 0x2AAB | Ordinal: 10924
        void setFocus(void);

    // RVA: 0x2ACA | Ordinal: 10955
        void setFont(class FX::FXFont *);

    // RVA: 0x2B2C | Ordinal: 11053
        void setHelpText(class FX::FXString const &);

    // RVA: 0x2B6A | Ordinal: 11115
        void setIndent(int);

    // RVA: 0x2B7F | Ordinal: 11136
        void setItem(class FX::FXTreeItem *, class FX::FXTreeItem *, bool);

    // RVA: 0x2B84 | Ordinal: 11141
        void setItemClosedIcon(class FX::FXTreeItem *, class FX::FXIcon *, bool);

    // RVA: 0x2B8E | Ordinal: 11151
        void setItemData(class FX::FXTreeItem *, void *) const;

    // RVA: 0x2B9B | Ordinal: 11164
        void setItemOpenIcon(class FX::FXTreeItem *, class FX::FXIcon *, bool);

    // RVA: 0x2BAA | Ordinal: 11179
        void setItemText(class FX::FXTreeItem *, class FX::FXString const &);

    // RVA: 0x2BC7 | Ordinal: 11208
        void setLineColor(unsigned int);

    // RVA: 0x2BD5 | Ordinal: 11222
        void setListStyle(unsigned int);

    // RVA: 0x2C21 | Ordinal: 11298
        void setNumVisible(int);

    // RVA: 0x2CC1 | Ordinal: 11458
        void setSelBackColor(unsigned int);

    // RVA: 0x2CD0 | Ordinal: 11473
        void setSelTextColor(unsigned int);

    // RVA: 0x2D0C | Ordinal: 11533
        void setSortFunc(int (__cdecl *)(class FX::FXTreeItem const *, class FX::FXTreeItem const *));

    // RVA: 0x2D5B | Ordinal: 11612
        void setTextColor(unsigned int);

    // RVA: 0x2E3F | Ordinal: 11840
        void sort(class FX::FXTreeItem *&, class FX::FXTreeItem *&, class FX::FXTreeItem *&, class FX::FXTreeItem *&, int);

    // RVA: 0x2E41 | Ordinal: 11842
        void sortChildItems(class FX::FXTreeItem *);

    // RVA: 0x2E48 | Ordinal: 11849
        void sortItems(void);

    // RVA: 0x2E4B | Ordinal: 11852
        void sortRootItems(void);

    // RVA: 0x2EB7 | Ordinal: 11960
        void toggleItem(class FX::FXTreeItem *, bool);

    // RVA: 0x2F15 | Ordinal: 12054
        void updateItem(class FX::FXTreeItem *) const;

    // RVA: 0x4DA | Ordinal: 1243
        void _FXTreeList(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXTREELIST_HPP
