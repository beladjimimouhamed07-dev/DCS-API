#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXRealSpinner
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXRealSpinner
{
public:

    // RVA: 0x28E | Ordinal: 655
        void FXRealSpinner(void);

    // RVA: 0x28F | Ordinal: 656
        void FXRealSpinner(class FX::FXComposite *, int, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0xC34 | Ordinal: 3125
        void decrement(bool);

    // RVA: 0xC36 | Ordinal: 3127
        void decrementByAmount(double, bool);

    // RVA: 0xCE5 | Ordinal: 3302
        void disable(void);

    // RVA: 0xE09 | Ordinal: 3594
        void enable(void);

    // RVA: 0x10E7 | Ordinal: 4328
        void getCursorColor(void) const;

    // RVA: 0x113F | Ordinal: 4416
        void getDefaultHeight(void);

    // RVA: 0x1195 | Ordinal: 4502
        void getDefaultWidth(void);

    // RVA: 0x11D3 | Ordinal: 4564
        void getDownArrowColor(void) const;

    // RVA: 0x1218 | Ordinal: 4633
        void getFont(void) const;

    // RVA: 0x123A | Ordinal: 4667
        void getGranularity(void) const;

    // RVA: 0x1281 | Ordinal: 4738
        void getHelpText(void) const;

    // RVA: 0x12C4 | Ordinal: 4805
        void getIncrement(void) const;

    // RVA: 0x1438 | Ordinal: 5177
        void getMetaClass(void) const;

    // RVA: 0x14A1 | Ordinal: 5282
        void getNumColumns(void) const;

    // RVA: 0x1526 | Ordinal: 5415
        void getRange(double &, double &) const;

    // RVA: 0x1571 | Ordinal: 5490
        void getSelBackColor(void) const;

    // RVA: 0x1586 | Ordinal: 5511
        void getSelTextColor(void) const;

    // RVA: 0x15CD | Ordinal: 5582
        void getSpinnerStyle(void) const;

    // RVA: 0x160C | Ordinal: 5645
        void getTextColor(void) const;

    // RVA: 0x1641 | Ordinal: 5698
        void getTipText(void) const;

    // RVA: 0x166E | Ordinal: 5743
        void getUpArrowColor(void) const;

    // RVA: 0x168B | Ordinal: 5772
        void getValue(void) const;

    // RVA: 0x17B8 | Ordinal: 6073
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1884 | Ordinal: 6277
        void increment(bool);

    // RVA: 0x1886 | Ordinal: 6279
        void incrementByAmount(double, bool);

    // RVA: 0x1913 | Ordinal: 6420
        void isCyclic(void) const;

    // RVA: 0x192B | Ordinal: 6444
        void isEditable(void) const;

    // RVA: 0x19FE | Ordinal: 6655
        void isTextVisible(void) const;

    // RVA: 0x1A58 | Ordinal: 6745
        void layout(void);

    // RVA: 0x1B1C | Ordinal: 6941
        void load(class FX::FXStream &);

    // RVA: 0x1C75 | Ordinal: 7286
        void manufacture(void);

    // RVA: 0x1F69 | Ordinal: 8042
        void onChgEntry(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FF8 | Ordinal: 8185
        void onCmdDecrement(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2028 | Ordinal: 8233
        void onCmdEntry(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2056 | Ordinal: 8279
        void onCmdGetIntRange(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x206E | Ordinal: 8303
        void onCmdGetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x207F | Ordinal: 8320
        void onCmdGetLongValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2089 | Ordinal: 8330
        void onCmdGetRealRange(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2090 | Ordinal: 8337
        void onCmdGetRealValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20C7 | Ordinal: 8392
        void onCmdIncrement(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2170 | Ordinal: 8561
        void onCmdSetIntRange(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2188 | Ordinal: 8585
        void onCmdSetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2199 | Ordinal: 8602
        void onCmdSetLongValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21A5 | Ordinal: 8614
        void onCmdSetRealRange(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21AC | Ordinal: 8621
        void onCmdSetRealValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21EF | Ordinal: 8688
        void onCmdSetValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2301 | Ordinal: 8962
        void onFocusSelf(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2358 | Ordinal: 9049
        void onKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2380 | Ordinal: 9089
        void onKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x257A | Ordinal: 9595
        void onUpdDecrement(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x258B | Ordinal: 9612
        void onUpdEntry(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25A9 | Ordinal: 9642
        void onUpdIncrement(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2633 | Ordinal: 9780
        void onWheelEntry(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x284D | Ordinal: 10318
        void save(class FX::FXStream &) const;

    // RVA: 0x2A21 | Ordinal: 10786
        void setCursorColor(unsigned int);

    // RVA: 0x2A2A | Ordinal: 10795
        void setCyclic(bool);

    // RVA: 0x2A61 | Ordinal: 10850
        void setDownArrowColor(unsigned int);

    // RVA: 0x2A73 | Ordinal: 10868
        void setEditable(bool);

    // RVA: 0x2AC2 | Ordinal: 10947
        void setFont(class FX::FXFont *);

    // RVA: 0x2AE2 | Ordinal: 10979
        void setGranularity(double);

    // RVA: 0x2B23 | Ordinal: 11044
        void setHelpText(class FX::FXString const &);

    // RVA: 0x2B66 | Ordinal: 11111
        void setIncrement(double);

    // RVA: 0x2C18 | Ordinal: 11289
        void setNumColumns(int);

    // RVA: 0x2C83 | Ordinal: 11396
        void setRange(double, double, bool);

    // RVA: 0x2CBC | Ordinal: 11453
        void setSelBackColor(unsigned int);

    // RVA: 0x2CCB | Ordinal: 11468
        void setSelTextColor(unsigned int);

    // RVA: 0x2D11 | Ordinal: 11538
        void setSpinnerStyle(unsigned int);

    // RVA: 0x2D53 | Ordinal: 11604
        void setTextColor(unsigned int);

    // RVA: 0x2D5F | Ordinal: 11616
        void setTextVisible(bool);

    // RVA: 0x2D84 | Ordinal: 11653
        void setTipText(class FX::FXString const &);

    // RVA: 0x2DA9 | Ordinal: 11690
        void setUpArrowColor(unsigned int);

    // RVA: 0x2DC3 | Ordinal: 11716
        void setValue(double, bool);

    // RVA: 0x494 | Ordinal: 1173
        void _FXRealSpinner(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXREALSPINNER_HPP
