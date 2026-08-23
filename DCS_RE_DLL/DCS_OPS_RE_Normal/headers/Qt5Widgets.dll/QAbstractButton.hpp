#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QAbstractButton
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QAbstractButton
{
public:

    // RVA: 0x0 | Ordinal: 1
        void QAbstractButton(class QAbstractButtonPrivate &, class QWidget *);

    // RVA: 0x1 | Ordinal: 2
        void QAbstractButton(class QWidget *);

    // RVA: 0x5DB | Ordinal: 1500
        void animateClick(int);

    // RVA: 0x5F7 | Ordinal: 1528
        void autoExclusive(void) const;

    // RVA: 0x5FF | Ordinal: 1536
        void autoRepeat(void) const;

    // RVA: 0x602 | Ordinal: 1539
        void autoRepeatDelay(void) const;

    // RVA: 0x603 | Ordinal: 1540
        void autoRepeatInterval(void) const;

    // RVA: 0x6AF | Ordinal: 1712
        void changeEvent(class QEvent *);

    // RVA: 0x6DA | Ordinal: 1755
        void checkStateSet(void);

    // RVA: 0x739 | Ordinal: 1850
        void click(void);

    // RVA: 0x73A | Ordinal: 1851
        void clicked(bool);

    // RVA: 0x8A5 | Ordinal: 2214
        void d_func(void);

    // RVA: 0x8A6 | Ordinal: 2215
        void d_func(void) const;

    // RVA: 0xB2D | Ordinal: 2862
        void event(class QEvent *);

    // RVA: 0xC00 | Ordinal: 3073
        void focusInEvent(class QFocusEvent *);

    // RVA: 0xC28 | Ordinal: 3113
        void focusOutEvent(class QFocusEvent *);

    // RVA: 0xCCF | Ordinal: 3280
        void group(void) const;

    // RVA: 0xD48 | Ordinal: 3401
        void hitButton(class QPoint const &) const;

    // RVA: 0xD83 | Ordinal: 3460
        void icon(void) const;

    // RVA: 0xD91 | Ordinal: 3474
        void iconSize(void) const;

    // RVA: 0xEB4 | Ordinal: 3765
        void isCheckable(void) const;

    // RVA: 0xEB7 | Ordinal: 3768
        void isChecked(void) const;

    // RVA: 0xECE | Ordinal: 3791
        void isDown(void) const;

    // RVA: 0xFF3 | Ordinal: 4084
        void keyPressEvent(class QKeyEvent *);

    // RVA: 0x1011 | Ordinal: 4114
        void keyReleaseEvent(class QKeyEvent *);

    // RVA: 0x110C | Ordinal: 4365
        void metaObject(void) const;

    // RVA: 0x1210 | Ordinal: 4625
        void mouseMoveEvent(class QMouseEvent *);

    // RVA: 0x1230 | Ordinal: 4657
        void mousePressEvent(class QMouseEvent *);

    // RVA: 0x1251 | Ordinal: 4690
        void mouseReleaseEvent(class QMouseEvent *);

    // RVA: 0x12A3 | Ordinal: 4772
        void nextCheckState(void);

    // RVA: 0x13CA | Ordinal: 5067
        void pressed(void);

    // RVA: 0x1425 | Ordinal: 5158
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14B8 | Ordinal: 5305
        void qt_metacast(char const *);

    // RVA: 0x154E | Ordinal: 5455
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1620 | Ordinal: 5665
        void released(void);

    // RVA: 0x181D | Ordinal: 6174
        void setAutoExclusive(bool);

    // RVA: 0x1824 | Ordinal: 6181
        void setAutoRepeat(bool);

    // RVA: 0x1827 | Ordinal: 6184
        void setAutoRepeatDelay(int);

    // RVA: 0x1828 | Ordinal: 6185
        void setAutoRepeatInterval(int);

    // RVA: 0x1871 | Ordinal: 6258
        void setCheckable(bool);

    // RVA: 0x1874 | Ordinal: 6261
        void setChecked(bool);

    // RVA: 0x192D | Ordinal: 6446
        void setDown(bool);

    // RVA: 0x1A02 | Ordinal: 6659
        void setIcon(class QIcon const &);

    // RVA: 0x1A0E | Ordinal: 6671
        void setIconSize(class QSize const &);

    // RVA: 0x1BFA | Ordinal: 7163
        void setShortcut(class QKeySequence const &);

    // RVA: 0x1C96 | Ordinal: 7319
        void setText(class QString const &);

    // RVA: 0x1D87 | Ordinal: 7560
        void shortcut(void) const;

    // RVA: 0x1FD0 | Ordinal: 8145
        void text(void) const;

    // RVA: 0x201B | Ordinal: 8220
        void timerEvent(class QTimerEvent *);

    // RVA: 0x2047 | Ordinal: 8264
        void toggle(void);

    // RVA: 0x204B | Ordinal: 8268
        void toggled(bool);

    // RVA: 0x2074 | Ordinal: 8309
        void tr(char const *, char const *, int);

    // RVA: 0x2107 | Ordinal: 8456
        void trUtf8(char const *, char const *, int);

    // RVA: 0x1B0 | Ordinal: 433
        void _QAbstractButton(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QABSTRACTBUTTON_HPP
