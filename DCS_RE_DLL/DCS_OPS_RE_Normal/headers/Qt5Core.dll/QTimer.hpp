#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QTimer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTimer
{
public:

    // RVA: 0x245 | Ordinal: 582
        void QTimer(class QObject *);

    // RVA: 0xC61 | Ordinal: 3170
        void defaultTypeFor(int);

    // RVA: 0xC62 | Ordinal: 3171
        void defaultTypeFor(class std::chrono::duration<__int64, struct std::ratio<1, 1000>>);

    // RVA: 0x105A | Ordinal: 4187
        void interval(void) const;

    // RVA: 0x105B | Ordinal: 4188
        void intervalAsDuration(void) const;

    // RVA: 0x1071 | Ordinal: 4210
        void isActive(void) const;

    // RVA: 0x11BB | Ordinal: 4540
        void isSingleShot(void) const;

    // RVA: 0x1254 | Ordinal: 4693
        void killTimer(int);

    // RVA: 0x1377 | Ordinal: 4984
        void metaObject(void) const;

    // RVA: 0x165F | Ordinal: 5728
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x169C | Ordinal: 5789
        void qt_metacast(char const *);

    // RVA: 0x16E3 | Ordinal: 5860
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x179D | Ordinal: 6046
        void remainingTime(void) const;

    // RVA: 0x179F | Ordinal: 6048
        void remainingTimeAsDuration(void) const;

    // RVA: 0x19EB | Ordinal: 6636
        void setInterval(int);

    // RVA: 0x19EC | Ordinal: 6637
        void setInterval(class std::chrono::duration<__int64, struct std::ratio<1, 1000>>);

    // RVA: 0x1A8C | Ordinal: 6797
        void setSingleShot(bool);

    // RVA: 0x1AC0 | Ordinal: 6849
        void setTimerType(enum Qt::TimerType);

    // RVA: 0x1B25 | Ordinal: 6950
        void singleShot(int, class QObject const *, char const *);

    // RVA: 0x1B26 | Ordinal: 6951
        void singleShot(int, enum Qt::TimerType, class QObject const *, char const *);

    // RVA: 0x1B27 | Ordinal: 6952
        void singleShot(class std::chrono::duration<__int64, struct std::ratio<1, 1000>>, class QObject const *, char const *);

    // RVA: 0x1B28 | Ordinal: 6953
        void singleShot(class std::chrono::duration<__int64, struct std::ratio<1, 1000>>, enum Qt::TimerType, class QObject const *, char const *);

    // RVA: 0x1B29 | Ordinal: 6954
        void singleShotImpl(int, enum Qt::TimerType, class QObject const *, class QtPrivate::QSlotObjectBase *);

    // RVA: 0x1B2A | Ordinal: 6955
        void singleShotImpl(class std::chrono::duration<__int64, struct std::ratio<1, 1000>>, enum Qt::TimerType, class QObject const *, class QtPrivate::QSlotObjectBase *);

    // RVA: 0x1BA4 | Ordinal: 7077
        void start(int);

    // RVA: 0x1BA5 | Ordinal: 7078
        void start(class std::chrono::duration<__int64, struct std::ratio<1, 1000>>);

    // RVA: 0x1BA6 | Ordinal: 7079
        void start(void);

    // RVA: 0x1BB9 | Ordinal: 7098
        void startTimer(int);

    // RVA: 0x1C3F | Ordinal: 7232
        void stop(void);

    // RVA: 0x1CD6 | Ordinal: 7383
        void timeout(struct QTimer::QPrivateSignal);

    // RVA: 0x1CD9 | Ordinal: 7386
        void timerEvent(class QTimerEvent *);

    // RVA: 0x1CDC | Ordinal: 7389
        void timerId(void) const;

    // RVA: 0x1CDF | Ordinal: 7392
        void timerType(void) const;

    // RVA: 0x1EA8 | Ordinal: 7849
        void tr(char const *, char const *, int);

    // RVA: 0x1EE7 | Ordinal: 7912
        void trUtf8(char const *, char const *, int);

    // RVA: 0x375 | Ordinal: 886
        void _QTimer(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QTIMER_HPP
