#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXPrintDialog
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXPrintDialog
{
public:

    // RVA: 0x24E | Ordinal: 591
        void FXPrintDialog(void);

    // RVA: 0x24F | Ordinal: 592
        void FXPrintDialog(class FX::FXWindow *, class FX::FXString const &, unsigned int, int, int, int, int);

    // RVA: 0xBD7 | Ordinal: 3032
        void create(void);

    // RVA: 0x142E | Ordinal: 5167
        void getMetaClass(void) const;

    // RVA: 0x1510 | Ordinal: 5393
        void getPrinter(struct FX::FXPrinter &);

    // RVA: 0x17AE | Ordinal: 6063
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B17 | Ordinal: 6936
        void load(class FX::FXStream &);

    // RVA: 0x1C6B | Ordinal: 7276
        void manufacture(void);

    // RVA: 0x1F8E | Ordinal: 8079
        void onCmdAccept(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FA8 | Ordinal: 8105
        void onCmdBrowse(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FBC | Ordinal: 8125
        void onCmdCollateNormal(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FBD | Ordinal: 8126
        void onCmdCollateReversed(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FC0 | Ordinal: 8129
        void onCmdColor(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x202E | Ordinal: 8239
        void onCmdFileName(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2030 | Ordinal: 8241
        void onCmdFirstPage(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20BA | Ordinal: 8379
        void onCmdGray(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20D7 | Ordinal: 8408
        void onCmdLandscape(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20DA | Ordinal: 8411
        void onCmdLastPage(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20E7 | Ordinal: 8424
        void onCmdMedia(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20FF | Ordinal: 8448
        void onCmdNumCopies(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2108 | Ordinal: 8457
        void onCmdPages(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2113 | Ordinal: 8468
        void onCmdPortrait(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x211C | Ordinal: 8477
        void onCmdPrinterName(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x211D | Ordinal: 8478
        void onCmdProps(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2217 | Ordinal: 8728
        void onCmdToFile(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2218 | Ordinal: 8729
        void onCmdToPrinter(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x256A | Ordinal: 9579
        void onUpdBrowse(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2573 | Ordinal: 9588
        void onUpdCollateNormal(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2574 | Ordinal: 9589
        void onUpdCollateReversed(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2576 | Ordinal: 9591
        void onUpdColor(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x258F | Ordinal: 9616
        void onUpdFileName(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2592 | Ordinal: 9619
        void onUpdFirstPage(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2599 | Ordinal: 9626
        void onUpdGray(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25AF | Ordinal: 9648
        void onUpdLandscape(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25B0 | Ordinal: 9649
        void onUpdLastPage(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25B8 | Ordinal: 9657
        void onUpdMedia(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25C9 | Ordinal: 9674
        void onUpdNumCopies(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25CF | Ordinal: 9680
        void onUpdPages(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25D3 | Ordinal: 9684
        void onUpdPortrait(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25D4 | Ordinal: 9685
        void onUpdPrinterName(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25D5 | Ordinal: 9686
        void onUpdProps(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2605 | Ordinal: 9734
        void onUpdToFile(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2606 | Ordinal: 9735
        void onUpdToPrinter(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2848 | Ordinal: 10313
        void save(class FX::FXStream &) const;

    // RVA: 0x2C6D | Ordinal: 11374
        void setPrinter(struct FX::FXPrinter const &);

    // RVA: 0x480 | Ordinal: 1153
        void _FXPrintDialog(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXPRINTDIALOG_HPP
