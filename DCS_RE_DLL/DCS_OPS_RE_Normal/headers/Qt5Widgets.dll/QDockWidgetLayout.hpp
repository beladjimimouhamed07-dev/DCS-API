#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QDockWidgetLayout
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QDockWidgetLayout
{
public:

    // RVA: 0x47 | Ordinal: 72
        void QDockWidgetLayout(class QWidget *);

    // RVA: 0x55A | Ordinal: 1371
        void addItem(class QLayoutItem *);

    // RVA: 0x7F0 | Ordinal: 2033
        void count(void) const;

    // RVA: 0xF83 | Ordinal: 3972
        void itemAt(int) const;

    // RVA: 0xFBB | Ordinal: 4028
        void itemForRole(enum QDockWidgetLayout::Role) const;

    // RVA: 0x10EC | Ordinal: 4333
        void maximumSize(void) const;

    // RVA: 0x112A | Ordinal: 4395
        void metaObject(void) const;

    // RVA: 0x11C1 | Ordinal: 4546
        void minimumSize(void) const;

    // RVA: 0x11E5 | Ordinal: 4582
        void minimumTitleWidth(void) const;

    // RVA: 0x1298 | Ordinal: 4761
        void nativeWindowDeco(void) const;

    // RVA: 0x1299 | Ordinal: 4762
        void nativeWindowDeco(bool) const;

    // RVA: 0x1443 | Ordinal: 5188
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14D6 | Ordinal: 5335
        void qt_metacast(char const *);

    // RVA: 0x156C | Ordinal: 5485
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x19BF | Ordinal: 6592
        void setGeometry(class QRect const &);

    // RVA: 0x1D0C | Ordinal: 7437
        void setVerticalTitleBar(bool);

    // RVA: 0x1D37 | Ordinal: 7480
        void setWidgetForRole(enum QDockWidgetLayout::Role, class QWidget *);

    // RVA: 0x1DDD | Ordinal: 7646
        void sizeFromContent(class QSize const &, bool) const;

    // RVA: 0x1DEE | Ordinal: 7663
        void sizeHint(void) const;

    // RVA: 0x1FB2 | Ordinal: 8115
        void takeAt(int);

    // RVA: 0x2032 | Ordinal: 8243
        void titleArea(void) const;

    // RVA: 0x2035 | Ordinal: 8246
        void titleHeight(void) const;

    // RVA: 0x2092 | Ordinal: 8339
        void tr(char const *, char const *, int);

    // RVA: 0x2125 | Ordinal: 8486
        void trUtf8(char const *, char const *, int);

    // RVA: 0x2308 | Ordinal: 8969
        void widgetForRole(enum QDockWidgetLayout::Role) const;

    // RVA: 0x2334 | Ordinal: 9013
        void wmSupportsNativeWindowDeco(void);

    // RVA: 0x1D6 | Ordinal: 471
        void _QDockWidgetLayout(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QDOCKWIDGETLAYOUT_HPP
