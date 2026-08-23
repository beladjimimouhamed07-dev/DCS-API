#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXMenuCascade
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXMenuCascade
{
public:

    // RVA: 0x213 | Ordinal: 532
        void FXMenuCascade(void);

    // RVA: 0x214 | Ordinal: 533
        void FXMenuCascade(class FX::FXComposite *, class FX::FXString const &, class FX::FXIcon *, class FX::FXPopup *, unsigned int);

    // RVA: 0xA8E | Ordinal: 2703
        void canFocus(void) const;

    // RVA: 0xB5E | Ordinal: 2911
        void contains(int, int) const;

    // RVA: 0xBD3 | Ordinal: 3028
        void create(void);

    // RVA: 0xC7B | Ordinal: 3196
        void destroy(void);

    // RVA: 0xCB4 | Ordinal: 3253
        void detach(void);

    // RVA: 0xDCC | Ordinal: 3533
        void drawTriangle(class FX::FXDCWindow &, int, int, int, int);

    // RVA: 0x136D | Ordinal: 4974
        void getMenu(void) const;

    // RVA: 0x1419 | Ordinal: 5146
        void getMetaClass(void) const;

    // RVA: 0x1799 | Ordinal: 6042
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1A21 | Ordinal: 6690
        void killFocus(void);

    // RVA: 0x1B0D | Ordinal: 6926
        void load(class FX::FXStream &);

    // RVA: 0x1C56 | Ordinal: 7255
        void manufacture(void);

    // RVA: 0x1F54 | Ordinal: 8021
        void onButtonPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F5B | Ordinal: 8028
        void onButtonRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2115 | Ordinal: 8470
        void onCmdPost(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x222F | Ordinal: 8752
        void onCmdUnpost(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2297 | Ordinal: 8856
        void onEnter(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2320 | Ordinal: 8993
        void onHotKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x232F | Ordinal: 9008
        void onHotKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x234C | Ordinal: 9037
        void onKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2374 | Ordinal: 9077
        void onKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x239B | Ordinal: 9116
        void onLeave(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x247A | Ordinal: 9339
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x283E | Ordinal: 10303
        void save(class FX::FXStream &) const;

    // RVA: 0x2A9E | Ordinal: 10911
        void setFocus(void);

    // RVA: 0x2BFB | Ordinal: 11260
        void setMenu(class FX::FXPopup *);

    // RVA: 0x466 | Ordinal: 1127
        void _FXMenuCascade(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXMENUCASCADE_HPP
