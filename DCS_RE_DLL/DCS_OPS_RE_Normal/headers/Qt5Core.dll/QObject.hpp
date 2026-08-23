#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QObject
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QObject
{
public:

    // RVA: 0x19F | Ordinal: 416
        void QObject(class QObjectPrivate &, class QObject *);

    // RVA: 0x1A0 | Ordinal: 417
        void QObject(class QObject *);

    // RVA: 0x919 | Ordinal: 2330
        void blockSignals(bool);

    // RVA: 0x9BF | Ordinal: 2496
        void childEvent(class QChildEvent *);

    // RVA: 0x9C5 | Ordinal: 2502
        void children(void) const;

    // RVA: 0xA74 | Ordinal: 2677
        void connect(class QObject const *, char const *, char const *, enum Qt::ConnectionType) const;

    // RVA: 0xA75 | Ordinal: 2678
        void connect(class QObject const *, class QMetaMethod const &, class QObject const *, class QMetaMethod const &, enum Qt::ConnectionType);

    // RVA: 0xA76 | Ordinal: 2679
        void connect(class QObject const *, char const *, class QObject const *, char const *, enum Qt::ConnectionType);

    // RVA: 0xA78 | Ordinal: 2681
        void connectImpl(class QObject const *, void **, class QObject const *, void **, class QtPrivate::QSlotObjectBase *, enum Qt::ConnectionType, int const *, struct QMetaObject const *);

    // RVA: 0xA7C | Ordinal: 2685
        void connectNotify(class QMetaMethod const &);

    // RVA: 0xB7B | Ordinal: 2940
        void customEvent(class QEvent *);

    // RVA: 0xBBE | Ordinal: 3007
        void d_func(void);

    // RVA: 0xBBF | Ordinal: 3008
        void d_func(void) const;

    // RVA: 0xC65 | Ordinal: 3174
        void deleteLater(void);

    // RVA: 0xC70 | Ordinal: 3185
        void destroyed(class QObject *);

    // RVA: 0xCAC | Ordinal: 3245
        void disconnect(char const *, class QObject const *, char const *) const;

    // RVA: 0xCAD | Ordinal: 3246
        void disconnect(class QObject const *, char const *) const;

    // RVA: 0xCAE | Ordinal: 3247
        void disconnect(class QMetaObject::Connection const &);

    // RVA: 0xCAF | Ordinal: 3248
        void disconnect(class QObject const *, class QMetaMethod const &, class QObject const *, class QMetaMethod const &);

    // RVA: 0xCB0 | Ordinal: 3249
        void disconnect(class QObject const *, char const *, class QObject const *, char const *);

    // RVA: 0xCB2 | Ordinal: 3251
        void disconnectImpl(class QObject const *, void **, class QObject const *, void **, struct QMetaObject const *);

    // RVA: 0xCB5 | Ordinal: 3254
        void disconnectNotify(class QMetaMethod const &);

    // RVA: 0xCD9 | Ordinal: 3290
        void dumpObjectInfo(void);

    // RVA: 0xCDA | Ordinal: 3291
        void dumpObjectInfo(void) const;

    // RVA: 0xCDB | Ordinal: 3292
        void dumpObjectTree(void);

    // RVA: 0xCDC | Ordinal: 3293
        void dumpObjectTree(void) const;

    // RVA: 0xCE8 | Ordinal: 3305
        void dynamicPropertyNames(void) const;

    // RVA: 0xDA8 | Ordinal: 3497
        void event(class QEvent *);

    // RVA: 0xDBA | Ordinal: 3515
        void eventFilter(class QObject *, class QEvent *);

    // RVA: 0xFE8 | Ordinal: 4073
        void inherits(char const *) const;

    // RVA: 0x103A | Ordinal: 4155
        void installEventFilter(class QObject *);

    // RVA: 0x11B2 | Ordinal: 4531
        void isSignalConnected(class QMetaMethod const &) const;

    // RVA: 0x1223 | Ordinal: 4644
        void isWidgetType(void) const;

    // RVA: 0x1224 | Ordinal: 4645
        void isWindowType(void) const;

    // RVA: 0x1253 | Ordinal: 4692
        void killTimer(int);

    // RVA: 0x1361 | Ordinal: 4962
        void metaObject(void) const;

    // RVA: 0x13E7 | Ordinal: 5096
        void moveToThread(class QThread *);

    // RVA: 0x146B | Ordinal: 5228
        void objectName(void) const;

    // RVA: 0x146C | Ordinal: 5229
        void objectNameChanged(class QString const &, struct QObject::QPrivateSignal);

    // RVA: 0x14B0 | Ordinal: 5297
        void parent(void) const;

    // RVA: 0x1556 | Ordinal: 5463
        void property(char const *) const;

    // RVA: 0x1649 | Ordinal: 5706
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1686 | Ordinal: 5767
        void qt_metacast(char const *);

    // RVA: 0x16CD | Ordinal: 5838
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x175F | Ordinal: 5984
        void receivers(char const *) const;

    // RVA: 0x178B | Ordinal: 6028
        void registerUserData(void);

    // RVA: 0x17DB | Ordinal: 6108
        void removeEventFilter(class QObject *);

    // RVA: 0x191A | Ordinal: 6427
        void sender(void) const;

    // RVA: 0x191F | Ordinal: 6432
        void senderSignalIndex(void) const;

    // RVA: 0x1A2A | Ordinal: 6699
        void setObjectName(class QString const &);

    // RVA: 0x1A38 | Ordinal: 6713
        void setParent(class QObject *);

    // RVA: 0x1A5F | Ordinal: 6752
        void setProperty(char const *, class QVariant const &);

    // RVA: 0x1ACF | Ordinal: 6864
        void setUserData(unsigned int, class QObjectUserData *);

    // RVA: 0x1B19 | Ordinal: 6938
        void signalsBlocked(void) const;

    // RVA: 0x1BB7 | Ordinal: 7096
        void startTimer(int, enum Qt::TimerType);

    // RVA: 0x1BB8 | Ordinal: 7097
        void startTimer(class std::chrono::duration<__int64, struct std::ratio<1, 1000>>, enum Qt::TimerType);

    // RVA: 0x1CCE | Ordinal: 7375
        void thread(void) const;

    // RVA: 0x1CD7 | Ordinal: 7384
        void timerEvent(class QTimerEvent *);

    // RVA: 0x1E92 | Ordinal: 7827
        void tr(char const *, char const *, int);

    // RVA: 0x1ED1 | Ordinal: 7890
        void trUtf8(char const *, char const *, int);

    // RVA: 0x1F9B | Ordinal: 8092
        void userData(unsigned int) const;

    // RVA: 0x33E | Ordinal: 831
        void _QObject(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QOBJECT_HPP
