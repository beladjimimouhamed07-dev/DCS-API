#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FX4Splitter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FX4Splitter
{
public:

    // RVA: 0x5 | Ordinal: 6
        void FX4Splitter(void);

    // RVA: 0x6 | Ordinal: 7
        void FX4Splitter(class FX::FXComposite *, unsigned int, int, int, int, int);

    // RVA: 0x7 | Ordinal: 8
        void FX4Splitter(class FX::FXComposite *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int);

    // RVA: 0x96B | Ordinal: 2412
        void adjustLayout(void);

    // RVA: 0xDB9 | Ordinal: 3514
        void drawSplit(int, int, unsigned int);

    // RVA: 0x1041 | Ordinal: 4162
        void getBarSize(void) const;

    // RVA: 0x1067 | Ordinal: 4200
        void getBottomLeft(void) const;

    // RVA: 0x1069 | Ordinal: 4202
        void getBottomRight(void) const;

    // RVA: 0x110B | Ordinal: 4364
        void getDefaultHeight(void);

    // RVA: 0x1161 | Ordinal: 4450
        void getDefaultWidth(void);

    // RVA: 0x11EA | Ordinal: 4587
        void getExpanded(void) const;

    // RVA: 0x124C | Ordinal: 4685
        void getHSplit(void) const;

    // RVA: 0x1373 | Ordinal: 4980
        void getMetaClass(void) const;

    // RVA: 0x1484 | Ordinal: 5253
        void getMode(int, int);

    // RVA: 0x15D0 | Ordinal: 5585
        void getSplitterStyle(void) const;

    // RVA: 0x165E | Ordinal: 5727
        void getTopLeft(void) const;

    // RVA: 0x1660 | Ordinal: 5729
        void getTopRight(void) const;

    // RVA: 0x1680 | Ordinal: 5761
        void getVSplit(void) const;

    // RVA: 0x16F1 | Ordinal: 5874
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1A3C | Ordinal: 6717
        void layout(void);

    // RVA: 0x1AAA | Ordinal: 6827
        void load(class FX::FXStream &);

    // RVA: 0x1BB5 | Ordinal: 7094
        void manufacture(void);

    // RVA: 0x1ECB | Ordinal: 7884
        void moveSplit(int, int);

    // RVA: 0x202A | Ordinal: 8235
        void onCmdExpand(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22A8 | Ordinal: 8873
        void onFocusDown(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22CB | Ordinal: 8908
        void onFocusLeft(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22F5 | Ordinal: 8950
        void onFocusRight(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2307 | Ordinal: 8968
        void onFocusUp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23A9 | Ordinal: 9130
        void onLeftBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23D1 | Ordinal: 9170
        void onLeftBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2420 | Ordinal: 9249
        void onMotion(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x258D | Ordinal: 9614
        void onUpdExpand(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x27DC | Ordinal: 10205
        void save(class FX::FXStream &) const;

    // RVA: 0x29A9 | Ordinal: 10666
        void setBarSize(int);

    // RVA: 0x2A80 | Ordinal: 10881
        void setExpanded(unsigned int);

    // RVA: 0x2AF3 | Ordinal: 10996
        void setHSplit(int);

    // RVA: 0x2D14 | Ordinal: 11541
        void setSplitterStyle(unsigned int);

    // RVA: 0x2DB9 | Ordinal: 11706
        void setVSplit(int);

    // RVA: 0x393 | Ordinal: 916
        void _FX4Splitter(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FX4SPLITTER_HPP
