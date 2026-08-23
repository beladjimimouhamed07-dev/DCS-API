#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXToggleButton
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXToggleButton
{
public:

    // RVA: 0x319 | Ordinal: 794
        void FXToggleButton(void);

    // RVA: 0x31A | Ordinal: 795
        void FXToggleButton(class FX::FXComposite *, class FX::FXString const &, class FX::FXString const &, class FX::FXIcon *, class FX::FXIcon *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0xA9B | Ordinal: 2716
        void canFocus(void) const;

    // RVA: 0xBE2 | Ordinal: 3043
        void create(void);

    // RVA: 0xCC0 | Ordinal: 3265
        void detach(void);

    // RVA: 0x1002 | Ordinal: 4099
        void getAltHelpText(void) const;

    // RVA: 0x1003 | Ordinal: 4100
        void getAltIcon(void) const;

    // RVA: 0x1004 | Ordinal: 4101
        void getAltText(void) const;

    // RVA: 0x1005 | Ordinal: 4102
        void getAltTipText(void) const;

    // RVA: 0x1154 | Ordinal: 4437
        void getDefaultHeight(void);

    // RVA: 0x11AA | Ordinal: 4523
        void getDefaultWidth(void);

    // RVA: 0x145C | Ordinal: 5213
        void getMetaClass(void) const;

    // RVA: 0x15D7 | Ordinal: 5592
        void getState(void) const;

    // RVA: 0x165A | Ordinal: 5723
        void getToggleStyle(void) const;

    // RVA: 0x17DC | Ordinal: 6109
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B3D | Ordinal: 6974
        void load(class FX::FXStream &);

    // RVA: 0x1C98 | Ordinal: 7321
        void manufacture(void);

    // RVA: 0x1F66 | Ordinal: 8039
        void onCheck(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2077 | Ordinal: 8312
        void onCmdGetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2191 | Ordinal: 8594
        void onCmdSetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21F8 | Ordinal: 8697
        void onCmdSetValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x229F | Ordinal: 8864
        void onEnter(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22C8 | Ordinal: 8905
        void onFocusIn(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22EC | Ordinal: 8941
        void onFocusOut(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2329 | Ordinal: 9002
        void onHotKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2338 | Ordinal: 9017
        void onHotKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2361 | Ordinal: 9058
        void onKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2389 | Ordinal: 9098
        void onKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23A3 | Ordinal: 9124
        void onLeave(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23CC | Ordinal: 9165
        void onLeftBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23F4 | Ordinal: 9205
        void onLeftBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2497 | Ordinal: 9368
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24BF | Ordinal: 9408
        void onQueryHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24DF | Ordinal: 9440
        void onQueryTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2538 | Ordinal: 9529
        void onUncheck(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x254E | Ordinal: 9551
        void onUngrabbed(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x262B | Ordinal: 9772
        void onUpdate(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x26C8 | Ordinal: 9929
        void press(unsigned char);

    // RVA: 0x286E | Ordinal: 10351
        void save(class FX::FXStream &) const;

    // RVA: 0x296E | Ordinal: 10607
        void setAltHelpText(class FX::FXString const &);

    // RVA: 0x296F | Ordinal: 10608
        void setAltIcon(class FX::FXIcon *);

    // RVA: 0x2970 | Ordinal: 10609
        void setAltText(class FX::FXString const &);

    // RVA: 0x2971 | Ordinal: 10610
        void setAltTipText(class FX::FXString const &);

    // RVA: 0x2D1C | Ordinal: 11549
        void setState(unsigned char, bool);

    // RVA: 0x2D9C | Ordinal: 11677
        void setToggleStyle(unsigned int);

    // RVA: 0x4D1 | Ordinal: 1234
        void _FXToggleButton(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXTOGGLEBUTTON_HPP
