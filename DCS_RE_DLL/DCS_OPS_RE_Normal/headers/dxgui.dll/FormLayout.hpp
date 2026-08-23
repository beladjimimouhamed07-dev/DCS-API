#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: FormLayout
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class FormLayout
{
public:

    // RVA: 0x69 | Ordinal: 106
        void FormLayout(int, int);

    // RVA: 0x1B8 | Ordinal: 441
        void clone(void) const;

    // RVA: 0x31F | Ordinal: 800
        void getCaptionsAlign(void) const;

    // RVA: 0x362 | Ordinal: 867
        void getFieldsAlign(void) const;

    // RVA: 0x3BA | Ordinal: 955
        void getHorzGap(void) const;

    // RVA: 0x438 | Ordinal: 1081
        void getMaxSize(void) const;

    // RVA: 0x44A | Ordinal: 1099
        void getMinSize(void) const;

    // RVA: 0x47D | Ordinal: 1150
        void getPrefSize(void) const;

    // RVA: 0x546 | Ordinal: 1351
        void getType(void) const;

    // RVA: 0x558 | Ordinal: 1369
        void getVertGap(void) const;

    // RVA: 0x871 | Ordinal: 2162
        void setCaptionsAlign(class gui::Align const &, class gui::Align const &);

    // RVA: 0x8A4 | Ordinal: 2213
        void setFieldsAlign(class gui::Align const &, class gui::Align const &);

    // RVA: 0x8BD | Ordinal: 2238
        void setHorzGap(int);

    // RVA: 0x96C | Ordinal: 2413
        void setVertGap(int);

    // RVA: 0x9F2 | Ordinal: 2547
        void updateSize(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_FORMLAYOUT_HPP
