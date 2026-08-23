#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QTabBarPrivate
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTabBarPrivate
{
public:

    // RVA: 0x16D | Ordinal: 366
        void QTabBarPrivate(void);

    // RVA: 0x4AA | Ordinal: 1195
        void _q_closeTab(void);

    // RVA: 0x4C5 | Ordinal: 1222
        void _q_scrollTabs(void);

    // RVA: 0x5F1 | Ordinal: 1522
        void at(int);

    // RVA: 0x5F2 | Ordinal: 1523
        void at(int) const;

    // RVA: 0x5FD | Ordinal: 1534
        void autoHideTabs(void);

    // RVA: 0x67C | Ordinal: 1661
        void calculateFirstLastVisible(int, bool, bool);

    // RVA: 0x67D | Ordinal: 1662
        void calculateNewPosition(int, int, int) const;

    // RVA: 0xD82 | Ordinal: 3459
        void hoveredTabIndex(void) const;

    // RVA: 0xDB7 | Ordinal: 3512
        void indexAtPos(class QPoint const &) const;

    // RVA: 0xDD8 | Ordinal: 3545
        void init(void);

    // RVA: 0xDDB | Ordinal: 3548
        void initBasicStyleOption(class QStyleOptionTab *, int) const;

    // RVA: 0xDE0 | Ordinal: 3553
        void initStyleBaseOption(class QStyleOptionTabBarBase *, class QTabBar *, class QSize);

    // RVA: 0xEAC | Ordinal: 3757
        void isAnimated(void) const;

    // RVA: 0x1029 | Ordinal: 4138
        void killSwitchTabTimer(void);

    // RVA: 0x104B | Ordinal: 4172
        void layoutTab(int);

    // RVA: 0x104C | Ordinal: 4173
        void layoutTabs(void);

    // RVA: 0x104D | Ordinal: 4174
        void layoutWidgets(int);

    // RVA: 0x1079 | Ordinal: 4218
        void makeVisible(int);

    // RVA: 0x128A | Ordinal: 4747
        void moveTab(int, int);

    // RVA: 0x128B | Ordinal: 4748
        void moveTabFinished(int);

    // RVA: 0x12AB | Ordinal: 4780
        void normalizedScrollRect(int);

    // RVA: 0x1417 | Ordinal: 5144
        void q_func(void);

    // RVA: 0x1418 | Ordinal: 5145
        void q_func(void) const;

    // RVA: 0x1613 | Ordinal: 5652
        void refresh(void);

    // RVA: 0x17A2 | Ordinal: 6051
        void selectNewCurrentIndexFrom(int);

    // RVA: 0x18CB | Ordinal: 6348
        void setCurrentNextEnabledIndex(int);

    // RVA: 0x1D70 | Ordinal: 7537
        void setupMovableTab(void);

    // RVA: 0x1E27 | Ordinal: 7720
        void slide(int, int);

    // RVA: 0x223A | Ordinal: 8763
        void updateMacBorderMetrics(void);

    // RVA: 0x2261 | Ordinal: 8802
        void validIndex(int) const;

    // RVA: 0x275 | Ordinal: 630
        void _QTabBarPrivate(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QTABBARPRIVATE_HPP
