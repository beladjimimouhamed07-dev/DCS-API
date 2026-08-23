#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXTopWindow
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXTopWindow
{
public:

    // RVA: 0x326 | Ordinal: 807
        void FXTopWindow(class FX::FXApp *, class FX::FXString const &, class FX::FXIcon *, class FX::FXIcon *, unsigned int, int, int, int, int, int, int, int, int, int, int);

    // RVA: 0x327 | Ordinal: 808
        void FXTopWindow(class FX::FXWindow *, class FX::FXString const &, class FX::FXIcon *, class FX::FXIcon *, unsigned int, int, int, int, int, int, int, int, int, int, int);

    // RVA: 0x328 | Ordinal: 809
        void FXTopWindow(void);

    // RVA: 0x933 | Ordinal: 2356
        void GetClass(void) const;

    // RVA: 0xAFE | Ordinal: 2815
        void close(bool);

    // RVA: 0xBE5 | Ordinal: 3046
        void create(void);

    // RVA: 0xC7F | Ordinal: 3200
        void destroy(void);

    // RVA: 0xCC2 | Ordinal: 3267
        void detach(void);

    // RVA: 0xF46 | Ordinal: 3911
        void flash(bool);

    // RVA: 0xF6B | Ordinal: 3948
        void fullScreen(bool);

    // RVA: 0x1106 | Ordinal: 4359
        void getDecorations(void) const;

    // RVA: 0x115A | Ordinal: 4443
        void getDefaultHeight(void);

    // RVA: 0x11B0 | Ordinal: 4529
        void getDefaultWidth(void);

    // RVA: 0x124B | Ordinal: 4684
        void getHSpacing(void) const;

    // RVA: 0x12AC | Ordinal: 4781
        void getIcon(void) const;

    // RVA: 0x1462 | Ordinal: 5219
        void getMetaClass(void) const;

    // RVA: 0x147F | Ordinal: 5248
        void getMiniIcon(void) const;

    // RVA: 0x14DF | Ordinal: 5344
        void getPackingHints(void) const;

    // RVA: 0x14E2 | Ordinal: 5347
        void getPadBottom(void) const;

    // RVA: 0x14E5 | Ordinal: 5350
        void getPadLeft(void) const;

    // RVA: 0x14E8 | Ordinal: 5353
        void getPadRight(void) const;

    // RVA: 0x14EB | Ordinal: 5356
        void getPadTop(void) const;

    // RVA: 0x1651 | Ordinal: 5714
        void getTitle(void) const;

    // RVA: 0x167F | Ordinal: 5760
        void getVSpacing(void) const;

    // RVA: 0x16B1 | Ordinal: 5810
        void getWMBorders(int &, int &, int &, int &);

    // RVA: 0x17E2 | Ordinal: 6115
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x182E | Ordinal: 6191
        void hide(void);

    // RVA: 0x1947 | Ordinal: 6472
        void isFullScreen(void) const;

    // RVA: 0x199B | Ordinal: 6556
        void isMaximized(void) const;

    // RVA: 0x19A2 | Ordinal: 6563
        void isMinimized(void) const;

    // RVA: 0x1A2C | Ordinal: 6701
        void killFocus(void);

    // RVA: 0x1A6D | Ordinal: 6766
        void layout(void);

    // RVA: 0x1B42 | Ordinal: 6979
        void load(class FX::FXStream &);

    // RVA: 0x1BA5 | Ordinal: 7078
        void lower(void);

    // RVA: 0x1CC4 | Ordinal: 7365
        void maximize(bool);

    // RVA: 0x1E95 | Ordinal: 7830
        void minimize(bool);

    // RVA: 0x1EAE | Ordinal: 7855
        void move(int, int);

    // RVA: 0x1FBA | Ordinal: 8123
        void onCmdClose(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2036 | Ordinal: 8247
        void onCmdFullScreen(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x204E | Ordinal: 8271
        void onCmdGetIconValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20A2 | Ordinal: 8355
        void onCmdGetStringValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20E6 | Ordinal: 8423
        void onCmdMaximize(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20EA | Ordinal: 8427
        void onCmdMinimize(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2133 | Ordinal: 8500
        void onCmdRestore(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2168 | Ordinal: 8553
        void onCmdSetIconValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21BE | Ordinal: 8639
        void onCmdSetStringValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22B4 | Ordinal: 8885
        void onFocusDown(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22D3 | Ordinal: 8916
        void onFocusLeft(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22FD | Ordinal: 8958
        void onFocusRight(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2313 | Ordinal: 8980
        void onFocusUp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2408 | Ordinal: 9225
        void onMaximize(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x241F | Ordinal: 9248
        void onMinimize(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24E8 | Ordinal: 9449
        void onRestore(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2512 | Ordinal: 9491
        void onSessionClosed(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2513 | Ordinal: 9492
        void onSessionNotify(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2672 | Ordinal: 9843
        void place(unsigned int);

    // RVA: 0x269D | Ordinal: 9886
        void position(int, int, int, int);

    // RVA: 0x26DE | Ordinal: 9951
        void raise(void);

    // RVA: 0x279B | Ordinal: 10140
        void resize(int, int);

    // RVA: 0x27A2 | Ordinal: 10147
        void restore(bool);

    // RVA: 0x2873 | Ordinal: 10356
        void save(class FX::FXStream &) const;

    // RVA: 0x2A41 | Ordinal: 10818
        void setDecorations(unsigned int);

    // RVA: 0x2AA9 | Ordinal: 10922
        void setFocus(void);

    // RVA: 0x2AF2 | Ordinal: 10995
        void setHSpacing(int);

    // RVA: 0x2B4E | Ordinal: 11087
        void setIcon(class FX::FXIcon *);

    // RVA: 0x2C02 | Ordinal: 11267
        void setMiniIcon(class FX::FXIcon *);

    // RVA: 0x2C48 | Ordinal: 11337
        void setPackingHints(unsigned int);

    // RVA: 0x2C4B | Ordinal: 11340
        void setPadBottom(int);

    // RVA: 0x2C4E | Ordinal: 11343
        void setPadLeft(int);

    // RVA: 0x2C51 | Ordinal: 11346
        void setPadRight(int);

    // RVA: 0x2C54 | Ordinal: 11349
        void setPadTop(int);

    // RVA: 0x2D93 | Ordinal: 11668
        void setTitle(class FX::FXString const &);

    // RVA: 0x2DB8 | Ordinal: 11705
        void setVSpacing(int);

    // RVA: 0x2DE9 | Ordinal: 11754
        void setdecorations(void);

    // RVA: 0x2DEA | Ordinal: 11755
        void seticons(void);

    // RVA: 0x2DEB | Ordinal: 11756
        void settitle(void);

    // RVA: 0x2DFA | Ordinal: 11771
        void show(unsigned int);

    // RVA: 0x2DFB | Ordinal: 11772
        void show(void);

    // RVA: 0x2E51 | Ordinal: 11858
        void stackingOrder(unsigned int);

    // RVA: 0x4D7 | Ordinal: 1240
        void _FXTopWindow(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXTOPWINDOW_HPP
