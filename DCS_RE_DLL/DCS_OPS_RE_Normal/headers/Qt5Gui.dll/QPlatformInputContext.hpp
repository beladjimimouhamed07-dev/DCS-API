#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QPlatformInputContext
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPlatformInputContext
{
public:

    // RVA: 0x243 | Ordinal: 580
        void QPlatformInputContext(void);

    // RVA: 0xC1A | Ordinal: 3099
        void commit(void);

    // RVA: 0xD64 | Ordinal: 3429
        void d_func(void);

    // RVA: 0xD65 | Ordinal: 3430
        void d_func(void) const;

    // RVA: 0xF83 | Ordinal: 3972
        void emitAnimatingChanged(void);

    // RVA: 0xF89 | Ordinal: 3978
        void emitInputDirectionChanged(enum Qt::LayoutDirection);

    // RVA: 0xF8A | Ordinal: 3979
        void emitInputPanelVisibleChanged(void);

    // RVA: 0xF8B | Ordinal: 3980
        void emitKeyboardRectChanged(void);

    // RVA: 0xF90 | Ordinal: 3985
        void emitLocaleChanged(void);

    // RVA: 0x1060 | Ordinal: 4193
        void filterEvent(class QEvent const *);

    // RVA: 0x4E54 | Ordinal: 20053
        void hasCapability(enum QPlatformInputContext::Capability) const;

    // RVA: 0x4EA4 | Ordinal: 20133
        void hideInputPanel(void);

    // RVA: 0x4F3C | Ordinal: 20285
        void inputDirection(void) const;

    // RVA: 0x4F46 | Ordinal: 20295
        void inputMethodAccepted(void) const;

    // RVA: 0x4FB7 | Ordinal: 20408
        void invokeAction(enum QInputMethod::Action, int);

    // RVA: 0x4FCA | Ordinal: 20427
        void isAnimating(void) const;

    // RVA: 0x5037 | Ordinal: 20536
        void isInputPanelVisible(void) const;

    // RVA: 0x509E | Ordinal: 20639
        void isValid(void) const;

    // RVA: 0x50FD | Ordinal: 20734
        void keyboardRect(void) const;

    // RVA: 0x519A | Ordinal: 20891
        void locale(void) const;

    // RVA: 0x5283 | Ordinal: 21124
        void metaObject(void) const;

    // RVA: 0x559A | Ordinal: 21915
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x55DE | Ordinal: 21983
        void qt_metacast(char const *);

    // RVA: 0x5634 | Ordinal: 22069
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x5718 | Ordinal: 22297
        void reset(void);

    // RVA: 0x598F | Ordinal: 22928
        void setFocusObject(class QObject *);

    // RVA: 0x5B79 | Ordinal: 23418
        void setSelectionOnFocusObject(class QPointF const &, class QPointF const &);

    // RVA: 0x5D19 | Ordinal: 23834
        void showInputPanel(void);

    // RVA: 0x5FC1 | Ordinal: 24514
        void tr(char const *, char const *, int);

    // RVA: 0x6008 | Ordinal: 24585
        void trUtf8(char const *, char const *, int);

    // RVA: 0x60B3 | Ordinal: 24756
        void update(class QFlags<enum Qt::InputMethodQuery>);

    // RVA: 0x4CF | Ordinal: 1232
        void _QPlatformInputContext(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QPLATFORMINPUTCONTEXT_HPP
