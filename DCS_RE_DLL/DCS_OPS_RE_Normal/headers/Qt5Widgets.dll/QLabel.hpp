#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QLabel
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QLabel
{
public:

    // RVA: 0xBD | Ordinal: 190
        void QLabel(class QString const &, class QWidget *, class QFlags<enum Qt::WindowType>);

    // RVA: 0xBE | Ordinal: 191
        void QLabel(class QWidget *, class QFlags<enum Qt::WindowType>);

    // RVA: 0x5BF | Ordinal: 1472
        void alignment(void) const;

    // RVA: 0x658 | Ordinal: 1625
        void buddy(void) const;

    // RVA: 0x6BD | Ordinal: 1726
        void changeEvent(class QEvent *);

    // RVA: 0x712 | Ordinal: 1811
        void clear(void);

    // RVA: 0x7D0 | Ordinal: 2001
        void contextMenuEvent(class QContextMenuEvent *);

    // RVA: 0x951 | Ordinal: 2386
        void d_func(void);

    // RVA: 0x952 | Ordinal: 2387
        void d_func(void) const;

    // RVA: 0xB4A | Ordinal: 2891
        void event(class QEvent *);

    // RVA: 0xC0C | Ordinal: 3085
        void focusInEvent(class QFocusEvent *);

    // RVA: 0xC1E | Ordinal: 3103
        void focusNextPrevChild(bool);

    // RVA: 0xC32 | Ordinal: 3123
        void focusOutEvent(class QFocusEvent *);

    // RVA: 0xCF3 | Ordinal: 3316
        void hasScaledContents(void) const;

    // RVA: 0xCF6 | Ordinal: 3319
        void hasSelectedText(void) const;

    // RVA: 0xD0E | Ordinal: 3343
        void heightForWidth(int) const;

    // RVA: 0xDA9 | Ordinal: 3498
        void indent(void) const;

    // RVA: 0x1002 | Ordinal: 4099
        void keyPressEvent(class QKeyEvent *);

    // RVA: 0x1063 | Ordinal: 4196
        void linkActivated(class QString const &);

    // RVA: 0x1066 | Ordinal: 4199
        void linkHovered(class QString const &);

    // RVA: 0x10CD | Ordinal: 4302
        void margin(void) const;

    // RVA: 0x1151 | Ordinal: 4434
        void metaObject(void) const;

    // RVA: 0x11D5 | Ordinal: 4566
        void minimumSizeHint(void) const;

    // RVA: 0x121D | Ordinal: 4638
        void mouseMoveEvent(class QMouseEvent *);

    // RVA: 0x1240 | Ordinal: 4673
        void mousePressEvent(class QMouseEvent *);

    // RVA: 0x125F | Ordinal: 4704
        void mouseReleaseEvent(class QMouseEvent *);

    // RVA: 0x128D | Ordinal: 4750
        void movie(void) const;

    // RVA: 0x12DD | Ordinal: 4830
        void openExternalLinks(void) const;

    // RVA: 0x1330 | Ordinal: 4913
        void paintEvent(class QPaintEvent *);

    // RVA: 0x137E | Ordinal: 4991
        void picture(enum Qt::ReturnByValueConstant) const;

    // RVA: 0x137F | Ordinal: 4992
        void picture(void) const;

    // RVA: 0x138A | Ordinal: 5003
        void pixmap(enum Qt::ReturnByValueConstant) const;

    // RVA: 0x138B | Ordinal: 5004
        void pixmap(void) const;

    // RVA: 0x146A | Ordinal: 5227
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14FD | Ordinal: 5374
        void qt_metacast(char const *);

    // RVA: 0x1593 | Ordinal: 5524
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x17BA | Ordinal: 6075
        void selectedText(void) const;

    // RVA: 0x17D5 | Ordinal: 6102
        void selectionStart(void) const;

    // RVA: 0x1807 | Ordinal: 6152
        void setAlignment(class QFlags<enum Qt::AlignmentFlag>);

    // RVA: 0x184A | Ordinal: 6219
        void setBuddy(class QWidget *);

    // RVA: 0x1A19 | Ordinal: 6682
        void setIndent(int);

    // RVA: 0x1A7E | Ordinal: 6783
        void setMargin(int);

    // RVA: 0x1AE4 | Ordinal: 6885
        void setMovie(class QMovie *);

    // RVA: 0x1AF5 | Ordinal: 6902
        void setNum(int);

    // RVA: 0x1AF6 | Ordinal: 6903
        void setNum(double);

    // RVA: 0x1B0D | Ordinal: 6926
        void setOpenExternalLinks(bool);

    // RVA: 0x1B4A | Ordinal: 6987
        void setPicture(class QPicture const &);

    // RVA: 0x1B4C | Ordinal: 6989
        void setPixmap(class QPixmap const &);

    // RVA: 0x1BBA | Ordinal: 7099
        void setScaledContents(bool);

    // RVA: 0x1BE0 | Ordinal: 7137
        void setSelection(int, int);

    // RVA: 0x1C99 | Ordinal: 7322
        void setText(class QString const &);

    // RVA: 0x1CB1 | Ordinal: 7346
        void setTextFormat(enum Qt::TextFormat);

    // RVA: 0x1CB4 | Ordinal: 7349
        void setTextInteractionFlags(class QFlags<enum Qt::TextInteractionFlag>);

    // RVA: 0x1D5C | Ordinal: 7517
        void setWordWrap(bool);

    // RVA: 0x1DFD | Ordinal: 7678
        void sizeHint(void) const;

    // RVA: 0x1FD5 | Ordinal: 8150
        void text(void) const;

    // RVA: 0x1FFB | Ordinal: 8188
        void textFormat(void) const;

    // RVA: 0x2002 | Ordinal: 8195
        void textInteractionFlags(void) const;

    // RVA: 0x20B9 | Ordinal: 8378
        void tr(char const *, char const *, int);

    // RVA: 0x214C | Ordinal: 8525
        void trUtf8(char const *, char const *, int);

    // RVA: 0x2335 | Ordinal: 9014
        void wordWrap(void) const;

    // RVA: 0x220 | Ordinal: 545
        void _QLabel(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QLABEL_HPP
