#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: RangeIndicator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class RangeIndicator
{
public:

    // RVA: 0xAA | Ordinal: 171
        void RangeIndicator(void);

    // RVA: 0x204 | Ordinal: 517
        void copyParams(class gui::RangeIndicator *) const;

    // RVA: 0x2ED | Ordinal: 750
        void findWidgetAtScreenPoint(class osg::Vec2i const &) const;

    // RVA: 0x364 | Ordinal: 869
        void getFiller(void) const;

    // RVA: 0x487 | Ordinal: 1160
        void getRange(double &, double &) const;

    // RVA: 0x4EA | Ordinal: 1259
        void getSkin(void) const;

    // RVA: 0x552 | Ordinal: 1363
        void getValueRange(double &, double &) const;

    // RVA: 0x75D | Ordinal: 1886
        void onRangeChanged_(double, double);

    // RVA: 0x773 | Ordinal: 1908
        void onSizeChanged_(class osg::Vec2i const &);

    // RVA: 0x796 | Ordinal: 1943
        void onValueRangeChanged_(double, double);

    // RVA: 0x911 | Ordinal: 2322
        void setRange(double, double);

    // RVA: 0x966 | Ordinal: 2407
        void setValueRange(double, double);

    // RVA: 0xA1F | Ordinal: 2592
        void validateRange_(double, double) const;

    // RVA: 0xA2C | Ordinal: 2605
        void validateValueRange_(double, double) const;
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_RANGEINDICATOR_HPP
