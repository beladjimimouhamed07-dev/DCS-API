#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QAbstractSpinBox
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QAbstractSpinBox
{
public:

    // RVA: 0xD | Ordinal: 14
        void QAbstractSpinBox(class QAbstractSpinBoxPrivate &, class QWidget *);

    // RVA: 0xE | Ordinal: 15
        void QAbstractSpinBox(class QWidget *);

    // RVA: 0x5BA | Ordinal: 1467
        void alignment(void) const;

    // RVA: 0x66B | Ordinal: 1644
        void buttonSymbols(void) const;

    // RVA: 0x6B1 | Ordinal: 1714
        void changeEvent(class QEvent *);

    // RVA: 0x70B | Ordinal: 1804
        void clear(void);

    // RVA: 0x74E | Ordinal: 1871
        void closeEvent(class QCloseEvent *);

    // RVA: 0x7C8 | Ordinal: 1993
        void contextMenuEvent(class QContextMenuEvent *);

    // RVA: 0x7ED | Ordinal: 2030
        void correctionMode(void) const;

    // RVA: 0x8B1 | Ordinal: 2226
        void d_func(void);

    // RVA: 0x8B2 | Ordinal: 2227
        void d_func(void) const;

    // RVA: 0xAF1 | Ordinal: 2802
        void editingFinished(void);

    // RVA: 0xB31 | Ordinal: 2866
        void event(class QEvent *);

    // RVA: 0xBF0 | Ordinal: 3057
        void fixup(class QString &) const;

    // RVA: 0xC02 | Ordinal: 3075
        void focusInEvent(class QFocusEvent *);

    // RVA: 0xC2A | Ordinal: 3115
        void focusOutEvent(class QFocusEvent *);

    // RVA: 0xCD8 | Ordinal: 3289
        void hasAcceptableInput(void) const;

    // RVA: 0xCE5 | Ordinal: 3302
        void hasFrame(void) const;

    // RVA: 0xD28 | Ordinal: 3369
        void hideEvent(class QHideEvent *);

    // RVA: 0xDE1 | Ordinal: 3554
        void initStyleOption(class QStyleOptionSpinBox *) const;

    // RVA: 0xE1A | Ordinal: 3611
        void inputMethodQuery(enum Qt::InputMethodQuery) const;

    // RVA: 0xE83 | Ordinal: 3716
        void interpretText(void);

    // RVA: 0xE9D | Ordinal: 3742
        void isAccelerated(void) const;

    // RVA: 0xEF0 | Ordinal: 3825
        void isGroupSeparatorShown(void) const;

    // RVA: 0xF2F | Ordinal: 3888
        void isReadOnly(void) const;

    // RVA: 0xFF7 | Ordinal: 4088
        void keyPressEvent(class QKeyEvent *);

    // RVA: 0x1012 | Ordinal: 4115
        void keyReleaseEvent(class QKeyEvent *);

    // RVA: 0x1027 | Ordinal: 4136
        void keyboardTracking(void) const;

    // RVA: 0x105A | Ordinal: 4187
        void lineEdit(void) const;

    // RVA: 0x1111 | Ordinal: 4370
        void metaObject(void) const;

    // RVA: 0x11CC | Ordinal: 4557
        void minimumSizeHint(void) const;

    // RVA: 0x1213 | Ordinal: 4628
        void mouseMoveEvent(class QMouseEvent *);

    // RVA: 0x1233 | Ordinal: 4660
        void mousePressEvent(class QMouseEvent *);

    // RVA: 0x1254 | Ordinal: 4693
        void mouseReleaseEvent(class QMouseEvent *);

    // RVA: 0x1322 | Ordinal: 4899
        void paintEvent(class QPaintEvent *);

    // RVA: 0x142A | Ordinal: 5163
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14BD | Ordinal: 5310
        void qt_metacast(char const *);

    // RVA: 0x1553 | Ordinal: 5460
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1697 | Ordinal: 5784
        void resizeEvent(class QResizeEvent *);

    // RVA: 0x1793 | Ordinal: 6036
        void selectAll(void);

    // RVA: 0x17E3 | Ordinal: 6116
        void setAccelerated(bool);

    // RVA: 0x1802 | Ordinal: 6147
        void setAlignment(class QFlags<enum Qt::AlignmentFlag>);

    // RVA: 0x1852 | Ordinal: 6227
        void setButtonSymbols(enum QAbstractSpinBox::ButtonSymbols);

    // RVA: 0x18B1 | Ordinal: 6322
        void setCorrectionMode(enum QAbstractSpinBox::CorrectionMode);

    // RVA: 0x19B5 | Ordinal: 6582
        void setFrame(bool);

    // RVA: 0x19DE | Ordinal: 6623
        void setGroupSeparatorShown(bool);

    // RVA: 0x1A56 | Ordinal: 6743
        void setKeyboardTracking(bool);

    // RVA: 0x1A75 | Ordinal: 6774
        void setLineEdit(class QLineEdit *);

    // RVA: 0x1B7C | Ordinal: 7037
        void setReadOnly(bool);

    // RVA: 0x1C3A | Ordinal: 7227
        void setSpecialValueText(class QString const &);

    // RVA: 0x1D63 | Ordinal: 7524
        void setWrapping(bool);

    // RVA: 0x1D96 | Ordinal: 7575
        void showEvent(class QShowEvent *);

    // RVA: 0x1DE4 | Ordinal: 7653
        void sizeHint(void) const;

    // RVA: 0x1E5A | Ordinal: 7771
        void specialValueText(void) const;

    // RVA: 0x1F2A | Ordinal: 7979
        void stepBy(int);

    // RVA: 0x1F2C | Ordinal: 7981
        void stepDown(void);

    // RVA: 0x1F2D | Ordinal: 7982
        void stepEnabled(void) const;

    // RVA: 0x1F31 | Ordinal: 7986
        void stepUp(void);

    // RVA: 0x1FD1 | Ordinal: 8146
        void text(void) const;

    // RVA: 0x201E | Ordinal: 8223
        void timerEvent(class QTimerEvent *);

    // RVA: 0x2079 | Ordinal: 8314
        void tr(char const *, char const *, int);

    // RVA: 0x210C | Ordinal: 8461
        void trUtf8(char const *, char const *, int);

    // RVA: 0x2262 | Ordinal: 8803
        void validate(class QString &, int &) const;

    // RVA: 0x22E1 | Ordinal: 8930
        void wheelEvent(class QWheelEvent *);

    // RVA: 0x233D | Ordinal: 9022
        void wrapping(void) const;

    // RVA: 0x1B7 | Ordinal: 440
        void _QAbstractSpinBox(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QABSTRACTSPINBOX_HPP
