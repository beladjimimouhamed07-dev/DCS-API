#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXTreeListBox
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXTreeListBox
{
public:

    // RVA: 0x32E | Ordinal: 815
        void FXTreeListBox(void);

    // RVA: 0x32F | Ordinal: 816
        void FXTreeListBox(class FX::FXComposite *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0x9E4 | Ordinal: 2533
        void appendItem(class FX::FXTreeItem *, class FX::FXTreeItem *, bool);

    // RVA: 0x9E5 | Ordinal: 2534
        void appendItem(class FX::FXTreeItem *, class FX::FXString const &, class FX::FXIcon *, class FX::FXIcon *, void *, bool);

    // RVA: 0xAEC | Ordinal: 2797
        void clearItems(bool);

    // RVA: 0xBE8 | Ordinal: 3049
        void create(void);

    // RVA: 0xC81 | Ordinal: 3202
        void destroy(void);

    // RVA: 0xCC5 | Ordinal: 3270
        void detach(void);

    // RVA: 0xCEC | Ordinal: 3309
        void disable(void);

    // RVA: 0xCF5 | Ordinal: 3318
        void disableItem(class FX::FXTreeItem *);

    // RVA: 0xE10 | Ordinal: 3601
        void enable(void);

    // RVA: 0xE19 | Ordinal: 3610
        void enableItem(class FX::FXTreeItem *);

    // RVA: 0xE7D | Ordinal: 3710
        void extractItem(class FX::FXTreeItem *, bool);

    // RVA: 0xEF0 | Ordinal: 3825
        void fillItems(class FX::FXTreeItem *, class FX::FXString const &, class FX::FXIcon *, class FX::FXIcon *, void *, bool);

    // RVA: 0xEF1 | Ordinal: 3826
        void fillItems(class FX::FXTreeItem *, char const *const *, class FX::FXIcon *, class FX::FXIcon *, void *, bool);

    // RVA: 0xEF2 | Ordinal: 3827
        void fillItems(class FX::FXTreeItem *, class FX::FXString const *, class FX::FXIcon *, class FX::FXIcon *, void *, bool);

    // RVA: 0xF25 | Ordinal: 3878
        void findItem(class FX::FXString const &, class FX::FXTreeItem *, unsigned int) const;

    // RVA: 0xF2C | Ordinal: 3885
        void findItemByData(void *, class FX::FXTreeItem *, unsigned int) const;

    // RVA: 0x10DE | Ordinal: 4319
        void getCurrentItem(void) const;

    // RVA: 0x115C | Ordinal: 4445
        void getDefaultHeight(void);

    // RVA: 0x11B2 | Ordinal: 4531
        void getDefaultWidth(void);

    // RVA: 0x1201 | Ordinal: 4610
        void getFirstItem(void) const;

    // RVA: 0x1221 | Ordinal: 4642
        void getFont(void) const;

    // RVA: 0x128B | Ordinal: 4748
        void getHelpText(void) const;

    // RVA: 0x12E3 | Ordinal: 4836
        void getItemClosedIcon(class FX::FXTreeItem const *) const;

    // RVA: 0x12ED | Ordinal: 4846
        void getItemData(class FX::FXTreeItem const *) const;

    // RVA: 0x1303 | Ordinal: 4868
        void getItemOpenIcon(class FX::FXTreeItem const *) const;

    // RVA: 0x1316 | Ordinal: 4887
        void getItemText(class FX::FXTreeItem const *) const;

    // RVA: 0x1332 | Ordinal: 4915
        void getLastItem(void) const;

    // RVA: 0x1347 | Ordinal: 4936
        void getListStyle(void) const;

    // RVA: 0x1466 | Ordinal: 5223
        void getMetaClass(void) const;

    // RVA: 0x14AF | Ordinal: 5296
        void getNumItems(void) const;

    // RVA: 0x14C0 | Ordinal: 5313
        void getNumVisible(void) const;

    // RVA: 0x15B2 | Ordinal: 5555
        void getShrinkWrap(void) const;

    // RVA: 0x15CA | Ordinal: 5579
        void getSortFunc(void) const)(class FX::FXTreeItem const *, class FX::FXTreeItem const *);

    // RVA: 0x164C | Ordinal: 5709
        void getTipText(void) const;

    // RVA: 0x17E6 | Ordinal: 6119
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x18C9 | Ordinal: 6346
        void insertItem(class FX::FXTreeItem *, class FX::FXTreeItem *, class FX::FXTreeItem *, bool);

    // RVA: 0x18CA | Ordinal: 6347
        void insertItem(class FX::FXTreeItem *, class FX::FXTreeItem *, class FX::FXString const &, class FX::FXIcon *, class FX::FXIcon *, void *, bool);

    // RVA: 0x196A | Ordinal: 6507
        void isItemCurrent(class FX::FXTreeItem const *) const;

    // RVA: 0x1974 | Ordinal: 6517
        void isItemEnabled(class FX::FXTreeItem const *) const;

    // RVA: 0x197E | Ordinal: 6527
        void isItemLeaf(class FX::FXTreeItem const *) const;

    // RVA: 0x19A0 | Ordinal: 6561
        void isMenuShown(void) const;

    // RVA: 0x1A6F | Ordinal: 6768
        void layout(void);

    // RVA: 0x1B46 | Ordinal: 6983
        void load(class FX::FXStream &);

    // RVA: 0x1CA1 | Ordinal: 7330
        void manufacture(void);

    // RVA: 0x1EC6 | Ordinal: 7879
        void moveItem(class FX::FXTreeItem *, class FX::FXTreeItem *, class FX::FXTreeItem *);

    // RVA: 0x22A6 | Ordinal: 8871
        void onFieldButton(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22B5 | Ordinal: 8886
        void onFocusDown(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2305 | Ordinal: 8966
        void onFocusSelf(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2314 | Ordinal: 8981
        void onFocusUp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2450 | Ordinal: 9297
        void onMouseWheel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2527 | Ordinal: 9512
        void onTreeClicked(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2529 | Ordinal: 9514
        void onTreeCommand(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x252A | Ordinal: 9515
        void onTreeForward(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x252B | Ordinal: 9516
        void onTreeUpdate(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x26C6 | Ordinal: 9927
        void prependItem(class FX::FXTreeItem *, class FX::FXTreeItem *, bool);

    // RVA: 0x26C7 | Ordinal: 9928
        void prependItem(class FX::FXTreeItem *, class FX::FXString const &, class FX::FXIcon *, class FX::FXIcon *, void *, bool);

    // RVA: 0x2756 | Ordinal: 10071
        void removeItem(class FX::FXTreeItem *, bool);

    // RVA: 0x2759 | Ordinal: 10074
        void removeItems(class FX::FXTreeItem *, class FX::FXTreeItem *, bool);

    // RVA: 0x2877 | Ordinal: 10360
        void save(class FX::FXStream &) const;

    // RVA: 0x2A19 | Ordinal: 10778
        void setCurrentItem(class FX::FXTreeItem *, bool);

    // RVA: 0x2ACB | Ordinal: 10956
        void setFont(class FX::FXFont *);

    // RVA: 0x2B2D | Ordinal: 11054
        void setHelpText(class FX::FXString const &);

    // RVA: 0x2B80 | Ordinal: 11137
        void setItem(class FX::FXTreeItem *, class FX::FXTreeItem *, bool);

    // RVA: 0x2B85 | Ordinal: 11142
        void setItemClosedIcon(class FX::FXTreeItem *, class FX::FXIcon *, bool);

    // RVA: 0x2B8F | Ordinal: 11152
        void setItemData(class FX::FXTreeItem *, void *) const;

    // RVA: 0x2B9C | Ordinal: 11165
        void setItemOpenIcon(class FX::FXTreeItem *, class FX::FXIcon *, bool);

    // RVA: 0x2BAB | Ordinal: 11180
        void setItemText(class FX::FXTreeItem *, class FX::FXString const &);

    // RVA: 0x2BD6 | Ordinal: 11223
        void setListStyle(unsigned int);

    // RVA: 0x2C22 | Ordinal: 11299
        void setNumVisible(int);

    // RVA: 0x2CF7 | Ordinal: 11512
        void setShrinkWrap(bool);

    // RVA: 0x2D0D | Ordinal: 11534
        void setSortFunc(int (__cdecl *)(class FX::FXTreeItem const *, class FX::FXTreeItem const *));

    // RVA: 0x2D8E | Ordinal: 11663
        void setTipText(class FX::FXString const &);

    // RVA: 0x2E1A | Ordinal: 11803
        void showMenu(bool);

    // RVA: 0x2E42 | Ordinal: 11843
        void sortChildItems(class FX::FXTreeItem *);

    // RVA: 0x2E49 | Ordinal: 11850
        void sortItems(void);

    // RVA: 0x2E4C | Ordinal: 11853
        void sortRootItems(void);

    // RVA: 0x4DB | Ordinal: 1244
        void _FXTreeListBox(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXTREELISTBOX_HPP
