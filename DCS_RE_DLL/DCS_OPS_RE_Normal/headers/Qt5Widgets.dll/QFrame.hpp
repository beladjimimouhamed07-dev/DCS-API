#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QFrame
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QFrame
{
public:

    // RVA: 0x58 | Ordinal: 89
        void QFrame(class QFramePrivate &, class QWidget *, class QFlags<enum Qt::WindowType>);

    // RVA: 0x59 | Ordinal: 90
        void QFrame(class QWidget *, class QFlags<enum Qt::WindowType>);

    // RVA: 0x6BA | Ordinal: 1723
        void changeEvent(class QEvent *);

    // RVA: 0x8F1 | Ordinal: 2290
        void d_func(void);

    // RVA: 0x8F2 | Ordinal: 2291
        void d_func(void) const;

    // RVA: 0xAB3 | Ordinal: 2740
        void drawFrame(class QPainter *);

    // RVA: 0xB40 | Ordinal: 2881
        void event(class QEvent *);

    // RVA: 0xC6F | Ordinal: 3184
        void frameRect(void) const;

    // RVA: 0xC70 | Ordinal: 3185
        void frameShadow(void) const;

    // RVA: 0xC71 | Ordinal: 3186
        void frameShape(void) const;

    // RVA: 0xC74 | Ordinal: 3189
        void frameStyle(void) const;

    // RVA: 0xC76 | Ordinal: 3191
        void frameWidth(void) const;

    // RVA: 0xDE8 | Ordinal: 3561
        void initStyleOption(class QStyleOptionFrame *) const;

    // RVA: 0x105E | Ordinal: 4191
        void lineWidth(void) const;

    // RVA: 0x1134 | Ordinal: 4405
        void metaObject(void) const;

    // RVA: 0x11A2 | Ordinal: 4515
        void midLineWidth(void) const;

    // RVA: 0x132B | Ordinal: 4908
        void paintEvent(class QPaintEvent *);

    // RVA: 0x144D | Ordinal: 5198
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14E0 | Ordinal: 5345
        void qt_metacast(char const *);

    // RVA: 0x1576 | Ordinal: 5495
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x19B9 | Ordinal: 6586
        void setFrameRect(class QRect const &);

    // RVA: 0x19BA | Ordinal: 6587
        void setFrameShadow(enum QFrame::Shadow);

    // RVA: 0x19BB | Ordinal: 6588
        void setFrameShape(enum QFrame::Shape);

    // RVA: 0x19BC | Ordinal: 6589
        void setFrameStyle(int);

    // RVA: 0x1A77 | Ordinal: 6776
        void setLineWidth(int);

    // RVA: 0x1AA7 | Ordinal: 6824
        void setMidLineWidth(int);

    // RVA: 0x1DF1 | Ordinal: 7666
        void sizeHint(void) const;

    // RVA: 0x209C | Ordinal: 8349
        void tr(char const *, char const *, int);

    // RVA: 0x212F | Ordinal: 8496
        void trUtf8(char const *, char const *, int);

    // RVA: 0x1E3 | Ordinal: 484
        void _QFrame(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QFRAME_HPP
