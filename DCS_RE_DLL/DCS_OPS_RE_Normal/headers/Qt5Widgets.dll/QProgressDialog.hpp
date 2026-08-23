#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QProgressDialog
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QProgressDialog
{
public:

    // RVA: 0xEB | Ordinal: 236
        void QProgressDialog(class QString const &, class QString const &, int, int, class QWidget *, class QFlags<enum Qt::WindowType>);

    // RVA: 0xEC | Ordinal: 237
        void QProgressDialog(class QWidget *, class QFlags<enum Qt::WindowType>);

    // RVA: 0x5F3 | Ordinal: 1524
        void autoClose(void) const;

    // RVA: 0x604 | Ordinal: 1541
        void autoReset(void) const;

    // RVA: 0x694 | Ordinal: 1685
        void cancel(void);

    // RVA: 0x698 | Ordinal: 1689
        void canceled(void);

    // RVA: 0x6C4 | Ordinal: 1733
        void changeEvent(class QEvent *);

    // RVA: 0x754 | Ordinal: 1877
        void closeEvent(class QCloseEvent *);

    // RVA: 0x981 | Ordinal: 2434
        void d_func(void);

    // RVA: 0x982 | Ordinal: 2435
        void d_func(void) const;

    // RVA: 0xC5E | Ordinal: 3167
        void forceShow(void);

    // RVA: 0x102F | Ordinal: 4144
        void labelText(void) const;

    // RVA: 0x10E2 | Ordinal: 4323
        void maximum(void) const;

    // RVA: 0x116A | Ordinal: 4459
        void metaObject(void) const;

    // RVA: 0x11B2 | Ordinal: 4531
        void minimum(void) const;

    // RVA: 0x11B8 | Ordinal: 4537
        void minimumDuration(void) const;

    // RVA: 0x12DB | Ordinal: 4828
        void open(class QObject *, char const *);

    // RVA: 0x1483 | Ordinal: 5252
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1516 | Ordinal: 5399
        void qt_metacast(char const *);

    // RVA: 0x15AC | Ordinal: 5549
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1670 | Ordinal: 5745
        void reset(void);

    // RVA: 0x16AA | Ordinal: 5803
        void resizeEvent(class QResizeEvent *);

    // RVA: 0x1819 | Ordinal: 6170
        void setAutoClose(bool);

    // RVA: 0x1829 | Ordinal: 6186
        void setAutoReset(bool);

    // RVA: 0x183B | Ordinal: 6204
        void setBar(class QProgressBar *);

    // RVA: 0x185F | Ordinal: 6240
        void setCancelButton(class QPushButton *);

    // RVA: 0x1861 | Ordinal: 6242
        void setCancelButtonText(class QString const &);

    // RVA: 0x1A57 | Ordinal: 6744
        void setLabel(class QLabel *);

    // RVA: 0x1A5B | Ordinal: 6748
        void setLabelText(class QString const &);

    // RVA: 0x1A8F | Ordinal: 6800
        void setMaximum(int);

    // RVA: 0x1AAD | Ordinal: 6830
        void setMinimum(int);

    // RVA: 0x1AB3 | Ordinal: 6836
        void setMinimumDuration(int);

    // RVA: 0x1B79 | Ordinal: 7034
        void setRange(int, int);

    // RVA: 0x1CFC | Ordinal: 7421
        void setValue(int);

    // RVA: 0x1DA1 | Ordinal: 7586
        void showEvent(class QShowEvent *);

    // RVA: 0x1E05 | Ordinal: 7686
        void sizeHint(void) const;

    // RVA: 0x20D2 | Ordinal: 8403
        void tr(char const *, char const *, int);

    // RVA: 0x2165 | Ordinal: 8550
        void trUtf8(char const *, char const *, int);

    // RVA: 0x226F | Ordinal: 8816
        void value(void) const;

    // RVA: 0x22D7 | Ordinal: 8920
        void wasCanceled(void) const;

    // RVA: 0x23C | Ordinal: 573
        void _QProgressDialog(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QPROGRESSDIALOG_HPP
