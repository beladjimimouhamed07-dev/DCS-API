#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: EditBoxCaret
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class EditBoxCaret
{
public:

    // RVA: 0x5F | Ordinal: 96
        void EditBoxCaret(void);

    // RVA: 0x572 | Ordinal: 1395
        void getViewPosition(void) const;

    // RVA: 0x8F4 | Ordinal: 2293
        void setOffset(class osg::Vec2i const &);

    // RVA: 0x977 | Ordinal: 2424
        void setViewPosition(class osg::Vec2i const &);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_EDITBOXCARET_HPP
