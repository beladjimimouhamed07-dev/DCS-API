#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QColorDialog
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QColorDialog
{
public:

    // RVA: 0x1E | Ordinal: 31
        void QColorDialog(class QColor const &, class QWidget *);

    // RVA: 0x1F | Ordinal: 32
        void QColorDialog(class QWidget *);

    // RVA: 0x6B2 | Ordinal: 1715
        void changeEvent(class QEvent *);

    // RVA: 0x76F | Ordinal: 1904
        void colorSelected(class QColor const &);

    // RVA: 0x840 | Ordinal: 2113
        void currentColor(void) const;

    // RVA: 0x841 | Ordinal: 2114
        void currentColorChanged(class QColor const &);

    // RVA: 0x89E | Ordinal: 2207
        void customColor(int);

    // RVA: 0x8A0 | Ordinal: 2209
        void customCount(void);

    // RVA: 0x8C1 | Ordinal: 2242
        void d_func(void);

    // RVA: 0x8C2 | Ordinal: 2243
        void d_func(void) const;

    // RVA: 0xA4C | Ordinal: 2637
        void done(int);

    // RVA: 0xC8E | Ordinal: 3215
        void getColor(class QColor const &, class QWidget *, class QString const &, class QFlags<enum QColorDialog::ColorDialogOption>);

    // RVA: 0xCAE | Ordinal: 3247
        void getRgba(unsigned int, bool *, class QWidget *);

    // RVA: 0x111A | Ordinal: 4379
        void metaObject(void) const;

    // RVA: 0x12D5 | Ordinal: 4822
        void open(class QObject *, char const *);

    // RVA: 0x12E7 | Ordinal: 4840
        void options(void) const;

    // RVA: 0x1433 | Ordinal: 5172
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14C6 | Ordinal: 5319
        void qt_metacast(char const *);

    // RVA: 0x155C | Ordinal: 5469
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x17A7 | Ordinal: 6056
        void selectedColor(void) const;

    // RVA: 0x18B7 | Ordinal: 6328
        void setCurrentColor(class QColor const &);

    // RVA: 0x18E5 | Ordinal: 6374
        void setCustomColor(int, class QColor);

    // RVA: 0x1B13 | Ordinal: 6932
        void setOption(enum QColorDialog::ColorDialogOption, bool);

    // RVA: 0x1B1B | Ordinal: 6940
        void setOptions(class QFlags<enum QColorDialog::ColorDialogOption>);

    // RVA: 0x1C40 | Ordinal: 7233
        void setStandardColor(int, class QColor);

    // RVA: 0x1D17 | Ordinal: 7448
        void setVisible(bool);

    // RVA: 0x1E6B | Ordinal: 7788
        void standardColor(int);

    // RVA: 0x1FC8 | Ordinal: 8137
        void testOption(enum QColorDialog::ColorDialogOption) const;

    // RVA: 0x2082 | Ordinal: 8323
        void tr(char const *, char const *, int);

    // RVA: 0x2115 | Ordinal: 8470
        void trUtf8(char const *, char const *, int);

    // RVA: 0x1C3 | Ordinal: 452
        void _QColorDialog(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QCOLORDIALOG_HPP
