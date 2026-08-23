#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QTextBrowser
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTextBrowser
{
public:

    // RVA: 0x17C | Ordinal: 381
        void QTextBrowser(class QWidget *);

    // RVA: 0x5D6 | Ordinal: 1495
        void anchorClicked(class QUrl const &);

    // RVA: 0x61E | Ordinal: 1567
        void backward(void);

    // RVA: 0x61F | Ordinal: 1568
        void backwardAvailable(bool);

    // RVA: 0x620 | Ordinal: 1569
        void backwardHistoryCount(void) const;

    // RVA: 0x726 | Ordinal: 1831
        void clearHistory(void);

    // RVA: 0x9B9 | Ordinal: 2490
        void d_func(void);

    // RVA: 0x9BA | Ordinal: 2491
        void d_func(void) const;

    // RVA: 0xA39 | Ordinal: 2618
        void doSetSource(class QUrl const &, enum QTextDocument::ResourceType);

    // RVA: 0xB6A | Ordinal: 2923
        void event(class QEvent *);

    // RVA: 0xC22 | Ordinal: 3107
        void focusNextPrevChild(bool);

    // RVA: 0xC38 | Ordinal: 3129
        void focusOutEvent(class QFocusEvent *);

    // RVA: 0xC69 | Ordinal: 3178
        void forward(void);

    // RVA: 0xC6A | Ordinal: 3179
        void forwardAvailable(bool);

    // RVA: 0xC6B | Ordinal: 3180
        void forwardHistoryCount(void) const;

    // RVA: 0xD42 | Ordinal: 3395
        void highlighted(class QString const &);

    // RVA: 0xD43 | Ordinal: 3396
        void highlighted(class QUrl const &);

    // RVA: 0xD45 | Ordinal: 3398
        void historyChanged(void);

    // RVA: 0xD46 | Ordinal: 3399
        void historyTitle(int) const;

    // RVA: 0xD47 | Ordinal: 3400
        void historyUrl(int) const;

    // RVA: 0xD55 | Ordinal: 3414
        void home(void);

    // RVA: 0xEB0 | Ordinal: 3761
        void isBackwardAvailable(void) const;

    // RVA: 0xEEC | Ordinal: 3821
        void isForwardAvailable(void) const;

    // RVA: 0x100C | Ordinal: 4109
        void keyPressEvent(class QKeyEvent *);

    // RVA: 0x106B | Ordinal: 4204
        void loadResource(int, class QUrl const &);

    // RVA: 0x118A | Ordinal: 4491
        void metaObject(void) const;

    // RVA: 0x122A | Ordinal: 4651
        void mouseMoveEvent(class QMouseEvent *);

    // RVA: 0x124C | Ordinal: 4685
        void mousePressEvent(class QMouseEvent *);

    // RVA: 0x126B | Ordinal: 4716
        void mouseReleaseEvent(class QMouseEvent *);

    // RVA: 0x12DE | Ordinal: 4831
        void openExternalLinks(void) const;

    // RVA: 0x12E0 | Ordinal: 4833
        void openLinks(void) const;

    // RVA: 0x1345 | Ordinal: 4934
        void paintEvent(class QPaintEvent *);

    // RVA: 0x14A3 | Ordinal: 5284
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1536 | Ordinal: 5431
        void qt_metacast(char const *);

    // RVA: 0x15CC | Ordinal: 5581
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1621 | Ordinal: 5666
        void reload(void);

    // RVA: 0x1777 | Ordinal: 6008
        void searchPaths(void) const;

    // RVA: 0x1B0E | Ordinal: 6927
        void setOpenExternalLinks(bool);

    // RVA: 0x1B10 | Ordinal: 6929
        void setOpenLinks(bool);

    // RVA: 0x1BD1 | Ordinal: 7122
        void setSearchPaths(class QStringList const &);

    // RVA: 0x1C2D | Ordinal: 7214
        void setSource(class QUrl const &, enum QTextDocument::ResourceType);

    // RVA: 0x1C2E | Ordinal: 7215
        void setSource(class QUrl const &);

    // RVA: 0x1E47 | Ordinal: 7752
        void source(void) const;

    // RVA: 0x1E4A | Ordinal: 7755
        void sourceChanged(class QUrl const &);

    // RVA: 0x1E4D | Ordinal: 7758
        void sourceType(void) const;

    // RVA: 0x20F2 | Ordinal: 8435
        void tr(char const *, char const *, int);

    // RVA: 0x2185 | Ordinal: 8582
        void trUtf8(char const *, char const *, int);

    // RVA: 0x27D | Ordinal: 638
        void _QTextBrowser(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QTEXTBROWSER_HPP
