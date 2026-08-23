#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXDockBar
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXDockBar
{
public:

    // RVA: 0xDF | Ordinal: 224
        void FXDockBar(void);

    // RVA: 0xE0 | Ordinal: 225
        void FXDockBar(class FX::FXComposite *, class FX::FXComposite *, unsigned int, int, int, int, int, int, int, int, int, int, int);

    // RVA: 0xE1 | Ordinal: 226
        void FXDockBar(class FX::FXComposite *, unsigned int, int, int, int, int, int, int, int, int, int, int);

    // RVA: 0x9B5 | Ordinal: 2486
        void allowedSides(unsigned char);

    // RVA: 0x9B6 | Ordinal: 2487
        void allowedSides(void) const;

    // RVA: 0xCFD | Ordinal: 3326
        void dock(class FX::FXDockSite *, int, int, bool);

    // RVA: 0xCFE | Ordinal: 3327
        void dock(class FX::FXDockSite *, class FX::FXWindow *, bool);

    // RVA: 0xF18 | Ordinal: 3865
        void findDockAtSide(unsigned int);

    // RVA: 0xF19 | Ordinal: 3866
        void findDockNear(int, int);

    // RVA: 0x11DF | Ordinal: 4576
        void getDryDock(void) const;

    // RVA: 0x13C7 | Ordinal: 5064
        void getMetaClass(void) const;

    // RVA: 0x16B9 | Ordinal: 5818
        void getWetDock(void) const;

    // RVA: 0x1746 | Ordinal: 5959
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x18D1 | Ordinal: 6354
        void insideDock(class FX::FXDockSite *, int, int);

    // RVA: 0x18F2 | Ordinal: 6387
        void isAllowable(unsigned int) const;

    // RVA: 0x191D | Ordinal: 6430
        void isDocked(void) const;

    // RVA: 0x1AC3 | Ordinal: 6852
        void load(class FX::FXStream &);

    // RVA: 0x1C08 | Ordinal: 7177
        void manufacture(void);

    // RVA: 0x1F4F | Ordinal: 8016
        void onBeginDragGrip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2018 | Ordinal: 8217
        void onCmdDockBottom(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x201A | Ordinal: 8219
        void onCmdDockLeft(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x201B | Ordinal: 8220
        void onCmdDockRight(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x201C | Ordinal: 8221
        void onCmdDockTop(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x222B | Ordinal: 8748
        void onCmdUndock(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2278 | Ordinal: 8825
        void onDockTimer(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2286 | Ordinal: 8839
        void onDraggedGrip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x228C | Ordinal: 8845
        void onEndDragGrip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24A1 | Ordinal: 9378
        void onPopupMenu(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2584 | Ordinal: 9605
        void onUpdDockBottom(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2585 | Ordinal: 9606
        void onUpdDockFlip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2587 | Ordinal: 9608
        void onUpdDockLeft(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2588 | Ordinal: 9609
        void onUpdDockRight(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2589 | Ordinal: 9610
        void onUpdDockTop(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2617 | Ordinal: 9752
        void onUpdUndock(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x27F4 | Ordinal: 10229
        void save(class FX::FXStream &) const;

    // RVA: 0x2A70 | Ordinal: 10865
        void setDryDock(class FX::FXComposite *);

    // RVA: 0x2DD9 | Ordinal: 11738
        void setWetDock(class FX::FXComposite *);

    // RVA: 0x2EEE | Ordinal: 12015
        void undock(int, int, bool);

    // RVA: 0x3F6 | Ordinal: 1015
        void _FXDockBar(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXDOCKBAR_HPP
