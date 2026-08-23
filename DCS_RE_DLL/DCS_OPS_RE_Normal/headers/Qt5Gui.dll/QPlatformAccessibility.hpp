#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QPlatformAccessibility
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPlatformAccessibility
{
public:

    // RVA: 0x230 | Ordinal: 561
        void QPlatformAccessibility(class QPlatformAccessibility const &);

    // RVA: 0x231 | Ordinal: 562
        void QPlatformAccessibility(void);

    // RVA: 0xB9C | Ordinal: 2973
        void cleanup(void);

    // RVA: 0x4F12 | Ordinal: 20243
        void initialize(void);

    // RVA: 0x4FBF | Ordinal: 20416
        void isActive(void) const;

    // RVA: 0x536B | Ordinal: 21356
        void notifyAccessibilityUpdate(class QAccessibleEvent *);

    // RVA: 0x5817 | Ordinal: 22552
        void setActive(bool);

    // RVA: 0x5B55 | Ordinal: 23382
        void setRootObject(class QObject *);

    // RVA: 0x4C3 | Ordinal: 1220
        void _QPlatformAccessibility(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QPLATFORMACCESSIBILITY_HPP
