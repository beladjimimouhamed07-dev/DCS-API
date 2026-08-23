#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QAbstractScrollAreaPrivate
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QAbstractScrollAreaPrivate
{
public:

    // RVA: 0xA | Ordinal: 11
        void QAbstractScrollAreaPrivate(void);

    // RVA: 0x4B9 | Ordinal: 1210
        void _q_hslide(int);

    // RVA: 0x4CE | Ordinal: 1231
        void _q_showOrHideScrollBars(void);

    // RVA: 0x4D3 | Ordinal: 1236
        void _q_vslide(int);

    // RVA: 0x68F | Ordinal: 1680
        void canStartScrollingAt(class QPoint const &);

    // RVA: 0x7BF | Ordinal: 1984
        void contentsOffset(void) const;

    // RVA: 0xBFC | Ordinal: 3069
        void flashScrollBars(void);

    // RVA: 0xDD3 | Ordinal: 3540
        void init(void);

    // RVA: 0x1043 | Ordinal: 4164
        void layoutChildren(void);

    // RVA: 0x1044 | Ordinal: 4165
        void layoutChildren_helper(bool *, bool *);

    // RVA: 0x13FF | Ordinal: 5120
        void q_func(void);

    // RVA: 0x1400 | Ordinal: 5121
        void q_func(void) const;

    // RVA: 0x1663 | Ordinal: 5732
        void replaceScrollBar(class QScrollBar *, enum Qt::Orientation);

    // RVA: 0x1751 | Ordinal: 5970
        void scrollBarPolicyChanged(enum Qt::Orientation, enum Qt::ScrollBarPolicy);

    // RVA: 0x1BCE | Ordinal: 7119
        void setScrollBarTransient(class QScrollBar *, bool);

    // RVA: 0x22A5 | Ordinal: 8870
        void viewportEvent(class QEvent *);

    // RVA: 0x1B5 | Ordinal: 438
        void _QAbstractScrollAreaPrivate(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QABSTRACTSCROLLAREAPRIVATE_HPP
