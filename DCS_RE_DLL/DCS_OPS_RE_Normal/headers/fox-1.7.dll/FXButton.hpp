#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXButton
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXButton
{
public:

    // RVA: 0x3B | Ordinal: 60
        void FXButton(void);

    // RVA: 0x3C | Ordinal: 61
        void FXButton(class FX::FXComposite *, class FX::FXString const &, class FX::FXIcon *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0xA7F | Ordinal: 2688
        void canFocus(void) const;

    // RVA: 0x106D | Ordinal: 4206
        void getButtonStyle(void) const;

    // RVA: 0x138C | Ordinal: 5005
        void getMetaClass(void) const;

    // RVA: 0x15D6 | Ordinal: 5591
        void getState(void) const;

    // RVA: 0x170A | Ordinal: 5899
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1A1A | Ordinal: 6683
        void killFocus(void);

    // RVA: 0x1BCE | Ordinal: 7119
        void manufacture(void);

    // RVA: 0x1F61 | Ordinal: 8034
        void onCheck(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x205B | Ordinal: 8284
        void onCmdGetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2175 | Ordinal: 8566
        void onCmdSetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21D5 | Ordinal: 8662
        void onCmdSetValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x228E | Ordinal: 8847
        void onEnter(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22B6 | Ordinal: 8887
        void onFocusIn(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22DA | Ordinal: 8923
        void onFocusOut(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x231C | Ordinal: 8989
        void onHotKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x232B | Ordinal: 9004
        void onHotKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x233E | Ordinal: 9023
        void onKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2367 | Ordinal: 9064
        void onKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2392 | Ordinal: 9107
        void onLeave(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23AB | Ordinal: 9132
        void onLeftBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23D3 | Ordinal: 9172
        void onLeftBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2458 | Ordinal: 9305
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2533 | Ordinal: 9524
        void onUncheck(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x253A | Ordinal: 9531
        void onUngrabbed(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2624 | Ordinal: 9765
        void onUpdate(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x29CC | Ordinal: 10701
        void setButtonStyle(unsigned int);

    // RVA: 0x2A44 | Ordinal: 10821
        void setDefault(unsigned char);

    // RVA: 0x2A94 | Ordinal: 10901
        void setFocus(void);

    // RVA: 0x2D1B | Ordinal: 11548
        void setState(unsigned int);

    // RVA: 0x3B0 | Ordinal: 945
        void _FXButton(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXBUTTON_HPP
