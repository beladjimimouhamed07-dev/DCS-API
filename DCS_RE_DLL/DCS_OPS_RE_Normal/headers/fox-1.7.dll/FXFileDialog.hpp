#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXFileDialog
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXFileDialog
{
public:

    // RVA: 0x113 | Ordinal: 276
        void FXFileDialog(void);

    // RVA: 0x114 | Ordinal: 277
        void FXFileDialog(class FX::FXApp *, class FX::FXString const &, unsigned int, int, int, int, int);

    // RVA: 0x115 | Ordinal: 278
        void FXFileDialog(class FX::FXWindow *, class FX::FXString const &, unsigned int, int, int, int, int);

    // RVA: 0x9AD | Ordinal: 2478
        void allowNavigation(bool);

    // RVA: 0x9AE | Ordinal: 2479
        void allowNavigation(void) const;

    // RVA: 0x9B1 | Ordinal: 2482
        void allowPatternEntry(bool);

    // RVA: 0x9B2 | Ordinal: 2483
        void allowPatternEntry(void) const;

    // RVA: 0x102A | Ordinal: 4139
        void getAssociations(void) const;

    // RVA: 0x10E3 | Ordinal: 4324
        void getCurrentPattern(void) const;

    // RVA: 0x11C4 | Ordinal: 4549
        void getDirectory(void) const;

    // RVA: 0x11DB | Ordinal: 4572
        void getDraggableFiles(void) const;

    // RVA: 0x11F1 | Ordinal: 4594
        void getFileBoxStyle(void) const;

    // RVA: 0x11F4 | Ordinal: 4597
        void getFilename(void) const;

    // RVA: 0x11F6 | Ordinal: 4599
        void getFilenames(void) const;

    // RVA: 0x12B4 | Ordinal: 4789
        void getIconSource(void) const;

    // RVA: 0x12BE | Ordinal: 4799
        void getImageSize(void) const;

    // RVA: 0x130A | Ordinal: 4875
        void getItemSpace(void) const;

    // RVA: 0x135B | Ordinal: 4956
        void getMatchMode(void) const;

    // RVA: 0x13D2 | Ordinal: 5075
        void getMetaClass(void) const;

    // RVA: 0x14B2 | Ordinal: 5299
        void getNumPatterns(void) const;

    // RVA: 0x14CB | Ordinal: 5324
        void getOpenDirectory(class FX::FXWindow *, class FX::FXString const &, class FX::FXString const &);

    // RVA: 0x14CC | Ordinal: 5325
        void getOpenFilename(class FX::FXWindow *, class FX::FXString const &, class FX::FXString const &, class FX::FXString const &, int);

    // RVA: 0x14CD | Ordinal: 5326
        void getOpenFilenames(class FX::FXWindow *, class FX::FXString const &, class FX::FXString const &, class FX::FXString const &, int);

    // RVA: 0x14F3 | Ordinal: 5364
        void getPattern(void) const;

    // RVA: 0x14F6 | Ordinal: 5367
        void getPatternList(void) const;

    // RVA: 0x14F8 | Ordinal: 5369
        void getPatternText(int) const;

    // RVA: 0x152A | Ordinal: 5419
        void getReadOnly(void) const;

    // RVA: 0x1554 | Ordinal: 5461
        void getSaveFilename(class FX::FXWindow *, class FX::FXString const &, class FX::FXString const &, class FX::FXString const &, int);

    // RVA: 0x158E | Ordinal: 5519
        void getSelectMode(void) const;

    // RVA: 0x1625 | Ordinal: 5670
        void getTimeFormat(void) const;

    // RVA: 0x1751 | Ordinal: 5970
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x182A | Ordinal: 6187
        void hide(void);

    // RVA: 0x1893 | Ordinal: 6292
        void initdialog(void);

    // RVA: 0x1ACB | Ordinal: 6860
        void load(class FX::FXStream &);

    // RVA: 0x1C11 | Ordinal: 7186
        void manufacture(void);

    // RVA: 0x27FC | Ordinal: 10237
        void save(class FX::FXStream &) const;

    // RVA: 0x2990 | Ordinal: 10641
        void setAssociations(class FX::FXFileAssociations *, bool);

    // RVA: 0x2A1E | Ordinal: 10783
        void setCurrentPattern(int);

    // RVA: 0x2A56 | Ordinal: 10839
        void setDirectory(class FX::FXString const &);

    // RVA: 0x2A6C | Ordinal: 10861
        void setDraggableFiles(bool);

    // RVA: 0x2A86 | Ordinal: 10887
        void setFileBoxStyle(unsigned int);

    // RVA: 0x2A89 | Ordinal: 10890
        void setFilename(class FX::FXString const &);

    // RVA: 0x2B56 | Ordinal: 11095
        void setIconSource(class FX::FXIconSource *);

    // RVA: 0x2B60 | Ordinal: 11105
        void setImageSize(int);

    // RVA: 0x2B9F | Ordinal: 11168
        void setItemSpace(int);

    // RVA: 0x2BEA | Ordinal: 11243
        void setMatchMode(unsigned int);

    // RVA: 0x2C57 | Ordinal: 11352
        void setPattern(class FX::FXString const &);

    // RVA: 0x2C5A | Ordinal: 11355
        void setPatternList(class FX::FXString const &);

    // RVA: 0x2C5C | Ordinal: 11357
        void setPatternText(int, class FX::FXString const &);

    // RVA: 0x2C87 | Ordinal: 11400
        void setReadOnly(bool);

    // RVA: 0x2CD3 | Ordinal: 11476
        void setSelectMode(unsigned int);

    // RVA: 0x2D6B | Ordinal: 11628
        void setTimeFormat(class FX::FXString const &);

    // RVA: 0x2E0A | Ordinal: 11787
        void showHiddenFiles(bool);

    // RVA: 0x2E0B | Ordinal: 11788
        void showHiddenFiles(void) const;

    // RVA: 0x2E11 | Ordinal: 11794
        void showImages(bool);

    // RVA: 0x2E12 | Ordinal: 11795
        void showImages(void) const;

    // RVA: 0x2E22 | Ordinal: 11811
        void showReadOnly(bool);

    // RVA: 0x2E26 | Ordinal: 11815
        void shownReadOnly(void) const;

    // RVA: 0x409 | Ordinal: 1034
        void _FXFileDialog(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXFILEDIALOG_HPP
