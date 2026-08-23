#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXReplaceDialog
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXReplaceDialog
{
public:

    // RVA: 0x29D | Ordinal: 670
        void FXReplaceDialog(void);

    // RVA: 0x29E | Ordinal: 671
        void FXReplaceDialog(class FX::FXWindow *, class FX::FXString const &, class FX::FXIcon *, unsigned int, int, int, int, int);

    // RVA: 0x9D6 | Ordinal: 2519
        void appendHistory(class FX::FXString const &, class FX::FXString const &, unsigned int);

    // RVA: 0xE55 | Ordinal: 3670
        void execute(unsigned int);

    // RVA: 0x143A | Ordinal: 5179
        void getMetaClass(void) const;

    // RVA: 0x1531 | Ordinal: 5426
        void getReplaceText(void) const;

    // RVA: 0x1532 | Ordinal: 5427
        void getReplaceTextColor(void) const;

    // RVA: 0x155D | Ordinal: 5470
        void getSearchMode(void) const;

    // RVA: 0x155E | Ordinal: 5471
        void getSearchText(void) const;

    // RVA: 0x155F | Ordinal: 5472
        void getSearchTextColor(void) const;

    // RVA: 0x17BA | Ordinal: 6075
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B1E | Ordinal: 6943
        void load(class FX::FXStream &);

    // RVA: 0x1C77 | Ordinal: 7288
        void manufacture(void);

    // RVA: 0x2011 | Ordinal: 8210
        void onCmdDir(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20EB | Ordinal: 8428
        void onCmdMode(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x212A | Ordinal: 8491
        void onCmdReplace(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x212B | Ordinal: 8492
        void onCmdReplaceAll(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x212C | Ordinal: 8493
        void onCmdReplaceHist(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x212D | Ordinal: 8494
        void onCmdReplaceSel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x213D | Ordinal: 8510
        void onCmdSearch(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x213E | Ordinal: 8511
        void onCmdSearchHist(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x223F | Ordinal: 8768
        void onCmdWrap(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24E7 | Ordinal: 9448
        void onReplaceKey(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2503 | Ordinal: 9476
        void onSearchKey(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2580 | Ordinal: 9601
        void onUpdDir(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25C4 | Ordinal: 9669
        void onUpdMode(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25E1 | Ordinal: 9698
        void onUpdSearch(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x261E | Ordinal: 9759
        void onUpdWrap(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2635 | Ordinal: 9782
        void onWheelReplace(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2636 | Ordinal: 9783
        void onWheelSearch(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x284F | Ordinal: 10320
        void save(class FX::FXStream &) const;

    // RVA: 0x2C8C | Ordinal: 11405
        void setReplaceText(class FX::FXString const &);

    // RVA: 0x2C8D | Ordinal: 11406
        void setReplaceTextColor(unsigned int);

    // RVA: 0x2CB0 | Ordinal: 11441
        void setSearchMode(unsigned int);

    // RVA: 0x2CB1 | Ordinal: 11442
        void setSearchText(class FX::FXString const &);

    // RVA: 0x2CB2 | Ordinal: 11443
        void setSearchTextColor(unsigned int);

    // RVA: 0x498 | Ordinal: 1177
        void _FXReplaceDialog(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXREPLACEDIALOG_HPP
