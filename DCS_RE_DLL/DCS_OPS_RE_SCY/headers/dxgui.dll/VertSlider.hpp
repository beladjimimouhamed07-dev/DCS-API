#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: VertSlider
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class VertSlider
{
public:

    // RVA: 0xD0 | Ordinal: 209
        void VertSlider(void);

    // RVA: 0x14E | Ordinal: 335
        void alignFiller_(void);

    // RVA: 0x150 | Ordinal: 337
        void alignThumb_(void);

    // RVA: 0x1DD | Ordinal: 478
        void clone(void) const;

    // RVA: 0x272 | Ordinal: 627
        void dragThumb_(class osg::Vec2i const &);

    // RVA: 0x5C7 | Ordinal: 1480
        void getWidgetType(void) const;

    // RVA: 0x6E5 | Ordinal: 1766
        void onMouseDoubleClick(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x6F8 | Ordinal: 1785
        void onMouseDown(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x9D7 | Ordinal: 2520
        void updateFillerSize_(void);

    // RVA: 0x9FE | Ordinal: 2559
        void updateThumbPosition_(void);

    // RVA: 0xA02 | Ordinal: 2563
        void updateThumbSize_(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_VERTSLIDER_HPP
