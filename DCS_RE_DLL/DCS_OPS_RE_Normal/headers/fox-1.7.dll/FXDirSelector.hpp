#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXDirSelector
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXDirSelector
{
public:

    // RVA: 0xDB | Ordinal: 220
        void FXDirSelector(void);

    // RVA: 0xDC | Ordinal: 221
        void FXDirSelector(class FX::FXComposite *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int);

    // RVA: 0x94D | Ordinal: 2382
        void acceptButton(void) const;

    // RVA: 0xAA6 | Ordinal: 2727
        void cancelButton(void) const;

    // RVA: 0x1028 | Ordinal: 4137
        void getAssociations(void) const;

    // RVA: 0x11BF | Ordinal: 4544
        void getDirBoxStyle(void) const;

    // RVA: 0x11C3 | Ordinal: 4548
        void getDirectory(void) const;

    // RVA: 0x135A | Ordinal: 4955
        void getMatchMode(void) const;

    // RVA: 0x13C6 | Ordinal: 5063
        void getMetaClass(void) const;

    // RVA: 0x1745 | Ordinal: 5958
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1AC2 | Ordinal: 6851
        void load(class FX::FXStream &);

    // RVA: 0x1C07 | Ordinal: 7176
        void manufacture(void);

    // RVA: 0x1FA5 | Ordinal: 8102
        void onCmdBookmark(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FC2 | Ordinal: 8131
        void onCmdCopy(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2013 | Ordinal: 8212
        void onCmdDirectoryUp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20C2 | Ordinal: 8387
        void onCmdHome(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20E0 | Ordinal: 8417
        void onCmdLink(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20ED | Ordinal: 8430
        void onCmdMove(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20F9 | Ordinal: 8442
        void onCmdName(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20FA | Ordinal: 8443
        void onCmdNew(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2105 | Ordinal: 8454
        void onCmdOpened(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2127 | Ordinal: 8488
        void onCmdRemove(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2226 | Ordinal: 8743
        void onCmdUnBookmark(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2237 | Ordinal: 8760
        void onCmdVisit(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x223D | Ordinal: 8766
        void onCmdWork(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24A0 | Ordinal: 9377
        void onPopupMenu(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25C6 | Ordinal: 9671
        void onUpdNew(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25E7 | Ordinal: 9704
        void onUpdSelected(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x27F3 | Ordinal: 10228
        void save(class FX::FXStream &) const;

    // RVA: 0x298E | Ordinal: 10639
        void setAssociations(class FX::FXFileAssociations *, bool);

    // RVA: 0x2A51 | Ordinal: 10834
        void setDirBoxStyle(unsigned int);

    // RVA: 0x2A55 | Ordinal: 10838
        void setDirectory(class FX::FXString const &);

    // RVA: 0x2BE9 | Ordinal: 11242
        void setMatchMode(unsigned int);

    // RVA: 0x2E02 | Ordinal: 11779
        void showFiles(bool);

    // RVA: 0x2E03 | Ordinal: 11780
        void showFiles(void) const;

    // RVA: 0x2E08 | Ordinal: 11785
        void showHiddenFiles(bool);

    // RVA: 0x2E09 | Ordinal: 11786
        void showHiddenFiles(void) const;

    // RVA: 0x3F4 | Ordinal: 1013
        void _FXDirSelector(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXDIRSELECTOR_HPP
