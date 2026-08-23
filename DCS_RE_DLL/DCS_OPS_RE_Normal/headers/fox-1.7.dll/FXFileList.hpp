#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXFileList
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXFileList
{
public:

    // RVA: 0x118 | Ordinal: 281
        void FXFileList(void);

    // RVA: 0x119 | Ordinal: 282
        void FXFileList(class FX::FXComposite *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int);

    // RVA: 0x9FE | Ordinal: 2559
        void ascending(class FX::FXIconItem const *, class FX::FXIconItem const *);

    // RVA: 0xA04 | Ordinal: 2565
        void ascendingCase(class FX::FXIconItem const *, class FX::FXIconItem const *);

    // RVA: 0xA09 | Ordinal: 2570
        void ascendingGroup(class FX::FXIconItem const *, class FX::FXIconItem const *);

    // RVA: 0xA0A | Ordinal: 2571
        void ascendingSize(class FX::FXIconItem const *, class FX::FXIconItem const *);

    // RVA: 0xA0B | Ordinal: 2572
        void ascendingTime(class FX::FXIconItem const *, class FX::FXIconItem const *);

    // RVA: 0xA0C | Ordinal: 2573
        void ascendingType(class FX::FXIconItem const *, class FX::FXIconItem const *);

    // RVA: 0xA0D | Ordinal: 2574
        void ascendingUser(class FX::FXIconItem const *, class FX::FXIconItem const *);

    // RVA: 0xBB6 | Ordinal: 2999
        void create(void);

    // RVA: 0xBF0 | Ordinal: 3057
        void createItem(class FX::FXString const &, class FX::FXIcon *, class FX::FXIcon *, void *);

    // RVA: 0xC4F | Ordinal: 3152
        void descending(class FX::FXIconItem const *, class FX::FXIconItem const *);

    // RVA: 0xC55 | Ordinal: 3158
        void descendingCase(class FX::FXIconItem const *, class FX::FXIconItem const *);

    // RVA: 0xC5A | Ordinal: 3163
        void descendingGroup(class FX::FXIconItem const *, class FX::FXIconItem const *);

    // RVA: 0xC5B | Ordinal: 3164
        void descendingSize(class FX::FXIconItem const *, class FX::FXIconItem const *);

    // RVA: 0xC5C | Ordinal: 3165
        void descendingTime(class FX::FXIconItem const *, class FX::FXIconItem const *);

    // RVA: 0xC5D | Ordinal: 3166
        void descendingType(class FX::FXIconItem const *, class FX::FXIconItem const *);

    // RVA: 0xC5E | Ordinal: 3167
        void descendingUser(class FX::FXIconItem const *, class FX::FXIconItem const *);

    // RVA: 0xC6E | Ordinal: 3183
        void destroy(void);

    // RVA: 0xC9B | Ordinal: 3228
        void detach(void);

    // RVA: 0x102B | Ordinal: 4140
        void getAssociations(void) const;

    // RVA: 0x10D7 | Ordinal: 4312
        void getCurrentFile(void) const;

    // RVA: 0x11C5 | Ordinal: 4550
        void getDirectory(void) const;

    // RVA: 0x11DC | Ordinal: 4573
        void getDraggableFiles(void) const;

    // RVA: 0x12B5 | Ordinal: 4790
        void getIconSource(void) const;

    // RVA: 0x12BF | Ordinal: 4800
        void getImageSize(void) const;

    // RVA: 0x12D9 | Ordinal: 4826
        void getItemAssoc(int) const;

    // RVA: 0x12EF | Ordinal: 4848
        void getItemDate(int) const;

    // RVA: 0x12F0 | Ordinal: 4849
        void getItemFilename(int) const;

    // RVA: 0x12FF | Ordinal: 4864
        void getItemMode(int) const;

    // RVA: 0x1306 | Ordinal: 4871
        void getItemPathname(int) const;

    // RVA: 0x1308 | Ordinal: 4873
        void getItemSize(int) const;

    // RVA: 0x135C | Ordinal: 4957
        void getMatchMode(void) const;

    // RVA: 0x13D4 | Ordinal: 5077
        void getMetaClass(void) const;

    // RVA: 0x14F4 | Ordinal: 5365
        void getPattern(void) const;

    // RVA: 0x1592 | Ordinal: 5523
        void getSelectedFiles(void) const;

    // RVA: 0x1626 | Ordinal: 5671
        void getTimeFormat(void) const;

    // RVA: 0x1753 | Ordinal: 5972
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x196C | Ordinal: 6509
        void isItemDirectory(int) const;

    // RVA: 0x1976 | Ordinal: 6519
        void isItemExecutable(int) const;

    // RVA: 0x197A | Ordinal: 6523
        void isItemFile(int) const;

    // RVA: 0x197F | Ordinal: 6528
        void isItemNavigational(int) const;

    // RVA: 0x198A | Ordinal: 6539
        void isItemSymlink(int) const;

    // RVA: 0x1AA6 | Ordinal: 6823
        void listItems(bool);

    // RVA: 0x1ACC | Ordinal: 6861
        void load(class FX::FXStream &);

    // RVA: 0x1C13 | Ordinal: 7188
        void manufacture(void);

    // RVA: 0x1F4C | Ordinal: 8013
        void onBeginDrag(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F7B | Ordinal: 8060
        void onClipboardLost(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F81 | Ordinal: 8066
        void onClipboardRequest(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FC4 | Ordinal: 8133
        void onCmdCopySel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FF2 | Ordinal: 8179
        void onCmdCutSel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2006 | Ordinal: 8199
        void onCmdDeleteSel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2014 | Ordinal: 8213
        void onCmdDirectoryUp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x201F | Ordinal: 8224
        void onCmdDropAsk(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2021 | Ordinal: 8226
        void onCmdDropCopy(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2023 | Ordinal: 8228
        void onCmdDropLink(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2025 | Ordinal: 8230
        void onCmdDropMove(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2098 | Ordinal: 8345
        void onCmdGetStringValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20BD | Ordinal: 8382
        void onCmdHeader(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20C1 | Ordinal: 8386
        void onCmdHideHidden(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x210C | Ordinal: 8461
        void onCmdPasteSel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2126 | Ordinal: 8487
        void onCmdRefresh(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2150 | Ordinal: 8529
        void onCmdSetDirectory(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x219F | Ordinal: 8608
        void onCmdSetPattern(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21B4 | Ordinal: 8629
        void onCmdSetStringValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21DF | Ordinal: 8672
        void onCmdSetValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2203 | Ordinal: 8708
        void onCmdShowHidden(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2207 | Ordinal: 8712
        void onCmdSortByGroup(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2208 | Ordinal: 8713
        void onCmdSortByName(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2209 | Ordinal: 8714
        void onCmdSortBySize(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x220A | Ordinal: 8715
        void onCmdSortByTime(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x220B | Ordinal: 8716
        void onCmdSortByType(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x220C | Ordinal: 8717
        void onCmdSortByUser(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x220E | Ordinal: 8719
        void onCmdSortCase(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2210 | Ordinal: 8721
        void onCmdSortReverse(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x221F | Ordinal: 8736
        void onCmdToggleHidden(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2220 | Ordinal: 8737
        void onCmdToggleImages(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x224D | Ordinal: 8782
        void onDNDDrop(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2255 | Ordinal: 8790
        void onDNDEnter(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x225C | Ordinal: 8797
        void onDNDLeave(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2263 | Ordinal: 8804
        void onDNDMotion(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x226B | Ordinal: 8812
        void onDNDRequest(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2283 | Ordinal: 8836
        void onDragged(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2289 | Ordinal: 8842
        void onEndDrag(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2453 | Ordinal: 9300
        void onOpenTimer(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24A3 | Ordinal: 9380
        void onPreviewChore(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24E5 | Ordinal: 9446
        void onRefreshTimer(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2581 | Ordinal: 9602
        void onUpdDirectoryUp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x259F | Ordinal: 9632
        void onUpdHaveSel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25A3 | Ordinal: 9636
        void onUpdHeader(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25A6 | Ordinal: 9639
        void onUpdHideHidden(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25E9 | Ordinal: 9706
        void onUpdSetDirectory(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25EB | Ordinal: 9708
        void onUpdSetPattern(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25F4 | Ordinal: 9717
        void onUpdShowHidden(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25F6 | Ordinal: 9719
        void onUpdSortByGroup(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25F7 | Ordinal: 9720
        void onUpdSortByName(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25F8 | Ordinal: 9721
        void onUpdSortBySize(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25F9 | Ordinal: 9722
        void onUpdSortByTime(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25FA | Ordinal: 9723
        void onUpdSortByType(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25FB | Ordinal: 9724
        void onUpdSortByUser(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25FD | Ordinal: 9726
        void onUpdSortCase(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25FF | Ordinal: 9728
        void onUpdSortReverse(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x260D | Ordinal: 9742
        void onUpdToggleHidden(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x260E | Ordinal: 9743
        void onUpdToggleImages(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x27FD | Ordinal: 10238
        void save(class FX::FXStream &) const;

    // RVA: 0x28C2 | Ordinal: 10435
        void scan(bool);

    // RVA: 0x2991 | Ordinal: 10642
        void setAssociations(class FX::FXFileAssociations *, bool);

    // RVA: 0x2A11 | Ordinal: 10770
        void setCurrentFile(class FX::FXString const &, bool);

    // RVA: 0x2A57 | Ordinal: 10840
        void setDirectory(class FX::FXString const &, bool);

    // RVA: 0x2A6D | Ordinal: 10862
        void setDraggableFiles(bool);

    // RVA: 0x2B57 | Ordinal: 11096
        void setIconSource(class FX::FXIconSource *);

    // RVA: 0x2B61 | Ordinal: 11106
        void setImageSize(int);

    // RVA: 0x2BEB | Ordinal: 11244
        void setMatchMode(unsigned int);

    // RVA: 0x2C58 | Ordinal: 11353
        void setPattern(class FX::FXString const &);

    // RVA: 0x2D6C | Ordinal: 11629
        void setTimeFormat(class FX::FXString const &);

    // RVA: 0x2E0C | Ordinal: 11789
        void showHiddenFiles(bool);

    // RVA: 0x2E0D | Ordinal: 11790
        void showHiddenFiles(void) const;

    // RVA: 0x2E13 | Ordinal: 11796
        void showImages(bool);

    // RVA: 0x2E14 | Ordinal: 11797
        void showImages(void) const;

    // RVA: 0x2E1C | Ordinal: 11805
        void showOnlyDirectories(bool);

    // RVA: 0x2E1D | Ordinal: 11806
        void showOnlyDirectories(void) const;

    // RVA: 0x2E1E | Ordinal: 11807
        void showOnlyFiles(bool);

    // RVA: 0x2E1F | Ordinal: 11808
        void showOnlyFiles(void) const;

    // RVA: 0x2E20 | Ordinal: 11809
        void showParents(bool);

    // RVA: 0x2E21 | Ordinal: 11810
        void showParents(void) const;

    // RVA: 0x40B | Ordinal: 1036
        void _FXFileList(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXFILELIST_HPP
