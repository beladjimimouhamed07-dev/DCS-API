#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXColorWheel
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXColorWheel
{
public:

    // RVA: 0x8B | Ordinal: 140
        void FXColorWheel(void);

    // RVA: 0x8C | Ordinal: 141
        void FXColorWheel(class FX::FXComposite *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0xBA9 | Ordinal: 2986
        void create(void);

    // RVA: 0xC92 | Ordinal: 3219
        void detach(void);

    // RVA: 0x1114 | Ordinal: 4373
        void getDefaultHeight(void);

    // RVA: 0x116A | Ordinal: 4459
        void getDefaultWidth(void);

    // RVA: 0x126F | Ordinal: 4720
        void getHelpText(void) const;

    // RVA: 0x12A4 | Ordinal: 4773
        void getHue(void) const;

    // RVA: 0x1322 | Ordinal: 4899
        void getJustify(void) const;

    // RVA: 0x13B2 | Ordinal: 5043
        void getMetaClass(void) const;

    // RVA: 0x1553 | Ordinal: 5460
        void getSat(void) const;

    // RVA: 0x162E | Ordinal: 5679
        void getTipText(void) const;

    // RVA: 0x1684 | Ordinal: 5765
        void getVal(void) const;

    // RVA: 0x1730 | Ordinal: 5937
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1843 | Ordinal: 6212
        void hstoxy(int &, int &, float, float) const;

    // RVA: 0x1A40 | Ordinal: 6721
        void layout(void);

    // RVA: 0x1AB9 | Ordinal: 6842
        void load(class FX::FXStream &);

    // RVA: 0x1BF4 | Ordinal: 7157
        void manufacture(void);

    // RVA: 0x1ED0 | Ordinal: 7889
        void movespot(int, int);

    // RVA: 0x203C | Ordinal: 8253
        void onCmdGetHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20A8 | Ordinal: 8361
        void onCmdGetTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2156 | Ordinal: 8535
        void onCmdSetHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21C4 | Ordinal: 8645
        void onCmdSetTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23B1 | Ordinal: 9138
        void onLeftBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23D9 | Ordinal: 9178
        void onLeftBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2425 | Ordinal: 9254
        void onMotion(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2445 | Ordinal: 9286
        void onMouseWheel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x245F | Ordinal: 9312
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24A9 | Ordinal: 9386
        void onQueryHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24C8 | Ordinal: 9417
        void onQueryTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x27EB | Ordinal: 10220
        void save(class FX::FXStream &) const;

    // RVA: 0x2B11 | Ordinal: 11026
        void setHelpText(class FX::FXString const &);

    // RVA: 0x2B44 | Ordinal: 11077
        void setHue(float);

    // RVA: 0x2B46 | Ordinal: 11079
        void setHueSatVal(float, float, float);

    // RVA: 0x2BB3 | Ordinal: 11188
        void setJustify(unsigned int);

    // RVA: 0x2CA8 | Ordinal: 11433
        void setSat(float);

    // RVA: 0x2D74 | Ordinal: 11637
        void setTipText(class FX::FXString const &);

    // RVA: 0x2DBD | Ordinal: 11710
        void setVal(float);

    // RVA: 0x2F1F | Ordinal: 12064
        void updatedial(void);

    // RVA: 0x3009 | Ordinal: 12298
        void xytohs(float &, float &, int, int) const;

    // RVA: 0x3D6 | Ordinal: 983
        void _FXColorWheel(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXCOLORWHEEL_HPP
