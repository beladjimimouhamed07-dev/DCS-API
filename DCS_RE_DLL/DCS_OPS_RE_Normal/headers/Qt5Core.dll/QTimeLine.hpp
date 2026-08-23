#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QTimeLine
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTimeLine
{
public:

    // RVA: 0x23E | Ordinal: 575
        void QTimeLine(int, class QObject *);

    // RVA: 0xB62 | Ordinal: 2915
        void currentFrame(void) const;

    // RVA: 0xB73 | Ordinal: 2932
        void currentTime(void) const;

    // RVA: 0xB76 | Ordinal: 2935
        void currentValue(void) const;

    // RVA: 0xB7A | Ordinal: 2939
        void curveShape(void) const;

    // RVA: 0xBE6 | Ordinal: 3047
        void d_func(void);

    // RVA: 0xBE7 | Ordinal: 3048
        void d_func(void) const;

    // RVA: 0xCA6 | Ordinal: 3239
        void direction(void) const;

    // RVA: 0xCE0 | Ordinal: 3297
        void duration(void) const;

    // RVA: 0xCEB | Ordinal: 3308
        void easingCurve(void) const;

    // RVA: 0xD2E | Ordinal: 3375
        void endFrame(void) const;

    // RVA: 0xE52 | Ordinal: 3667
        void finished(struct QTimeLine::QPrivateSignal);

    // RVA: 0xE89 | Ordinal: 3722
        void frameChanged(int, struct QTimeLine::QPrivateSignal);

    // RVA: 0xE8A | Ordinal: 3723
        void frameForTime(int) const;

    // RVA: 0x12DC | Ordinal: 4829
        void loopCount(void) const;

    // RVA: 0x1376 | Ordinal: 4983
        void metaObject(void) const;

    // RVA: 0x165E | Ordinal: 5727
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x169B | Ordinal: 5788
        void qt_metacast(char const *);

    // RVA: 0x16E2 | Ordinal: 5859
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1886 | Ordinal: 6279
        void resume(void);

    // RVA: 0x1960 | Ordinal: 6497
        void setCurrentTime(int);

    // RVA: 0x1963 | Ordinal: 6500
        void setCurveShape(enum QTimeLine::CurveShape);

    // RVA: 0x1984 | Ordinal: 6533
        void setDirection(enum QTimeLine::Direction);

    // RVA: 0x1986 | Ordinal: 6535
        void setDuration(int);

    // RVA: 0x1989 | Ordinal: 6538
        void setEasingCurve(class QEasingCurve const &);

    // RVA: 0x1998 | Ordinal: 6553
        void setEndFrame(int);

    // RVA: 0x19D1 | Ordinal: 6610
        void setFrameRange(int, int);

    // RVA: 0x1A05 | Ordinal: 6662
        void setLoopCount(int);

    // RVA: 0x1A49 | Ordinal: 6730
        void setPaused(bool);

    // RVA: 0x1AA3 | Ordinal: 6820
        void setStartFrame(int);

    // RVA: 0x1ACB | Ordinal: 6860
        void setUpdateInterval(int);

    // RVA: 0x1BA3 | Ordinal: 7076
        void start(void);

    // RVA: 0x1BB0 | Ordinal: 7089
        void startFrame(void) const;

    // RVA: 0x1BE0 | Ordinal: 7137
        void state(void) const;

    // RVA: 0x1BE3 | Ordinal: 7140
        void stateChanged(enum QTimeLine::State, struct QTimeLine::QPrivateSignal);

    // RVA: 0x1C3E | Ordinal: 7231
        void stop(void);

    // RVA: 0x1CD8 | Ordinal: 7385
        void timerEvent(class QTimerEvent *);

    // RVA: 0x1E60 | Ordinal: 7777
        void toggleDirection(void);

    // RVA: 0x1EA7 | Ordinal: 7848
        void tr(char const *, char const *, int);

    // RVA: 0x1EE6 | Ordinal: 7911
        void trUtf8(char const *, char const *, int);

    // RVA: 0x1F8C | Ordinal: 8077
        void updateInterval(void) const;

    // RVA: 0x1FC7 | Ordinal: 8136
        void valueChanged(double, struct QTimeLine::QPrivateSignal);

    // RVA: 0x1FCA | Ordinal: 8139
        void valueForTime(int) const;

    // RVA: 0x373 | Ordinal: 884
        void _QTimeLine(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QTIMELINE_HPP
