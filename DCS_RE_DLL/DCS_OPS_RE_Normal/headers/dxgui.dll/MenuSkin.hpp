#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: MenuSkin
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {
namespace skin {

class MenuSkin
{
public:

    // RVA: 0x97 | Ordinal: 152
        void MenuSkin(class gui::Menu *);

    // RVA: 0x21D | Ordinal: 542
        void copyTo(class gui::skin::MenuSkin *) const;

    // RVA: 0x327 | Ordinal: 808
        void getCheckItemSkinData(void) const;

    // RVA: 0x415 | Ordinal: 1046
        void getItemSkinData(void) const;

    // RVA: 0x483 | Ordinal: 1156
        void getRadioItemSkinData(void) const;

    // RVA: 0x4BE | Ordinal: 1215
        void getSeparatorSkinData(void) const;

    // RVA: 0x50F | Ordinal: 1296
        void getSubItemSkinData(void) const;

    // RVA: 0x106 | Ordinal: 263
        void _MenuSkin(void);
};

} // namespace skin
} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_MENUSKIN_HPP
