#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QKeySequenceEdit
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QKeySequenceEdit
{
public:

    // RVA: 0xB8 | Ordinal: 185
        void QKeySequenceEdit(class QKeySequenceEditPrivate &, class QWidget *, class QFlags<enum Qt::WindowType>);

    // RVA: 0xB9 | Ordinal: 186
        void QKeySequenceEdit(class QKeySequence const &, class QWidget *);

    // RVA: 0xBA | Ordinal: 187
        void QKeySequenceEdit(class QWidget *);

    // RVA: 0x711 | Ordinal: 1810
        void clear(void);

    // RVA: 0x94D | Ordinal: 2382
        void d_func(void);

    // RVA: 0x94E | Ordinal: 2383
        void d_func(void) const;

    // RVA: 0xAF2 | Ordinal: 2803
        void editingFinished(void);

    // RVA: 0xB48 | Ordinal: 2889
        void event(class QEvent *);

    // RVA: 0x1001 | Ordinal: 4098
        void keyPressEvent(class QKeyEvent *);

    // RVA: 0x1019 | Ordinal: 4122
        void keyReleaseEvent(class QKeyEvent *);

    // RVA: 0x101D | Ordinal: 4126
        void keySequence(void) const;

    // RVA: 0x101E | Ordinal: 4127
        void keySequenceChanged(class QKeySequence const &);

    // RVA: 0x114F | Ordinal: 4432
        void metaObject(void) const;

    // RVA: 0x1468 | Ordinal: 5225
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14FB | Ordinal: 5372
        void qt_metacast(char const *);

    // RVA: 0x1591 | Ordinal: 5522
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1A52 | Ordinal: 6739
        void setKeySequence(class QKeySequence const &);

    // RVA: 0x2021 | Ordinal: 8226
        void timerEvent(class QTimerEvent *);

    // RVA: 0x20B7 | Ordinal: 8376
        void tr(char const *, char const *, int);

    // RVA: 0x214A | Ordinal: 8523
        void trUtf8(char const *, char const *, int);

    // RVA: 0x21E | Ordinal: 543
        void _QKeySequenceEdit(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QKEYSEQUENCEEDIT_HPP
