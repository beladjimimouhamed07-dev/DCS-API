#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXDockSite
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXDockSite
{
public:

    // RVA: 0xE4 | Ordinal: 229
        void FXDockSite(void);

    // RVA: 0xE5 | Ordinal: 230
        void FXDockSite(class FX::FXComposite *, unsigned int, int, int, int, int, int, int, int, int, int, int);

    // RVA: 0xD01 | Ordinal: 3330
        void dockToolBar(class FX::FXDockBar *, int, int);

    // RVA: 0xD02 | Ordinal: 3331
        void dockToolBar(class FX::FXDockBar *, class FX::FXWindow *);

    // RVA: 0xFD6 | Ordinal: 4055
        void galleyHeight(class FX::FXWindow *, class FX::FXWindow *&, int, int &, int &) const;

    // RVA: 0xFD7 | Ordinal: 4056
        void galleyOfHorzBar(class FX::FXWindow *, class FX::FXWindow *&, class FX::FXWindow *&) const;

    // RVA: 0xFD8 | Ordinal: 4057
        void galleyOfVertBar(class FX::FXWindow *, class FX::FXWindow *&, class FX::FXWindow *&) const;

    // RVA: 0xFD9 | Ordinal: 4058
        void galleyWidth(class FX::FXWindow *, class FX::FXWindow *&, int, int &, int &) const;

    // RVA: 0x1119 | Ordinal: 4378
        void getDefaultHeight(void);

    // RVA: 0x116F | Ordinal: 4464
        void getDefaultWidth(void);

    // RVA: 0x1267 | Ordinal: 4712
        void getHeightForWidth(int);

    // RVA: 0x13C9 | Ordinal: 5066
        void getMetaClass(void) const;

    // RVA: 0x16C5 | Ordinal: 5830
        void getWidthForHeight(int);

    // RVA: 0x1748 | Ordinal: 5961
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1A44 | Ordinal: 6725
        void layout(void);

    // RVA: 0x1C09 | Ordinal: 7178
        void manufacture(void);

    // RVA: 0x1EBF | Ordinal: 7872
        void moveHorBar(class FX::FXWindow *&, class FX::FXWindow *&, class FX::FXWindow *, int, int, int, int, bool);

    // RVA: 0x1ECC | Ordinal: 7885
        void moveToolBar(class FX::FXDockBar *, int, int);

    // RVA: 0x1ECE | Ordinal: 7887
        void moveVerBar(class FX::FXWindow *&, class FX::FXWindow *&, class FX::FXWindow *, int, int, int, int, bool);

    // RVA: 0x279E | Ordinal: 10143
        void resizeToolBar(class FX::FXDockBar *, int, int, int, int);

    // RVA: 0x2EEF | Ordinal: 12016
        void undockToolBar(class FX::FXDockBar *);

    // RVA: 0x2FD5 | Ordinal: 12246
        void wrapGalleys(bool);

    // RVA: 0x2FD6 | Ordinal: 12247
        void wrapGalleys(void) const;

    // RVA: 0x3F8 | Ordinal: 1017
        void _FXDockSite(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXDOCKSITE_HPP
