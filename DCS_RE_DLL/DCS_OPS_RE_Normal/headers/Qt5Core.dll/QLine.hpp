#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QLine
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QLine
{
public:

    // RVA: 0x162 | Ordinal: 355
        void QLine(class QPoint const &, class QPoint const &);

    // RVA: 0x163 | Ordinal: 356
        void QLine(int, int, int, int);

    // RVA: 0x164 | Ordinal: 357
        void QLine(void);

    // RVA: 0x9A9 | Ordinal: 2474
        void center(void) const;

    // RVA: 0xCE3 | Ordinal: 3300
        void dx(void) const;

    // RVA: 0xCE5 | Ordinal: 3302
        void dy(void) const;

    // RVA: 0x114C | Ordinal: 4429
        void isNull(void) const;

    // RVA: 0x149E | Ordinal: 5279
        void p1(void) const;

    // RVA: 0x14A0 | Ordinal: 5281
        void p2(void) const;

    // RVA: 0x19FD | Ordinal: 6654
        void setLine(int, int, int, int);

    // RVA: 0x1A31 | Ordinal: 6706
        void setP1(class QPoint const &);

    // RVA: 0x1A33 | Ordinal: 6708
        void setP2(class QPoint const &);

    // RVA: 0x1A51 | Ordinal: 6738
        void setPoints(class QPoint const &, class QPoint const &);

    // RVA: 0x1EF6 | Ordinal: 7927
        void translate(class QPoint const &);

    // RVA: 0x1EF7 | Ordinal: 7928
        void translate(int, int);

    // RVA: 0x1EFF | Ordinal: 7936
        void translated(class QPoint const &) const;

    // RVA: 0x1F00 | Ordinal: 7937
        void translated(int, int) const;

    // RVA: 0x2044 | Ordinal: 8261
        void x1(void) const;

    // RVA: 0x2046 | Ordinal: 8263
        void x2(void) const;

    // RVA: 0x204C | Ordinal: 8269
        void y1(void) const;

    // RVA: 0x204E | Ordinal: 8271
        void y2(void) const;
};

// DCS_OPS_RE_QT5CORE.DLL_QLINE_HPP
