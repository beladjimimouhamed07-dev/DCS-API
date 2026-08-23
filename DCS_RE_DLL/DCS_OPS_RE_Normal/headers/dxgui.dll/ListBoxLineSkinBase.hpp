#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: ListBoxLineSkinBase
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {
namespace skin {

class ListBoxLineSkinBase
{
public:

    // RVA: 0x8A | Ordinal: 139
        void ListBoxLineSkinBase(class gui::ListBoxLineBase *, bool);

    // RVA: 0x16E | Ordinal: 367
        void calcSize(void) const;

    // RVA: 0x60D | Ordinal: 1550
        void loadSkinData_(struct lua_State *);

    // RVA: 0x97C | Ordinal: 2429
        void setWidget(class gui::ListBoxLineBase *);
};

} // namespace skin
} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_LISTBOXLINESKINBASE_HPP
