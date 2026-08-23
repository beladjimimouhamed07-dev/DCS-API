#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QMouseEventTransition
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QMouseEventTransition
{
public:

    // RVA: 0xD8 | Ordinal: 217
        void QMouseEventTransition(class QObject *, enum QEvent::Type, enum Qt::MouseButton, class QState *);

    // RVA: 0xD9 | Ordinal: 218
        void QMouseEventTransition(class QState *);

    // RVA: 0x65D | Ordinal: 1630
        void button(void) const;

    // RVA: 0x967 | Ordinal: 2408
        void d_func(void);

    // RVA: 0x968 | Ordinal: 2409
        void d_func(void) const;

    // RVA: 0xB8B | Ordinal: 2956
        void eventTest(class QEvent *);

    // RVA: 0xD53 | Ordinal: 3412
        void hitTestPath(void) const;

    // RVA: 0x115C | Ordinal: 4445
        void metaObject(void) const;

    // RVA: 0x11F9 | Ordinal: 4602
        void modifierMask(void) const;

    // RVA: 0x12C1 | Ordinal: 4802
        void onTransition(class QEvent *);

    // RVA: 0x1475 | Ordinal: 5238
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1508 | Ordinal: 5385
        void qt_metacast(char const *);

    // RVA: 0x159E | Ordinal: 5535
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x184C | Ordinal: 6221
        void setButton(enum Qt::MouseButton);

    // RVA: 0x19EF | Ordinal: 6640
        void setHitTestPath(class QPainterPath const &);

    // RVA: 0x1AD7 | Ordinal: 6872
        void setModifierMask(class QFlags<enum Qt::KeyboardModifier>);

    // RVA: 0x20C4 | Ordinal: 8389
        void tr(char const *, char const *, int);

    // RVA: 0x2157 | Ordinal: 8536
        void trUtf8(char const *, char const *, int);

    // RVA: 0x22E | Ordinal: 559
        void _QMouseEventTransition(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QMOUSEEVENTTRANSITION_HPP
