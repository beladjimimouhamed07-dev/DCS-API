#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QSizeF
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QSizeF
{
public:

    // RVA: 0x1F2 | Ordinal: 499
        void QSizeF(class QSize const &);

    // RVA: 0x1F3 | Ordinal: 500
        void QSizeF(double, double);

    // RVA: 0x1F4 | Ordinal: 501
        void QSizeF(void);

    // RVA: 0x929 | Ordinal: 2346
        void boundedTo(class QSizeF const &) const;

    // RVA: 0xDDD | Ordinal: 3550
        void expandedTo(class QSizeF const &) const;

    // RVA: 0xF40 | Ordinal: 3905
        void grownBy(class QMarginsF) const;

    // RVA: 0xF8B | Ordinal: 3980
        void height(void) const;

    // RVA: 0x10D6 | Ordinal: 4311
        void isEmpty(void) const;

    // RVA: 0x1153 | Ordinal: 4436
        void isNull(void) const;

    // RVA: 0x120F | Ordinal: 4624
        void isValid(void) const;

    // RVA: 0x1893 | Ordinal: 6292
        void rheight(void);

    // RVA: 0x18C7 | Ordinal: 6344
        void rwidth(void);

    // RVA: 0x18D1 | Ordinal: 6354
        void scale(class QSizeF const &, enum Qt::AspectRatioMode);

    // RVA: 0x18D2 | Ordinal: 6355
        void scale(double, double, enum Qt::AspectRatioMode);

    // RVA: 0x18D5 | Ordinal: 6358
        void scaled(class QSizeF const &, enum Qt::AspectRatioMode) const;

    // RVA: 0x18D6 | Ordinal: 6359
        void scaled(double, double, enum Qt::AspectRatioMode) const;

    // RVA: 0x19DE | Ordinal: 6623
        void setHeight(double);

    // RVA: 0x1ADF | Ordinal: 6880
        void setWidth(double);

    // RVA: 0x1B05 | Ordinal: 6918
        void shrunkBy(class QMarginsF) const;

    // RVA: 0x1DBF | Ordinal: 7616
        void toSize(void) const;

    // RVA: 0x1F08 | Ordinal: 7945
        void transpose(void);

    // RVA: 0x1F0E | Ordinal: 7951
        void transposed(void) const;

    // RVA: 0x2009 | Ordinal: 8202
        void width(void) const;
};

// DCS_OPS_RE_QT5CORE.DLL_QSIZEF_HPP
