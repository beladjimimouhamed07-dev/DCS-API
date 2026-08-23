#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXToolBarShell
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXToolBarShell
{
public:

    // RVA: 0x320 | Ordinal: 801
        void FXToolBarShell(void);

    // RVA: 0x321 | Ordinal: 802
        void FXToolBarShell(class FX::FXWindow *, unsigned int, int, int, int, int, int, int);

    // RVA: 0xBE3 | Ordinal: 3044
        void create(void);

    // RVA: 0xD34 | Ordinal: 3381
        void drawBorderRectangle(class FX::FXDCWindow &, int, int, int, int);

    // RVA: 0xD47 | Ordinal: 3400
        void drawDoubleRaisedRectangle(class FX::FXDCWindow &, int, int, int, int);

    // RVA: 0xD4B | Ordinal: 3404
        void drawDoubleSunkenRectangle(class FX::FXDCWindow &, int, int, int, int);

    // RVA: 0xD59 | Ordinal: 3418
        void drawFrame(class FX::FXDCWindow &, int, int, int, int);

    // RVA: 0xD5E | Ordinal: 3423
        void drawGrooveRectangle(class FX::FXDCWindow &, int, int, int, int);

    // RVA: 0xD9F | Ordinal: 3488
        void drawRaisedRectangle(class FX::FXDCWindow &, int, int, int, int);

    // RVA: 0xDAA | Ordinal: 3499
        void drawRidgeRectangle(class FX::FXDCWindow &, int, int, int, int);

    // RVA: 0xDBE | Ordinal: 3519
        void drawSunkenRectangle(class FX::FXDCWindow &, int, int, int, int);

    // RVA: 0x1051 | Ordinal: 4178
        void getBaseColor(void) const;

    // RVA: 0x1060 | Ordinal: 4193
        void getBorderColor(void) const;

    // RVA: 0x1064 | Ordinal: 4197
        void getBorderWidth(void) const;

    // RVA: 0x1157 | Ordinal: 4440
        void getDefaultHeight(void);

    // RVA: 0x11AD | Ordinal: 4526
        void getDefaultWidth(void);

    // RVA: 0x1231 | Ordinal: 4658
        void getFrameStyle(void) const;

    // RVA: 0x1297 | Ordinal: 4760
        void getHiliteColor(void) const;

    // RVA: 0x145F | Ordinal: 5216
        void getMetaClass(void) const;

    // RVA: 0x15AC | Ordinal: 5549
        void getShadowColor(void) const;

    // RVA: 0x17DF | Ordinal: 6112
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1A6C | Ordinal: 6765
        void layout(void);

    // RVA: 0x1B3F | Ordinal: 6976
        void load(class FX::FXStream &);

    // RVA: 0x1C9B | Ordinal: 7324
        void manufacture(void);

    // RVA: 0x22A1 | Ordinal: 8866
        void onEnter(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2390 | Ordinal: 9105
        void onLayout(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23A5 | Ordinal: 9126
        void onLeave(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23CD | Ordinal: 9166
        void onLeftBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23F5 | Ordinal: 9206
        void onLeftBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2441 | Ordinal: 9282
        void onMotion(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2499 | Ordinal: 9370
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2870 | Ordinal: 10353
        void save(class FX::FXStream &) const;

    // RVA: 0x29B8 | Ordinal: 10681
        void setBaseColor(unsigned int);

    // RVA: 0x29C6 | Ordinal: 10695
        void setBorderColor(unsigned int);

    // RVA: 0x2AD7 | Ordinal: 10968
        void setFrameStyle(unsigned int);

    // RVA: 0x2B3A | Ordinal: 11067
        void setHiliteColor(unsigned int);

    // RVA: 0x2CEF | Ordinal: 11504
        void setShadowColor(unsigned int);

    // RVA: 0x2FC6 | Ordinal: 12231
        void where(int, int) const;

    // RVA: 0x4D4 | Ordinal: 1237
        void _FXToolBarShell(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXTOOLBARSHELL_HPP
