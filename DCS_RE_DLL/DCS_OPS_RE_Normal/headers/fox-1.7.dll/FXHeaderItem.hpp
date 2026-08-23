#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXHeaderItem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXHeaderItem
{
public:

    // RVA: 0x16F | Ordinal: 368
        void FXHeaderItem(void);

    // RVA: 0x170 | Ordinal: 369
        void FXHeaderItem(class FX::FXString const &, class FX::FXIcon *, int, void *);

    // RVA: 0xBC2 | Ordinal: 3011
        void create(void);

    // RVA: 0xC74 | Ordinal: 3189
        void destroy(void);

    // RVA: 0xCA5 | Ordinal: 3238
        void detach(void);

    // RVA: 0xD19 | Ordinal: 3354
        void draw(class FX::FXHeader const *, class FX::FXDC &, int, int, int, int) const;

    // RVA: 0x101D | Ordinal: 4126
        void getArrowDir(void) const;

    // RVA: 0x10F9 | Ordinal: 4346
        void getData(void) const;

    // RVA: 0x1262 | Ordinal: 4707
        void getHeight(class FX::FXHeader const *) const;

    // RVA: 0x12A5 | Ordinal: 4774
        void getIcon(void) const;

    // RVA: 0x12B0 | Ordinal: 4785
        void getIconPosition(void) const;

    // RVA: 0x1325 | Ordinal: 4902
        void getJustify(void) const;

    // RVA: 0x13F1 | Ordinal: 5106
        void getMetaClass(void) const;

    // RVA: 0x1504 | Ordinal: 5381
        void getPos(void) const;

    // RVA: 0x15B6 | Ordinal: 5559
        void getSize(void) const;

    // RVA: 0x15F2 | Ordinal: 5619
        void getText(void) const;

    // RVA: 0x1638 | Ordinal: 5689
        void getTipText(void) const;

    // RVA: 0x16C0 | Ordinal: 5825
        void getWidth(class FX::FXHeader const *) const;

    // RVA: 0x1770 | Ordinal: 6001
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x19D1 | Ordinal: 6610
        void isPressed(void) const;

    // RVA: 0x1AF0 | Ordinal: 6897
        void load(class FX::FXStream &);

    // RVA: 0x1C2F | Ordinal: 7216
        void manufacture(void);

    // RVA: 0x2821 | Ordinal: 10274
        void save(class FX::FXStream &) const;

    // RVA: 0x2983 | Ordinal: 10628
        void setArrowDir(unsigned int);

    // RVA: 0x2A34 | Ordinal: 10805
        void setData(void *);

    // RVA: 0x2B47 | Ordinal: 11080
        void setIcon(class FX::FXIcon *, bool);

    // RVA: 0x2B52 | Ordinal: 11091
        void setIconPosition(unsigned int);

    // RVA: 0x2BB6 | Ordinal: 11191
        void setJustify(unsigned int);

    // RVA: 0x2C66 | Ordinal: 11367
        void setPos(int);

    // RVA: 0x2C6C | Ordinal: 11373
        void setPressed(bool);

    // RVA: 0x2CFA | Ordinal: 11515
        void setSize(int);

    // RVA: 0x2D3A | Ordinal: 11579
        void setText(class FX::FXString const &);

    // RVA: 0x2D7D | Ordinal: 11646
        void setTipText(class FX::FXString const &);

    // RVA: 0x42C | Ordinal: 1069
        void _FXHeaderItem(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXHEADERITEM_HPP
