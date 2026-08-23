#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: SliderSkin
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {
namespace skin {

class SliderSkin
{
public:

    // RVA: 0xBC | Ordinal: 189
        void SliderSkin(class gui::Slider *);

    // RVA: 0x224 | Ordinal: 549
        void copyTo(class gui::skin::SliderSkin *) const;

    // RVA: 0x368 | Ordinal: 873
        void getFillerSkin(void) const;

    // RVA: 0x501 | Ordinal: 1282
        void getSkinData(void) const;

    // RVA: 0x538 | Ordinal: 1337
        void getThumbSkin(void) const;

    // RVA: 0x622 | Ordinal: 1571
        void loadSubSkins_(struct lua_State *);

    // RVA: 0x9C2 | Ordinal: 2499
        void unloadSubSkins_(struct lua_State *) const;
};

} // namespace skin
} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_SLIDERSKIN_HPP
