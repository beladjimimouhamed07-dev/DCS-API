#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QPlatformMenu
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPlatformMenu
{
public:

    // RVA: 0x247 | Ordinal: 584
        void QPlatformMenu(void);

    // RVA: 0x940 | Ordinal: 2369
        void aboutToHide(void);

    // RVA: 0x943 | Ordinal: 2372
        void aboutToShow(void);

    // RVA: 0xCB0 | Ordinal: 3249
        void createMenuItem(void) const;

    // RVA: 0xCCA | Ordinal: 3275
        void createSubMenu(void) const;

    // RVA: 0xE65 | Ordinal: 3686
        void dismiss(void);

    // RVA: 0x501A | Ordinal: 20507
        void isEnabled(void) const;

    // RVA: 0x5286 | Ordinal: 21127
        void metaObject(void) const;

    // RVA: 0x559D | Ordinal: 21918
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x55E1 | Ordinal: 21986
        void qt_metacast(char const *);

    // RVA: 0x5637 | Ordinal: 22072
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x5993 | Ordinal: 22932
        void setFont(class QFont const &);

    // RVA: 0x5A67 | Ordinal: 23144
        void setMenuType(enum QPlatformMenu::MenuType);

    // RVA: 0x5A75 | Ordinal: 23158
        void setMinimumWidth(int);

    // RVA: 0x5BE6 | Ordinal: 23527
        void setTag(unsigned __int64);

    // RVA: 0x5D22 | Ordinal: 23843
        void showPopup(class QWindow const *, class QRect const &, class QPlatformMenuItem const *);

    // RVA: 0x5EBA | Ordinal: 24251
        void tag(void) const;

    // RVA: 0x5FC4 | Ordinal: 24517
        void tr(char const *, char const *, int);

    // RVA: 0x600B | Ordinal: 24588
        void trUtf8(char const *, char const *, int);

    // RVA: 0x4D3 | Ordinal: 1236
        void _QPlatformMenu(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QPLATFORMMENU_HPP
