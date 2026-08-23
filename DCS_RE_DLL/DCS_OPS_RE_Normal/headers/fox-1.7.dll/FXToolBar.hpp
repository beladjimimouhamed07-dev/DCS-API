#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXToolBar
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXToolBar
{
public:

    // RVA: 0x31B | Ordinal: 796
        void FXToolBar(void);

    // RVA: 0x31C | Ordinal: 797
        void FXToolBar(class FX::FXComposite *, class FX::FXComposite *, unsigned int, int, int, int, int, int, int, int, int, int, int);

    // RVA: 0x31D | Ordinal: 798
        void FXToolBar(class FX::FXComposite *, unsigned int, int, int, int, int, int, int, int, int, int, int);

    // RVA: 0xCFF | Ordinal: 3328
        void dock(class FX::FXDockSite *, int, int, bool);

    // RVA: 0xD00 | Ordinal: 3329
        void dock(class FX::FXDockSite *, class FX::FXWindow *, bool);

    // RVA: 0x1155 | Ordinal: 4438
        void getDefaultHeight(void);

    // RVA: 0x11AB | Ordinal: 4524
        void getDefaultWidth(void);

    // RVA: 0x11CA | Ordinal: 4555
        void getDockingSide(void) const;

    // RVA: 0x145D | Ordinal: 5214
        void getMetaClass(void) const;

    // RVA: 0x17DD | Ordinal: 6110
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1A6B | Ordinal: 6764
        void layout(void);

    // RVA: 0x1C99 | Ordinal: 7322
        void manufacture(void);

    // RVA: 0x2019 | Ordinal: 8218
        void onCmdDockFlip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2586 | Ordinal: 9607
        void onUpdDockFlip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2A5B | Ordinal: 10844
        void setDockingSide(unsigned int);

    // RVA: 0x4D2 | Ordinal: 1235
        void _FXToolBar(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXTOOLBAR_HPP
