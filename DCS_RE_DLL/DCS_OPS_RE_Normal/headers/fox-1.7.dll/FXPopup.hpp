#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXPopup
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXPopup
{
public:

    // RVA: 0x24C | Ordinal: 589
        void FXPopup(void);

    // RVA: 0x24D | Ordinal: 590
        void FXPopup(class FX::FXWindow *, unsigned int, int, int, int, int);

    // RVA: 0x931 | Ordinal: 2354
        void GetClass(void) const;

    // RVA: 0xD03 | Ordinal: 3332
        void doesOverrideRedirect(void) const;

    // RVA: 0xD06 | Ordinal: 3335
        void doesSaveUnder(void) const;

    // RVA: 0xD33 | Ordinal: 3380
        void drawBorderRectangle(class FX::FXDCWindow &, int, int, int, int);

    // RVA: 0xD46 | Ordinal: 3399
        void drawDoubleRaisedRectangle(class FX::FXDCWindow &, int, int, int, int);

    // RVA: 0xD4A | Ordinal: 3403
        void drawDoubleSunkenRectangle(class FX::FXDCWindow &, int, int, int, int);

    // RVA: 0xD58 | Ordinal: 3417
        void drawFrame(class FX::FXDCWindow &, int, int, int, int);

    // RVA: 0xD5D | Ordinal: 3422
        void drawGrooveRectangle(class FX::FXDCWindow &, int, int, int, int);

    // RVA: 0xD9E | Ordinal: 3487
        void drawRaisedRectangle(class FX::FXDCWindow &, int, int, int, int);

    // RVA: 0xDA9 | Ordinal: 3498
        void drawRidgeRectangle(class FX::FXDCWindow &, int, int, int, int);

    // RVA: 0xDBD | Ordinal: 3518
        void drawSunkenRectangle(class FX::FXDCWindow &, int, int, int, int);

    // RVA: 0x104F | Ordinal: 4176
        void getBaseColor(void) const;

    // RVA: 0x105D | Ordinal: 4190
        void getBorderColor(void) const;

    // RVA: 0x1063 | Ordinal: 4196
        void getBorderWidth(void) const;

    // RVA: 0x113A | Ordinal: 4411
        void getDefaultHeight(void);

    // RVA: 0x1190 | Ordinal: 4497
        void getDefaultWidth(void);

    // RVA: 0x1230 | Ordinal: 4657
        void getFrameStyle(void) const;

    // RVA: 0x1237 | Ordinal: 4664
        void getGrabOwner(void) const;

    // RVA: 0x1294 | Ordinal: 4757
        void getHiliteColor(void) const;

    // RVA: 0x142D | Ordinal: 5166
        void getMetaClass(void) const;

    // RVA: 0x148D | Ordinal: 5262
        void getNextActive(void) const;

    // RVA: 0x14D4 | Ordinal: 5333
        void getOrientation(void) const;

    // RVA: 0x150F | Ordinal: 5392
        void getPrevActive(void) const;

    // RVA: 0x15A9 | Ordinal: 5546
        void getShadowColor(void) const;

    // RVA: 0x15B1 | Ordinal: 5554
        void getShrinkWrap(void) const;

    // RVA: 0x17AD | Ordinal: 6062
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x182C | Ordinal: 6189
        void hide(void);

    // RVA: 0x1A26 | Ordinal: 6695
        void killFocus(void);

    // RVA: 0x1A55 | Ordinal: 6742
        void layout(void);

    // RVA: 0x1C6A | Ordinal: 7275
        void manufacture(void);

    // RVA: 0x1F58 | Ordinal: 8025
        void onButtonPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F5F | Ordinal: 8032
        void onButtonRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FB4 | Ordinal: 8117
        void onCmdChoice(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2232 | Ordinal: 8755
        void onCmdUnpost(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x229C | Ordinal: 8861
        void onEnter(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22AE | Ordinal: 8879
        void onFocusDown(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22CF | Ordinal: 8912
        void onFocusLeft(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22D5 | Ordinal: 8918
        void onFocusNext(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22F0 | Ordinal: 8945
        void onFocusPrev(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22F9 | Ordinal: 8954
        void onFocusRight(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x230D | Ordinal: 8974
        void onFocusUp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2354 | Ordinal: 9045
        void onKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x237C | Ordinal: 9085
        void onKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x238E | Ordinal: 9103
        void onLayout(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23A0 | Ordinal: 9121
        void onLeave(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2406 | Ordinal: 9223
        void onMap(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2436 | Ordinal: 9271
        void onMotion(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2483 | Ordinal: 9348
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2545 | Ordinal: 9542
        void onUngrabbed(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2685 | Ordinal: 9862
        void popdown(void);

    // RVA: 0x2686 | Ordinal: 9863
        void popup(class FX::FXWindow *, int, int, int, int);

    // RVA: 0x29B6 | Ordinal: 10679
        void setBaseColor(unsigned int);

    // RVA: 0x29C3 | Ordinal: 10692
        void setBorderColor(unsigned int);

    // RVA: 0x2AA2 | Ordinal: 10915
        void setFocus(void);

    // RVA: 0x2AD6 | Ordinal: 10967
        void setFrameStyle(unsigned int);

    // RVA: 0x2B37 | Ordinal: 11064
        void setHiliteColor(unsigned int);

    // RVA: 0x2C38 | Ordinal: 11321
        void setOrientation(unsigned int);

    // RVA: 0x2CEC | Ordinal: 11501
        void setShadowColor(unsigned int);

    // RVA: 0x2CF6 | Ordinal: 11511
        void setShrinkWrap(bool);

    // RVA: 0x2DF5 | Ordinal: 11766
        void show(void);

    // RVA: 0x47F | Ordinal: 1152
        void _FXPopup(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXPOPUP_HPP
