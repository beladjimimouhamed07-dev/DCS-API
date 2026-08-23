#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXSplashWindow
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXSplashWindow
{
public:

    // RVA: 0x2E0 | Ordinal: 737
        void FXSplashWindow(void);

    // RVA: 0x2E1 | Ordinal: 738
        void FXSplashWindow(class FX::FXApp *, class FX::FXIcon *, unsigned int, __int64);

    // RVA: 0x2E2 | Ordinal: 739
        void FXSplashWindow(class FX::FXWindow *, class FX::FXIcon *, unsigned int, __int64);

    // RVA: 0xBDC | Ordinal: 3037
        void create(void);

    // RVA: 0xCBA | Ordinal: 3259
        void detach(void);

    // RVA: 0x1149 | Ordinal: 4426
        void getDefaultHeight(void);

    // RVA: 0x119F | Ordinal: 4512
        void getDefaultWidth(void);

    // RVA: 0x11B6 | Ordinal: 4535
        void getDelay(void) const;

    // RVA: 0x12AA | Ordinal: 4779
        void getIcon(void) const;

    // RVA: 0x144A | Ordinal: 5195
        void getMetaClass(void) const;

    // RVA: 0x17CA | Ordinal: 6091
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x182D | Ordinal: 6190
        void hide(void);

    // RVA: 0x1B27 | Ordinal: 6952
        void load(class FX::FXStream &);

    // RVA: 0x1C87 | Ordinal: 7304
        void manufacture(void);

    // RVA: 0x248E | Ordinal: 9359
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2858 | Ordinal: 10329
        void save(class FX::FXStream &) const;

    // RVA: 0x2A49 | Ordinal: 10826
        void setDelay(__int64);

    // RVA: 0x2B4C | Ordinal: 11085
        void setIcon(class FX::FXIcon *);

    // RVA: 0x2DF7 | Ordinal: 11768
        void show(unsigned int);

    // RVA: 0x2DF8 | Ordinal: 11769
        void show(void);

    // RVA: 0x4B8 | Ordinal: 1209
        void _FXSplashWindow(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXSPLASHWINDOW_HPP
