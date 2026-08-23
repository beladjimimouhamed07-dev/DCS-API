#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QInputDialog
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QInputDialog
{
public:

    // RVA: 0xB0 | Ordinal: 177
        void QInputDialog(class QWidget *, class QFlags<enum Qt::WindowType>);

    // RVA: 0x695 | Ordinal: 1686
        void cancelButtonText(void) const;

    // RVA: 0x79A | Ordinal: 1947
        void comboBoxItems(void) const;

    // RVA: 0x947 | Ordinal: 2376
        void d_func(void);

    // RVA: 0x948 | Ordinal: 2377
        void d_func(void) const;

    // RVA: 0xA51 | Ordinal: 2642
        void done(int);

    // RVA: 0xA56 | Ordinal: 2647
        void doubleDecimals(void) const;

    // RVA: 0xA57 | Ordinal: 2648
        void doubleMaximum(void) const;

    // RVA: 0xA58 | Ordinal: 2649
        void doubleMinimum(void) const;

    // RVA: 0xA59 | Ordinal: 2650
        void doubleStep(void) const;

    // RVA: 0xA5A | Ordinal: 2651
        void doubleValue(void) const;

    // RVA: 0xA5B | Ordinal: 2652
        void doubleValueChanged(double);

    // RVA: 0xA5C | Ordinal: 2653
        void doubleValueSelected(double);

    // RVA: 0xC94 | Ordinal: 3221
        void getDouble(class QWidget *, class QString const &, class QString const &, double, double, double, int, bool *, class QFlags<enum Qt::WindowType>);

    // RVA: 0xC95 | Ordinal: 3222
        void getDouble(class QWidget *, class QString const &, class QString const &, double, double, double, int, bool *, class QFlags<enum Qt::WindowType>, double);

    // RVA: 0xC9C | Ordinal: 3229
        void getInt(class QWidget *, class QString const &, class QString const &, int, int, int, int, bool *, class QFlags<enum Qt::WindowType>);

    // RVA: 0xC9D | Ordinal: 3230
        void getInteger(class QWidget *, class QString const &, class QString const &, int, int, int, int, bool *, class QFlags<enum Qt::WindowType>);

    // RVA: 0xC9E | Ordinal: 3231
        void getItem(class QWidget *, class QString const &, class QString const &, class QStringList const &, int, bool, bool *, class QFlags<enum Qt::WindowType>, class QFlags<enum Qt::InputMethodHint>);

    // RVA: 0xCA4 | Ordinal: 3237
        void getMultiLineText(class QWidget *, class QString const &, class QString const &, class QString const &, bool *, class QFlags<enum Qt::WindowType>, class QFlags<enum Qt::InputMethodHint>);

    // RVA: 0xCB1 | Ordinal: 3250
        void getText(class QWidget *, class QString const &, class QString const &, enum QLineEdit::EchoMode, class QString const &, bool *, class QFlags<enum Qt::WindowType>, class QFlags<enum Qt::InputMethodHint>);

    // RVA: 0xE2A | Ordinal: 3627
        void inputMode(void) const;

    // RVA: 0xE73 | Ordinal: 3700
        void intMaximum(void) const;

    // RVA: 0xE74 | Ordinal: 3701
        void intMinimum(void) const;

    // RVA: 0xE75 | Ordinal: 3702
        void intStep(void) const;

    // RVA: 0xE76 | Ordinal: 3703
        void intValue(void) const;

    // RVA: 0xE78 | Ordinal: 3705
        void intValueChanged(int);

    // RVA: 0xE79 | Ordinal: 3706
        void intValueSelected(int);

    // RVA: 0xEC2 | Ordinal: 3779
        void isComboBoxEditable(void) const;

    // RVA: 0x102E | Ordinal: 4143
        void labelText(void) const;

    // RVA: 0x114C | Ordinal: 4429
        void metaObject(void) const;

    // RVA: 0x11D4 | Ordinal: 4565
        void minimumSizeHint(void) const;

    // RVA: 0x12BD | Ordinal: 4798
        void okButtonText(void) const;

    // RVA: 0x12D9 | Ordinal: 4826
        void open(class QObject *, char const *);

    // RVA: 0x12EC | Ordinal: 4845
        void options(void) const;

    // RVA: 0x1465 | Ordinal: 5222
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14F8 | Ordinal: 5369
        void qt_metacast(char const *);

    // RVA: 0x158E | Ordinal: 5519
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1860 | Ordinal: 6241
        void setCancelButtonText(class QString const &);

    // RVA: 0x1894 | Ordinal: 6293
        void setComboBoxEditable(bool);

    // RVA: 0x1895 | Ordinal: 6294
        void setComboBoxItems(class QStringList const &);

    // RVA: 0x1927 | Ordinal: 6440
        void setDoubleDecimals(int);

    // RVA: 0x1928 | Ordinal: 6441
        void setDoubleMaximum(double);

    // RVA: 0x1929 | Ordinal: 6442
        void setDoubleMinimum(double);

    // RVA: 0x192A | Ordinal: 6443
        void setDoubleRange(double, double);

    // RVA: 0x192B | Ordinal: 6444
        void setDoubleStep(double);

    // RVA: 0x192C | Ordinal: 6445
        void setDoubleValue(double);

    // RVA: 0x1A22 | Ordinal: 6691
        void setInputMode(enum QInputDialog::InputMode);

    // RVA: 0x1A25 | Ordinal: 6694
        void setIntMaximum(int);

    // RVA: 0x1A26 | Ordinal: 6695
        void setIntMinimum(int);

    // RVA: 0x1A27 | Ordinal: 6696
        void setIntRange(int, int);

    // RVA: 0x1A28 | Ordinal: 6697
        void setIntStep(int);

    // RVA: 0x1A29 | Ordinal: 6698
        void setIntValue(int);

    // RVA: 0x1A5A | Ordinal: 6747
        void setLabelText(class QString const &);

    // RVA: 0x1B04 | Ordinal: 6917
        void setOkButtonText(class QString const &);

    // RVA: 0x1B17 | Ordinal: 6936
        void setOption(enum QInputDialog::InputDialogOption, bool);

    // RVA: 0x1B20 | Ordinal: 6945
        void setOptions(class QFlags<enum QInputDialog::InputDialogOption>);

    // RVA: 0x1CAF | Ordinal: 7344
        void setTextEchoMode(enum QLineEdit::EchoMode);

    // RVA: 0x1CBB | Ordinal: 7356
        void setTextValue(class QString const &);

    // RVA: 0x1D1D | Ordinal: 7454
        void setVisible(bool);

    // RVA: 0x1DFA | Ordinal: 7675
        void sizeHint(void) const;

    // RVA: 0x1FCC | Ordinal: 8141
        void testOption(enum QInputDialog::InputDialogOption) const;

    // RVA: 0x1FF7 | Ordinal: 8184
        void textEchoMode(void) const;

    // RVA: 0x200A | Ordinal: 8203
        void textValue(void) const;

    // RVA: 0x200B | Ordinal: 8204
        void textValueChanged(class QString const &);

    // RVA: 0x200C | Ordinal: 8205
        void textValueSelected(class QString const &);

    // RVA: 0x20B4 | Ordinal: 8373
        void tr(char const *, char const *, int);

    // RVA: 0x2147 | Ordinal: 8520
        void trUtf8(char const *, char const *, int);

    // RVA: 0x219 | Ordinal: 538
        void _QInputDialog(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QINPUTDIALOG_HPP
