#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: HorzSlider
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class HorzSlider
{
public:

    // RVA: 0x82 | Ordinal: 131
        void HorzSlider(void);

    // RVA: 0x14C | Ordinal: 333
        void alignFiller_(void);

    // RVA: 0x14F | Ordinal: 336
        void alignThumb_(void);

    // RVA: 0x1BF | Ordinal: 448
        void clone(void) const;

    // RVA: 0x270 | Ordinal: 625
        void dragThumb_(class osg::Vec2i const &);

    // RVA: 0x5AC | Ordinal: 1453
        void getWidgetType(void) const;

    // RVA: 0x6E1 | Ordinal: 1762
        void onMouseDoubleClick(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x6F0 | Ordinal: 1777
        void onMouseDown(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x9D5 | Ordinal: 2518
        void updateFillerSize_(void);

    // RVA: 0x9FC | Ordinal: 2557
        void updateThumbPosition_(void);

    // RVA: 0xA00 | Ordinal: 2561
        void updateThumbSize_(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_HORZSLIDER_HPP
