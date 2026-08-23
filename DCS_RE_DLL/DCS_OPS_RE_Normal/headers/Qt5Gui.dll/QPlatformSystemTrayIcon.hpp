#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QPlatformSystemTrayIcon
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPlatformSystemTrayIcon
{
public:

    // RVA: 0x258 | Ordinal: 601
        void QPlatformSystemTrayIcon(void);

    // RVA: 0x955 | Ordinal: 2390
        void activated(enum QPlatformSystemTrayIcon::ActivationReason);

    // RVA: 0xC54 | Ordinal: 3157
        void contextMenuRequested(class QPoint, class QPlatformScreen const *);

    // RVA: 0xCAF | Ordinal: 3248
        void createMenu(void) const;

    // RVA: 0x525A | Ordinal: 21083
        void messageClicked(void);

    // RVA: 0x528C | Ordinal: 21133
        void metaObject(void) const;

    // RVA: 0x55A3 | Ordinal: 21924
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x55E7 | Ordinal: 21992
        void qt_metacast(char const *);

    // RVA: 0x563D | Ordinal: 22078
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x5FCA | Ordinal: 24523
        void tr(char const *, char const *, int);

    // RVA: 0x6011 | Ordinal: 24594
        void trUtf8(char const *, char const *, int);

    // RVA: 0x4E2 | Ordinal: 1251
        void _QPlatformSystemTrayIcon(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QPLATFORMSYSTEMTRAYICON_HPP
