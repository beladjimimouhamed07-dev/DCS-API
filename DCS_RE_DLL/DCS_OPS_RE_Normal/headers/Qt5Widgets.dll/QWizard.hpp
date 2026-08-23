#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QWizard
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QWizard
{
public:

    // RVA: 0x1AE | Ordinal: 431
        void QWizard(class QWidget *, class QFlags<enum Qt::WindowType>);

    // RVA: 0x576 | Ordinal: 1399
        void addPage(class QWizardPage *);

    // RVA: 0x60D | Ordinal: 1550
        void back(void);

    // RVA: 0x65E | Ordinal: 1631
        void button(enum QWizard::WizardButton) const;

    // RVA: 0x66D | Ordinal: 1646
        void buttonText(enum QWizard::WizardButton) const;

    // RVA: 0x709 | Ordinal: 1802
        void cleanupPage(int);

    // RVA: 0x84B | Ordinal: 2124
        void currentId(void) const;

    // RVA: 0x84C | Ordinal: 2125
        void currentIdChanged(int);

    // RVA: 0x861 | Ordinal: 2146
        void currentPage(void) const;

    // RVA: 0x89D | Ordinal: 2206
        void customButtonClicked(int);

    // RVA: 0x9D9 | Ordinal: 2522
        void d_func(void);

    // RVA: 0x9DA | Ordinal: 2523
        void d_func(void) const;

    // RVA: 0xA52 | Ordinal: 2643
        void done(int);

    // RVA: 0xB74 | Ordinal: 2933
        void event(class QEvent *);

    // RVA: 0xBB9 | Ordinal: 3002
        void field(class QString const &) const;

    // RVA: 0xCFD | Ordinal: 3326
        void hasVisitedPage(int) const;

    // RVA: 0xD19 | Ordinal: 3354
        void helpRequested(void);

    // RVA: 0xE03 | Ordinal: 3588
        void initializePage(int);

    // RVA: 0x119D | Ordinal: 4510
        void metaObject(void) const;

    // RVA: 0x1295 | Ordinal: 4758
        void nativeEvent(class QByteArray const &, void *, long *);

    // RVA: 0x12A2 | Ordinal: 4771
        void next(void);

    // RVA: 0x12A6 | Ordinal: 4775
        void nextId(void) const;

    // RVA: 0x12ED | Ordinal: 4846
        void options(void) const;

    // RVA: 0x1307 | Ordinal: 4872
        void page(int) const;

    // RVA: 0x1308 | Ordinal: 4873
        void pageAdded(int);

    // RVA: 0x130B | Ordinal: 4876
        void pageIds(void) const;

    // RVA: 0x130C | Ordinal: 4877
        void pageRemoved(int);

    // RVA: 0x134B | Ordinal: 4940
        void paintEvent(class QPaintEvent *);

    // RVA: 0x138D | Ordinal: 5006
        void pixmap(enum QWizard::WizardPixmap) const;

    // RVA: 0x14B6 | Ordinal: 5303
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1549 | Ordinal: 5450
        void qt_metacast(char const *);

    // RVA: 0x15DF | Ordinal: 5600
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1640 | Ordinal: 5697
        void removePage(int);

    // RVA: 0x16B4 | Ordinal: 5813
        void resizeEvent(class QResizeEvent *);

    // RVA: 0x16CC | Ordinal: 5837
        void restart(void);

    // RVA: 0x184D | Ordinal: 6222
        void setButton(enum QWizard::WizardButton, class QAbstractButton *);

    // RVA: 0x1851 | Ordinal: 6226
        void setButtonLayout(class QList<enum QWizard::WizardButton> const &);

    // RVA: 0x1854 | Ordinal: 6229
        void setButtonText(enum QWizard::WizardButton, class QString const &);

    // RVA: 0x1901 | Ordinal: 6402
        void setDefaultProperty(char const *, char const *, char const *);

    // RVA: 0x1969 | Ordinal: 6506
        void setField(class QString const &, class QVariant const &);

    // RVA: 0x1B1A | Ordinal: 6939
        void setOption(enum QWizard::WizardOption, bool);

    // RVA: 0x1B22 | Ordinal: 6947
        void setOptions(class QFlags<enum QWizard::WizardOption>);

    // RVA: 0x1B34 | Ordinal: 6965
        void setPage(int, class QWizardPage *);

    // RVA: 0x1B4E | Ordinal: 6991
        void setPixmap(enum QWizard::WizardPixmap, class QPixmap const &);

    // RVA: 0x1C06 | Ordinal: 7175
        void setSideWidget(class QWidget *);

    // RVA: 0x1C45 | Ordinal: 7238
        void setStartId(int);

    // RVA: 0x1C66 | Ordinal: 7271
        void setSubTitleFormat(enum Qt::TextFormat);

    // RVA: 0x1CCD | Ordinal: 7374
        void setTitleFormat(enum Qt::TextFormat);

    // RVA: 0x1D23 | Ordinal: 7460
        void setVisible(bool);

    // RVA: 0x1D5A | Ordinal: 7515
        void setWizardStyle(enum QWizard::WizardStyle);

    // RVA: 0x1DD0 | Ordinal: 7633
        void sideWidget(void) const;

    // RVA: 0x1E19 | Ordinal: 7706
        void sizeHint(void) const;

    // RVA: 0x1E83 | Ordinal: 7812
        void startId(void) const;

    // RVA: 0x1F5A | Ordinal: 8027
        void subTitleFormat(void) const;

    // RVA: 0x1FCF | Ordinal: 8144
        void testOption(enum QWizard::WizardOption) const;

    // RVA: 0x2034 | Ordinal: 8245
        void titleFormat(void) const;

    // RVA: 0x2105 | Ordinal: 8454
        void tr(char const *, char const *, int);

    // RVA: 0x2198 | Ordinal: 8601
        void trUtf8(char const *, char const *, int);

    // RVA: 0x2266 | Ordinal: 8807
        void validateCurrentPage(void);

    // RVA: 0x22B9 | Ordinal: 8890
        void visitedIds(void) const;

    // RVA: 0x22BA | Ordinal: 8891
        void visitedPages(void) const;

    // RVA: 0x2333 | Ordinal: 9012
        void wizardStyle(void) const;

    // RVA: 0x298 | Ordinal: 665
        void _QWizard(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QWIZARD_HPP
