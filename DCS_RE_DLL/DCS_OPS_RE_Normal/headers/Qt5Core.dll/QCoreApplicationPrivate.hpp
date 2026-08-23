#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QCoreApplicationPrivate
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QCoreApplicationPrivate
{
public:

    // RVA: 0xBC | Ordinal: 189
        void QCoreApplicationPrivate(int &, char **, unsigned int);

    // RVA: 0x808 | Ordinal: 2057
        void addQtOptions(class QList<class QCommandLineOption> *);

    // RVA: 0x842 | Ordinal: 2115
        void appName(void) const;

    // RVA: 0x843 | Ordinal: 2116
        void appVersion(void) const;

    // RVA: 0x879 | Ordinal: 2170
        void appendApplicationPathToLibraryPaths(void);

    // RVA: 0x9B8 | Ordinal: 2489
        void checkInstance(char const *);

    // RVA: 0x9BB | Ordinal: 2492
        void checkReceiverThread(class QObject *);

    // RVA: 0x9D7 | Ordinal: 2520
        void cleanupThreadData(void);

    // RVA: 0x9F2 | Ordinal: 2547
        void clearApplicationFilePath(void);

    // RVA: 0xB2B | Ordinal: 2860
        void createEventDispatcher(void);

    // RVA: 0xC68 | Ordinal: 3177
        void deref(void);

    // RVA: 0xDB9 | Ordinal: 3514
        void eventDispatcherReady(void);

    // RVA: 0xDC8 | Ordinal: 3529
        void execCleanup(void);

    // RVA: 0xFEA | Ordinal: 4075
        void init(void);

    // RVA: 0xFED | Ordinal: 4078
        void initLocale(void);

    // RVA: 0x11E3 | Ordinal: 4580
        void isTranslatorInstalled(class QTranslator *);

    // RVA: 0x12D8 | Ordinal: 4825
        void lockThreadPostEventList(class QObject *);

    // RVA: 0x12EC | Ordinal: 4845
        void mainThread(void);

    // RVA: 0x1330 | Ordinal: 4913
        void maybeQuit(void);

    // RVA: 0x1451 | Ordinal: 5202
        void notify_helper(class QObject *, class QEvent *);

    // RVA: 0x1535 | Ordinal: 5430
        void processCommandLineArguments(void);

    // RVA: 0x15F0 | Ordinal: 5617
        void q_func(void);

    // RVA: 0x15F1 | Ordinal: 5618
        void q_func(void) const;

    // RVA: 0x1608 | Ordinal: 5641
        void qmljsDebugArgumentsString(void);

    // RVA: 0x1761 | Ordinal: 5986
        void ref(void);

    // RVA: 0x17F7 | Ordinal: 6136
        void removePostedEvent(class QEvent *);

    // RVA: 0x17F9 | Ordinal: 6138
        void removePostedTimerEvent(class QObject *, int);

    // RVA: 0x1913 | Ordinal: 6420
        void sendPostedEvents(class QObject *, int, class QThreadData *);

    // RVA: 0x1916 | Ordinal: 6423
        void sendThroughApplicationEventFilters(class QObject *, class QEvent *);

    // RVA: 0x1917 | Ordinal: 6424
        void sendThroughObjectEventFilters(class QObject *, class QEvent *);

    // RVA: 0x192A | Ordinal: 6443
        void setApplicationFilePath(class QString const &);

    // RVA: 0x19A6 | Ordinal: 6567
        void setEventSpontaneous(class QEvent *, bool);

    // RVA: 0x1AF9 | Ordinal: 6906
        void shouldQuit(void);

    // RVA: 0x1CC8 | Ordinal: 7369
        void testAttribute(unsigned int);

    // RVA: 0x1CCF | Ordinal: 7376
        void threadRequiresCoreApplication(void);

    // RVA: 0x2FB | Ordinal: 764
        void _QCoreApplicationPrivate(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QCOREAPPLICATIONPRIVATE_HPP
