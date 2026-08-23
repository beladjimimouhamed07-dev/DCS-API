#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXScrollArea
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXScrollArea
{
public:

    // RVA: 0x2B3 | Ordinal: 692
        void FXScrollArea(class FX::FXComposite *, unsigned int, int, int, int, int);

    // RVA: 0x2B4 | Ordinal: 693
        void FXScrollArea(void);

    // RVA: 0x10B2 | Ordinal: 4275
        void getContentHeight(void);

    // RVA: 0x10BF | Ordinal: 4288
        void getContentWidth(void);

    // RVA: 0x10C4 | Ordinal: 4293
        void getContentX(void) const;

    // RVA: 0x10C5 | Ordinal: 4294
        void getContentY(void) const;

    // RVA: 0x1143 | Ordinal: 4420
        void getDefaultHeight(void);

    // RVA: 0x1199 | Ordinal: 4506
        void getDefaultWidth(void);

    // RVA: 0x143E | Ordinal: 5183
        void getMetaClass(void) const;

    // RVA: 0x150A | Ordinal: 5387
        void getPosition(int &, int &) const;

    // RVA: 0x155B | Ordinal: 5468
        void getScrollStyle(void) const;

    // RVA: 0x169A | Ordinal: 5787
        void getVisibleHeight(void) const;

    // RVA: 0x16A1 | Ordinal: 5794
        void getVisibleWidth(void) const;

    // RVA: 0x16A5 | Ordinal: 5798
        void getVisibleX(void) const;

    // RVA: 0x16AB | Ordinal: 5804
        void getVisibleY(void) const;

    // RVA: 0x17BE | Ordinal: 6079
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1841 | Ordinal: 6210
        void horizontalScrollBar(void) const;

    // RVA: 0x1957 | Ordinal: 6488
        void isHorizontalScrollable(void) const;

    // RVA: 0x1A08 | Ordinal: 6665
        void isVerticalScrollable(void) const;

    // RVA: 0x1A5C | Ordinal: 6749
        void layout(void);

    // RVA: 0x1B21 | Ordinal: 6946
        void load(class FX::FXStream &);

    // RVA: 0x1C7B | Ordinal: 7292
        void manufacture(void);

    // RVA: 0x1EB4 | Ordinal: 7861
        void moveContents(int, int);

    // RVA: 0x1F40 | Ordinal: 8001
        void onAutoScroll(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2318 | Ordinal: 8985
        void onHMouseWheel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2319 | Ordinal: 8986
        void onHScrollerChanged(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x231A | Ordinal: 8987
        void onHScrollerDragged(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x262F | Ordinal: 9776
        void onVMouseWheel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2630 | Ordinal: 9777
        void onVScrollerChanged(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2631 | Ordinal: 9778
        void onVScrollerDragged(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2673 | Ordinal: 9844
        void placeScrollBars(int, int);

    // RVA: 0x2852 | Ordinal: 10323
        void save(class FX::FXStream &) const;

    // RVA: 0x2C6A | Ordinal: 11371
        void setPosition(int, int);

    // RVA: 0x2CAF | Ordinal: 11440
        void setScrollStyle(unsigned int);

    // RVA: 0x2E55 | Ordinal: 11862
        void startAutoScroll(struct FX::FXEvent *, bool);

    // RVA: 0x2E5F | Ordinal: 11872
        void stopAutoScroll(void);

    // RVA: 0x2F5B | Ordinal: 12124
        void verticalScrollBar(void) const;

    // RVA: 0x4A5 | Ordinal: 1190
        void _FXScrollArea(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXSCROLLAREA_HPP
