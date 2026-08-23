#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QFontDialog
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QFontDialog
{
public:

    // RVA: 0x55 | Ordinal: 86
        void QFontDialog(class QFont const &, class QWidget *);

    // RVA: 0x56 | Ordinal: 87
        void QFontDialog(class QWidget *);

    // RVA: 0x6B9 | Ordinal: 1722
        void changeEvent(class QEvent *);

    // RVA: 0x847 | Ordinal: 2120
        void currentFont(void) const;

    // RVA: 0x84A | Ordinal: 2123
        void currentFontChanged(class QFont const &);

    // RVA: 0x8ED | Ordinal: 2286
        void d_func(void);

    // RVA: 0x8EE | Ordinal: 2287
        void d_func(void) const;

    // RVA: 0xA50 | Ordinal: 2641
        void done(int);

    // RVA: 0xB7C | Ordinal: 2941
        void eventFilter(class QObject *, class QEvent *);

    // RVA: 0xC5B | Ordinal: 3164
        void fontSelected(class QFont const &);

    // RVA: 0xC99 | Ordinal: 3226
        void getFont(bool *, class QFont const &, class QWidget *, class QString const &, class QFlags<enum QFontDialog::FontDialogOption>);

    // RVA: 0xC9A | Ordinal: 3227
        void getFont(bool *, class QWidget *);

    // RVA: 0x1132 | Ordinal: 4403
        void metaObject(void) const;

    // RVA: 0x12D8 | Ordinal: 4825
        void open(class QObject *, char const *);

    // RVA: 0x12EB | Ordinal: 4844
        void options(void) const;

    // RVA: 0x144B | Ordinal: 5196
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14DE | Ordinal: 5343
        void qt_metacast(char const *);

    // RVA: 0x1574 | Ordinal: 5493
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x17AB | Ordinal: 6060
        void selectedFont(void) const;

    // RVA: 0x18B9 | Ordinal: 6330
        void setCurrentFont(class QFont const &);

    // RVA: 0x1B16 | Ordinal: 6935
        void setOption(enum QFontDialog::FontDialogOption, bool);

    // RVA: 0x1B1F | Ordinal: 6944
        void setOptions(class QFlags<enum QFontDialog::FontDialogOption>);

    // RVA: 0x1D1A | Ordinal: 7451
        void setVisible(bool);

    // RVA: 0x1FCB | Ordinal: 8140
        void testOption(enum QFontDialog::FontDialogOption) const;

    // RVA: 0x209A | Ordinal: 8347
        void tr(char const *, char const *, int);

    // RVA: 0x212D | Ordinal: 8494
        void trUtf8(char const *, char const *, int);

    // RVA: 0x1E1 | Ordinal: 482
        void _QFontDialog(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QFONTDIALOG_HPP
