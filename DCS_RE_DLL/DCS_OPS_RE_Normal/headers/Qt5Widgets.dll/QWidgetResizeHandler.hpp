#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QWidgetResizeHandler
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QWidgetResizeHandler
{
public:

    // RVA: 0x1A6 | Ordinal: 423
        void QWidgetResizeHandler(class QWidget *, class QWidget *);

    // RVA: 0x50D | Ordinal: 1294
        void activate(void);

    // RVA: 0xA36 | Ordinal: 2615
        void doMove(void);

    // RVA: 0xA38 | Ordinal: 2617
        void doResize(void);

    // RVA: 0xB88 | Ordinal: 2953
        void eventFilter(class QObject *, class QEvent *);

    // RVA: 0xEA4 | Ordinal: 3749
        void isActive(enum QWidgetResizeHandler::Action) const;

    // RVA: 0xEA5 | Ordinal: 3750
        void isActive(void) const;

    // RVA: 0xEB3 | Ordinal: 3764
        void isButtonDown(void) const;

    // RVA: 0xF12 | Ordinal: 3859
        void isMove(void) const;

    // RVA: 0xF13 | Ordinal: 3860
        void isMovingEnabled(void) const;

    // RVA: 0xF39 | Ordinal: 3898
        void isResize(void) const;

    // RVA: 0x1010 | Ordinal: 4113
        void keyPressEvent(class QKeyEvent *);

    // RVA: 0x1199 | Ordinal: 4506
        void metaObject(void) const;

    // RVA: 0x122E | Ordinal: 4655
        void mouseMoveEvent(class QMouseEvent *);

    // RVA: 0x14B2 | Ordinal: 5299
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1545 | Ordinal: 5446
        void qt_metacast(char const *);

    // RVA: 0x15DB | Ordinal: 5596
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x17F9 | Ordinal: 6138
        void setActive(enum QWidgetResizeHandler::Action, bool);

    // RVA: 0x17FA | Ordinal: 6139
        void setActive(bool);

    // RVA: 0x1964 | Ordinal: 6501
        void setExtraHeight(int);

    // RVA: 0x19BD | Ordinal: 6590
        void setFrameWidth(int);

    // RVA: 0x1ADD | Ordinal: 6878
        void setMouseCursor(enum QWidgetResizeHandler::MousePosition);

    // RVA: 0x1AE5 | Ordinal: 6886
        void setMovingEnabled(bool);

    // RVA: 0x1C1A | Ordinal: 7195
        void setSizeProtection(bool);

    // RVA: 0x2101 | Ordinal: 8450
        void tr(char const *, char const *, int);

    // RVA: 0x2194 | Ordinal: 8597
        void trUtf8(char const *, char const *, int);

    // RVA: 0x293 | Ordinal: 660
        void _QWidgetResizeHandler(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QWIDGETRESIZEHANDLER_HPP
