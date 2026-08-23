#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QApplication
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QApplication
{
public:

    // RVA: 0x16 | Ordinal: 23
        void QApplication(int &, char **, int);

    // RVA: 0x4D5 | Ordinal: 1238
        void aboutQt(void);

    // RVA: 0x521 | Ordinal: 1314
        void activeModalWidget(void);

    // RVA: 0x523 | Ordinal: 1316
        void activePopupWidget(void);

    // RVA: 0x528 | Ordinal: 1321
        void activeWindow(void);

    // RVA: 0x5B8 | Ordinal: 1465
        void alert(class QWidget *, int);

    // RVA: 0x5C8 | Ordinal: 1481
        void allWidgets(void);

    // RVA: 0x606 | Ordinal: 1543
        void autoSipEnabled(void) const;

    // RVA: 0x626 | Ordinal: 1575
        void beep(void);

    // RVA: 0x74B | Ordinal: 1868
        void closeAllWindows(void);

    // RVA: 0x770 | Ordinal: 1905
        void colorSpec(void);

    // RVA: 0x7B0 | Ordinal: 1969
        void compressEvent(class QEvent *, class QObject *, class QPostEventList *);

    // RVA: 0x879 | Ordinal: 2170
        void cursorFlashTime(void);

    // RVA: 0x8B7 | Ordinal: 2232
        void d_func(void);

    // RVA: 0x8B8 | Ordinal: 2233
        void d_func(void) const;

    // RVA: 0xA0E | Ordinal: 2575
        void desktop(void);

    // RVA: 0xA54 | Ordinal: 2645
        void doubleClickInterval(void);

    // RVA: 0xB33 | Ordinal: 2868
        void event(class QEvent *);

    // RVA: 0xB8E | Ordinal: 2959
        void exec(void);

    // RVA: 0xBFE | Ordinal: 3071
        void focusChanged(class QWidget *, class QWidget *);

    // RVA: 0xC42 | Ordinal: 3139
        void focusWidget(void);

    // RVA: 0xC48 | Ordinal: 3145
        void font(char const *);

    // RVA: 0xC49 | Ordinal: 3146
        void font(class QWidget const *);

    // RVA: 0xC4A | Ordinal: 3147
        void font(void);

    // RVA: 0xC58 | Ordinal: 3161
        void fontMetrics(void);

    // RVA: 0xCB6 | Ordinal: 3255
        void globalStrut(void);

    // RVA: 0xED1 | Ordinal: 3794
        void isEffectEnabled(enum Qt::UIEffect);

    // RVA: 0x1020 | Ordinal: 4129
        void keyboardInputDirection(void);

    // RVA: 0x1021 | Ordinal: 4130
        void keyboardInputInterval(void);

    // RVA: 0x1022 | Ordinal: 4131
        void keyboardInputLocale(void);

    // RVA: 0x1114 | Ordinal: 4373
        void metaObject(void) const;

    // RVA: 0x12AF | Ordinal: 4784
        void notify(class QObject *, class QEvent *);

    // RVA: 0x1352 | Ordinal: 4947
        void palette(char const *);

    // RVA: 0x1353 | Ordinal: 4948
        void palette(class QWidget const *);

    // RVA: 0x142D | Ordinal: 5166
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14C0 | Ordinal: 5313
        void qt_metacast(char const *);

    // RVA: 0x1556 | Ordinal: 5463
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1800 | Ordinal: 6145
        void setActiveWindow(class QWidget *);

    // RVA: 0x182C | Ordinal: 6189
        void setAutoSipEnabled(bool);

    // RVA: 0x1883 | Ordinal: 6276
        void setColorSpec(int);

    // RVA: 0x18D9 | Ordinal: 6362
        void setCursorFlashTime(int);

    // RVA: 0x1926 | Ordinal: 6439
        void setDoubleClickInterval(int);

    // RVA: 0x1941 | Ordinal: 6466
        void setEffectEnabled(enum Qt::UIEffect, bool);

    // RVA: 0x199A | Ordinal: 6555
        void setFont(class QFont const &, char const *);

    // RVA: 0x19D3 | Ordinal: 6612
        void setGlobalStrut(class QSize const &);

    // RVA: 0x19D8 | Ordinal: 6617
        void setGraphicsSystem(class QString const &);

    // RVA: 0x1A53 | Ordinal: 6740
        void setKeyboardInputInterval(int);

    // RVA: 0x1B36 | Ordinal: 6967
        void setPalette(class QPalette const &, char const *);

    // RVA: 0x1C43 | Ordinal: 7236
        void setStartDragDistance(int);

    // RVA: 0x1C44 | Ordinal: 7237
        void setStartDragTime(int);

    // RVA: 0x1C5C | Ordinal: 7261
        void setStyle(class QString const &);

    // RVA: 0x1C5D | Ordinal: 7262
        void setStyle(class QStyle *);

    // RVA: 0x1C61 | Ordinal: 7266
        void setStyleSheet(class QString const &);

    // RVA: 0x1D2D | Ordinal: 7470
        void setWheelScrollLines(int);

    // RVA: 0x1D46 | Ordinal: 7495
        void setWindowIcon(class QIcon const &);

    // RVA: 0x1E81 | Ordinal: 7810
        void startDragDistance(void);

    // RVA: 0x1E82 | Ordinal: 7811
        void startDragTime(void);

    // RVA: 0x1F41 | Ordinal: 8002
        void style(void);

    // RVA: 0x1F4C | Ordinal: 8013
        void styleSheet(void) const;

    // RVA: 0x1F79 | Ordinal: 8058
        void syncX(void);

    // RVA: 0x2060 | Ordinal: 8289
        void topLevelAt(class QPoint const &);

    // RVA: 0x2061 | Ordinal: 8290
        void topLevelAt(int, int);

    // RVA: 0x2069 | Ordinal: 8298
        void topLevelWidgets(void);

    // RVA: 0x207C | Ordinal: 8317
        void tr(char const *, char const *, int);

    // RVA: 0x210F | Ordinal: 8464
        void trUtf8(char const *, char const *, int);

    // RVA: 0x22EF | Ordinal: 8944
        void wheelScrollLines(void);

    // RVA: 0x2302 | Ordinal: 8963
        void widgetAt(class QPoint const &);

    // RVA: 0x2303 | Ordinal: 8964
        void widgetAt(int, int);

    // RVA: 0x2323 | Ordinal: 8996
        void windowIcon(void);

    // RVA: 0x1BC | Ordinal: 445
        void _QApplication(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QAPPLICATION_HPP
