#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXRealSlider
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXRealSlider
{
public:

    // RVA: 0x28C | Ordinal: 653
        void FXRealSlider(void);

    // RVA: 0x28D | Ordinal: 654
        void FXRealSlider(class FX::FXComposite *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0xA95 | Ordinal: 2710
        void canFocus(void) const;

    // RVA: 0xCE4 | Ordinal: 3301
        void disable(void);

    // RVA: 0xD65 | Ordinal: 3430
        void drawHorzTicks(class FX::FXDCWindow &, int, int, int, int);

    // RVA: 0xDB7 | Ordinal: 3512
        void drawSliderHead(class FX::FXDCWindow &, int, int, int, int);

    // RVA: 0xDD5 | Ordinal: 3542
        void drawVertTicks(class FX::FXDCWindow &, int, int, int, int);

    // RVA: 0xE08 | Ordinal: 3593
        void enable(void);

    // RVA: 0x113E | Ordinal: 4415
        void getDefaultHeight(void);

    // RVA: 0x1194 | Ordinal: 4501
        void getDefaultWidth(void);

    // RVA: 0x1239 | Ordinal: 4666
        void getGranularity(void) const;

    // RVA: 0x124F | Ordinal: 4688
        void getHeadSize(void) const;

    // RVA: 0x1280 | Ordinal: 4737
        void getHelpText(void) const;

    // RVA: 0x12C3 | Ordinal: 4804
        void getIncrement(void) const;

    // RVA: 0x1437 | Ordinal: 5176
        void getMetaClass(void) const;

    // RVA: 0x1525 | Ordinal: 5414
        void getRange(double &, double &) const;

    // RVA: 0x15BC | Ordinal: 5565
        void getSliderStyle(void) const;

    // RVA: 0x15BF | Ordinal: 5568
        void getSlotColor(void) const;

    // RVA: 0x15C2 | Ordinal: 5571
        void getSlotSize(void) const;

    // RVA: 0x1621 | Ordinal: 5666
        void getTickDelta(void) const;

    // RVA: 0x1640 | Ordinal: 5697
        void getTipText(void) const;

    // RVA: 0x168A | Ordinal: 5771
        void getValue(void) const;

    // RVA: 0x17B7 | Ordinal: 6072
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1A57 | Ordinal: 6744
        void layout(void);

    // RVA: 0x1B1B | Ordinal: 6940
        void load(class FX::FXStream &);

    // RVA: 0x1C74 | Ordinal: 7285
        void manufacture(void);

    // RVA: 0x1F48 | Ordinal: 8009
        void onAutoSlide(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2045 | Ordinal: 8262
        void onCmdGetHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2055 | Ordinal: 8278
        void onCmdGetIntRange(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x206D | Ordinal: 8302
        void onCmdGetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x207E | Ordinal: 8319
        void onCmdGetLongValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2088 | Ordinal: 8329
        void onCmdGetRealRange(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x208F | Ordinal: 8336
        void onCmdGetRealValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20B1 | Ordinal: 8370
        void onCmdGetTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x215F | Ordinal: 8544
        void onCmdSetHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x216F | Ordinal: 8560
        void onCmdSetIntRange(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2187 | Ordinal: 8584
        void onCmdSetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2198 | Ordinal: 8601
        void onCmdSetLongValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21A4 | Ordinal: 8613
        void onCmdSetRealRange(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21AB | Ordinal: 8620
        void onCmdSetRealValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21CD | Ordinal: 8654
        void onCmdSetTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21EE | Ordinal: 8687
        void onCmdSetValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2357 | Ordinal: 9048
        void onKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x237F | Ordinal: 9088
        void onKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23C3 | Ordinal: 9156
        void onLeftBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23EB | Ordinal: 9196
        void onLeftBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x240F | Ordinal: 9232
        void onMiddleBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2419 | Ordinal: 9242
        void onMiddleBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2438 | Ordinal: 9273
        void onMotion(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x244D | Ordinal: 9294
        void onMouseWheel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2487 | Ordinal: 9352
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24B8 | Ordinal: 9401
        void onQueryHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24D8 | Ordinal: 9433
        void onQueryTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2548 | Ordinal: 9545
        void onUngrabbed(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x284C | Ordinal: 10317
        void save(class FX::FXStream &) const;

    // RVA: 0x2AE1 | Ordinal: 10978
        void setGranularity(double);

    // RVA: 0x2AF8 | Ordinal: 11001
        void setHeadSize(int);

    // RVA: 0x2B22 | Ordinal: 11043
        void setHelpText(class FX::FXString const &);

    // RVA: 0x2B65 | Ordinal: 11110
        void setIncrement(double);

    // RVA: 0x2C82 | Ordinal: 11395
        void setRange(double, double, bool);

    // RVA: 0x2CFF | Ordinal: 11520
        void setSliderStyle(unsigned int);

    // RVA: 0x2D02 | Ordinal: 11523
        void setSlotColor(unsigned int);

    // RVA: 0x2D05 | Ordinal: 11526
        void setSlotSize(int);

    // RVA: 0x2D65 | Ordinal: 11622
        void setTickDelta(double);

    // RVA: 0x2D83 | Ordinal: 11652
        void setTipText(class FX::FXString const &);

    // RVA: 0x2DC2 | Ordinal: 11715
        void setValue(double, bool);

    // RVA: 0x493 | Ordinal: 1172
        void _FXRealSlider(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXREALSLIDER_HPP
