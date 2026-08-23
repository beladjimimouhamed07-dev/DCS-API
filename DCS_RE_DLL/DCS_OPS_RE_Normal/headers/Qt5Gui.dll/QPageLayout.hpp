#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QPageLayout
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPageLayout
{
public:

    // RVA: 0x1E4 | Ordinal: 485
        void QPageLayout(class QPageLayout const &);

    // RVA: 0x1E5 | Ordinal: 486
        void QPageLayout(class QPageSize const &, enum QPageLayout::Orientation, class QMarginsF const &, enum QPageLayout::Unit, class QMarginsF const &);

    // RVA: 0x1E6 | Ordinal: 487
        void QPageLayout(void);

    // RVA: 0x116F | Ordinal: 4464
        void fullRect(enum QPageLayout::Unit) const;

    // RVA: 0x1170 | Ordinal: 4465
        void fullRect(void) const;

    // RVA: 0x1171 | Ordinal: 4466
        void fullRectPixels(int) const;

    // RVA: 0x1172 | Ordinal: 4467
        void fullRectPoints(void) const;

    // RVA: 0x501D | Ordinal: 20510
        void isEquivalentTo(class QPageLayout const &) const;

    // RVA: 0x509C | Ordinal: 20637
        void isValid(void) const;

    // RVA: 0x5216 | Ordinal: 21015
        void margins(enum QPageLayout::Unit) const;

    // RVA: 0x5217 | Ordinal: 21016
        void margins(void) const;

    // RVA: 0x5219 | Ordinal: 21018
        void marginsPixels(int) const;

    // RVA: 0x521A | Ordinal: 21019
        void marginsPoints(void) const;

    // RVA: 0x5247 | Ordinal: 21064
        void maximumMargins(void) const;

    // RVA: 0x52CB | Ordinal: 21196
        void minimumMargins(void) const;

    // RVA: 0x52E4 | Ordinal: 21221
        void mode(void) const;

    // RVA: 0x53B1 | Ordinal: 21426
        void orientation(void) const;

    // RVA: 0x53DA | Ordinal: 21467
        void pageSize(void) const;

    // RVA: 0x53F4 | Ordinal: 21493
        void paintRect(enum QPageLayout::Unit) const;

    // RVA: 0x53F5 | Ordinal: 21494
        void paintRect(void) const;

    // RVA: 0x53F6 | Ordinal: 21495
        void paintRectPixels(int) const;

    // RVA: 0x53F7 | Ordinal: 21496
        void paintRectPoints(void) const;

    // RVA: 0x587F | Ordinal: 22656
        void setBottomMargin(double);

    // RVA: 0x5A35 | Ordinal: 23094
        void setLeftMargin(double);

    // RVA: 0x5A50 | Ordinal: 23121
        void setMargins(class QMarginsF const &);

    // RVA: 0x5A73 | Ordinal: 23156
        void setMinimumMargins(class QMarginsF const &);

    // RVA: 0x5A83 | Ordinal: 23172
        void setMode(enum QPageLayout::Mode);

    // RVA: 0x5AC0 | Ordinal: 23233
        void setOrientation(enum QPageLayout::Orientation);

    // RVA: 0x5AD4 | Ordinal: 23253
        void setPageSize(class QPageSize const &, class QMarginsF const &);

    // RVA: 0x5B4F | Ordinal: 23376
        void setRightMargin(double);

    // RVA: 0x5C13 | Ordinal: 23572
        void setTopMargin(double);

    // RVA: 0x5C81 | Ordinal: 23682
        void setUnits(enum QPageLayout::Unit);

    // RVA: 0x5E87 | Ordinal: 24200
        void swap(class QPageLayout &);

    // RVA: 0x60A0 | Ordinal: 24737
        void units(void) const;

    // RVA: 0x4A8 | Ordinal: 1193
        void _QPageLayout(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QPAGELAYOUT_HPP
