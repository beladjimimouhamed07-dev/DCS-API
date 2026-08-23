#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QStyleAnimation
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QStyleAnimation
{
public:

    // RVA: 0x118 | Ordinal: 281
        void QStyleAnimation(class QObject *);

    // RVA: 0xA01 | Ordinal: 2562
        void delay(void) const;

    // RVA: 0xAE7 | Ordinal: 2792
        void duration(void) const;

    // RVA: 0xC6E | Ordinal: 3183
        void frameRate(void) const;

    // RVA: 0xF65 | Ordinal: 3942
        void isUpdateNeeded(void) const;

    // RVA: 0x117F | Ordinal: 4480
        void metaObject(void) const;

    // RVA: 0x1498 | Ordinal: 5273
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x152B | Ordinal: 5420
        void qt_metacast(char const *);

    // RVA: 0x15C1 | Ordinal: 5570
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1908 | Ordinal: 6409
        void setDelay(int);

    // RVA: 0x1938 | Ordinal: 6457
        void setDuration(int);

    // RVA: 0x19B8 | Ordinal: 6585
        void setFrameRate(enum QStyleAnimation::FrameRate);

    // RVA: 0x1C47 | Ordinal: 7240
        void setStartTime(class QTime const &);

    // RVA: 0x1E78 | Ordinal: 7801
        void start(void);

    // RVA: 0x1E85 | Ordinal: 7814
        void startTime(void) const;

    // RVA: 0x1FC4 | Ordinal: 8133
        void target(void) const;

    // RVA: 0x20E7 | Ordinal: 8424
        void tr(char const *, char const *, int);

    // RVA: 0x217A | Ordinal: 8571
        void trUtf8(char const *, char const *, int);

    // RVA: 0x221B | Ordinal: 8732
        void updateCurrentTime(int);

    // RVA: 0x2253 | Ordinal: 8788
        void updateTarget(void);

    // RVA: 0x253 | Ordinal: 596
        void _QStyleAnimation(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QSTYLEANIMATION_HPP
