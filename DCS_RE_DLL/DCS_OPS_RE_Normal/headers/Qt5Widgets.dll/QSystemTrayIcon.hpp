#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QSystemTrayIcon
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QSystemTrayIcon
{
public:

    // RVA: 0x16A | Ordinal: 363
        void QSystemTrayIcon(class QIcon const &, class QObject *);

    // RVA: 0x16B | Ordinal: 364
        void QSystemTrayIcon(class QObject *);

    // RVA: 0x51B | Ordinal: 1308
        void activated(enum QSystemTrayIcon::ActivationReason);

    // RVA: 0x7C6 | Ordinal: 1991
        void contextMenu(void) const;

    // RVA: 0x9AB | Ordinal: 2476
        void d_func(void);

    // RVA: 0x9AC | Ordinal: 2477
        void d_func(void) const;

    // RVA: 0xB66 | Ordinal: 2919
        void event(class QEvent *);

    // RVA: 0xC81 | Ordinal: 3202
        void geometry(void) const;

    // RVA: 0xD22 | Ordinal: 3363
        void hide(void);

    // RVA: 0xD8A | Ordinal: 3467
        void icon(void) const;

    // RVA: 0xF52 | Ordinal: 3923
        void isSystemTrayAvailable(void);

    // RVA: 0xF6E | Ordinal: 3951
        void isVisible(void) const;

    // RVA: 0x110B | Ordinal: 4364
        void messageClicked(void);

    // RVA: 0x1183 | Ordinal: 4484
        void metaObject(void) const;

    // RVA: 0x149C | Ordinal: 5277
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x152F | Ordinal: 5424
        void qt_metacast(char const *);

    // RVA: 0x15C5 | Ordinal: 5574
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x18A8 | Ordinal: 6313
        void setContextMenu(class QMenu *);

    // RVA: 0x1A07 | Ordinal: 6664
        void setIcon(class QIcon const &);

    // RVA: 0x1CD4 | Ordinal: 7381
        void setToolTip(class QString const &);

    // RVA: 0x1D20 | Ordinal: 7457
        void setVisible(bool);

    // RVA: 0x1D90 | Ordinal: 7569
        void show(void);

    // RVA: 0x1DB4 | Ordinal: 7605
        void showMessage(class QString const &, class QString const &, class QIcon const &, int);

    // RVA: 0x1DB5 | Ordinal: 7606
        void showMessage(class QString const &, class QString const &, enum QSystemTrayIcon::MessageIcon, int);

    // RVA: 0x1F73 | Ordinal: 8052
        void supportsMessages(void);

    // RVA: 0x2059 | Ordinal: 8282
        void toolTip(void) const;

    // RVA: 0x20EB | Ordinal: 8428
        void tr(char const *, char const *, int);

    // RVA: 0x217E | Ordinal: 8575
        void trUtf8(char const *, char const *, int);

    // RVA: 0x273 | Ordinal: 628
        void _QSystemTrayIcon(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QSYSTEMTRAYICON_HPP
