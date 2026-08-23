#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXColorBar
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXColorBar
{
public:

    // RVA: 0x7C | Ordinal: 125
        void FXColorBar(void);

    // RVA: 0x7D | Ordinal: 126
        void FXColorBar(class FX::FXComposite *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0xBA5 | Ordinal: 2982
        void create(void);

    // RVA: 0xC8F | Ordinal: 3216
        void detach(void);

    // RVA: 0x1046 | Ordinal: 4167
        void getBarStyle(void) const;

    // RVA: 0x1111 | Ordinal: 4370
        void getDefaultHeight(void);

    // RVA: 0x1167 | Ordinal: 4456
        void getDefaultWidth(void);

    // RVA: 0x126C | Ordinal: 4717
        void getHelpText(void) const;

    // RVA: 0x12A2 | Ordinal: 4771
        void getHue(void) const;

    // RVA: 0x13AB | Ordinal: 5036
        void getMetaClass(void) const;

    // RVA: 0x1551 | Ordinal: 5458
        void getSat(void) const;

    // RVA: 0x162B | Ordinal: 5676
        void getTipText(void) const;

    // RVA: 0x1682 | Ordinal: 5763
        void getVal(void) const;

    // RVA: 0x1729 | Ordinal: 5930
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1A3E | Ordinal: 6719
        void layout(void);

    // RVA: 0x1AB4 | Ordinal: 6837
        void load(class FX::FXStream &);

    // RVA: 0x1BED | Ordinal: 7150
        void manufacture(void);

    // RVA: 0x2039 | Ordinal: 8250
        void onCmdGetHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20A5 | Ordinal: 8358
        void onCmdGetTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2153 | Ordinal: 8532
        void onCmdSetHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21C1 | Ordinal: 8642
        void onCmdSetTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23AE | Ordinal: 9135
        void onLeftBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23D6 | Ordinal: 9175
        void onLeftBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2422 | Ordinal: 9251
        void onMotion(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x245C | Ordinal: 9309
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24A6 | Ordinal: 9383
        void onQueryHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24C5 | Ordinal: 9414
        void onQueryTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x27E6 | Ordinal: 10215
        void save(class FX::FXStream &) const;

    // RVA: 0x29AE | Ordinal: 10671
        void setBarStyle(unsigned int);

    // RVA: 0x2B0E | Ordinal: 11023
        void setHelpText(class FX::FXString const &);

    // RVA: 0x2B42 | Ordinal: 11075
        void setHue(float);

    // RVA: 0x2CA6 | Ordinal: 11431
        void setSat(float);

    // RVA: 0x2D71 | Ordinal: 11634
        void setTipText(class FX::FXString const &);

    // RVA: 0x2DBB | Ordinal: 11708
        void setVal(float);

    // RVA: 0x2F1D | Ordinal: 12062
        void updatebar(void);

    // RVA: 0x3CF | Ordinal: 976
        void _FXColorBar(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXCOLORBAR_HPP
