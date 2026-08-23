#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXSpinner
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXSpinner
{
public:

    // RVA: 0x2DE | Ordinal: 735
        void FXSpinner(void);

    // RVA: 0x2DF | Ordinal: 736
        void FXSpinner(class FX::FXComposite *, int, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0xC35 | Ordinal: 3126
        void decrement(bool);

    // RVA: 0xC37 | Ordinal: 3128
        void decrementByAmount(int, bool);

    // RVA: 0xCE8 | Ordinal: 3305
        void disable(void);

    // RVA: 0xE0C | Ordinal: 3597
        void enable(void);

    // RVA: 0x10E8 | Ordinal: 4329
        void getCursorColor(void) const;

    // RVA: 0x1148 | Ordinal: 4425
        void getDefaultHeight(void);

    // RVA: 0x119E | Ordinal: 4511
        void getDefaultWidth(void);

    // RVA: 0x11D4 | Ordinal: 4565
        void getDownArrowColor(void) const;

    // RVA: 0x121A | Ordinal: 4635
        void getFont(void) const;

    // RVA: 0x1286 | Ordinal: 4743
        void getHelpText(void) const;

    // RVA: 0x12C6 | Ordinal: 4807
        void getIncrement(void) const;

    // RVA: 0x1449 | Ordinal: 5194
        void getMetaClass(void) const;

    // RVA: 0x14A2 | Ordinal: 5283
        void getNumColumns(void) const;

    // RVA: 0x1529 | Ordinal: 5418
        void getRange(int &, int &) const;

    // RVA: 0x1572 | Ordinal: 5491
        void getSelBackColor(void) const;

    // RVA: 0x1587 | Ordinal: 5512
        void getSelTextColor(void) const;

    // RVA: 0x15CE | Ordinal: 5583
        void getSpinnerStyle(void) const;

    // RVA: 0x160E | Ordinal: 5647
        void getTextColor(void) const;

    // RVA: 0x1646 | Ordinal: 5703
        void getTipText(void) const;

    // RVA: 0x166F | Ordinal: 5744
        void getUpArrowColor(void) const;

    // RVA: 0x168E | Ordinal: 5775
        void getValue(void) const;

    // RVA: 0x17C9 | Ordinal: 6090
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1885 | Ordinal: 6278
        void increment(bool);

    // RVA: 0x1887 | Ordinal: 6280
        void incrementByAmount(int, bool);

    // RVA: 0x1914 | Ordinal: 6421
        void isCyclic(void) const;

    // RVA: 0x192C | Ordinal: 6445
        void isEditable(void) const;

    // RVA: 0x19FF | Ordinal: 6656
        void isTextVisible(void) const;

    // RVA: 0x1A62 | Ordinal: 6755
        void layout(void);

    // RVA: 0x1B26 | Ordinal: 6951
        void load(class FX::FXStream &);

    // RVA: 0x1C86 | Ordinal: 7303
        void manufacture(void);

    // RVA: 0x1F6A | Ordinal: 8043
        void onChgEntry(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FFA | Ordinal: 8187
        void onCmdDecrement(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2029 | Ordinal: 8234
        void onCmdEntry(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2059 | Ordinal: 8282
        void onCmdGetIntRange(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2073 | Ordinal: 8308
        void onCmdGetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2082 | Ordinal: 8323
        void onCmdGetLongValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20C9 | Ordinal: 8394
        void onCmdIncrement(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2173 | Ordinal: 8564
        void onCmdSetIntRange(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x218D | Ordinal: 8590
        void onCmdSetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x219C | Ordinal: 8605
        void onCmdSetLongValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21F4 | Ordinal: 8693
        void onCmdSetValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2303 | Ordinal: 8964
        void onFocusSelf(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x235C | Ordinal: 9053
        void onKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2384 | Ordinal: 9093
        void onKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x257B | Ordinal: 9596
        void onUpdDecrement(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x258C | Ordinal: 9613
        void onUpdEntry(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25AA | Ordinal: 9643
        void onUpdIncrement(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2634 | Ordinal: 9781
        void onWheelEntry(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2857 | Ordinal: 10328
        void save(class FX::FXStream &) const;

    // RVA: 0x2A22 | Ordinal: 10787
        void setCursorColor(unsigned int);

    // RVA: 0x2A2B | Ordinal: 10796
        void setCyclic(bool);

    // RVA: 0x2A62 | Ordinal: 10851
        void setDownArrowColor(unsigned int);

    // RVA: 0x2A74 | Ordinal: 10869
        void setEditable(bool);

    // RVA: 0x2AC4 | Ordinal: 10949
        void setFont(class FX::FXFont *);

    // RVA: 0x2B28 | Ordinal: 11049
        void setHelpText(class FX::FXString const &);

    // RVA: 0x2B68 | Ordinal: 11113
        void setIncrement(int);

    // RVA: 0x2C19 | Ordinal: 11290
        void setNumColumns(int);

    // RVA: 0x2C86 | Ordinal: 11399
        void setRange(int, int, bool);

    // RVA: 0x2CBD | Ordinal: 11454
        void setSelBackColor(unsigned int);

    // RVA: 0x2CCC | Ordinal: 11469
        void setSelTextColor(unsigned int);

    // RVA: 0x2D12 | Ordinal: 11539
        void setSpinnerStyle(unsigned int);

    // RVA: 0x2D55 | Ordinal: 11606
        void setTextColor(unsigned int);

    // RVA: 0x2D60 | Ordinal: 11617
        void setTextVisible(bool);

    // RVA: 0x2D89 | Ordinal: 11658
        void setTipText(class FX::FXString const &);

    // RVA: 0x2DAA | Ordinal: 11691
        void setUpArrowColor(unsigned int);

    // RVA: 0x2DC6 | Ordinal: 11719
        void setValue(int, bool);

    // RVA: 0x4B7 | Ordinal: 1208
        void _FXSpinner(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXSPINNER_HPP
