#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXToolBarTab
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXToolBarTab
{
public:

    // RVA: 0x322 | Ordinal: 803
        void FXToolBarTab(void);

    // RVA: 0x323 | Ordinal: 804
        void FXToolBarTab(class FX::FXComposite *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int);

    // RVA: 0xA9D | Ordinal: 2718
        void canFocus(void) const;

    // RVA: 0xB06 | Ordinal: 2823
        void collapse(bool, bool);

    // RVA: 0xCEB | Ordinal: 3308
        void disable(void);

    // RVA: 0xD4E | Ordinal: 3407
        void drawDownArrow(class FX::FXDCWindow &);

    // RVA: 0xD60 | Ordinal: 3425
        void drawHSpeckles(class FX::FXDCWindow &, int, int);

    // RVA: 0xD7E | Ordinal: 3455
        void drawLeftArrow(class FX::FXDCWindow &);

    // RVA: 0xDAD | Ordinal: 3502
        void drawRightArrow(class FX::FXDCWindow &);

    // RVA: 0xDD0 | Ordinal: 3537
        void drawUpArrow(class FX::FXDCWindow &);

    // RVA: 0xDD3 | Ordinal: 3540
        void drawVSpeckles(class FX::FXDCWindow &, int, int);

    // RVA: 0xE0F | Ordinal: 3600
        void enable(void);

    // RVA: 0xFE8 | Ordinal: 4073
        void getActiveColor(void) const;

    // RVA: 0x1158 | Ordinal: 4441
        void getDefaultHeight(void);

    // RVA: 0x11AE | Ordinal: 4527
        void getDefaultWidth(void);

    // RVA: 0x1460 | Ordinal: 5217
        void getMetaClass(void) const;

    // RVA: 0x15E8 | Ordinal: 5609
        void getTabStyle(void) const;

    // RVA: 0x164A | Ordinal: 5707
        void getTipText(void) const;

    // RVA: 0x17E0 | Ordinal: 6113
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x190A | Ordinal: 6411
        void isCollapsed(void) const;

    // RVA: 0x1B40 | Ordinal: 6977
        void load(class FX::FXStream &);

    // RVA: 0x1C9C | Ordinal: 7325
        void manufacture(void);

    // RVA: 0x1FBB | Ordinal: 8124
        void onCmdCollapse(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20B7 | Ordinal: 8376
        void onCmdGetTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21D3 | Ordinal: 8660
        void onCmdSetTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2228 | Ordinal: 8745
        void onCmdUncollapse(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22A2 | Ordinal: 8867
        void onEnter(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2362 | Ordinal: 9059
        void onKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x238A | Ordinal: 9099
        void onKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23A6 | Ordinal: 9127
        void onLeave(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23CE | Ordinal: 9167
        void onLeftBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23F6 | Ordinal: 9207
        void onLeftBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x249A | Ordinal: 9371
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24E0 | Ordinal: 9441
        void onQueryTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x254F | Ordinal: 9552
        void onUngrabbed(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2572 | Ordinal: 9587
        void onUpdCollapse(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2614 | Ordinal: 9749
        void onUpdUncollapse(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x262C | Ordinal: 9773
        void onUpdate(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2871 | Ordinal: 10354
        void save(class FX::FXStream &) const;

    // RVA: 0x2968 | Ordinal: 10601
        void setActiveColor(unsigned int);

    // RVA: 0x2D30 | Ordinal: 11569
        void setTabStyle(unsigned int);

    // RVA: 0x2D8D | Ordinal: 11662
        void setTipText(class FX::FXString const &);

    // RVA: 0x4D5 | Ordinal: 1238
        void _FXToolBarTab(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXTOOLBARTAB_HPP
