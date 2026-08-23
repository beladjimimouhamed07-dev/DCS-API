#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: Data
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {
namespace skin {

class Data
{
public:

    // RVA: 0x59 | Ordinal: 90
        void Data(class gui::skin::Skin *);

    // RVA: 0x20F | Ordinal: 528
        void copyParams_(class gui::skin::Data *) const;

    // RVA: 0x210 | Ordinal: 529
        void copyState_(class gui::skin::Data *, enum gui::skin::InteractiveState, int) const;

    // RVA: 0x216 | Ordinal: 535
        void copyTo(class gui::skin::Data *) const;

    // RVA: 0x2E3 | Ordinal: 740
        void findInnerStateInfos_(enum gui::skin::InteractiveState) const;

    // RVA: 0x2E4 | Ordinal: 741
        void findStateInfo_(enum gui::skin::InteractiveState, int) const;

    // RVA: 0x317 | Ordinal: 792
        void getBkg(enum gui::skin::InteractiveState, int) const;

    // RVA: 0x32F | Ordinal: 816
        void getClipInsetsEmpty(void) const;

    // RVA: 0x3D2 | Ordinal: 979
        void getImage(enum gui::skin::InteractiveState, int) const;

    // RVA: 0x400 | Ordinal: 1025
        void getInteractiveStateName_(enum gui::skin::InteractiveState);

    // RVA: 0x42F | Ordinal: 1072
        void getLoaded(void) const;

    // RVA: 0x46A | Ordinal: 1131
        void getOwner(void) const;

    // RVA: 0x526 | Ordinal: 1319
        void getText(enum gui::skin::InteractiveState, int) const;

    // RVA: 0x609 | Ordinal: 1546
        void loadParams(struct lua_State *);

    // RVA: 0x60A | Ordinal: 1547
        void loadParamsFromTable(struct lua_State *);

    // RVA: 0x60B | Ordinal: 1548
        void loadParams_(struct lua_State *);

    // RVA: 0x613 | Ordinal: 1556
        void loadState_(struct lua_State *, enum gui::skin::InteractiveState);

    // RVA: 0x614 | Ordinal: 1557
        void loadStates(struct lua_State *);

    // RVA: 0x7AE | Ordinal: 1967
        void ownerSkinUpdateWidget(bool);

    // RVA: 0x869 | Ordinal: 2154
        void setBkg(struct gui::Bkg::Info const *, enum gui::skin::InteractiveState, int);

    // RVA: 0x8C7 | Ordinal: 2248
        void setImage(struct gui::Image::Info const *, enum gui::skin::InteractiveState, int);

    // RVA: 0x8E1 | Ordinal: 2274
        void setLoaded(void);

    // RVA: 0x8F9 | Ordinal: 2298
        void setOwner(class gui::skin::Skin *);

    // RVA: 0x949 | Ordinal: 2378
        void setText(struct gui::Text::Info const *, enum gui::skin::InteractiveState, int);

    // RVA: 0x9AE | Ordinal: 2479
        void unloadParams(struct lua_State *) const;

    // RVA: 0x9AF | Ordinal: 2480
        void unloadParamsToTable(struct lua_State *) const;

    // RVA: 0x9B0 | Ordinal: 2481
        void unloadParams_(struct lua_State *) const;

    // RVA: 0x9B3 | Ordinal: 2484
        void unloadState_(struct lua_State *, enum gui::skin::InteractiveState, class std::unordered_map<int, class std::shared_ptr<class gui::skin::StateInfo>, struct std::hash<int>, struct std::equal_to<int>, class ed::allocator<struct std::pair<int const, class std::shared_ptr<class gui::skin::StateInfo>>>> const &) const;

    // RVA: 0x9B4 | Ordinal: 2485
        void unloadStates(struct lua_State *) const;

    // RVA: 0xE7 | Ordinal: 232
        void _Data(void);
};

} // namespace skin
} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_DATA_HPP
