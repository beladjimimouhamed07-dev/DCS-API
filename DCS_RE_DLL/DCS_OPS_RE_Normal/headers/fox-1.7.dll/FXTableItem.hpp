#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXTableItem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXTableItem
{
public:

    // RVA: 0x30B | Ordinal: 780
        void FXTableItem(void);

    // RVA: 0x30C | Ordinal: 781
        void FXTableItem(class FX::FXString const &, class FX::FXIcon *, void *);

    // RVA: 0xBDF | Ordinal: 3040
        void create(void);

    // RVA: 0xC7E | Ordinal: 3199
        void destroy(void);

    // RVA: 0xCBD | Ordinal: 3262
        void detach(void);

    // RVA: 0xD1C | Ordinal: 3357
        void draw(class FX::FXTable const *, class FX::FXDC &, int, int, int, int) const;

    // RVA: 0xD2C | Ordinal: 3373
        void drawBackground(class FX::FXTable const *, class FX::FXDC &, int, int, int, int) const;

    // RVA: 0xD35 | Ordinal: 3382
        void drawBorders(class FX::FXTable const *, class FX::FXDC &, int, int, int, int) const;

    // RVA: 0xD3B | Ordinal: 3388
        void drawContent(class FX::FXTable const *, class FX::FXDC &, int, int, int, int) const;

    // RVA: 0xD91 | Ordinal: 3474
        void drawPattern(class FX::FXTable const *, class FX::FXDC &, int, int, int, int) const;

    // RVA: 0x1065 | Ordinal: 4198
        void getBorders(void) const;

    // RVA: 0x10C8 | Ordinal: 4297
        void getControlFor(class FX::FXTable *);

    // RVA: 0x10FD | Ordinal: 4350
        void getData(void) const;

    // RVA: 0x1265 | Ordinal: 4710
        void getHeight(class FX::FXTable const *) const;

    // RVA: 0x12AB | Ordinal: 4780
        void getIcon(void) const;

    // RVA: 0x12B2 | Ordinal: 4787
        void getIconPosition(void) const;

    // RVA: 0x1328 | Ordinal: 4905
        void getJustify(void) const;

    // RVA: 0x1458 | Ordinal: 5209
        void getMetaClass(void) const;

    // RVA: 0x15DA | Ordinal: 5595
        void getStipple(void) const;

    // RVA: 0x15F9 | Ordinal: 5626
        void getText(void) const;

    // RVA: 0x1647 | Ordinal: 5704
        void getTipText(void) const;

    // RVA: 0x16C3 | Ordinal: 5828
        void getWidth(class FX::FXTable const *) const;

    // RVA: 0x17D8 | Ordinal: 6105
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x180E | Ordinal: 6159
        void hasFocus(void) const;

    // RVA: 0x1925 | Ordinal: 6438
        void isDraggable(void) const;

    // RVA: 0x1934 | Ordinal: 6453
        void isEnabled(void) const;

    // RVA: 0x19DF | Ordinal: 6624
        void isSelected(void) const;

    // RVA: 0x1B3A | Ordinal: 6971
        void load(class FX::FXStream &);

    // RVA: 0x1C95 | Ordinal: 7318
        void manufacture(void);

    // RVA: 0x286B | Ordinal: 10348
        void save(class FX::FXStream &) const;

    // RVA: 0x29C7 | Ordinal: 10696
        void setBorders(unsigned int);

    // RVA: 0x2A39 | Ordinal: 10810
        void setData(void *);

    // RVA: 0x2A69 | Ordinal: 10858
        void setDraggable(bool);

    // RVA: 0x2A7B | Ordinal: 10876
        void setEnabled(bool);

    // RVA: 0x2AA6 | Ordinal: 10919
        void setFocus(bool);

    // RVA: 0x2AD9 | Ordinal: 10970
        void setFromControl(class FX::FXWindow *);

    // RVA: 0x2B4D | Ordinal: 11086
        void setIcon(class FX::FXIcon *, bool);

    // RVA: 0x2B54 | Ordinal: 11093
        void setIconPosition(unsigned int);

    // RVA: 0x2BB9 | Ordinal: 11194
        void setJustify(unsigned int);

    // RVA: 0x2CD8 | Ordinal: 11481
        void setSelected(bool);

    // RVA: 0x2D24 | Ordinal: 11557
        void setStipple(enum FX::FXStipplePattern);

    // RVA: 0x2D41 | Ordinal: 11586
        void setText(class FX::FXString const &);

    // RVA: 0x2D8A | Ordinal: 11659
        void setTipText(class FX::FXString const &);

    // RVA: 0x4C9 | Ordinal: 1226
        void _FXTableItem(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXTABLEITEM_HPP
