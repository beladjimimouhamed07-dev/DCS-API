#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QAccessibleEvent
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QAccessibleEvent
{
public:

    // RVA: 0x67 | Ordinal: 104
        void QAccessibleEvent(class QAccessibleInterface *, enum QAccessible::Event);

    // RVA: 0x68 | Ordinal: 105
        void QAccessibleEvent(class QObject *, enum QAccessible::Event);

    // RVA: 0x94D | Ordinal: 2382
        void accessibleInterface(void) const;

    // RVA: 0xB8C | Ordinal: 2957
        void child(void) const;

    // RVA: 0x537B | Ordinal: 21372
        void object(void) const;

    // RVA: 0x58A6 | Ordinal: 22695
        void setChild(int);

    // RVA: 0x6063 | Ordinal: 24676
        void type(void) const;

    // RVA: 0x6095 | Ordinal: 24726
        void uniqueId(void) const;

    // RVA: 0x401 | Ordinal: 1026
        void _QAccessibleEvent(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QACCESSIBLEEVENT_HPP
