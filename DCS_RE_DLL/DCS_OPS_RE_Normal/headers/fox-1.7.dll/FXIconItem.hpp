#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXIconItem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXIconItem
{
public:

    // RVA: 0x187 | Ordinal: 392
        void FXIconItem(void);

    // RVA: 0x188 | Ordinal: 393
        void FXIconItem(class FX::FXString const &, class FX::FXIcon *, class FX::FXIcon *, void *);

    // RVA: 0xBC4 | Ordinal: 3013
        void create(void);

    // RVA: 0xC76 | Ordinal: 3191
        void destroy(void);

    // RVA: 0xCA8 | Ordinal: 3241
        void detach(void);

    // RVA: 0xD1A | Ordinal: 3355
        void draw(class FX::FXIconList const *, class FX::FXDC &, int, int, int, int) const;

    // RVA: 0xD2D | Ordinal: 3374
        void drawBigIcon(class FX::FXIconList const *, class FX::FXDC &, int, int, int, int) const;

    // RVA: 0xD42 | Ordinal: 3395
        void drawDetails(class FX::FXIconList const *, class FX::FXDC &, int, int, int, int) const;

    // RVA: 0xD8E | Ordinal: 3471
        void drawMiniIcon(class FX::FXIconList const *, class FX::FXDC &, int, int, int, int) const;

    // RVA: 0x1054 | Ordinal: 4181
        void getBigIcon(void) const;

    // RVA: 0x10FA | Ordinal: 4347
        void getData(void) const;

    // RVA: 0x1263 | Ordinal: 4708
        void getHeight(class FX::FXIconList const *) const;

    // RVA: 0x13FA | Ordinal: 5115
        void getMetaClass(void) const;

    // RVA: 0x147E | Ordinal: 5247
        void getMiniIcon(void) const;

    // RVA: 0x15F3 | Ordinal: 5620
        void getText(void) const;

    // RVA: 0x1639 | Ordinal: 5690
        void getTipText(void) const;

    // RVA: 0x16C1 | Ordinal: 5826
        void getWidth(class FX::FXIconList const *) const;

    // RVA: 0x177A | Ordinal: 6011
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x180C | Ordinal: 6157
        void hasFocus(void) const;

    // RVA: 0x1839 | Ordinal: 6202
        void hitItem(class FX::FXIconList const *, int, int, int, int) const;

    // RVA: 0x1923 | Ordinal: 6436
        void isDraggable(void) const;

    // RVA: 0x1932 | Ordinal: 6451
        void isEnabled(void) const;

    // RVA: 0x19DD | Ordinal: 6622
        void isSelected(void) const;

    // RVA: 0x1AF2 | Ordinal: 6899
        void load(class FX::FXStream &);

    // RVA: 0x1C38 | Ordinal: 7225
        void manufacture(void);

    // RVA: 0x2823 | Ordinal: 10276
        void save(class FX::FXStream &) const;

    // RVA: 0x29BA | Ordinal: 10683
        void setBigIcon(class FX::FXIcon *, bool);

    // RVA: 0x2A35 | Ordinal: 10806
        void setData(void *);

    // RVA: 0x2A67 | Ordinal: 10856
        void setDraggable(bool);

    // RVA: 0x2A79 | Ordinal: 10874
        void setEnabled(bool);

    // RVA: 0x2A99 | Ordinal: 10906
        void setFocus(bool);

    // RVA: 0x2C01 | Ordinal: 11266
        void setMiniIcon(class FX::FXIcon *, bool);

    // RVA: 0x2CD6 | Ordinal: 11479
        void setSelected(bool);

    // RVA: 0x2D3B | Ordinal: 11580
        void setText(class FX::FXString const &);

    // RVA: 0x438 | Ordinal: 1081
        void _FXIconItem(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXICONITEM_HPP
