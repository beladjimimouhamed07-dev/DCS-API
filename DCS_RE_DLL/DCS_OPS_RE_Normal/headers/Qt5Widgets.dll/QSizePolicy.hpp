#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QSizePolicy
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QSizePolicy
{
public:

    // RVA: 0x102 | Ordinal: 259
        void QSizePolicy(int);

    // RVA: 0x103 | Ordinal: 260
        void QSizePolicy(struct QSizePolicy::Bits);

    // RVA: 0x104 | Ordinal: 261
        void QSizePolicy(enum QSizePolicy::Policy, enum QSizePolicy::Policy, enum QSizePolicy::ControlType);

    // RVA: 0x105 | Ordinal: 262
        void QSizePolicy(void);

    // RVA: 0x7D9 | Ordinal: 2010
        void controlType(void) const;

    // RVA: 0xBA2 | Ordinal: 2979
        void expandingDirections(void) const;

    // RVA: 0xCEC | Ordinal: 3309
        void hasHeightForWidth(void) const;

    // RVA: 0xCFE | Ordinal: 3327
        void hasWidthForHeight(void) const;

    // RVA: 0xD60 | Ordinal: 3425
        void horizontalPolicy(void) const;

    // RVA: 0xD70 | Ordinal: 3441
        void horizontalStretch(void) const;

    // RVA: 0x16D7 | Ordinal: 5848
        void retainSizeWhenHidden(void) const;

    // RVA: 0x18AA | Ordinal: 6315
        void setControlType(enum QSizePolicy::ControlType);

    // RVA: 0x19E8 | Ordinal: 6633
        void setHeightForWidth(bool);

    // RVA: 0x19F4 | Ordinal: 6645
        void setHorizontalPolicy(enum QSizePolicy::Policy);

    // RVA: 0x19FD | Ordinal: 6654
        void setHorizontalStretch(int);

    // RVA: 0x1B98 | Ordinal: 7065
        void setRetainSizeWhenHidden(bool);

    // RVA: 0x1D02 | Ordinal: 7427
        void setVerticalPolicy(enum QSizePolicy::Policy);

    // RVA: 0x1D0B | Ordinal: 7436
        void setVerticalStretch(int);

    // RVA: 0x1D3B | Ordinal: 7484
        void setWidthForHeight(bool);

    // RVA: 0x2036 | Ordinal: 8247
        void toControlTypeFieldValue(enum QSizePolicy::ControlType);

    // RVA: 0x21AA | Ordinal: 8619
        void transpose(void);

    // RVA: 0x21AB | Ordinal: 8620
        void transposed(void) const;

    // RVA: 0x2284 | Ordinal: 8837
        void verticalPolicy(void) const;

    // RVA: 0x2294 | Ordinal: 8853
        void verticalStretch(void) const;
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QSIZEPOLICY_HPP
