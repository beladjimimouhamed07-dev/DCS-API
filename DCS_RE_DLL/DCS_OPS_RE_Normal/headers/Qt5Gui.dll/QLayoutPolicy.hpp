#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QLayoutPolicy
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QLayoutPolicy
{
public:

    // RVA: 0x168 | Ordinal: 361
        void QLayoutPolicy(int);

    // RVA: 0x169 | Ordinal: 362
        void QLayoutPolicy(enum QLayoutPolicy::Policy, enum QLayoutPolicy::Policy, enum QLayoutPolicy::ControlType);

    // RVA: 0x16A | Ordinal: 363
        void QLayoutPolicy(void);

    // RVA: 0xC57 | Ordinal: 3160
        void controlType(void) const;

    // RVA: 0x1001 | Ordinal: 4098
        void expandingDirections(void) const;

    // RVA: 0x4E6B | Ordinal: 20076
        void hasHeightForWidth(void) const;

    // RVA: 0x4E80 | Ordinal: 20097
        void hasWidthForHeight(void) const;

    // RVA: 0x4EB7 | Ordinal: 20152
        void horizontalPolicy(void) const;

    // RVA: 0x4EB8 | Ordinal: 20153
        void horizontalStretch(void) const;

    // RVA: 0x58DE | Ordinal: 22751
        void setControlType(enum QLayoutPolicy::ControlType);

    // RVA: 0x59E7 | Ordinal: 23016
        void setHeightForWidth(bool);

    // RVA: 0x59ED | Ordinal: 23022
        void setHorizontalPolicy(enum QLayoutPolicy::Policy);

    // RVA: 0x59EE | Ordinal: 23023
        void setHorizontalStretch(int);

    // RVA: 0x5CA0 | Ordinal: 23713
        void setVerticalPolicy(enum QLayoutPolicy::Policy);

    // RVA: 0x5CA1 | Ordinal: 23714
        void setVerticalStretch(int);

    // RVA: 0x5CBE | Ordinal: 23743
        void setWidthForHeight(bool);

    // RVA: 0x6058 | Ordinal: 24665
        void transpose(void);

    // RVA: 0x611F | Ordinal: 24864
        void verticalPolicy(void) const;

    // RVA: 0x6120 | Ordinal: 24865
        void verticalStretch(void) const;
};

// DCS_OPS_RE_QT5GUI.DLL_QLAYOUTPOLICY_HPP
