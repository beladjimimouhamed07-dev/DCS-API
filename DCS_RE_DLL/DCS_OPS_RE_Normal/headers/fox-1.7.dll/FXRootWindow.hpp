#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXRootWindow
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXRootWindow
{
public:

    // RVA: 0x2A6 | Ordinal: 679
        void FXRootWindow(void);

    // RVA: 0x2A7 | Ordinal: 680
        void FXRootWindow(class FX::FXApp *, class FX::FXVisual *);

    // RVA: 0x938 | Ordinal: 2361
        void GetDC(void) const;

    // RVA: 0x93D | Ordinal: 2366
        void ReleaseDC(void *) const;

    // RVA: 0xA50 | Ordinal: 2641
        void attach(void *);

    // RVA: 0xBD9 | Ordinal: 3034
        void create(void);

    // RVA: 0xC7D | Ordinal: 3198
        void destroy(void);

    // RVA: 0xCB8 | Ordinal: 3257
        void detach(void);

    // RVA: 0x1140 | Ordinal: 4417
        void getDefaultHeight(void);

    // RVA: 0x1196 | Ordinal: 4503
        void getDefaultWidth(void);

    // RVA: 0x143B | Ordinal: 5180
        void getMetaClass(void) const;

    // RVA: 0x17BB | Ordinal: 6076
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1A27 | Ordinal: 6696
        void killFocus(void);

    // RVA: 0x1A59 | Ordinal: 6746
        void layout(void);

    // RVA: 0x1C78 | Ordinal: 7289
        void manufacture(void);

    // RVA: 0x1EAC | Ordinal: 7853
        void move(int, int);

    // RVA: 0x269A | Ordinal: 9883
        void position(int, int, int, int);

    // RVA: 0x2717 | Ordinal: 10008
        void recalc(void);

    // RVA: 0x2798 | Ordinal: 10137
        void resize(int, int);

    // RVA: 0x2AA3 | Ordinal: 10916
        void setFocus(void);

    // RVA: 0x49C | Ordinal: 1181
        void _FXRootWindow(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXROOTWINDOW_HPP
