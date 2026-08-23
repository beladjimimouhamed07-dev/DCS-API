#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXTabBar
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXTabBar
{
public:

    // RVA: 0x303 | Ordinal: 772
        void FXTabBar(void);

    // RVA: 0x304 | Ordinal: 773
        void FXTabBar(class FX::FXComposite *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0x10D0 | Ordinal: 4305
        void getCurrent(void) const;

    // RVA: 0x114F | Ordinal: 4432
        void getDefaultHeight(void);

    // RVA: 0x11A5 | Ordinal: 4518
        void getDefaultWidth(void);

    // RVA: 0x1454 | Ordinal: 5205
        void getMetaClass(void) const;

    // RVA: 0x15E7 | Ordinal: 5608
        void getTabStyle(void) const;

    // RVA: 0x17D4 | Ordinal: 6101
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1A66 | Ordinal: 6759
        void layout(void);

    // RVA: 0x1B38 | Ordinal: 6969
        void load(class FX::FXStream &);

    // RVA: 0x1C91 | Ordinal: 7314
        void manufacture(void);

    // RVA: 0x2075 | Ordinal: 8310
        void onCmdGetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2102 | Ordinal: 8451
        void onCmdOpen(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2103 | Ordinal: 8452
        void onCmdOpenItem(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x218F | Ordinal: 8592
        void onCmdSetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21F6 | Ordinal: 8695
        void onCmdSetValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22B2 | Ordinal: 8883
        void onFocusDown(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22D1 | Ordinal: 8914
        void onFocusLeft(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22D8 | Ordinal: 8921
        void onFocusNext(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22F3 | Ordinal: 8948
        void onFocusPrev(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22FB | Ordinal: 8956
        void onFocusRight(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2311 | Ordinal: 8978
        void onFocusUp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2491 | Ordinal: 9362
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25CC | Ordinal: 9677
        void onUpdOpen(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2869 | Ordinal: 10346
        void save(class FX::FXStream &) const;

    // RVA: 0x2A0A | Ordinal: 10763
        void setCurrent(int, bool);

    // RVA: 0x2D2F | Ordinal: 11568
        void setTabStyle(unsigned int);

    // RVA: 0x4C5 | Ordinal: 1222
        void _FXTabBar(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXTABBAR_HPP
