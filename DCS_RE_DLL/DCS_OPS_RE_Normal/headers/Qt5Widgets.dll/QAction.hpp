#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QAction
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QAction
{
public:

    // RVA: 0x10 | Ordinal: 17
        void QAction(class QActionPrivate &, class QObject *);

    // RVA: 0x11 | Ordinal: 18
        void QAction(class QIcon const &, class QString const &, class QObject *);

    // RVA: 0x12 | Ordinal: 19
        void QAction(class QString const &, class QObject *);

    // RVA: 0x13 | Ordinal: 20
        void QAction(class QObject *);

    // RVA: 0x502 | Ordinal: 1283
        void actionGroup(void) const;

    // RVA: 0x50A | Ordinal: 1291
        void activate(enum QAction::ActionEvent);

    // RVA: 0x5EE | Ordinal: 1519
        void associatedGraphicsWidgets(void) const;

    // RVA: 0x5F0 | Ordinal: 1521
        void associatedWidgets(void) const;

    // RVA: 0x600 | Ordinal: 1537
        void autoRepeat(void) const;

    // RVA: 0x6D0 | Ordinal: 1745
        void changed(void);

    // RVA: 0x8B3 | Ordinal: 2228
        void d_func(void);

    // RVA: 0x8B4 | Ordinal: 2229
        void d_func(void) const;

    // RVA: 0x9DD | Ordinal: 2526
        void data(void) const;

    // RVA: 0xB32 | Ordinal: 2867
        void event(class QEvent *);

    // RVA: 0xC47 | Ordinal: 3144
        void font(void) const;

    // RVA: 0xD72 | Ordinal: 3443
        void hover(void);

    // RVA: 0xD7E | Ordinal: 3455
        void hovered(void);

    // RVA: 0xD84 | Ordinal: 3461
        void icon(void) const;

    // RVA: 0xD9B | Ordinal: 3484
        void iconText(void) const;

    // RVA: 0xEB5 | Ordinal: 3766
        void isCheckable(void) const;

    // RVA: 0xEB8 | Ordinal: 3769
        void isChecked(void) const;

    // RVA: 0xED6 | Ordinal: 3799
        void isEnabled(void) const;

    // RVA: 0xEF5 | Ordinal: 3830
        void isIconVisibleInMenu(void) const;

    // RVA: 0xF45 | Ordinal: 3910
        void isSeparator(void) const;

    // RVA: 0xF48 | Ordinal: 3913
        void isShortcutVisibleInContextMenu(void) const;

    // RVA: 0xF6B | Ordinal: 3948
        void isVisible(void) const;

    // RVA: 0x10FC | Ordinal: 4349
        void menu(void) const;

    // RVA: 0x1102 | Ordinal: 4355
        void menuRole(void) const;

    // RVA: 0x1112 | Ordinal: 4371
        void metaObject(void) const;

    // RVA: 0x1369 | Ordinal: 4970
        void parentWidget(void) const;

    // RVA: 0x13D4 | Ordinal: 5077
        void priority(void) const;

    // RVA: 0x142B | Ordinal: 5164
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14BE | Ordinal: 5311
        void qt_metacast(char const *);

    // RVA: 0x1554 | Ordinal: 5461
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x17F4 | Ordinal: 6133
        void setActionGroup(class QActionGroup *);

    // RVA: 0x1825 | Ordinal: 6182
        void setAutoRepeat(bool);

    // RVA: 0x1872 | Ordinal: 6259
        void setCheckable(bool);

    // RVA: 0x1875 | Ordinal: 6262
        void setChecked(bool);

    // RVA: 0x18E6 | Ordinal: 6375
        void setData(class QVariant const &);

    // RVA: 0x1914 | Ordinal: 6421
        void setDisabled(bool);

    // RVA: 0x1945 | Ordinal: 6470
        void setEnabled(bool);

    // RVA: 0x1999 | Ordinal: 6554
        void setFont(class QFont const &);

    // RVA: 0x1A03 | Ordinal: 6660
        void setIcon(class QIcon const &);

    // RVA: 0x1A15 | Ordinal: 6678
        void setIconText(class QString const &);

    // RVA: 0x1A16 | Ordinal: 6679
        void setIconVisibleInMenu(bool);

    // RVA: 0x1AA0 | Ordinal: 6817
        void setMenu(class QMenu *);

    // RVA: 0x1AA5 | Ordinal: 6822
        void setMenuRole(enum QAction::MenuRole);

    // RVA: 0x1B71 | Ordinal: 7026
        void setPriority(enum QAction::Priority);

    // RVA: 0x1BF4 | Ordinal: 7157
        void setSeparator(bool);

    // RVA: 0x1BFB | Ordinal: 7164
        void setShortcut(class QKeySequence const &);

    // RVA: 0x1BFE | Ordinal: 7167
        void setShortcutContext(enum Qt::ShortcutContext);

    // RVA: 0x1C02 | Ordinal: 7171
        void setShortcutVisibleInContextMenu(bool);

    // RVA: 0x1C03 | Ordinal: 7172
        void setShortcuts(class QList<class QKeySequence> const &);

    // RVA: 0x1C04 | Ordinal: 7173
        void setShortcuts(enum QKeySequence::StandardKey);

    // RVA: 0x1C4B | Ordinal: 7244
        void setStatusTip(class QString const &);

    // RVA: 0x1C97 | Ordinal: 7320
        void setText(class QString const &);

    // RVA: 0x1CD1 | Ordinal: 7378
        void setToolTip(class QString const &);

    // RVA: 0x1D15 | Ordinal: 7446
        void setVisible(bool);

    // RVA: 0x1D27 | Ordinal: 7464
        void setWhatsThis(class QString const &);

    // RVA: 0x1D88 | Ordinal: 7561
        void shortcut(void) const;

    // RVA: 0x1D89 | Ordinal: 7562
        void shortcutContext(void) const;

    // RVA: 0x1D8A | Ordinal: 7563
        void shortcuts(void) const;

    // RVA: 0x1DC1 | Ordinal: 7618
        void showStatusText(class QWidget *);

    // RVA: 0x1F23 | Ordinal: 7972
        void statusTip(void) const;

    // RVA: 0x1FD3 | Ordinal: 8148
        void text(void) const;

    // RVA: 0x2048 | Ordinal: 8265
        void toggle(void);

    // RVA: 0x204C | Ordinal: 8269
        void toggled(bool);

    // RVA: 0x2056 | Ordinal: 8279
        void toolTip(void) const;

    // RVA: 0x207A | Ordinal: 8315
        void tr(char const *, char const *, int);

    // RVA: 0x210D | Ordinal: 8462
        void trUtf8(char const *, char const *, int);

    // RVA: 0x21AF | Ordinal: 8624
        void trigger(void);

    // RVA: 0x21B1 | Ordinal: 8626
        void triggered(bool);

    // RVA: 0x22D9 | Ordinal: 8922
        void whatsThis(void) const;

    // RVA: 0x1B9 | Ordinal: 442
        void _QAction(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QACTION_HPP
