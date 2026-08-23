#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QLineF
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QLineF
{
public:

    // RVA: 0x165 | Ordinal: 358
        void QLineF(class QLine const &);

    // RVA: 0x166 | Ordinal: 359
        void QLineF(class QPointF const &, class QPointF const &);

    // RVA: 0x167 | Ordinal: 360
        void QLineF(double, double, double, double);

    // RVA: 0x168 | Ordinal: 361
        void QLineF(void);

    // RVA: 0x83C | Ordinal: 2109
        void angle(class QLineF const &) const;

    // RVA: 0x83D | Ordinal: 2110
        void angle(void) const;

    // RVA: 0x83E | Ordinal: 2111
        void angleTo(class QLineF const &) const;

    // RVA: 0x9AA | Ordinal: 2475
        void center(void) const;

    // RVA: 0xCE4 | Ordinal: 3301
        void dx(void) const;

    // RVA: 0xCE6 | Ordinal: 3303
        void dy(void) const;

    // RVA: 0xEC2 | Ordinal: 3779
        void fromPolar(double, double);

    // RVA: 0x1050 | Ordinal: 4177
        void intersect(class QLineF const &, class QPointF *) const;

    // RVA: 0x1057 | Ordinal: 4184
        void intersects(class QLineF const &, class QPointF *) const;

    // RVA: 0x114D | Ordinal: 4430
        void isNull(void) const;

    // RVA: 0x129D | Ordinal: 4766
        void length(void) const;

    // RVA: 0x143B | Ordinal: 5180
        void normalVector(void) const;

    // RVA: 0x149F | Ordinal: 5280
        void p1(void) const;

    // RVA: 0x14A1 | Ordinal: 5282
        void p2(void) const;

    // RVA: 0x14E8 | Ordinal: 5353
        void pointAt(double) const;

    // RVA: 0x1927 | Ordinal: 6440
        void setAngle(double);

    // RVA: 0x19FB | Ordinal: 6652
        void setLength(double);

    // RVA: 0x19FE | Ordinal: 6655
        void setLine(double, double, double, double);

    // RVA: 0x1A32 | Ordinal: 6707
        void setP1(class QPointF const &);

    // RVA: 0x1A34 | Ordinal: 6709
        void setP2(class QPointF const &);

    // RVA: 0x1A52 | Ordinal: 6739
        void setPoints(class QPointF const &, class QPointF const &);

    // RVA: 0x1D6A | Ordinal: 7531
        void toLine(void) const;

    // RVA: 0x1EF8 | Ordinal: 7929
        void translate(class QPointF const &);

    // RVA: 0x1EF9 | Ordinal: 7930
        void translate(double, double);

    // RVA: 0x1F01 | Ordinal: 7938
        void translated(class QPointF const &) const;

    // RVA: 0x1F02 | Ordinal: 7939
        void translated(double, double) const;

    // RVA: 0x1F5B | Ordinal: 8028
        void unitVector(void) const;

    // RVA: 0x2045 | Ordinal: 8262
        void x1(void) const;

    // RVA: 0x2047 | Ordinal: 8264
        void x2(void) const;

    // RVA: 0x204D | Ordinal: 8270
        void y1(void) const;

    // RVA: 0x204F | Ordinal: 8272
        void y2(void) const;
};

// DCS_OPS_RE_QT5CORE.DLL_QLINEF_HPP
