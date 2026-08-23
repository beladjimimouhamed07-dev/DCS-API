#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXDirList
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXDirList
{
public:

    // RVA: 0xD9 | Ordinal: 218
        void FXDirList(void);

    // RVA: 0xDA | Ordinal: 219
        void FXDirList(class FX::FXComposite *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int);

    // RVA: 0x9FD | Ordinal: 2558
        void ascending(class FX::FXTreeItem const *, class FX::FXTreeItem const *);

    // RVA: 0xA03 | Ordinal: 2564
        void ascendingCase(class FX::FXTreeItem const *, class FX::FXTreeItem const *);

    // RVA: 0xB07 | Ordinal: 2824
        void collapseTree(class FX::FXTreeItem *, bool);

    // RVA: 0xBB1 | Ordinal: 2994
        void create(void);

    // RVA: 0xBEF | Ordinal: 3056
        void createItem(class FX::FXString const &, class FX::FXIcon *, class FX::FXIcon *, void *);

    // RVA: 0xC4E | Ordinal: 3151
        void descending(class FX::FXTreeItem const *, class FX::FXTreeItem const *);

    // RVA: 0xC54 | Ordinal: 3157
        void descendingCase(class FX::FXTreeItem const *, class FX::FXTreeItem const *);

    // RVA: 0xC6C | Ordinal: 3181
        void destroy(void);

    // RVA: 0xC98 | Ordinal: 3225
        void detach(void);

    // RVA: 0xE68 | Ordinal: 3689
        void expandTree(class FX::FXTreeItem *, bool);

    // RVA: 0x1027 | Ordinal: 4136
        void getAssociations(void) const;

    // RVA: 0x10D6 | Ordinal: 4311
        void getCurrentFile(void) const;

    // RVA: 0x11C2 | Ordinal: 4547
        void getDirectory(void) const;

    // RVA: 0x11DA | Ordinal: 4571
        void getDraggableFiles(void) const;

    // RVA: 0x12D8 | Ordinal: 4825
        void getItemAssoc(class FX::FXTreeItem const *) const;

    // RVA: 0x12EE | Ordinal: 4847
        void getItemDate(class FX::FXTreeItem const *) const;

    // RVA: 0x12FE | Ordinal: 4863
        void getItemMode(class FX::FXTreeItem const *) const;

    // RVA: 0x1305 | Ordinal: 4870
        void getItemPathname(class FX::FXTreeItem const *) const;

    // RVA: 0x1307 | Ordinal: 4872
        void getItemSize(class FX::FXTreeItem const *) const;

    // RVA: 0x1359 | Ordinal: 4954
        void getMatchMode(void) const;

    // RVA: 0x13C5 | Ordinal: 5062
        void getMetaClass(void) const;

    // RVA: 0x14F1 | Ordinal: 5362
        void getPathnameItem(class FX::FXString const &);

    // RVA: 0x14F2 | Ordinal: 5363
        void getPattern(void) const;

    // RVA: 0x1591 | Ordinal: 5522
        void getSelectedFiles(void) const;

    // RVA: 0x1744 | Ordinal: 5957
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x196B | Ordinal: 6508
        void isItemDirectory(class FX::FXTreeItem const *) const;

    // RVA: 0x1975 | Ordinal: 6518
        void isItemExecutable(class FX::FXTreeItem const *) const;

    // RVA: 0x1979 | Ordinal: 6522
        void isItemFile(class FX::FXTreeItem const *) const;

    // RVA: 0x1989 | Ordinal: 6538
        void isItemSymlink(class FX::FXTreeItem const *) const;

    // RVA: 0x1A9F | Ordinal: 6816
        void listChildItems(class FX::FXDirItem *);

    // RVA: 0x1AA7 | Ordinal: 6824
        void listRootItems(void);

    // RVA: 0x1AC1 | Ordinal: 6850
        void load(class FX::FXStream &);

    // RVA: 0x1C06 | Ordinal: 7175
        void manufacture(void);

    // RVA: 0x1F4B | Ordinal: 8012
        void onBeginDrag(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2005 | Ordinal: 8198
        void onCmdDeleteSel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x201E | Ordinal: 8223
        void onCmdDropAsk(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2020 | Ordinal: 8225
        void onCmdDropCopy(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2022 | Ordinal: 8227
        void onCmdDropLink(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2024 | Ordinal: 8229
        void onCmdDropMove(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2095 | Ordinal: 8342
        void onCmdGetStringValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20BF | Ordinal: 8384
        void onCmdHideFiles(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20C0 | Ordinal: 8385
        void onCmdHideHidden(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2125 | Ordinal: 8486
        void onCmdRefresh(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x219E | Ordinal: 8607
        void onCmdSetPattern(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21B1 | Ordinal: 8626
        void onCmdSetStringValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21DC | Ordinal: 8669
        void onCmdSetValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2201 | Ordinal: 8706
        void onCmdShowFiles(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2202 | Ordinal: 8707
        void onCmdShowHidden(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x220D | Ordinal: 8718
        void onCmdSortCase(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x220F | Ordinal: 8720
        void onCmdSortReverse(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x221D | Ordinal: 8734
        void onCmdToggleFiles(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x221E | Ordinal: 8735
        void onCmdToggleHidden(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x224C | Ordinal: 8781
        void onDNDDrop(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2254 | Ordinal: 8789
        void onDNDEnter(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x225B | Ordinal: 8796
        void onDNDLeave(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2262 | Ordinal: 8803
        void onDNDMotion(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x226A | Ordinal: 8811
        void onDNDRequest(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2282 | Ordinal: 8835
        void onDragged(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2288 | Ordinal: 8841
        void onEndDrag(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24E4 | Ordinal: 9445
        void onRefreshTimer(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x259E | Ordinal: 9631
        void onUpdHaveSel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25A4 | Ordinal: 9637
        void onUpdHideFiles(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25A5 | Ordinal: 9638
        void onUpdHideHidden(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25EA | Ordinal: 9707
        void onUpdSetPattern(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25F2 | Ordinal: 9715
        void onUpdShowFiles(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25F3 | Ordinal: 9716
        void onUpdShowHidden(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25FC | Ordinal: 9725
        void onUpdSortCase(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25FE | Ordinal: 9727
        void onUpdSortReverse(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x260B | Ordinal: 9740
        void onUpdToggleFiles(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x260C | Ordinal: 9741
        void onUpdToggleHidden(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x27F2 | Ordinal: 10227
        void save(class FX::FXStream &) const;

    // RVA: 0x28C1 | Ordinal: 10434
        void scan(bool);

    // RVA: 0x298D | Ordinal: 10638
        void setAssociations(class FX::FXFileAssociations *, bool);

    // RVA: 0x2A10 | Ordinal: 10769
        void setCurrentFile(class FX::FXString const &, bool);

    // RVA: 0x2A54 | Ordinal: 10837
        void setDirectory(class FX::FXString const &, bool);

    // RVA: 0x2A6B | Ordinal: 10860
        void setDraggableFiles(bool);

    // RVA: 0x2BE8 | Ordinal: 11241
        void setMatchMode(unsigned int);

    // RVA: 0x2C56 | Ordinal: 11351
        void setPattern(class FX::FXString const &);

    // RVA: 0x2E00 | Ordinal: 11777
        void showFiles(bool);

    // RVA: 0x2E01 | Ordinal: 11778
        void showFiles(void) const;

    // RVA: 0x2E06 | Ordinal: 11783
        void showHiddenFiles(bool);

    // RVA: 0x2E07 | Ordinal: 11784
        void showHiddenFiles(void) const;

    // RVA: 0x3F3 | Ordinal: 1012
        void _FXDirList(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXDIRLIST_HPP
