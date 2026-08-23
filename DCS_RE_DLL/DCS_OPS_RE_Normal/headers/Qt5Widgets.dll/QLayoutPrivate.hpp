#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QLayoutPrivate
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QLayoutPrivate
{
public:

    // RVA: 0xC4 | Ordinal: 197
        void QLayoutPrivate(void);

    // RVA: 0x6D3 | Ordinal: 1748
        void checkLayout(class QLayout *) const;

    // RVA: 0x6DC | Ordinal: 1757
        void checkWidget(class QWidget *) const;

    // RVA: 0x816 | Ordinal: 2071
        void createSpacerItem(class QLayout const *, int, int, enum QSizePolicy::Policy, enum QSizePolicy::Policy);

    // RVA: 0x824 | Ordinal: 2085
        void createWidgetItem(class QLayout const *, class QWidget *);

    // RVA: 0xA37 | Ordinal: 2616
        void doResize(void);

    // RVA: 0xCA3 | Ordinal: 3236
        void getMargin(int *, int, enum QStyle::PixelMetric) const;

    // RVA: 0x1415 | Ordinal: 5142
        void q_func(void);

    // RVA: 0x1416 | Ordinal: 5143
        void q_func(void) const;

    // RVA: 0x165F | Ordinal: 5728
        void reparentChildWidgets(class QWidget *);

    // RVA: 0x1662 | Ordinal: 5731
        void replaceAt(int, class QLayoutItem *);

    // RVA: 0x223 | Ordinal: 548
        void _QLayoutPrivate(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QLAYOUTPRIVATE_HPP
