#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXListItem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXListItem
{
public:

    // RVA: 0x1B5 | Ordinal: 438
        void FXListItem(void);

    // RVA: 0x1B6 | Ordinal: 439
        void FXListItem(class FX::FXString const &, class FX::FXIcon *, void *);

    // RVA: 0xBCD | Ordinal: 3022
        void create(void);

    // RVA: 0xC7A | Ordinal: 3195
        void destroy(void);

    // RVA: 0xCB0 | Ordinal: 3249
        void detach(void);

    // RVA: 0xD1B | Ordinal: 3356
        void draw(class FX::FXList const *, class FX::FXDC &, int, int, int, int) const;

    // RVA: 0x10FC | Ordinal: 4349
        void getData(void) const;

    // RVA: 0x1264 | Ordinal: 4709
        void getHeight(class FX::FXList const *) const;

    // RVA: 0x12A7 | Ordinal: 4776
        void getIcon(void) const;

    // RVA: 0x140B | Ordinal: 5132
        void getMetaClass(void) const;

    // RVA: 0x15F6 | Ordinal: 5623
        void getText(void) const;

    // RVA: 0x163D | Ordinal: 5694
        void getTipText(void) const;

    // RVA: 0x16C2 | Ordinal: 5827
        void getWidth(class FX::FXList const *) const;

    // RVA: 0x178B | Ordinal: 6028
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x180D | Ordinal: 6158
        void hasFocus(void) const;

    // RVA: 0x183C | Ordinal: 6205
        void hitItem(class FX::FXList const *, int, int) const;

    // RVA: 0x1924 | Ordinal: 6437
        void isDraggable(void) const;

    // RVA: 0x1933 | Ordinal: 6452
        void isEnabled(void) const;

    // RVA: 0x19DE | Ordinal: 6623
        void isSelected(void) const;

    // RVA: 0x1AFD | Ordinal: 6910
        void load(class FX::FXStream &);

    // RVA: 0x1C48 | Ordinal: 7241
        void manufacture(void);

    // RVA: 0x282E | Ordinal: 10287
        void save(class FX::FXStream &) const;

    // RVA: 0x2A38 | Ordinal: 10809
        void setData(void *);

    // RVA: 0x2A68 | Ordinal: 10857
        void setDraggable(bool);

    // RVA: 0x2A7A | Ordinal: 10875
        void setEnabled(bool);

    // RVA: 0x2A9C | Ordinal: 10909
        void setFocus(bool);

    // RVA: 0x2B49 | Ordinal: 11082
        void setIcon(class FX::FXIcon *, bool);

    // RVA: 0x2CD7 | Ordinal: 11480
        void setSelected(bool);

    // RVA: 0x2D3E | Ordinal: 11583
        void setText(class FX::FXString const &);

    // RVA: 0x44D | Ordinal: 1102
        void _FXListItem(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXLISTITEM_HPP
