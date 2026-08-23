#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXFoldingList
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXFoldingList
{
public:

    // RVA: 0x120 | Ordinal: 289
        void FXFoldingList(void);

    // RVA: 0x121 | Ordinal: 290
        void FXFoldingList(class FX::FXComposite *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int);

    // RVA: 0x9D4 | Ordinal: 2517
        void appendHeader(class FX::FXString const &, class FX::FXIcon *, int);

    // RVA: 0x9D9 | Ordinal: 2522
        void appendItem(class FX::FXFoldingItem *, class FX::FXFoldingItem *, bool);

    // RVA: 0x9DA | Ordinal: 2523
        void appendItem(class FX::FXFoldingItem *, class FX::FXString const &, class FX::FXIcon *, class FX::FXIcon *, void *, bool);

    // RVA: 0x9FF | Ordinal: 2560
        void ascending(class FX::FXFoldingItem const *, class FX::FXFoldingItem const *);

    // RVA: 0xA05 | Ordinal: 2566
        void ascendingCase(class FX::FXFoldingItem const *, class FX::FXFoldingItem const *);

    // RVA: 0xA87 | Ordinal: 2696
        void canFocus(void) const;

    // RVA: 0xAE5 | Ordinal: 2790
        void clearItems(bool);

    // RVA: 0xB01 | Ordinal: 2818
        void closeItem(class FX::FXFoldingItem *, bool);

    // RVA: 0xB08 | Ordinal: 2825
        void collapseTree(class FX::FXFoldingItem *, bool);

    // RVA: 0xB22 | Ordinal: 2851
        void compareSection(char const *, char const *, int);

    // RVA: 0xB24 | Ordinal: 2853
        void compareSectionCase(char const *, char const *, int);

    // RVA: 0xBB8 | Ordinal: 3001
        void create(void);

    // RVA: 0xBF1 | Ordinal: 3058
        void createItem(class FX::FXString const &, class FX::FXIcon *, class FX::FXIcon *, void *);

    // RVA: 0xC50 | Ordinal: 3153
        void descending(class FX::FXFoldingItem const *, class FX::FXFoldingItem const *);

    // RVA: 0xC56 | Ordinal: 3159
        void descendingCase(class FX::FXFoldingItem const *, class FX::FXFoldingItem const *);

    // RVA: 0xC5F | Ordinal: 3168
        void deselectItem(class FX::FXFoldingItem *, bool);

    // RVA: 0xC9D | Ordinal: 3230
        void detach(void);

    // RVA: 0xCEF | Ordinal: 3312
        void disableItem(class FX::FXFoldingItem *);

    // RVA: 0xE13 | Ordinal: 3604
        void enableItem(class FX::FXFoldingItem *);

    // RVA: 0xE69 | Ordinal: 3690
        void expandTree(class FX::FXFoldingItem *, bool);

    // RVA: 0xE6C | Ordinal: 3693
        void extendSelection(class FX::FXFoldingItem *, bool);

    // RVA: 0xE76 | Ordinal: 3703
        void extractItem(class FX::FXFoldingItem *, bool);

    // RVA: 0xEDE | Ordinal: 3807
        void fillItems(class FX::FXFoldingItem *, class FX::FXString const &, class FX::FXIcon *, class FX::FXIcon *, void *, bool);

    // RVA: 0xEDF | Ordinal: 3808
        void fillItems(class FX::FXFoldingItem *, char const *const *, class FX::FXIcon *, class FX::FXIcon *, void *, bool);

    // RVA: 0xEE0 | Ordinal: 3809
        void fillItems(class FX::FXFoldingItem *, class FX::FXString const *, class FX::FXIcon *, class FX::FXIcon *, void *, bool);

    // RVA: 0xF20 | Ordinal: 3873
        void findItem(class FX::FXString const &, class FX::FXFoldingItem *, unsigned int) const;

    // RVA: 0xF27 | Ordinal: 3880
        void findItemByData(void *, class FX::FXFoldingItem *, unsigned int) const;

    // RVA: 0x1008 | Ordinal: 4105
        void getAnchorItem(void) const;

    // RVA: 0x10AD | Ordinal: 4270
        void getContentHeight(void);

    // RVA: 0x10BA | Ordinal: 4283
        void getContentWidth(void);

    // RVA: 0x10D9 | Ordinal: 4314
        void getCurrentItem(void) const;

    // RVA: 0x111C | Ordinal: 4381
        void getDefaultHeight(void);

    // RVA: 0x1172 | Ordinal: 4467
        void getDefaultWidth(void);

    // RVA: 0x11FF | Ordinal: 4608
        void getFirstItem(void) const;

    // RVA: 0x120B | Ordinal: 4620
        void getFont(void) const;

    // RVA: 0x1251 | Ordinal: 4690
        void getHeader(void) const;

    // RVA: 0x1254 | Ordinal: 4693
        void getHeaderIcon(int) const;

    // RVA: 0x1256 | Ordinal: 4695
        void getHeaderSize(int) const;

    // RVA: 0x1259 | Ordinal: 4698
        void getHeaderText(int) const;

    // RVA: 0x1274 | Ordinal: 4725
        void getHelpText(void) const;

    // RVA: 0x12C7 | Ordinal: 4808
        void getIndent(void) const;

    // RVA: 0x12DA | Ordinal: 4827
        void getItemAt(int, int) const;

    // RVA: 0x12E1 | Ordinal: 4834
        void getItemClosedIcon(class FX::FXFoldingItem const *) const;

    // RVA: 0x12E6 | Ordinal: 4839
        void getItemData(class FX::FXFoldingItem const *) const;

    // RVA: 0x12F1 | Ordinal: 4850
        void getItemHeight(class FX::FXFoldingItem const *) const;

    // RVA: 0x1301 | Ordinal: 4866
        void getItemOpenIcon(class FX::FXFoldingItem const *) const;

    // RVA: 0x130F | Ordinal: 4880
        void getItemText(class FX::FXFoldingItem const *) const;

    // RVA: 0x1319 | Ordinal: 4890
        void getItemWidth(class FX::FXFoldingItem const *) const;

    // RVA: 0x1330 | Ordinal: 4913
        void getLastItem(void) const;

    // RVA: 0x133B | Ordinal: 4924
        void getLineColor(void) const;

    // RVA: 0x1343 | Ordinal: 4932
        void getListStyle(void) const;

    // RVA: 0x13D7 | Ordinal: 5080
        void getMetaClass(void) const;

    // RVA: 0x14A6 | Ordinal: 5287
        void getNumHeaders(void) const;

    // RVA: 0x14A9 | Ordinal: 5290
        void getNumItems(void) const;

    // RVA: 0x14BB | Ordinal: 5308
        void getNumVisible(void) const;

    // RVA: 0x156B | Ordinal: 5484
        void getSelBackColor(void) const;

    // RVA: 0x1580 | Ordinal: 5505
        void getSelTextColor(void) const;

    // RVA: 0x15C5 | Ordinal: 5574
        void getSortFunc(void) const)(class FX::FXFoldingItem const *, class FX::FXFoldingItem const *);

    // RVA: 0x1603 | Ordinal: 5636
        void getTextColor(void) const;

    // RVA: 0x1697 | Ordinal: 5784
        void getVisibleHeight(void) const;

    // RVA: 0x16A8 | Ordinal: 5801
        void getVisibleY(void) const;

    // RVA: 0x1756 | Ordinal: 5975
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1838 | Ordinal: 6201
        void hitItem(class FX::FXFoldingItem const *, int, int) const;

    // RVA: 0x18BE | Ordinal: 6335
        void insertItem(class FX::FXFoldingItem *, class FX::FXFoldingItem *, class FX::FXFoldingItem *, bool);

    // RVA: 0x18BF | Ordinal: 6336
        void insertItem(class FX::FXFoldingItem *, class FX::FXFoldingItem *, class FX::FXString const &, class FX::FXIcon *, class FX::FXIcon *, void *, bool);

    // RVA: 0x1964 | Ordinal: 6501
        void isItemCurrent(class FX::FXFoldingItem const *) const;

    // RVA: 0x196E | Ordinal: 6511
        void isItemEnabled(class FX::FXFoldingItem const *) const;

    // RVA: 0x1977 | Ordinal: 6520
        void isItemExpanded(class FX::FXFoldingItem const *) const;

    // RVA: 0x197C | Ordinal: 6525
        void isItemLeaf(class FX::FXFoldingItem const *) const;

    // RVA: 0x1980 | Ordinal: 6529
        void isItemOpened(class FX::FXFoldingItem const *) const;

    // RVA: 0x1983 | Ordinal: 6532
        void isItemSelected(class FX::FXFoldingItem const *) const;

    // RVA: 0x198C | Ordinal: 6541
        void isItemVisible(class FX::FXFoldingItem const *) const;

    // RVA: 0x1A1D | Ordinal: 6686
        void killFocus(void);

    // RVA: 0x1A31 | Ordinal: 6706
        void killSelection(bool);

    // RVA: 0x1A45 | Ordinal: 6726
        void layout(void);

    // RVA: 0x1ADA | Ordinal: 6875
        void load(class FX::FXStream &);

    // RVA: 0x1BAB | Ordinal: 7084
        void makeItemVisible(class FX::FXFoldingItem *);

    // RVA: 0x1C16 | Ordinal: 7191
        void manufacture(void);

    // RVA: 0x1EB1 | Ordinal: 7858
        void moveContents(int, int);

    // RVA: 0x1EC1 | Ordinal: 7874
        void moveItem(class FX::FXFoldingItem *, class FX::FXFoldingItem *, class FX::FXFoldingItem *);

    // RVA: 0x1F3D | Ordinal: 7998
        void onAutoScroll(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F6B | Ordinal: 8044
        void onChgHeader(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F70 | Ordinal: 8049
        void onClicked(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2244 | Ordinal: 8773
        void onCommand(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x227B | Ordinal: 8828
        void onDoubleClicked(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2290 | Ordinal: 8849
        void onEnter(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22BA | Ordinal: 8891
        void onFocusIn(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22DE | Ordinal: 8927
        void onFocusOut(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2346 | Ordinal: 9031
        void onKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x236E | Ordinal: 9071
        void onKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2394 | Ordinal: 9109
        void onLeave(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23B5 | Ordinal: 9142
        void onLeftBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23DD | Ordinal: 9182
        void onLeftBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2402 | Ordinal: 9219
        void onLookupTimer(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2429 | Ordinal: 9258
        void onMotion(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2464 | Ordinal: 9317
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24AC | Ordinal: 9389
        void onQueryHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24CB | Ordinal: 9420
        void onQueryTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24EA | Ordinal: 9451
        void onRightBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24F7 | Ordinal: 9464
        void onRightBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x251F | Ordinal: 9504
        void onTipTimer(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x252D | Ordinal: 9518
        void onTripleClicked(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x253E | Ordinal: 9535
        void onUngrabbed(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2648 | Ordinal: 9801
        void openItem(class FX::FXFoldingItem *, bool);

    // RVA: 0x26BB | Ordinal: 9916
        void prependItem(class FX::FXFoldingItem *, class FX::FXFoldingItem *, bool);

    // RVA: 0x26BC | Ordinal: 9917
        void prependItem(class FX::FXFoldingItem *, class FX::FXString const &, class FX::FXIcon *, class FX::FXIcon *, void *, bool);

    // RVA: 0x2714 | Ordinal: 10005
        void recalc(void);

    // RVA: 0x271D | Ordinal: 10014
        void recompute(void);

    // RVA: 0x274B | Ordinal: 10060
        void removeHeader(int);

    // RVA: 0x274F | Ordinal: 10064
        void removeItem(class FX::FXFoldingItem *, bool);

    // RVA: 0x2757 | Ordinal: 10072
        void removeItems(class FX::FXFoldingItem *, class FX::FXFoldingItem *, bool);

    // RVA: 0x280B | Ordinal: 10252
        void save(class FX::FXStream &) const;

    // RVA: 0x28D5 | Ordinal: 10454
        void selectAll(bool);

    // RVA: 0x28E0 | Ordinal: 10465
        void selectItem(class FX::FXFoldingItem *, bool);

    // RVA: 0x2973 | Ordinal: 10612
        void setAnchorItem(class FX::FXFoldingItem *);

    // RVA: 0x2A13 | Ordinal: 10772
        void setCurrentItem(class FX::FXFoldingItem *, bool);

    // RVA: 0x2A98 | Ordinal: 10905
        void setFocus(void);

    // RVA: 0x2AB5 | Ordinal: 10934
        void setFont(class FX::FXFont *);

    // RVA: 0x2AFB | Ordinal: 11004
        void setHeaderIcon(int, class FX::FXIcon *);

    // RVA: 0x2AFD | Ordinal: 11006
        void setHeaderSize(int, int);

    // RVA: 0x2B00 | Ordinal: 11009
        void setHeaderText(int, class FX::FXString const &);

    // RVA: 0x2B02 | Ordinal: 11011
        void setHeaders(class FX::FXString const &, int);

    // RVA: 0x2B03 | Ordinal: 11012
        void setHeaders(char const *const *, int);

    // RVA: 0x2B04 | Ordinal: 11013
        void setHeaders(class FX::FXString const *, int);

    // RVA: 0x2B16 | Ordinal: 11031
        void setHelpText(class FX::FXString const &);

    // RVA: 0x2B69 | Ordinal: 11114
        void setIndent(int);

    // RVA: 0x2B76 | Ordinal: 11127
        void setItem(class FX::FXFoldingItem *, class FX::FXFoldingItem *, bool);

    // RVA: 0x2B83 | Ordinal: 11140
        void setItemClosedIcon(class FX::FXFoldingItem *, class FX::FXIcon *, bool);

    // RVA: 0x2B88 | Ordinal: 11145
        void setItemData(class FX::FXFoldingItem *, void *) const;

    // RVA: 0x2B9A | Ordinal: 11163
        void setItemOpenIcon(class FX::FXFoldingItem *, class FX::FXIcon *, bool);

    // RVA: 0x2BA4 | Ordinal: 11173
        void setItemText(class FX::FXFoldingItem *, class FX::FXString const &);

    // RVA: 0x2BC5 | Ordinal: 11206
        void setLineColor(unsigned int);

    // RVA: 0x2BD2 | Ordinal: 11219
        void setListStyle(unsigned int);

    // RVA: 0x2C1D | Ordinal: 11294
        void setNumVisible(int);

    // RVA: 0x2CB6 | Ordinal: 11447
        void setSelBackColor(unsigned int);

    // RVA: 0x2CC5 | Ordinal: 11462
        void setSelTextColor(unsigned int);

    // RVA: 0x2D08 | Ordinal: 11529
        void setSortFunc(int (__cdecl *)(class FX::FXFoldingItem const *, class FX::FXFoldingItem const *));

    // RVA: 0x2D4A | Ordinal: 11595
        void setTextColor(unsigned int);

    // RVA: 0x2E3E | Ordinal: 11839
        void sort(class FX::FXFoldingItem *&, class FX::FXFoldingItem *&, class FX::FXFoldingItem *&, class FX::FXFoldingItem *&, int);

    // RVA: 0x2E40 | Ordinal: 11841
        void sortChildItems(class FX::FXFoldingItem *);

    // RVA: 0x2E44 | Ordinal: 11845
        void sortItems(void);

    // RVA: 0x2E4A | Ordinal: 11851
        void sortRootItems(void);

    // RVA: 0x2EB4 | Ordinal: 11957
        void toggleItem(class FX::FXFoldingItem *, bool);

    // RVA: 0x2F10 | Ordinal: 12049
        void updateItem(class FX::FXFoldingItem *);

    // RVA: 0x40F | Ordinal: 1040
        void _FXFoldingList(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXFOLDINGLIST_HPP
