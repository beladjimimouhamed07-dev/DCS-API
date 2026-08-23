#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QStateMachinePrivate
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QStateMachinePrivate
{
public:

    // RVA: 0x1FD | Ordinal: 510
        void QStateMachinePrivate(void);

    // RVA: 0x7A8 | Ordinal: 1961
        void _q_animationFinished(void);

    // RVA: 0x7AA | Ordinal: 1963
        void _q_killDelayedEventTimer(int, int);

    // RVA: 0x7AB | Ordinal: 1964
        void _q_process(void);

    // RVA: 0x7B0 | Ordinal: 1969
        void _q_start(void);

    // RVA: 0x7B1 | Ordinal: 1970
        void _q_startDelayedEventTimer(int, int);

    // RVA: 0x7D5 | Ordinal: 2006
        void addAncestorStatesToEnter(class QAbstractState *, class QAbstractState *, class QSet<class QAbstractState *> &, class QSet<class QAbstractState *> &);

    // RVA: 0x7ED | Ordinal: 2030
        void addDescendantStatesToEnter(class QAbstractState *, class QSet<class QAbstractState *> &, class QSet<class QAbstractState *> &);

    // RVA: 0x909 | Ordinal: 2314
        void beginMacrostep(void);

    // RVA: 0x961 | Ordinal: 2402
        void cancelAllDelayedEvents(void);

    // RVA: 0x9F6 | Ordinal: 2551
        void clearHistory(void);

    // RVA: 0xA68 | Ordinal: 2665
        void computeEntrySet(class QList<class QAbstractTransition *> const &, class QSet<class QAbstractState *> &, struct CalculationCache *);

    // RVA: 0xA69 | Ordinal: 2666
        void computeExitSet(class QList<class QAbstractTransition *> const &, struct CalculationCache *);

    // RVA: 0xA6A | Ordinal: 2667
        void computeExitSet_Unordered(class QList<class QAbstractTransition *> const &, struct CalculationCache *);

    // RVA: 0xA6B | Ordinal: 2668
        void computeExitSet_Unordered(class QAbstractTransition *, struct CalculationCache *);

    // RVA: 0xA6C | Ordinal: 2669
        void computePendingRestorables(class QList<class QAbstractState *> const &) const;

    // RVA: 0xA6D | Ordinal: 2670
        void computePropertyAssignments(class QList<class QAbstractState *> const &, class QHash<class QStateMachinePrivate::RestorableId, class QVariant> &) const;

    // RVA: 0xB31 | Ordinal: 2866
        void createInitialTransition(void) const;

    // RVA: 0xC66 | Ordinal: 3175
        void dequeueExternalEvent(void);

    // RVA: 0xC67 | Ordinal: 3176
        void dequeueInternalEvent(void);

    // RVA: 0xCF6 | Ordinal: 3319
        void emitStateFinished(class QState *, class QFinalState *);

    // RVA: 0xD32 | Ordinal: 3379
        void endMacrostep(bool);

    // RVA: 0xD5A | Ordinal: 3419
        void enterStates(class QEvent *, class QList<class QAbstractState *> const &, class QList<class QAbstractState *> const &, class QSet<class QAbstractState *> const &, class QHash<class QAbstractState *, class QVector<struct QPropertyAssignment>> &, class QList<class QAbstractAnimation *> const &);

    // RVA: 0xDCB | Ordinal: 3532
        void executeTransitionContent(class QEvent *, class QList<class QAbstractTransition *> const &);

    // RVA: 0xDD6 | Ordinal: 3543
        void exitInterpreter(void);

    // RVA: 0xDD7 | Ordinal: 3544
        void exitStates(class QEvent *, class QList<class QAbstractState *> const &, class QHash<class QAbstractState *, class QVector<struct QPropertyAssignment>> const &);

    // RVA: 0xE3F | Ordinal: 3648
        void findErrorState(class QAbstractState *);

    // RVA: 0xE41 | Ordinal: 3650
        void findLCA(class QList<class QAbstractState *> const &, bool);

    // RVA: 0xE42 | Ordinal: 3651
        void findLCCA(class QList<class QAbstractState *> const &);

    // RVA: 0xF1B | Ordinal: 3868
        void get(class QStateMachine *);

    // RVA: 0xF2F | Ordinal: 3888
        void getTransitionDomain(class QAbstractTransition *, class QList<class QAbstractState *> const &, struct CalculationCache *);

    // RVA: 0xF37 | Ordinal: 3896
        void goToState(class QAbstractState *);

    // RVA: 0xF45 | Ordinal: 3910
        void handleFilteredEvent(class QObject *, class QEvent *);

    // RVA: 0xF46 | Ordinal: 3911
        void handleTransitionSignal(class QObject *, int, void **);

    // RVA: 0xF72 | Ordinal: 3955
        void hasRestorable(class QAbstractState *, class QObject *, class QByteArray const &) const;

    // RVA: 0xFF3 | Ordinal: 4084
        void initializeAnimation(class QAbstractAnimation *, struct QPropertyAssignment const &);

    // RVA: 0xFF4 | Ordinal: 4085
        void initializeAnimations(class QAbstractState *, class QList<class QAbstractAnimation *> const &, class QList<class QAbstractState *> const &, class QHash<class QAbstractState *, class QVector<struct QPropertyAssignment>> &);

    // RVA: 0x107D | Ordinal: 4222
        void isAtomic(class QAbstractState const *) const;

    // RVA: 0x1094 | Ordinal: 4245
        void isCompound(class QAbstractState const *) const;

    // RVA: 0x10E8 | Ordinal: 4329
        void isExternalEventQueueEmpty(void);

    // RVA: 0x10F0 | Ordinal: 4337
        void isFinal(class QAbstractState const *);

    // RVA: 0x1100 | Ordinal: 4353
        void isInFinalState(class QAbstractState *) const;

    // RVA: 0x1105 | Ordinal: 4358
        void isInternalEventQueueEmpty(void);

    // RVA: 0x1161 | Ordinal: 4450
        void isParallel(class QAbstractState const *);

    // RVA: 0x1333 | Ordinal: 4916
        void maybeRegisterEventTransition(class QEventTransition *);

    // RVA: 0x1334 | Ordinal: 4917
        void maybeRegisterSignalTransition(class QSignalTransition *);

    // RVA: 0x1335 | Ordinal: 4918
        void maybeRegisterTransition(class QAbstractTransition *);

    // RVA: 0x138D | Ordinal: 5006
        void microstep(class QEvent *, class QList<class QAbstractTransition *> const &, struct CalculationCache *);

    // RVA: 0x142F | Ordinal: 5168
        void noMicrostep(void);

    // RVA: 0x150A | Ordinal: 5387
        void postExternalEvent(class QEvent *);

    // RVA: 0x150B | Ordinal: 5388
        void postInternalEvent(class QEvent *);

    // RVA: 0x153C | Ordinal: 5437
        void processEvents(enum QStateMachinePrivate::EventProcessingMode);

    // RVA: 0x1540 | Ordinal: 5441
        void processedPendingEvents(bool);

    // RVA: 0x15FE | Ordinal: 5631
        void q_func(void);

    // RVA: 0x15FF | Ordinal: 5632
        void q_func(void) const;

    // RVA: 0x176D | Ordinal: 5998
        void registerEventTransition(class QEventTransition *);

    // RVA: 0x1772 | Ordinal: 6003
        void registerMultiThreadedSignalTransitions(void);

    // RVA: 0x177B | Ordinal: 6012
        void registerRestorable(class QAbstractState *, class QObject *, class QByteArray const &, class QVariant const &);

    // RVA: 0x177C | Ordinal: 6013
        void registerSignalTransition(class QSignalTransition *);

    // RVA: 0x1785 | Ordinal: 6022
        void registerTransition(class QAbstractTransition *);

    // RVA: 0x1786 | Ordinal: 6023
        void registerTransitions(class QAbstractState *);

    // RVA: 0x17D6 | Ordinal: 6103
        void removeConflictingTransitions(class QList<class QAbstractTransition *> &, struct CalculationCache *);

    // RVA: 0x187A | Ordinal: 6267
        void restorablesToPropertyList(class QHash<class QStateMachinePrivate::RestorableId, class QVariant> const &) const;

    // RVA: 0x18AC | Ordinal: 6317
        void rootState(void) const;

    // RVA: 0x18CE | Ordinal: 6351
        void savedValueForRestorable(class QList<class QAbstractState *> const &, class QObject *, class QByteArray const &) const;

    // RVA: 0x1908 | Ordinal: 6409
        void selectAnimations(class QList<class QAbstractTransition *> const &) const;

    // RVA: 0x1909 | Ordinal: 6410
        void selectTransitions(class QEvent *, struct CalculationCache *);

    // RVA: 0x19A0 | Ordinal: 6561
        void setError(enum QStateMachine::Error, class QAbstractState *);

    // RVA: 0x1BDC | Ordinal: 7133
        void startupHook(void);

    // RVA: 0x1BE4 | Ordinal: 7141
        void stateEntryLessThan(class QAbstractState *, class QAbstractState *);

    // RVA: 0x1BE5 | Ordinal: 7142
        void stateExitLessThan(class QAbstractState *, class QAbstractState *);

    // RVA: 0x1CC6 | Ordinal: 7367
        void terminateActiveAnimations(class QAbstractState *, class QHash<class QAbstractState *, class QVector<struct QPropertyAssignment>> const &);

    // RVA: 0x1D38 | Ordinal: 7481
        void toFinalState(class QAbstractState *);

    // RVA: 0x1D45 | Ordinal: 7494
        void toHistoryState(class QAbstractState *);

    // RVA: 0x1DC2 | Ordinal: 7619
        void toStandardState(class QAbstractState *);

    // RVA: 0x1DC3 | Ordinal: 7620
        void toStandardState(class QAbstractState const *);

    // RVA: 0x1EEF | Ordinal: 7920
        void transitionStateEntryLessThan(class QAbstractTransition *, class QAbstractTransition *);

    // RVA: 0x1F6F | Ordinal: 8048
        void unregisterAllTransitions(void);

    // RVA: 0x1F73 | Ordinal: 8052
        void unregisterEventTransition(class QEventTransition *);

    // RVA: 0x1F76 | Ordinal: 8055
        void unregisterRestorables(class QList<class QAbstractState *> const &, class QObject *, class QByteArray const &);

    // RVA: 0x1F77 | Ordinal: 8056
        void unregisterSignalTransition(class QSignalTransition *);

    // RVA: 0x1F7C | Ordinal: 8061
        void unregisterTransition(class QAbstractTransition *);

    // RVA: 0x35F | Ordinal: 864
        void _QStateMachinePrivate(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QSTATEMACHINEPRIVATE_HPP
