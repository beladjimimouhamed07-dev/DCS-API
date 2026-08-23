#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QWindowContainer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QWindowContainer
{
public:

    // RVA: 0x1AA | Ordinal: 427
        void QWindowContainer(class QWindow *, class QWidget *, class QFlags<enum Qt::WindowType>);

    // RVA: 0x7B2 | Ordinal: 1971
        void containedWindow(void) const;

    // RVA: 0x9D5 | Ordinal: 2518
        void d_func(void);

    // RVA: 0x9D6 | Ordinal: 2519
        void d_func(void) const;

    // RVA: 0xB73 | Ordinal: 2932
        void event(class QEvent *);

    // RVA: 0xC45 | Ordinal: 3142
        void focusWindowChanged(class QWindow *);

    // RVA: 0x119B | Ordinal: 4508
        void metaObject(void) const;

    // RVA: 0x1365 | Ordinal: 4966
        void parentWasChanged(class QWidget *);

    // RVA: 0x1366 | Ordinal: 4967
        void parentWasLowered(class QWidget *);

    // RVA: 0x1367 | Ordinal: 4968
        void parentWasMoved(class QWidget *);

    // RVA: 0x1368 | Ordinal: 4969
        void parentWasRaised(class QWidget *);

    // RVA: 0x14B4 | Ordinal: 5301
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1547 | Ordinal: 5448
        void qt_metacast(char const *);

    // RVA: 0x15DD | Ordinal: 5598
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x206C | Ordinal: 8301
        void toplevelAboutToBeDestroyed(class QWidget *);

    // RVA: 0x2103 | Ordinal: 8452
        void tr(char const *, char const *, int);

    // RVA: 0x2196 | Ordinal: 8599
        void trUtf8(char const *, char const *, int);

    // RVA: 0x295 | Ordinal: 662
        void _QWindowContainer(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QWINDOWCONTAINER_HPP
