#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QAccessibleTableModelChangeEvent
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QAccessibleTableModelChangeEvent
{
public:

    // RVA: 0x75 | Ordinal: 118
        void QAccessibleTableModelChangeEvent(class QAccessibleInterface *, enum QAccessibleTableModelChangeEvent::ModelChangeType);

    // RVA: 0x76 | Ordinal: 119
        void QAccessibleTableModelChangeEvent(class QObject *, enum QAccessibleTableModelChangeEvent::ModelChangeType);

    // RVA: 0x1081 | Ordinal: 4226
        void firstColumn(void) const;

    // RVA: 0x1089 | Ordinal: 4234
        void firstRow(void) const;

    // RVA: 0x5106 | Ordinal: 20743
        void lastColumn(void) const;

    // RVA: 0x5115 | Ordinal: 20758
        void lastRow(void) const;

    // RVA: 0x52E8 | Ordinal: 21225
        void modelChangeType(void) const;

    // RVA: 0x5977 | Ordinal: 22904
        void setFirstColumn(int);

    // RVA: 0x5978 | Ordinal: 22905
        void setFirstRow(int);

    // RVA: 0x5A20 | Ordinal: 23073
        void setLastColumn(int);

    // RVA: 0x5A23 | Ordinal: 23076
        void setLastRow(int);

    // RVA: 0x5A84 | Ordinal: 23173
        void setModelChangeType(enum QAccessibleTableModelChangeEvent::ModelChangeType);

    // RVA: 0x409 | Ordinal: 1034
        void _QAccessibleTableModelChangeEvent(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QACCESSIBLETABLEMODELCHANGEEVENT_HPP
