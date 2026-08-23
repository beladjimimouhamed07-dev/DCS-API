#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QMessageBox
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QMessageBox
{
public:

    // RVA: 0xD5 | Ordinal: 214
        void QMessageBox(class QString const &, class QString const &, enum QMessageBox::Icon, int, int, int, class QWidget *, class QFlags<enum Qt::WindowType>);

    // RVA: 0xD6 | Ordinal: 215
        void QMessageBox(class QWidget *);

    // RVA: 0xD7 | Ordinal: 216
        void QMessageBox(enum QMessageBox::Icon, class QString const &, class QString const &, class QFlags<enum QMessageBox::StandardButton>, class QWidget *, class QFlags<enum Qt::WindowType>);

    // RVA: 0x4D4 | Ordinal: 1237
        void about(class QWidget *, class QString const &, class QString const &);

    // RVA: 0x4D6 | Ordinal: 1239
        void aboutQt(class QWidget *, class QString const &);

    // RVA: 0x544 | Ordinal: 1349
        void addButton(class QString const &, enum QMessageBox::ButtonRole);

    // RVA: 0x545 | Ordinal: 1350
        void addButton(enum QMessageBox::StandardButton);

    // RVA: 0x546 | Ordinal: 1351
        void addButton(class QAbstractButton *, enum QMessageBox::ButtonRole);

    // RVA: 0x65C | Ordinal: 1629
        void button(enum QMessageBox::StandardButton) const;

    // RVA: 0x661 | Ordinal: 1634
        void buttonClicked(class QAbstractButton *);

    // RVA: 0x66A | Ordinal: 1643
        void buttonRole(class QAbstractButton *) const;

    // RVA: 0x66C | Ordinal: 1645
        void buttonText(int) const;

    // RVA: 0x676 | Ordinal: 1655
        void buttons(void) const;

    // RVA: 0x6C2 | Ordinal: 1731
        void changeEvent(class QEvent *);

    // RVA: 0x6D2 | Ordinal: 1747
        void checkBox(void) const;

    // RVA: 0x73F | Ordinal: 1856
        void clickedButton(void) const;

    // RVA: 0x753 | Ordinal: 1876
        void closeEvent(class QCloseEvent *);

    // RVA: 0x82A | Ordinal: 2091
        void critical(class QWidget *, class QString const &, class QString const &, class QFlags<enum QMessageBox::StandardButton>, enum QMessageBox::StandardButton);

    // RVA: 0x82B | Ordinal: 2092
        void critical(class QWidget *, class QString const &, class QString const &, class QString const &, class QString const &, class QString const &, int, int);

    // RVA: 0x82C | Ordinal: 2093
        void critical(class QWidget *, class QString const &, class QString const &, int, int, int);

    // RVA: 0x82D | Ordinal: 2094
        void critical(class QWidget *, class QString const &, class QString const &, enum QMessageBox::StandardButton, enum QMessageBox::StandardButton);

    // RVA: 0x965 | Ordinal: 2406
        void d_func(void);

    // RVA: 0x966 | Ordinal: 2407
        void d_func(void) const;

    // RVA: 0x9F7 | Ordinal: 2552
        void defaultButton(void) const;

    // RVA: 0xA13 | Ordinal: 2580
        void detailedText(void) const;

    // RVA: 0xB2C | Ordinal: 2861
        void escapeButton(void) const;

    // RVA: 0xB53 | Ordinal: 2900
        void event(class QEvent *);

    // RVA: 0xD89 | Ordinal: 3466
        void icon(void) const;

    // RVA: 0xD8D | Ordinal: 3470
        void iconPixmap(void) const;

    // RVA: 0xDCD | Ordinal: 3534
        void information(class QWidget *, class QString const &, class QString const &, class QFlags<enum QMessageBox::StandardButton>, enum QMessageBox::StandardButton);

    // RVA: 0xDCE | Ordinal: 3535
        void information(class QWidget *, class QString const &, class QString const &, enum QMessageBox::StandardButton, enum QMessageBox::StandardButton);

    // RVA: 0xDCF | Ordinal: 3536
        void information(class QWidget *, class QString const &, class QString const &, class QString const &, class QString const &, class QString const &, int, int);

    // RVA: 0xDD0 | Ordinal: 3537
        void information(class QWidget *, class QString const &, class QString const &, int, int, int);

    // RVA: 0xDD1 | Ordinal: 3538
        void informativeText(void) const;

    // RVA: 0x1007 | Ordinal: 4104
        void keyPressEvent(class QKeyEvent *);

    // RVA: 0x115B | Ordinal: 4444
        void metaObject(void) const;

    // RVA: 0x12DA | Ordinal: 4827
        void open(class QObject *, char const *);

    // RVA: 0x1474 | Ordinal: 5237
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1507 | Ordinal: 5384
        void qt_metacast(char const *);

    // RVA: 0x159D | Ordinal: 5534
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x15E5 | Ordinal: 5606
        void question(class QWidget *, class QString const &, class QString const &, class QFlags<enum QMessageBox::StandardButton>, enum QMessageBox::StandardButton);

    // RVA: 0x15E6 | Ordinal: 5607
        void question(class QWidget *, class QString const &, class QString const &, class QString const &, class QString const &, class QString const &, int, int);

    // RVA: 0x15E7 | Ordinal: 5608
        void question(class QWidget *, class QString const &, class QString const &, int, int, int);

    // RVA: 0x15E8 | Ordinal: 5609
        void question(class QWidget *, class QString const &, class QString const &, enum QMessageBox::StandardButton, enum QMessageBox::StandardButton);

    // RVA: 0x162D | Ordinal: 5678
        void removeButton(class QAbstractButton *);

    // RVA: 0x16A7 | Ordinal: 5800
        void resizeEvent(class QResizeEvent *);

    // RVA: 0x1853 | Ordinal: 6228
        void setButtonText(int, class QString const &);

    // RVA: 0x186C | Ordinal: 6253
        void setCheckBox(class QCheckBox *);

    // RVA: 0x18FC | Ordinal: 6397
        void setDefaultButton(class QPushButton *);

    // RVA: 0x18FD | Ordinal: 6398
        void setDefaultButton(enum QMessageBox::StandardButton);

    // RVA: 0x190B | Ordinal: 6412
        void setDetailedText(class QString const &);

    // RVA: 0x1950 | Ordinal: 6481
        void setEscapeButton(class QAbstractButton *);

    // RVA: 0x1951 | Ordinal: 6482
        void setEscapeButton(enum QMessageBox::StandardButton);

    // RVA: 0x1A06 | Ordinal: 6663
        void setIcon(enum QMessageBox::Icon);

    // RVA: 0x1A0A | Ordinal: 6667
        void setIconPixmap(class QPixmap const &);

    // RVA: 0x1A1D | Ordinal: 6686
        void setInformativeText(class QString const &);

    // RVA: 0x1C3F | Ordinal: 7232
        void setStandardButtons(class QFlags<enum QMessageBox::StandardButton>);

    // RVA: 0x1C9C | Ordinal: 7325
        void setText(class QString const &);

    // RVA: 0x1CB2 | Ordinal: 7347
        void setTextFormat(enum Qt::TextFormat);

    // RVA: 0x1CB5 | Ordinal: 7350
        void setTextInteractionFlags(class QFlags<enum Qt::TextInteractionFlag>);

    // RVA: 0x1D4D | Ordinal: 7502
        void setWindowModality(enum Qt::WindowModality);

    // RVA: 0x1D56 | Ordinal: 7511
        void setWindowTitle(class QString const &);

    // RVA: 0x1D9F | Ordinal: 7584
        void showEvent(class QShowEvent *);

    // RVA: 0x1E68 | Ordinal: 7785
        void standardButton(class QAbstractButton *) const;

    // RVA: 0x1E6A | Ordinal: 7787
        void standardButtons(void) const;

    // RVA: 0x1E6E | Ordinal: 7791
        void standardIcon(enum QMessageBox::Icon);

    // RVA: 0x1FD8 | Ordinal: 8153
        void text(void) const;

    // RVA: 0x1FFC | Ordinal: 8189
        void textFormat(void) const;

    // RVA: 0x2003 | Ordinal: 8196
        void textInteractionFlags(void) const;

    // RVA: 0x20C3 | Ordinal: 8388
        void tr(char const *, char const *, int);

    // RVA: 0x2156 | Ordinal: 8535
        void trUtf8(char const *, char const *, int);

    // RVA: 0x22D2 | Ordinal: 8915
        void warning(class QWidget *, class QString const &, class QString const &, class QFlags<enum QMessageBox::StandardButton>, enum QMessageBox::StandardButton);

    // RVA: 0x22D3 | Ordinal: 8916
        void warning(class QWidget *, class QString const &, class QString const &, class QString const &, class QString const &, class QString const &, int, int);

    // RVA: 0x22D4 | Ordinal: 8917
        void warning(class QWidget *, class QString const &, class QString const &, int, int, int);

    // RVA: 0x22D5 | Ordinal: 8918
        void warning(class QWidget *, class QString const &, class QString const &, enum QMessageBox::StandardButton, enum QMessageBox::StandardButton);

    // RVA: 0x22D | Ordinal: 558
        void _QMessageBox(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QMESSAGEBOX_HPP
