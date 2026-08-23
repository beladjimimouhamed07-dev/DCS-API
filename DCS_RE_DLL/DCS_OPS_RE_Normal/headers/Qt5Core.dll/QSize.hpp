#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QSize
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QSize
{
public:

    // RVA: 0x1F0 | Ordinal: 497
        void QSize(int, int);

    // RVA: 0x1F1 | Ordinal: 498
        void QSize(void);

    // RVA: 0x928 | Ordinal: 2345
        void boundedTo(class QSize const &) const;

    // RVA: 0xDDC | Ordinal: 3549
        void expandedTo(class QSize const &) const;

    // RVA: 0xF3F | Ordinal: 3904
        void grownBy(class QMargins) const;

    // RVA: 0xF8A | Ordinal: 3979
        void height(void) const;

    // RVA: 0x10D5 | Ordinal: 4310
        void isEmpty(void) const;

    // RVA: 0x1152 | Ordinal: 4435
        void isNull(void) const;

    // RVA: 0x120E | Ordinal: 4623
        void isValid(void) const;

    // RVA: 0x1892 | Ordinal: 6291
        void rheight(void);

    // RVA: 0x18C6 | Ordinal: 6343
        void rwidth(void);

    // RVA: 0x18CF | Ordinal: 6352
        void scale(class QSize const &, enum Qt::AspectRatioMode);

    // RVA: 0x18D0 | Ordinal: 6353
        void scale(int, int, enum Qt::AspectRatioMode);

    // RVA: 0x18D3 | Ordinal: 6356
        void scaled(class QSize const &, enum Qt::AspectRatioMode) const;

    // RVA: 0x18D4 | Ordinal: 6357
        void scaled(int, int, enum Qt::AspectRatioMode) const;

    // RVA: 0x19DD | Ordinal: 6622
        void setHeight(int);

    // RVA: 0x1ADE | Ordinal: 6879
        void setWidth(int);

    // RVA: 0x1B04 | Ordinal: 6917
        void shrunkBy(class QMargins) const;

    // RVA: 0x1F07 | Ordinal: 7944
        void transpose(void);

    // RVA: 0x1F0D | Ordinal: 7950
        void transposed(void) const;

    // RVA: 0x2008 | Ordinal: 8201
        void width(void) const;
};

// DCS_OPS_RE_QT5CORE.DLL_QSIZE_HPP
