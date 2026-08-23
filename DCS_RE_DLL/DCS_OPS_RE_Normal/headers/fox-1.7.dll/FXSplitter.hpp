#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXSplitter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXSplitter
{
public:

    // RVA: 0x2E3 | Ordinal: 740
        void FXSplitter(void);

    // RVA: 0x2E4 | Ordinal: 741
        void FXSplitter(class FX::FXComposite *, unsigned int, int, int, int, int);

    // RVA: 0x2E5 | Ordinal: 742
        void FXSplitter(class FX::FXComposite *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int);

    // RVA: 0x96A | Ordinal: 2411
        void adjustHLayout(void);

    // RVA: 0x96C | Ordinal: 2413
        void adjustVLayout(void);

    // RVA: 0xD61 | Ordinal: 3426
        void drawHSplit(int);

    // RVA: 0xDD4 | Ordinal: 3541
        void drawVSplit(int);

    // RVA: 0xF1C | Ordinal: 3869
        void findHSplit(int);

    // RVA: 0xF2F | Ordinal: 3888
        void findVSplit(int);

    // RVA: 0x1045 | Ordinal: 4166
        void getBarSize(void) const;

    // RVA: 0x114A | Ordinal: 4427
        void getDefaultHeight(void);

    // RVA: 0x11A0 | Ordinal: 4513
        void getDefaultWidth(void);

    // RVA: 0x144B | Ordinal: 5196
        void getMetaClass(void) const;

    // RVA: 0x15CF | Ordinal: 5584
        void getSplit(int) const;

    // RVA: 0x15D1 | Ordinal: 5586
        void getSplitterStyle(void) const;

    // RVA: 0x17CB | Ordinal: 6092
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1A63 | Ordinal: 6756
        void layout(void);

    // RVA: 0x1B28 | Ordinal: 6953
        void load(class FX::FXStream &);

    // RVA: 0x1C88 | Ordinal: 7305
        void manufacture(void);

    // RVA: 0x1EBE | Ordinal: 7871
        void moveHSplit(int);

    // RVA: 0x1ECD | Ordinal: 7886
        void moveVSplit(int);

    // RVA: 0x22B1 | Ordinal: 8882
        void onFocusDown(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22D0 | Ordinal: 8913
        void onFocusLeft(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22D7 | Ordinal: 8920
        void onFocusNext(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22F2 | Ordinal: 8947
        void onFocusPrev(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22FA | Ordinal: 8955
        void onFocusRight(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2310 | Ordinal: 8977
        void onFocusUp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23C7 | Ordinal: 9160
        void onLeftBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23EF | Ordinal: 9200
        void onLeftBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x243D | Ordinal: 9278
        void onMotion(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2859 | Ordinal: 10330
        void save(class FX::FXStream &) const;

    // RVA: 0x29AD | Ordinal: 10670
        void setBarSize(int);

    // RVA: 0x2D13 | Ordinal: 11540
        void setSplit(int, int);

    // RVA: 0x2D15 | Ordinal: 11542
        void setSplitterStyle(unsigned int);

    // RVA: 0x4B9 | Ordinal: 1210
        void _FXSplitter(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXSPLITTER_HPP
