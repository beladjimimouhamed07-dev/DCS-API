#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: AnchorLayout
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class AnchorLayout
{
public:

    // RVA: 0x20 | Ordinal: 33
        void AnchorInfo_(struct lua_State *, int, class gui::AnchorLayout::AnchorInfo &);

    // RVA: 0x2A | Ordinal: 43
        void AnchorInfo_(struct lua_State *, class gui::AnchorLayout::AnchorInfo const &);

    // RVA: 0x31 | Ordinal: 50
        void AnchorLayout(void);

    // RVA: 0x1AB | Ordinal: 428
        void clone(void) const;

    // RVA: 0x30D | Ordinal: 782
        void getAnchorInfo(int) const;

    // RVA: 0x30E | Ordinal: 783
        void getAnchorInfoCount(void) const;

    // RVA: 0x544 | Ordinal: 1349
        void getType(void) const;

    // RVA: 0x5E0 | Ordinal: 1505
        void insertAnchorInfo(class gui::AnchorLayout::AnchorInfo const &, int);

    // RVA: 0x808 | Ordinal: 2057
        void removeAnchorInfo(int);

    // RVA: 0x863 | Ordinal: 2148
        void setAnchorInfo(class gui::AnchorLayout::AnchorInfo const &, int);

    // RVA: 0x87F | Ordinal: 2176
        void setContainer(class gui::WidgetHandler *);

    // RVA: 0x9EF | Ordinal: 2544
        void updateSize(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_ANCHORLAYOUT_HPP
