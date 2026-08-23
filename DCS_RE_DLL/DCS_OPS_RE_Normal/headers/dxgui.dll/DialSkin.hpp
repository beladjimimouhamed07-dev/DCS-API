#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: DialSkin
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {
namespace skin {

class DialSkin
{
public:

    // RVA: 0x5C | Ordinal: 93
        void DialSkin(class gui::Dial *);

    // RVA: 0x217 | Ordinal: 536
        void copyTo(class gui::skin::DialSkin *) const;

    // RVA: 0x315 | Ordinal: 790
        void getArrowSkin(void) const;

    // RVA: 0x61B | Ordinal: 1564
        void loadSubSkins_(struct lua_State *);

    // RVA: 0x9BB | Ordinal: 2492
        void unloadSubSkins_(struct lua_State *) const;
};

} // namespace skin
} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_DIALSKIN_HPP
