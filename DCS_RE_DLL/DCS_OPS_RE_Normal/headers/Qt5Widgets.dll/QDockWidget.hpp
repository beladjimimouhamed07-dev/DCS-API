#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QDockWidget
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QDockWidget
{
public:

    // RVA: 0x45 | Ordinal: 70
        void QDockWidget(class QString const &, class QWidget *, class QFlags<enum Qt::WindowType>);

    // RVA: 0x46 | Ordinal: 71
        void QDockWidget(class QWidget *, class QFlags<enum Qt::WindowType>);

    // RVA: 0x5CB | Ordinal: 1484
        void allowedAreas(void) const;

    // RVA: 0x5CD | Ordinal: 1486
        void allowedAreasChanged(class QFlags<enum Qt::DockWidgetArea>);

    // RVA: 0x6B6 | Ordinal: 1719
        void changeEvent(class QEvent *);

    // RVA: 0x750 | Ordinal: 1873
        void closeEvent(class QCloseEvent *);

    // RVA: 0x8DB | Ordinal: 2268
        void d_func(void);

    // RVA: 0x8DC | Ordinal: 2269
        void d_func(void) const;

    // RVA: 0xA3C | Ordinal: 2621
        void dockLocationChanged(enum Qt::DockWidgetArea);

    // RVA: 0xB3C | Ordinal: 2877
        void event(class QEvent *);

    // RVA: 0xBB6 | Ordinal: 2999
        void features(void) const;

    // RVA: 0xBB7 | Ordinal: 3000
        void featuresChanged(class QFlags<enum QDockWidget::DockWidgetFeature>);

    // RVA: 0xDE6 | Ordinal: 3559
        void initStyleOption(class QStyleOptionDockWidget *) const;

    // RVA: 0xEAE | Ordinal: 3759
        void isAreaAllowed(enum Qt::DockWidgetArea) const;

    // RVA: 0xEEA | Ordinal: 3819
        void isFloating(void) const;

    // RVA: 0x1129 | Ordinal: 4394
        void metaObject(void) const;

    // RVA: 0x1329 | Ordinal: 4906
        void paintEvent(class QPaintEvent *);

    // RVA: 0x1442 | Ordinal: 5187
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14D5 | Ordinal: 5334
        void qt_metacast(char const *);

    // RVA: 0x156B | Ordinal: 5484
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1810 | Ordinal: 6161
        void setAllowedAreas(class QFlags<enum Qt::DockWidgetArea>);

    // RVA: 0x1968 | Ordinal: 6505
        void setFeatures(class QFlags<enum QDockWidget::DockWidgetFeature>);

    // RVA: 0x1987 | Ordinal: 6536
        void setFloating(bool);

    // RVA: 0x1CCC | Ordinal: 7373
        void setTitleBarWidget(class QWidget *);

    // RVA: 0x1D2F | Ordinal: 7472
        void setWidget(class QWidget *);

    // RVA: 0x2033 | Ordinal: 8244
        void titleBarWidget(void) const;

    // RVA: 0x2049 | Ordinal: 8266
        void toggleViewAction(void) const;

    // RVA: 0x2062 | Ordinal: 8291
        void topLevelChanged(bool);

    // RVA: 0x2091 | Ordinal: 8338
        void tr(char const *, char const *, int);

    // RVA: 0x2124 | Ordinal: 8485
        void trUtf8(char const *, char const *, int);

    // RVA: 0x22B4 | Ordinal: 8885
        void visibilityChanged(bool);

    // RVA: 0x22F3 | Ordinal: 8948
        void widget(void) const;

    // RVA: 0x1D5 | Ordinal: 470
        void _QDockWidget(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QDOCKWIDGET_HPP
