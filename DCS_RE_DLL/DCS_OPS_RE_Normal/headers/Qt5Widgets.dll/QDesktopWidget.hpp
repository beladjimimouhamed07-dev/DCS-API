#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QDesktopWidget
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QDesktopWidget
{
public:

    // RVA: 0x39 | Ordinal: 58
        void QDesktopWidget(void);

    // RVA: 0x608 | Ordinal: 1545
        void availableGeometry(class QPoint const &) const;

    // RVA: 0x609 | Ordinal: 1546
        void availableGeometry(int) const;

    // RVA: 0x60A | Ordinal: 1547
        void availableGeometry(class QWidget const *) const;

    // RVA: 0x8D1 | Ordinal: 2258
        void d_func(void);

    // RVA: 0x8D2 | Ordinal: 2259
        void d_func(void) const;

    // RVA: 0xF6A | Ordinal: 3947
        void isVirtualDesktop(void) const;

    // RVA: 0x1124 | Ordinal: 4389
        void metaObject(void) const;

    // RVA: 0x12B6 | Ordinal: 4791
        void numScreens(void) const;

    // RVA: 0x13CF | Ordinal: 5072
        void primaryScreen(void) const;

    // RVA: 0x13D0 | Ordinal: 5073
        void primaryScreenChanged(void);

    // RVA: 0x143D | Ordinal: 5182
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14D0 | Ordinal: 5329
        void qt_metacast(char const *);

    // RVA: 0x1566 | Ordinal: 5479
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x169C | Ordinal: 5789
        void resizeEvent(class QResizeEvent *);

    // RVA: 0x16BF | Ordinal: 5824
        void resized(int);

    // RVA: 0x173E | Ordinal: 5951
        void screen(int);

    // RVA: 0x1740 | Ordinal: 5953
        void screenCount(void) const;

    // RVA: 0x1741 | Ordinal: 5954
        void screenCountChanged(int);

    // RVA: 0x1742 | Ordinal: 5955
        void screenGeometry(class QPoint const &) const;

    // RVA: 0x1743 | Ordinal: 5956
        void screenGeometry(int) const;

    // RVA: 0x1744 | Ordinal: 5957
        void screenGeometry(class QWidget const *) const;

    // RVA: 0x1746 | Ordinal: 5959
        void screenNumber(class QPoint const &) const;

    // RVA: 0x1747 | Ordinal: 5960
        void screenNumber(class QWidget const *) const;

    // RVA: 0x208C | Ordinal: 8333
        void tr(char const *, char const *, int);

    // RVA: 0x211F | Ordinal: 8480
        void trUtf8(char const *, char const *, int);

    // RVA: 0x233B | Ordinal: 9020
        void workAreaResized(int);

    // RVA: 0x1CF | Ordinal: 464
        void _QDesktopWidget(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QDESKTOPWIDGET_HPP
