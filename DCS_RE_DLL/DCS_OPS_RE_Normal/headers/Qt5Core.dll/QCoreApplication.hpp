#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QCoreApplication
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QCoreApplication
{
public:

    // RVA: 0xBA | Ordinal: 187
        void QCoreApplication(class QCoreApplicationPrivate &);

    // RVA: 0xBB | Ordinal: 188
        void QCoreApplication(int &, char **, int);

    // RVA: 0x7B8 | Ordinal: 1977
        void aboutToQuit(struct QCoreApplication::QPrivateSignal);

    // RVA: 0x7F5 | Ordinal: 2038
        void addLibraryPath(class QString const &);

    // RVA: 0x881 | Ordinal: 2178
        void applicationDirPath(void);

    // RVA: 0x882 | Ordinal: 2179
        void applicationFilePath(void);

    // RVA: 0x883 | Ordinal: 2180
        void applicationName(void);

    // RVA: 0x885 | Ordinal: 2182
        void applicationNameChanged(void);

    // RVA: 0x886 | Ordinal: 2183
        void applicationPid(void);

    // RVA: 0x887 | Ordinal: 2184
        void applicationVersion(void);

    // RVA: 0x888 | Ordinal: 2185
        void applicationVersionChanged(void);

    // RVA: 0x8A3 | Ordinal: 2212
        void arguments(void);

    // RVA: 0xA0B | Ordinal: 2572
        void closingDown(void);

    // RVA: 0xA66 | Ordinal: 2663
        void compressEvent(class QEvent *, class QObject *, class QPostEventList *);

    // RVA: 0xB93 | Ordinal: 2964
        void d_func(void);

    // RVA: 0xB94 | Ordinal: 2965
        void d_func(void) const;

    // RVA: 0xDA1 | Ordinal: 3490
        void event(class QEvent *);

    // RVA: 0xDB6 | Ordinal: 3511
        void eventDispatcher(void);

    // RVA: 0xDC4 | Ordinal: 3525
        void exec(void);

    // RVA: 0xDD2 | Ordinal: 3539
        void exit(int);

    // RVA: 0xE73 | Ordinal: 3700
        void flush(void);

    // RVA: 0xE85 | Ordinal: 3718
        void forwardEvent(class QObject *, class QEvent *, class QEvent *);

    // RVA: 0xF6A | Ordinal: 3947
        void hasPendingEvents(void);

    // RVA: 0x103D | Ordinal: 4158
        void installNativeEventFilter(class QAbstractNativeEventFilter *);

    // RVA: 0x103E | Ordinal: 4159
        void installTranslator(class QTranslator *);

    // RVA: 0x1040 | Ordinal: 4161
        void instance(void);

    // RVA: 0x1172 | Ordinal: 4467
        void isQuitLockEnabled(void);

    // RVA: 0x11A9 | Ordinal: 4522
        void isSetuidAllowed(void);

    // RVA: 0x12A1 | Ordinal: 4770
        void libraryPaths(void);

    // RVA: 0x12A2 | Ordinal: 4771
        void libraryPathsLocked(void);

    // RVA: 0x134E | Ordinal: 4943
        void metaObject(void) const;

    // RVA: 0x144A | Ordinal: 5195
        void notify(class QObject *, class QEvent *);

    // RVA: 0x144C | Ordinal: 5197
        void notifyInternal(class QObject *, class QEvent *);

    // RVA: 0x144B | Ordinal: 5196
        void notifyInternal2(class QObject *, class QEvent *);

    // RVA: 0x1492 | Ordinal: 5267
        void organizationDomain(void);

    // RVA: 0x1493 | Ordinal: 5268
        void organizationDomainChanged(void);

    // RVA: 0x1494 | Ordinal: 5269
        void organizationName(void);

    // RVA: 0x1496 | Ordinal: 5271
        void organizationNameChanged(void);

    // RVA: 0x1508 | Ordinal: 5385
        void postEvent(class QObject *, class QEvent *, int);

    // RVA: 0x1537 | Ordinal: 5432
        void processEvents(class QFlags<enum QEventLoop::ProcessEventsFlag>);

    // RVA: 0x1538 | Ordinal: 5433
        void processEvents(class QFlags<enum QEventLoop::ProcessEventsFlag>, int);

    // RVA: 0x1637 | Ordinal: 5688
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1674 | Ordinal: 5749
        void qt_metacast(char const *);

    // RVA: 0x16BA | Ordinal: 5819
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x16F8 | Ordinal: 5881
        void quit(void);

    // RVA: 0x17EA | Ordinal: 6123
        void removeLibraryPath(class QString const &);

    // RVA: 0x17EE | Ordinal: 6127
        void removeNativeEventFilter(class QAbstractNativeEventFilter *);

    // RVA: 0x17F8 | Ordinal: 6137
        void removePostedEvents(class QObject *, int);

    // RVA: 0x1809 | Ordinal: 6154
        void removeTranslator(class QTranslator *);

    // RVA: 0x1911 | Ordinal: 6418
        void sendEvent(class QObject *, class QEvent *);

    // RVA: 0x1912 | Ordinal: 6419
        void sendPostedEvents(class QObject *, int);

    // RVA: 0x1915 | Ordinal: 6422
        void sendSpontaneousEvent(class QObject *, class QEvent *);

    // RVA: 0x192B | Ordinal: 6444
        void setApplicationName(class QString const &);

    // RVA: 0x192C | Ordinal: 6445
        void setApplicationVersion(class QString const &);

    // RVA: 0x1931 | Ordinal: 6450
        void setAttribute(enum Qt::ApplicationAttribute, bool);

    // RVA: 0x19A3 | Ordinal: 6564
        void setEventDispatcher(class QAbstractEventDispatcher *);

    // RVA: 0x19FC | Ordinal: 6653
        void setLibraryPaths(class QStringList const &);

    // RVA: 0x1A2E | Ordinal: 6703
        void setOrganizationDomain(class QString const &);

    // RVA: 0x1A2F | Ordinal: 6704
        void setOrganizationName(class QString const &);

    // RVA: 0x1A68 | Ordinal: 6761
        void setQuitLockEnabled(bool);

    // RVA: 0x1A85 | Ordinal: 6790
        void setSetuidAllowed(bool);

    // RVA: 0x1BC4 | Ordinal: 7109
        void startingUp(void);

    // RVA: 0x1CC7 | Ordinal: 7368
        void testAttribute(enum Qt::ApplicationAttribute);

    // RVA: 0x1E7E | Ordinal: 7807
        void tr(char const *, char const *, int);

    // RVA: 0x1EBE | Ordinal: 7871
        void trUtf8(char const *, char const *, int);

    // RVA: 0x1EF4 | Ordinal: 7925
        void translate(char const *, char const *, char const *, int);

    // RVA: 0x1EF5 | Ordinal: 7926
        void translate(char const *, char const *, char const *, enum QCoreApplication::Encoding, int);

    // RVA: 0x2FA | Ordinal: 763
        void _QCoreApplication(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QCOREAPPLICATION_HPP
