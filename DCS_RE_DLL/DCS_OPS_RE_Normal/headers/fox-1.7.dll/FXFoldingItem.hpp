#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXFoldingItem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXFoldingItem
{
public:

    // RVA: 0x11E | Ordinal: 287
        void FXFoldingItem(void);

    // RVA: 0x11F | Ordinal: 288
        void FXFoldingItem(class FX::FXString const &, class FX::FXIcon *, class FX::FXIcon *, void *);

    // RVA: 0xBB7 | Ordinal: 3000
        void create(void);

    // RVA: 0xC6F | Ordinal: 3184
        void destroy(void);

    // RVA: 0xC9C | Ordinal: 3229
        void detach(void);

    // RVA: 0xD13 | Ordinal: 3348
        void draw(class FX::FXFoldingList const *, class FX::FXDC &, int, int, int, int) const;

    // RVA: 0xFDD | Ordinal: 4062
        void getAbove(void) const;

    // RVA: 0x1052 | Ordinal: 4179
        void getBelow(void) const;

    // RVA: 0x1093 | Ordinal: 4244
        void getClosedIcon(void) const;

    // RVA: 0x10F8 | Ordinal: 4345
        void getData(void) const;

    // RVA: 0x11FA | Ordinal: 4603
        void getFirst(void) const;

    // RVA: 0x125E | Ordinal: 4703
        void getHeight(class FX::FXFoldingList const *) const;

    // RVA: 0x132D | Ordinal: 4910
        void getLast(void) const;

    // RVA: 0x13D6 | Ordinal: 5079
        void getMetaClass(void) const;

    // RVA: 0x148A | Ordinal: 5259
        void getNext(void) const;

    // RVA: 0x149A | Ordinal: 5275
        void getNumChildren(void) const;

    // RVA: 0x14CE | Ordinal: 5327
        void getOpenIcon(void) const;

    // RVA: 0x14ED | Ordinal: 5358
        void getParent(void) const;

    // RVA: 0x150C | Ordinal: 5389
        void getPrev(void) const;

    // RVA: 0x15F0 | Ordinal: 5617
        void getText(void) const;

    // RVA: 0x1633 | Ordinal: 5684
        void getTipText(void) const;

    // RVA: 0x16BE | Ordinal: 5823
        void getWidth(class FX::FXFoldingList const *) const;

    // RVA: 0x1755 | Ordinal: 5974
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x180B | Ordinal: 6156
        void hasFocus(void) const;

    // RVA: 0x1812 | Ordinal: 6163
        void hasItems(void) const;

    // RVA: 0x1837 | Ordinal: 6200
        void hitItem(class FX::FXFoldingList const *, int, int) const;

    // RVA: 0x1907 | Ordinal: 6408
        void isChildOf(class FX::FXFoldingItem const *) const;

    // RVA: 0x1922 | Ordinal: 6435
        void isDraggable(void) const;

    // RVA: 0x1931 | Ordinal: 6450
        void isEnabled(void) const;

    // RVA: 0x193B | Ordinal: 6460
        void isExpanded(void) const;

    // RVA: 0x19B1 | Ordinal: 6578
        void isOpened(void) const;

    // RVA: 0x19CA | Ordinal: 6603
        void isParentOf(class FX::FXFoldingItem const *) const;

    // RVA: 0x19DC | Ordinal: 6621
        void isSelected(void) const;

    // RVA: 0x1AD9 | Ordinal: 6874
        void load(class FX::FXStream &);

    // RVA: 0x1C15 | Ordinal: 7190
        void manufacture(void);

    // RVA: 0x280A | Ordinal: 10251
        void save(class FX::FXStream &) const;

    // RVA: 0x29F1 | Ordinal: 10738
        void setClosedIcon(class FX::FXIcon *, bool);

    // RVA: 0x2A33 | Ordinal: 10804
        void setData(void *);

    // RVA: 0x2A66 | Ordinal: 10855
        void setDraggable(bool);

    // RVA: 0x2A78 | Ordinal: 10873
        void setEnabled(bool);

    // RVA: 0x2A81 | Ordinal: 10882
        void setExpanded(bool);

    // RVA: 0x2A97 | Ordinal: 10904
        void setFocus(bool);

    // RVA: 0x2AF5 | Ordinal: 10998
        void setHasItems(bool);

    // RVA: 0x2C30 | Ordinal: 11313
        void setOpenIcon(class FX::FXIcon *, bool);

    // RVA: 0x2C32 | Ordinal: 11315
        void setOpened(bool);

    // RVA: 0x2CD5 | Ordinal: 11478
        void setSelected(bool);

    // RVA: 0x2D38 | Ordinal: 11577
        void setText(class FX::FXString const &);

    // RVA: 0x40E | Ordinal: 1039
        void _FXFoldingItem(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXFOLDINGITEM_HPP
