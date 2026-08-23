#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QAbstractAnimation
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QAbstractAnimation
{
public:

    // RVA: 0x26 | Ordinal: 39
        void QAbstractAnimation(class QAbstractAnimationPrivate &, class QObject *);

    // RVA: 0x27 | Ordinal: 40
        void QAbstractAnimation(class QObject *);

    // RVA: 0xB64 | Ordinal: 2917
        void currentLoop(void) const;

    // RVA: 0xB65 | Ordinal: 2918
        void currentLoopChanged(int);

    // RVA: 0xB66 | Ordinal: 2919
        void currentLoopTime(void) const;

    // RVA: 0xB71 | Ordinal: 2930
        void currentTime(void) const;

    // RVA: 0xB7D | Ordinal: 2942
        void d_func(void);

    // RVA: 0xB7E | Ordinal: 2943
        void d_func(void) const;

    // RVA: 0xCA2 | Ordinal: 3235
        void direction(void) const;

    // RVA: 0xCA7 | Ordinal: 3240
        void directionChanged(enum QAbstractAnimation::Direction);

    // RVA: 0xD9D | Ordinal: 3486
        void event(class QEvent *);

    // RVA: 0xE4C | Ordinal: 3661
        void finished(void);

    // RVA: 0xF39 | Ordinal: 3898
        void group(void) const;

    // RVA: 0x12DB | Ordinal: 4828
        void loopCount(void) const;

    // RVA: 0x1341 | Ordinal: 4930
        void metaObject(void) const;

    // RVA: 0x14CE | Ordinal: 5327
        void pause(void);

    // RVA: 0x162A | Ordinal: 5675
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1667 | Ordinal: 5736
        void qt_metacast(char const *);

    // RVA: 0x16AD | Ordinal: 5806
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1884 | Ordinal: 6277
        void resume(void);

    // RVA: 0x195F | Ordinal: 6496
        void setCurrentTime(int);

    // RVA: 0x1983 | Ordinal: 6532
        void setDirection(enum QAbstractAnimation::Direction);

    // RVA: 0x1A04 | Ordinal: 6661
        void setLoopCount(int);

    // RVA: 0x1A46 | Ordinal: 6727
        void setPaused(bool);

    // RVA: 0x1B96 | Ordinal: 7063
        void start(enum QAbstractAnimation::DeletionPolicy);

    // RVA: 0x1BDE | Ordinal: 7135
        void state(void) const;

    // RVA: 0x1BE1 | Ordinal: 7138
        void stateChanged(enum QAbstractAnimation::State, enum QAbstractAnimation::State);

    // RVA: 0x1C3A | Ordinal: 7227
        void stop(void);

    // RVA: 0x1E6F | Ordinal: 7792
        void totalDuration(void) const;

    // RVA: 0x1E70 | Ordinal: 7793
        void tr(char const *, char const *, int);

    // RVA: 0x1EB0 | Ordinal: 7857
        void trUtf8(char const *, char const *, int);

    // RVA: 0x1F88 | Ordinal: 8073
        void updateDirection(enum QAbstractAnimation::Direction);

    // RVA: 0x1F8E | Ordinal: 8079
        void updateState(enum QAbstractAnimation::State, enum QAbstractAnimation::State);

    // RVA: 0x2D2 | Ordinal: 723
        void _QAbstractAnimation(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QABSTRACTANIMATION_HPP
