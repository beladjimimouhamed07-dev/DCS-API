#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: MenuCheckItem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class MenuCheckItem
{
public:

    // RVA: 0x91 | Ordinal: 146
        void MenuCheckItem(bool);

    // RVA: 0x1C6 | Ordinal: 455
        void clone(void) const;

    // RVA: 0x1E0 | Ordinal: 481
        void cloneItem(void) const;

    // RVA: 0x3E0 | Ordinal: 993
        void getInnerState(void) const;

    // RVA: 0x440 | Ordinal: 1089
        void getMenuSkinData_(void) const;

    // RVA: 0x4DE | Ordinal: 1247
        void getSkin(void) const;

    // RVA: 0x507 | Ordinal: 1288
        void getState(void) const;

    // RVA: 0x5B2 | Ordinal: 1459
        void getWidgetType(void) const;

    // RVA: 0x73A | Ordinal: 1851
        void onMouseUp(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x92E | Ordinal: 2351
        void setState(bool);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_MENUCHECKITEM_HPP
