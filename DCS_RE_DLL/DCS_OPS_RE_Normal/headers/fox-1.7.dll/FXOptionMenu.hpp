#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXOptionMenu
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXOptionMenu
{
public:

    // RVA: 0x231 | Ordinal: 562
        void FXOptionMenu(void);

    // RVA: 0x232 | Ordinal: 563
        void FXOptionMenu(class FX::FXComposite *, class FX::FXPopup *, unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0xA92 | Ordinal: 2707
        void canFocus(void) const;

    // RVA: 0xB61 | Ordinal: 2914
        void contains(int, int) const;

    // RVA: 0xBD5 | Ordinal: 3030
        void create(void);

    // RVA: 0xC7C | Ordinal: 3197
        void destroy(void);

    // RVA: 0xCB6 | Ordinal: 3255
        void detach(void);

    // RVA: 0x10CD | Ordinal: 4302
        void getCurrent(void) const;

    // RVA: 0x10E1 | Ordinal: 4322
        void getCurrentNo(void) const;

    // RVA: 0x1138 | Ordinal: 4409
        void getDefaultHeight(void);

    // RVA: 0x118E | Ordinal: 4495
        void getDefaultWidth(void);

    // RVA: 0x12D6 | Ordinal: 4823
        void getItem(int) const;

    // RVA: 0x136F | Ordinal: 4976
        void getMenu(void) const;

    // RVA: 0x1424 | Ordinal: 5157
        void getMetaClass(void) const;

    // RVA: 0x14B0 | Ordinal: 5297
        void getNumOptions(void) const;

    // RVA: 0x17A4 | Ordinal: 6053
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x19CC | Ordinal: 6605
        void isPopped(void) const;

    // RVA: 0x1A25 | Ordinal: 6694
        void killFocus(void);

    // RVA: 0x1A53 | Ordinal: 6740
        void layout(void);

    // RVA: 0x1B15 | Ordinal: 6934
        void load(class FX::FXStream &);

    // RVA: 0x1C61 | Ordinal: 7266
        void manufacture(void);

    // RVA: 0x2069 | Ordinal: 8298
        void onCmdGetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2117 | Ordinal: 8472
        void onCmdPost(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2183 | Ordinal: 8580
        void onCmdSetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21EA | Ordinal: 8683
        void onCmdSetValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2231 | Ordinal: 8754
        void onCmdUnpost(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x229B | Ordinal: 8860
        void onEnter(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22C2 | Ordinal: 8899
        void onFocusIn(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22E6 | Ordinal: 8935
        void onFocusOut(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2352 | Ordinal: 9043
        void onKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x237A | Ordinal: 9083
        void onKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x239F | Ordinal: 9120
        void onLeave(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23BF | Ordinal: 9152
        void onLeftBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23E7 | Ordinal: 9192
        void onLeftBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2434 | Ordinal: 9269
        void onMotion(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x244B | Ordinal: 9292
        void onMouseWheel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2481 | Ordinal: 9346
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24B6 | Ordinal: 9399
        void onQueryHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24D6 | Ordinal: 9431
        void onQueryTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2846 | Ordinal: 10311
        void save(class FX::FXStream &) const;

    // RVA: 0x2A07 | Ordinal: 10760
        void setCurrent(class FX::FXOption *, bool);

    // RVA: 0x2A1C | Ordinal: 10781
        void setCurrentNo(int, bool);

    // RVA: 0x2BFD | Ordinal: 11262
        void setMenu(class FX::FXPopup *);

    // RVA: 0x474 | Ordinal: 1141
        void _FXOptionMenu(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXOPTIONMENU_HPP
