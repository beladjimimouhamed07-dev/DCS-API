#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QDialog
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QDialog
{
public:

    // RVA: 0x3B | Ordinal: 60
        void QDialog(class QDialogPrivate &, class QWidget *, class QFlags<enum Qt::WindowType>);

    // RVA: 0x3C | Ordinal: 61
        void QDialog(class QWidget *, class QFlags<enum Qt::WindowType>);

    // RVA: 0x4DF | Ordinal: 1248
        void accept(void);

    // RVA: 0x4EB | Ordinal: 1260
        void accepted(void);

    // RVA: 0x5AB | Ordinal: 1452
        void adjustPosition(class QWidget *);

    // RVA: 0x74F | Ordinal: 1872
        void closeEvent(class QCloseEvent *);

    // RVA: 0x7CA | Ordinal: 1995
        void contextMenuEvent(class QContextMenuEvent *);

    // RVA: 0x8D5 | Ordinal: 2262
        void d_func(void);

    // RVA: 0x8D6 | Ordinal: 2263
        void d_func(void) const;

    // RVA: 0xA4D | Ordinal: 2638
        void done(int);

    // RVA: 0xB7A | Ordinal: 2939
        void eventFilter(class QObject *, class QEvent *);

    // RVA: 0xB8F | Ordinal: 2960
        void exec(void);

    // RVA: 0xBA6 | Ordinal: 2983
        void extension(void) const;

    // RVA: 0xBE7 | Ordinal: 3048
        void finished(int);

    // RVA: 0xF49 | Ordinal: 3914
        void isSizeGripEnabled(void) const;

    // RVA: 0xFFB | Ordinal: 4092
        void keyPressEvent(class QKeyEvent *);

    // RVA: 0x1126 | Ordinal: 4391
        void metaObject(void) const;

    // RVA: 0x11D2 | Ordinal: 4563
        void minimumSizeHint(void) const;

    // RVA: 0x12D6 | Ordinal: 4823
        void open(void);

    // RVA: 0x12F0 | Ordinal: 4849
        void orientation(void) const;

    // RVA: 0x143F | Ordinal: 5184
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14D2 | Ordinal: 5331
        void qt_metacast(char const *);

    // RVA: 0x1568 | Ordinal: 5481
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1617 | Ordinal: 5656
        void reject(void);

    // RVA: 0x1618 | Ordinal: 5657
        void rejected(void);

    // RVA: 0x169E | Ordinal: 5791
        void resizeEvent(class QResizeEvent *);

    // RVA: 0x16D6 | Ordinal: 5847
        void result(void) const;

    // RVA: 0x1959 | Ordinal: 6490
        void setExtension(class QWidget *);

    // RVA: 0x1AC0 | Ordinal: 6849
        void setModal(bool);

    // RVA: 0x1B25 | Ordinal: 6950
        void setOrientation(enum Qt::Orientation);

    // RVA: 0x1B97 | Ordinal: 7064
        void setResult(int);

    // RVA: 0x1C0E | Ordinal: 7183
        void setSizeGripEnabled(bool);

    // RVA: 0x1D18 | Ordinal: 7449
        void setVisible(bool);

    // RVA: 0x1D99 | Ordinal: 7578
        void showEvent(class QShowEvent *);

    // RVA: 0x1DAA | Ordinal: 7595
        void showExtension(bool);

    // RVA: 0x1DED | Ordinal: 7662
        void sizeHint(void) const;

    // RVA: 0x208E | Ordinal: 8335
        void tr(char const *, char const *, int);

    // RVA: 0x2121 | Ordinal: 8482
        void trUtf8(char const *, char const *, int);

    // RVA: 0x1D1 | Ordinal: 466
        void _QDialog(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QDIALOG_HPP
