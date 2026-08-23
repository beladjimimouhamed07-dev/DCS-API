#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXTreeItem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXTreeItem
{
public:

    // RVA: 0x32A | Ordinal: 811
        void FXTreeItem(void);

    // RVA: 0x32B | Ordinal: 812
        void FXTreeItem(class FX::FXString const &, class FX::FXIcon *, class FX::FXIcon *, void *);

    // RVA: 0xBE6 | Ordinal: 3047
        void create(void);

    // RVA: 0xC80 | Ordinal: 3201
        void destroy(void);

    // RVA: 0xCC3 | Ordinal: 3268
        void detach(void);

    // RVA: 0xD1D | Ordinal: 3358
        void draw(class FX::FXTreeList const *, class FX::FXDC &, int, int, int, int) const;

    // RVA: 0xFDE | Ordinal: 4063
        void getAbove(void) const;

    // RVA: 0x1053 | Ordinal: 4180
        void getBelow(void) const;

    // RVA: 0x1094 | Ordinal: 4245
        void getClosedIcon(void) const;

    // RVA: 0x10FE | Ordinal: 4351
        void getData(void) const;

    // RVA: 0x11FB | Ordinal: 4604
        void getFirst(void) const;

    // RVA: 0x1266 | Ordinal: 4711
        void getHeight(class FX::FXTreeList const *) const;

    // RVA: 0x132E | Ordinal: 4911
        void getLast(void) const;

    // RVA: 0x1464 | Ordinal: 5221
        void getMetaClass(void) const;

    // RVA: 0x148B | Ordinal: 5260
        void getNext(void) const;

    // RVA: 0x149B | Ordinal: 5276
        void getNumChildren(void) const;

    // RVA: 0x14CF | Ordinal: 5328
        void getOpenIcon(void) const;

    // RVA: 0x14EE | Ordinal: 5359
        void getParent(void) const;

    // RVA: 0x150D | Ordinal: 5390
        void getPrev(void) const;

    // RVA: 0x15FF | Ordinal: 5632
        void getText(void) const;

    // RVA: 0x164B | Ordinal: 5708
        void getTipText(void) const;

    // RVA: 0x16C4 | Ordinal: 5829
        void getWidth(class FX::FXTreeList const *) const;

    // RVA: 0x17E4 | Ordinal: 6117
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x180F | Ordinal: 6160
        void hasFocus(void) const;

    // RVA: 0x1813 | Ordinal: 6164
        void hasItems(void) const;

    // RVA: 0x183D | Ordinal: 6206
        void hitItem(class FX::FXTreeList const *, int, int) const;

    // RVA: 0x1908 | Ordinal: 6409
        void isChildOf(class FX::FXTreeItem const *) const;

    // RVA: 0x1926 | Ordinal: 6439
        void isDraggable(void) const;

    // RVA: 0x1935 | Ordinal: 6454
        void isEnabled(void) const;

    // RVA: 0x193C | Ordinal: 6461
        void isExpanded(void) const;

    // RVA: 0x19B2 | Ordinal: 6579
        void isOpened(void) const;

    // RVA: 0x19CB | Ordinal: 6604
        void isParentOf(class FX::FXTreeItem const *) const;

    // RVA: 0x19E0 | Ordinal: 6625
        void isSelected(void) const;

    // RVA: 0x1B44 | Ordinal: 6981
        void load(class FX::FXStream &);

    // RVA: 0x1C9F | Ordinal: 7328
        void manufacture(void);

    // RVA: 0x2875 | Ordinal: 10358
        void save(class FX::FXStream &) const;

    // RVA: 0x29F2 | Ordinal: 10739
        void setClosedIcon(class FX::FXIcon *, bool);

    // RVA: 0x2A3A | Ordinal: 10811
        void setData(void *);

    // RVA: 0x2A6A | Ordinal: 10859
        void setDraggable(bool);

    // RVA: 0x2A7C | Ordinal: 10877
        void setEnabled(bool);

    // RVA: 0x2A82 | Ordinal: 10883
        void setExpanded(bool);

    // RVA: 0x2AAA | Ordinal: 10923
        void setFocus(bool);

    // RVA: 0x2AF6 | Ordinal: 10999
        void setHasItems(bool);

    // RVA: 0x2C31 | Ordinal: 11314
        void setOpenIcon(class FX::FXIcon *, bool);

    // RVA: 0x2C33 | Ordinal: 11316
        void setOpened(bool);

    // RVA: 0x2CD9 | Ordinal: 11482
        void setSelected(bool);

    // RVA: 0x2D46 | Ordinal: 11591
        void setText(class FX::FXString const &);

    // RVA: 0x4D9 | Ordinal: 1242
        void _FXTreeItem(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXTREEITEM_HPP
