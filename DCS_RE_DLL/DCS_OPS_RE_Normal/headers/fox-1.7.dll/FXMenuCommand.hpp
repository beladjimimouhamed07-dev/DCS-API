#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXMenuCommand
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXMenuCommand
{
public:

    // RVA: 0x217 | Ordinal: 536
        void FXMenuCommand(void);

    // RVA: 0x218 | Ordinal: 537
        void FXMenuCommand(class FX::FXComposite *, class FX::FXString const &, class FX::FXIcon *, class FX::FXObject *, unsigned int, unsigned int);

    // RVA: 0xA8F | Ordinal: 2704
        void canFocus(void) const;

    // RVA: 0xFE0 | Ordinal: 4065
        void getAccelText(void) const;

    // RVA: 0x1133 | Ordinal: 4404
        void getDefaultHeight(void);

    // RVA: 0x1189 | Ordinal: 4490
        void getDefaultWidth(void);

    // RVA: 0x141B | Ordinal: 5148
        void getMetaClass(void) const;

    // RVA: 0x179B | Ordinal: 6044
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1A22 | Ordinal: 6691
        void killFocus(void);

    // RVA: 0x1B0F | Ordinal: 6928
        void load(class FX::FXStream &);

    // RVA: 0x1C58 | Ordinal: 7257
        void manufacture(void);

    // RVA: 0x1F56 | Ordinal: 8023
        void onButtonPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F5D | Ordinal: 8030
        void onButtonRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F89 | Ordinal: 8074
        void onCmdAccel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2298 | Ordinal: 8857
        void onEnter(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2322 | Ordinal: 8995
        void onHotKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2331 | Ordinal: 9010
        void onHotKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x234E | Ordinal: 9039
        void onKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2376 | Ordinal: 9079
        void onKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x239C | Ordinal: 9117
        void onLeave(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x247C | Ordinal: 9341
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2840 | Ordinal: 10305
        void save(class FX::FXStream &) const;

    // RVA: 0x2960 | Ordinal: 10593
        void setAccelText(class FX::FXString const &, bool);

    // RVA: 0x2A9F | Ordinal: 10912
        void setFocus(void);

    // RVA: 0x468 | Ordinal: 1129
        void _FXMenuCommand(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXMENUCOMMAND_HPP
