#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: Align2
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class Align2
{
public:

    // RVA: 0x2F | Ordinal: 48
        void Align2(class gui::Align const &, class gui::Align const &);

    // RVA: 0x159 | Ordinal: 346
        void calc(class osg::Vec2i const &, class osg::Vec2i const &) const;

    // RVA: 0x3B6 | Ordinal: 951
        void getHorzAlign(void) const;

    // RVA: 0x554 | Ordinal: 1365
        void getVertAlign(void) const;

    // RVA: 0x8B9 | Ordinal: 2234
        void setHorzAlign(class gui::Align const &);

    // RVA: 0x968 | Ordinal: 2409
        void setVertAlign(class gui::Align const &);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_ALIGN2_HPP
