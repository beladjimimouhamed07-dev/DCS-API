#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXMenuButton
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXMenuButton
{
public:

    // RVA: 0x20F | Ordinal: 528
        void FXMenuButton(void);

    // RVA: 0x210 | Ordinal: 529
        void FXMenuButton(class FX::FXComposite *, class FX::FXString const &, class FX::FXIcon *, class FX::FXPopup *, unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0xA8D | Ordinal: 2702
        void canFocus(void) const;

    // RVA: 0xB5D | Ordinal: 2910
        void contains(int, int) const;

    // RVA: 0xBD1 | Ordinal: 3026
        void create(void);

    // RVA: 0xCB2 | Ordinal: 3251
        void detach(void);

    // RVA: 0x102D | Ordinal: 4142
        void getAttachment(void) const;

    // RVA: 0x106E | Ordinal: 4207
        void getButtonStyle(void) const;

    // RVA: 0x1130 | Ordinal: 4401
        void getDefaultHeight(void);

    // RVA: 0x1186 | Ordinal: 4487
        void getDefaultWidth(void);

    // RVA: 0x136C | Ordinal: 4973
        void getMenu(void) const;

    // RVA: 0x1417 | Ordinal: 5144
        void getMetaClass(void) const;

    // RVA: 0x1502 | Ordinal: 5379
        void getPopupStyle(void) const;

    // RVA: 0x16CE | Ordinal: 5839
        void getXOffset(void) const;

    // RVA: 0x16D3 | Ordinal: 5844
        void getYOffset(void) const;

    // RVA: 0x1797 | Ordinal: 6040
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x199F | Ordinal: 6560
        void isMenuShown(void) const;

    // RVA: 0x1A20 | Ordinal: 6689
        void killFocus(void);

    // RVA: 0x1B0B | Ordinal: 6924
        void load(class FX::FXStream &);

    // RVA: 0x1C54 | Ordinal: 7253
        void manufacture(void);

    // RVA: 0x1F53 | Ordinal: 8020
        void onButtonPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F5A | Ordinal: 8027
        void onButtonRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2114 | Ordinal: 8469
        void onCmdPost(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x222E | Ordinal: 8751
        void onCmdUnpost(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2296 | Ordinal: 8855
        void onEnter(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22C0 | Ordinal: 8897
        void onFocusIn(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22E4 | Ordinal: 8933
        void onFocusOut(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x231F | Ordinal: 8992
        void onHotKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x232E | Ordinal: 9007
        void onHotKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x234B | Ordinal: 9036
        void onKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2373 | Ordinal: 9076
        void onKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x239A | Ordinal: 9115
        void onLeave(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2433 | Ordinal: 9268
        void onMotion(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2478 | Ordinal: 9337
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2544 | Ordinal: 9541
        void onUngrabbed(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2626 | Ordinal: 9767
        void onUpdate(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x283C | Ordinal: 10301
        void save(class FX::FXStream &) const;

    // RVA: 0x2993 | Ordinal: 10644
        void setAttachment(unsigned int);

    // RVA: 0x29CD | Ordinal: 10702
        void setButtonStyle(unsigned int);

    // RVA: 0x2BFA | Ordinal: 11259
        void setMenu(class FX::FXPopup *);

    // RVA: 0x2C65 | Ordinal: 11366
        void setPopupStyle(unsigned int);

    // RVA: 0x2DE0 | Ordinal: 11745
        void setXOffset(int);

    // RVA: 0x2DE2 | Ordinal: 11747
        void setYOffset(int);

    // RVA: 0x2E19 | Ordinal: 11802
        void showMenu(bool);

    // RVA: 0x464 | Ordinal: 1125
        void _FXMenuButton(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXMENUBUTTON_HPP
