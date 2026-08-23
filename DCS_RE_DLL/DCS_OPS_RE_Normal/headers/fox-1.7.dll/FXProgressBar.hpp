#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXProgressBar
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXProgressBar
{
public:

    // RVA: 0x254 | Ordinal: 597
        void FXProgressBar(void);

    // RVA: 0x255 | Ordinal: 598
        void FXProgressBar(class FX::FXComposite *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0xBD8 | Ordinal: 3033
        void create(void);

    // RVA: 0xCB7 | Ordinal: 3256
        void detach(void);

    // RVA: 0xD79 | Ordinal: 3450
        void drawInterior(class FX::FXDCWindow &);

    // RVA: 0x103D | Ordinal: 4158
        void getBarBGColor(void) const;

    // RVA: 0x103E | Ordinal: 4159
        void getBarColor(void) const;

    // RVA: 0x1043 | Ordinal: 4164
        void getBarSize(void) const;

    // RVA: 0x1048 | Ordinal: 4169
        void getBarStyle(void) const;

    // RVA: 0x113B | Ordinal: 4412
        void getDefaultHeight(void);

    // RVA: 0x1191 | Ordinal: 4498
        void getDefaultWidth(void);

    // RVA: 0x1217 | Ordinal: 4632
        void getFont(void) const;

    // RVA: 0x142F | Ordinal: 5168
        void getMetaClass(void) const;

    // RVA: 0x1511 | Ordinal: 5394
        void getProgress(void) const;

    // RVA: 0x1600 | Ordinal: 5633
        void getTextAltColor(void) const;

    // RVA: 0x160B | Ordinal: 5644
        void getTextColor(void) const;

    // RVA: 0x1661 | Ordinal: 5730
        void getTotal(void) const;

    // RVA: 0x17AF | Ordinal: 6064
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1830 | Ordinal: 6193
        void hideNumber(void);

    // RVA: 0x1882 | Ordinal: 6275
        void increment(unsigned int);

    // RVA: 0x1B18 | Ordinal: 6937
        void load(class FX::FXStream &);

    // RVA: 0x1C6C | Ordinal: 7277
        void manufacture(void);

    // RVA: 0x2052 | Ordinal: 8275
        void onCmdGetIntRange(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x206A | Ordinal: 8299
        void onCmdGetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x207C | Ordinal: 8317
        void onCmdGetLongValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x216C | Ordinal: 8557
        void onCmdSetIntRange(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2184 | Ordinal: 8581
        void onCmdSetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2196 | Ordinal: 8599
        void onCmdSetLongValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21EB | Ordinal: 8684
        void onCmdSetValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2484 | Ordinal: 9349
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2849 | Ordinal: 10314
        void save(class FX::FXStream &) const;

    // RVA: 0x29A5 | Ordinal: 10662
        void setBarBGColor(unsigned int);

    // RVA: 0x29A6 | Ordinal: 10663
        void setBarColor(unsigned int);

    // RVA: 0x29AB | Ordinal: 10668
        void setBarSize(int);

    // RVA: 0x29B0 | Ordinal: 10673
        void setBarStyle(unsigned int);

    // RVA: 0x2AC1 | Ordinal: 10946
        void setFont(class FX::FXFont *);

    // RVA: 0x2C6E | Ordinal: 11375
        void setProgress(unsigned int);

    // RVA: 0x2D47 | Ordinal: 11592
        void setTextAltColor(unsigned int);

    // RVA: 0x2D52 | Ordinal: 11603
        void setTextColor(unsigned int);

    // RVA: 0x2DA1 | Ordinal: 11682
        void setTotal(unsigned int);

    // RVA: 0x2E1B | Ordinal: 11804
        void showNumber(void);

    // RVA: 0x483 | Ordinal: 1156
        void _FXProgressBar(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXPROGRESSBAR_HPP
