#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QObjectPrivate
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QObjectPrivate
{
public:

    // RVA: 0x1A3 | Ordinal: 420
        void QObjectPrivate(int);

    // RVA: 0x7AE | Ordinal: 1967
        void _q_reregisterTimers(void *);

    // RVA: 0x7DA | Ordinal: 2011
        void addConnection(int, struct QObjectPrivate::Connection *);

    // RVA: 0x9B6 | Ordinal: 2487
        void checkForIncompatibleLibraryVersion(int) const;

    // RVA: 0xA77 | Ordinal: 2680
        void connect(class QObject const *, int, class QtPrivate::QSlotObjectBase *, enum Qt::ConnectionType);

    // RVA: 0xA79 | Ordinal: 2682
        void connectImpl(class QObject const *, int, class QObject const *, void **, class QtPrivate::QSlotObjectBase *, enum Qt::ConnectionType, int const *, struct QMetaObject const *);

    // RVA: 0xA7D | Ordinal: 2686
        void connectNotify(class QMetaMethod const &);

    // RVA: 0xC64 | Ordinal: 3173
        void deleteChildren(void);

    // RVA: 0xCB1 | Ordinal: 3250
        void disconnect(class QObject const *, int, void **);

    // RVA: 0xCB6 | Ordinal: 3255
        void disconnectNotify(class QMetaMethod const &);

    // RVA: 0xD57 | Ordinal: 3416
        void ensureConnectionData(void);

    // RVA: 0xF19 | Ordinal: 3866
        void get(class QObject *);

    // RVA: 0xF1A | Ordinal: 3867
        void get(class QObject const *);

    // RVA: 0x10A6 | Ordinal: 4263
        void isDeclarativeSignalConnected(unsigned int) const;

    // RVA: 0x11A0 | Ordinal: 4513
        void isSender(class QObject const *, char const *) const;

    // RVA: 0x11B3 | Ordinal: 4532
        void isSignalConnected(unsigned int, bool) const;

    // RVA: 0x1336 | Ordinal: 4919
        void maybeSignalConnected(unsigned int) const;

    // RVA: 0x13E8 | Ordinal: 5097
        void moveToThread_helper(void);

    // RVA: 0x15FC | Ordinal: 5629
        void q_func(void);

    // RVA: 0x15FD | Ordinal: 5630
        void q_func(void) const;

    // RVA: 0x175D | Ordinal: 5982
        void receiverList(char const *) const;

    // RVA: 0x191C | Ordinal: 6429
        void senderList(void) const;

    // RVA: 0x1A39 | Ordinal: 6714
        void setParent_helper(class QObject *);

    // RVA: 0x1AB8 | Ordinal: 6841
        void setThreadData_helper(class QThreadData *, class QThreadData *);

    // RVA: 0x1B17 | Ordinal: 6936
        void signalIndex(char const *, struct QMetaObject const **) const;

    // RVA: 0x341 | Ordinal: 834
        void _QObjectPrivate(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QOBJECTPRIVATE_HPP
