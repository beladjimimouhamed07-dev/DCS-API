#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QAccessible
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QAccessible
{
public:

    // RVA: 0x5F | Ordinal: 96
        void QAccessible(void);

    // RVA: 0x94C | Ordinal: 2381
        void accessibleInterface(unsigned int);

    // RVA: 0xB97 | Ordinal: 2968
        void cleanup(void);

    // RVA: 0xDE0 | Ordinal: 3553
        void deleteAccessibleInterface(unsigned int);

    // RVA: 0x4F7F | Ordinal: 20352
        void installActivationObserver(class QAccessible::ActivationObserver *);

    // RVA: 0x4F80 | Ordinal: 20353
        void installFactory(class QAccessibleInterface * (__cdecl *)(class QString const &, class QObject *));

    // RVA: 0x4F81 | Ordinal: 20354
        void installRootObjectHandler(void (__cdecl *)(class QObject *)))(class QObject *);

    // RVA: 0x4F82 | Ordinal: 20355
        void installUpdateHandler(void (__cdecl *)(class QAccessibleEvent *)))(class QAccessibleEvent *);

    // RVA: 0x4FBB | Ordinal: 20412
        void isActive(void);

    // RVA: 0x5506 | Ordinal: 21767
        void qAccessibleTextBoundaryHelper(class QTextCursor const &, enum QAccessible::TextBoundaryType);

    // RVA: 0x565E | Ordinal: 22111
        void queryAccessibleInterface(class QObject *);

    // RVA: 0x56A5 | Ordinal: 22182
        void registerAccessibleInterface(class QAccessibleInterface *);

    // RVA: 0x56C8 | Ordinal: 22217
        void removeActivationObserver(class QAccessible::ActivationObserver *);

    // RVA: 0x56D6 | Ordinal: 22231
        void removeFactory(class QAccessibleInterface * (__cdecl *)(class QString const &, class QObject *));

    // RVA: 0x5815 | Ordinal: 22550
        void setActive(bool);

    // RVA: 0x5B54 | Ordinal: 23381
        void setRootObject(class QObject *);

    // RVA: 0x6094 | Ordinal: 24725
        void uniqueId(class QAccessibleInterface *);

    // RVA: 0x60B4 | Ordinal: 24757
        void updateAccessibility(class QAccessibleEvent *);

    // RVA: 0x60B5 | Ordinal: 24758
        void updateAccessibility(class QObject *, int, enum QAccessible::Event);
};

// DCS_OPS_RE_QT5GUI.DLL_QACCESSIBLE_HPP
