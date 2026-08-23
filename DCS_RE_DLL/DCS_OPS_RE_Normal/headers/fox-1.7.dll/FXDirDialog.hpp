#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXDirDialog
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXDirDialog
{
public:

    // RVA: 0xD4 | Ordinal: 213
        void FXDirDialog(void);

    // RVA: 0xD5 | Ordinal: 214
        void FXDirDialog(class FX::FXApp *, class FX::FXString const &, unsigned int, int, int, int, int);

    // RVA: 0xD6 | Ordinal: 215
        void FXDirDialog(class FX::FXWindow *, class FX::FXString const &, unsigned int, int, int, int, int);

    // RVA: 0x1026 | Ordinal: 4135
        void getAssociations(void) const;

    // RVA: 0x11BE | Ordinal: 4543
        void getDirBoxStyle(void) const;

    // RVA: 0x11C1 | Ordinal: 4546
        void getDirectory(void) const;

    // RVA: 0x1358 | Ordinal: 4953
        void getMatchMode(void) const;

    // RVA: 0x13C3 | Ordinal: 5060
        void getMetaClass(void) const;

    // RVA: 0x14CA | Ordinal: 5323
        void getOpenDirectory(class FX::FXWindow *, class FX::FXString const &, class FX::FXString const &);

    // RVA: 0x1742 | Ordinal: 5955
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1829 | Ordinal: 6186
        void hide(void);

    // RVA: 0x1892 | Ordinal: 6291
        void initdialog(void);

    // RVA: 0x1AC0 | Ordinal: 6849
        void load(class FX::FXStream &);

    // RVA: 0x1C04 | Ordinal: 7173
        void manufacture(void);

    // RVA: 0x27F1 | Ordinal: 10226
        void save(class FX::FXStream &) const;

    // RVA: 0x298C | Ordinal: 10637
        void setAssociations(class FX::FXFileAssociations *, bool);

    // RVA: 0x2A50 | Ordinal: 10833
        void setDirBoxStyle(unsigned int);

    // RVA: 0x2A53 | Ordinal: 10836
        void setDirectory(class FX::FXString const &);

    // RVA: 0x2BE7 | Ordinal: 11240
        void setMatchMode(unsigned int);

    // RVA: 0x2DFE | Ordinal: 11775
        void showFiles(bool);

    // RVA: 0x2DFF | Ordinal: 11776
        void showFiles(void) const;

    // RVA: 0x2E04 | Ordinal: 11781
        void showHiddenFiles(bool);

    // RVA: 0x2E05 | Ordinal: 11782
        void showHiddenFiles(void) const;

    // RVA: 0x3F1 | Ordinal: 1010
        void _FXDirDialog(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXDIRDIALOG_HPP
