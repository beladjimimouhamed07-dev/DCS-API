#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QStateMachine
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QStateMachine
{
public:

    // RVA: 0x1FA | Ordinal: 507
        void QStateMachine(class QStateMachinePrivate &, class QObject *);

    // RVA: 0x1FB | Ordinal: 508
        void QStateMachine(class QObject *);

    // RVA: 0x1FC | Ordinal: 509
        void QStateMachine(enum QState::ChildMode, class QObject *);

    // RVA: 0x7EC | Ordinal: 2029
        void addDefaultAnimation(class QAbstractAnimation *);

    // RVA: 0x816 | Ordinal: 2071
        void addState(class QAbstractState *);

    // RVA: 0x90A | Ordinal: 2315
        void beginMicrostep(class QEvent *);

    // RVA: 0x911 | Ordinal: 2322
        void beginSelectTransitions(class QEvent *);

    // RVA: 0x962 | Ordinal: 2403
        void cancelDelayedEvent(int);

    // RVA: 0x9F5 | Ordinal: 2550
        void clearError(void);

    // RVA: 0xA72 | Ordinal: 2675
        void configuration(void) const;

    // RVA: 0xBDC | Ordinal: 3037
        void d_func(void);

    // RVA: 0xBDD | Ordinal: 3038
        void d_func(void) const;

    // RVA: 0xC54 | Ordinal: 3157
        void defaultAnimations(void) const;

    // RVA: 0xD34 | Ordinal: 3381
        void endMicrostep(class QEvent *);

    // RVA: 0xD3C | Ordinal: 3389
        void endSelectTransitions(class QEvent *);

    // RVA: 0xD85 | Ordinal: 3462
        void error(void) const;

    // RVA: 0xD94 | Ordinal: 3477
        void errorString(void) const;

    // RVA: 0xDB1 | Ordinal: 3506
        void event(class QEvent *);

    // RVA: 0xDBB | Ordinal: 3516
        void eventFilter(class QObject *, class QEvent *);

    // RVA: 0xF36 | Ordinal: 3895
        void globalRestorePolicy(void) const;

    // RVA: 0x1072 | Ordinal: 4211
        void isAnimated(void) const;

    // RVA: 0x1199 | Ordinal: 4506
        void isRunning(void) const;

    // RVA: 0x1371 | Ordinal: 4978
        void metaObject(void) const;

    // RVA: 0x1477 | Ordinal: 5240
        void onEntry(class QEvent *);

    // RVA: 0x147B | Ordinal: 5244
        void onExit(class QEvent *);

    // RVA: 0x1506 | Ordinal: 5383
        void postDelayedEvent(class QEvent *, int);

    // RVA: 0x1507 | Ordinal: 5384
        void postDelayedEvent(class QEvent *, class std::chrono::duration<__int64, struct std::ratio<1, 1000>>);

    // RVA: 0x1509 | Ordinal: 5386
        void postEvent(class QEvent *, enum QStateMachine::EventPriority);

    // RVA: 0x1659 | Ordinal: 5722
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1696 | Ordinal: 5783
        void qt_metacast(char const *);

    // RVA: 0x16DD | Ordinal: 5854
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x17D8 | Ordinal: 6105
        void removeDefaultAnimation(class QAbstractAnimation *);

    // RVA: 0x1807 | Ordinal: 6152
        void removeState(class QAbstractState *);

    // RVA: 0x18C5 | Ordinal: 6342
        void runningChanged(bool);

    // RVA: 0x1928 | Ordinal: 6441
        void setAnimated(bool);

    // RVA: 0x19D3 | Ordinal: 6612
        void setGlobalRestorePolicy(enum QState::RestorePolicy);

    // RVA: 0x1A7F | Ordinal: 6784
        void setRunning(bool);

    // RVA: 0x1B9E | Ordinal: 7071
        void start(void);

    // RVA: 0x1BC1 | Ordinal: 7106
        void started(struct QStateMachine::QPrivateSignal);

    // RVA: 0x1C3D | Ordinal: 7230
        void stop(void);

    // RVA: 0x1C46 | Ordinal: 7239
        void stopped(struct QStateMachine::QPrivateSignal);

    // RVA: 0x1EA2 | Ordinal: 7843
        void tr(char const *, char const *, int);

    // RVA: 0x1EE1 | Ordinal: 7906
        void trUtf8(char const *, char const *, int);

    // RVA: 0x35E | Ordinal: 863
        void _QStateMachine(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QSTATEMACHINE_HPP
