#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXFileSelector
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXFileSelector
{
public:

    // RVA: 0x11A | Ordinal: 283
        void FXFileSelector(void);

    // RVA: 0x11B | Ordinal: 284
        void FXFileSelector(class FX::FXComposite *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int);

    // RVA: 0x94E | Ordinal: 2383
        void acceptButton(void) const;

    // RVA: 0x9AF | Ordinal: 2480
        void allowNavigation(bool);

    // RVA: 0x9B0 | Ordinal: 2481
        void allowNavigation(void) const;

    // RVA: 0x9B3 | Ordinal: 2484
        void allowPatternEntry(bool);

    // RVA: 0x9B4 | Ordinal: 2485
        void allowPatternEntry(void) const;

    // RVA: 0xAA7 | Ordinal: 2728
        void cancelButton(void) const;

    // RVA: 0xE74 | Ordinal: 3701
        void extensionFromPattern(class FX::FXString const &);

    // RVA: 0x102C | Ordinal: 4141
        void getAssociations(void) const;

    // RVA: 0x10E4 | Ordinal: 4325
        void getCurrentPattern(void) const;

    // RVA: 0x11C6 | Ordinal: 4551
        void getDirectory(void) const;

    // RVA: 0x11DD | Ordinal: 4574
        void getDraggableFiles(void) const;

    // RVA: 0x11F2 | Ordinal: 4595
        void getFileBoxStyle(void) const;

    // RVA: 0x11F5 | Ordinal: 4598
        void getFilename(void) const;

    // RVA: 0x11F7 | Ordinal: 4600
        void getFilenames(void) const;

    // RVA: 0x12B6 | Ordinal: 4791
        void getIconSource(void) const;

    // RVA: 0x12C0 | Ordinal: 4801
        void getImageSize(void) const;

    // RVA: 0x130B | Ordinal: 4876
        void getItemSpace(void) const;

    // RVA: 0x135D | Ordinal: 4958
        void getMatchMode(void) const;

    // RVA: 0x13D5 | Ordinal: 5078
        void getMetaClass(void) const;

    // RVA: 0x14B3 | Ordinal: 5300
        void getNumPatterns(void) const;

    // RVA: 0x14F5 | Ordinal: 5366
        void getPattern(void) const;

    // RVA: 0x14F7 | Ordinal: 5368
        void getPatternList(void) const;

    // RVA: 0x14F9 | Ordinal: 5370
        void getPatternText(int) const;

    // RVA: 0x152B | Ordinal: 5420
        void getReadOnly(void) const;

    // RVA: 0x158F | Ordinal: 5520
        void getSelectMode(void) const;

    // RVA: 0x1593 | Ordinal: 5524
        void getSelectedFiles(void) const;

    // RVA: 0x1594 | Ordinal: 5525
        void getSelectedFilesOnly(void) const;

    // RVA: 0x1627 | Ordinal: 5672
        void getTimeFormat(void) const;

    // RVA: 0x1754 | Ordinal: 5973
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1ACD | Ordinal: 6862
        void load(class FX::FXStream &);

    // RVA: 0x1C14 | Ordinal: 7189
        void manufacture(void);

    // RVA: 0x1F8C | Ordinal: 8077
        void onCmdAccept(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FA6 | Ordinal: 8103
        void onCmdBookmark(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FC3 | Ordinal: 8132
        void onCmdCopy(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2012 | Ordinal: 8211
        void onCmdDirTree(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2015 | Ordinal: 8214
        void onCmdDirectoryUp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x202F | Ordinal: 8240
        void onCmdFilter(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20C3 | Ordinal: 8388
        void onCmdHome(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20C6 | Ordinal: 8391
        void onCmdImageSize(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20D4 | Ordinal: 8405
        void onCmdItemDblClicked(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20D5 | Ordinal: 8406
        void onCmdItemDeselected(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20D6 | Ordinal: 8407
        void onCmdItemSelected(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20E1 | Ordinal: 8418
        void onCmdLink(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20EE | Ordinal: 8431
        void onCmdMove(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20FB | Ordinal: 8444
        void onCmdNew(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2128 | Ordinal: 8489
        void onCmdRemove(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2129 | Ordinal: 8490
        void onCmdRename(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2227 | Ordinal: 8744
        void onCmdUnBookmark(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2238 | Ordinal: 8761
        void onCmdVisit(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x223E | Ordinal: 8767
        void onCmdWork(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24A2 | Ordinal: 9379
        void onPopupMenu(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2582 | Ordinal: 9603
        void onUpdDirectoryUp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25A8 | Ordinal: 9641
        void onUpdImageSize(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25C5 | Ordinal: 9670
        void onUpdNavigable(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25C7 | Ordinal: 9672
        void onUpdNew(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25E8 | Ordinal: 9705
        void onUpdSelected(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x266C | Ordinal: 9837
        void patternFromText(class FX::FXString const &);

    // RVA: 0x27FE | Ordinal: 10239
        void save(class FX::FXStream &) const;

    // RVA: 0x2992 | Ordinal: 10643
        void setAssociations(class FX::FXFileAssociations *, bool);

    // RVA: 0x2A1F | Ordinal: 10784
        void setCurrentPattern(int);

    // RVA: 0x2A58 | Ordinal: 10841
        void setDirectory(class FX::FXString const &);

    // RVA: 0x2A6E | Ordinal: 10863
        void setDraggableFiles(bool);

    // RVA: 0x2A87 | Ordinal: 10888
        void setFileBoxStyle(unsigned int);

    // RVA: 0x2A8A | Ordinal: 10891
        void setFilename(class FX::FXString const &);

    // RVA: 0x2B58 | Ordinal: 11097
        void setIconSource(class FX::FXIconSource *);

    // RVA: 0x2B62 | Ordinal: 11107
        void setImageSize(int);

    // RVA: 0x2BA0 | Ordinal: 11169
        void setItemSpace(int);

    // RVA: 0x2BEC | Ordinal: 11245
        void setMatchMode(unsigned int);

    // RVA: 0x2C59 | Ordinal: 11354
        void setPattern(class FX::FXString const &);

    // RVA: 0x2C5B | Ordinal: 11356
        void setPatternList(class FX::FXString const &);

    // RVA: 0x2C5D | Ordinal: 11358
        void setPatternText(int, class FX::FXString const &);

    // RVA: 0x2C88 | Ordinal: 11401
        void setReadOnly(bool);

    // RVA: 0x2CD4 | Ordinal: 11477
        void setSelectMode(unsigned int);

    // RVA: 0x2D6D | Ordinal: 11630
        void setTimeFormat(class FX::FXString const &);

    // RVA: 0x2E0E | Ordinal: 11791
        void showHiddenFiles(bool);

    // RVA: 0x2E0F | Ordinal: 11792
        void showHiddenFiles(void) const;

    // RVA: 0x2E15 | Ordinal: 11798
        void showImages(bool);

    // RVA: 0x2E16 | Ordinal: 11799
        void showImages(void) const;

    // RVA: 0x2E23 | Ordinal: 11812
        void showReadOnly(bool);

    // RVA: 0x2E27 | Ordinal: 11816
        void shownReadOnly(void) const;

    // RVA: 0x40C | Ordinal: 1037
        void _FXFileSelector(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXFILESELECTOR_HPP
