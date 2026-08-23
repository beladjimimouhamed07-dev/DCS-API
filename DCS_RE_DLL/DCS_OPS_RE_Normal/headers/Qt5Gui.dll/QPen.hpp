#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QPen
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPen
{
public:

    // RVA: 0x219 | Ordinal: 538
        void QPen(class QPen &&);

    // RVA: 0x21A | Ordinal: 539
        void QPen(class QPen const &);

    // RVA: 0x21B | Ordinal: 540
        void QPen(class QBrush const &, double, enum Qt::PenStyle, enum Qt::PenCapStyle, enum Qt::PenJoinStyle);

    // RVA: 0x21C | Ordinal: 541
        void QPen(class QColor const &);

    // RVA: 0x21D | Ordinal: 542
        void QPen(enum Qt::PenStyle);

    // RVA: 0x21E | Ordinal: 543
        void QPen(void);

    // RVA: 0xB03 | Ordinal: 2820
        void brush(void) const;

    // RVA: 0xB4F | Ordinal: 2896
        void capStyle(void) const;

    // RVA: 0xBF7 | Ordinal: 3064
        void color(void) const;

    // RVA: 0xD9D | Ordinal: 3486
        void dashOffset(void) const;

    // RVA: 0xDA0 | Ordinal: 3489
        void dashPattern(void) const;

    // RVA: 0xDB3 | Ordinal: 3508
        void data_ptr(void);

    // RVA: 0xE24 | Ordinal: 3621
        void detach(void);

    // RVA: 0x4FFA | Ordinal: 20475
        void isCosmetic(void) const;

    // RVA: 0x5006 | Ordinal: 20487
        void isDetached(void);

    // RVA: 0x507E | Ordinal: 20607
        void isSolid(void) const;

    // RVA: 0x50DE | Ordinal: 20703
        void joinStyle(void) const;

    // RVA: 0x52DE | Ordinal: 21215
        void miterLimit(void) const;

    // RVA: 0x588B | Ordinal: 22668
        void setBrush(class QBrush const &);

    // RVA: 0x5894 | Ordinal: 22677
        void setCapStyle(enum Qt::PenCapStyle);

    // RVA: 0x58BB | Ordinal: 22716
        void setColor(class QColor const &);

    // RVA: 0x58E0 | Ordinal: 22753
        void setCosmetic(bool);

    // RVA: 0x58F9 | Ordinal: 22778
        void setDashOffset(double);

    // RVA: 0x58FD | Ordinal: 22782
        void setDashPattern(class QVector<double> const &);

    // RVA: 0x5A16 | Ordinal: 23063
        void setJoinStyle(enum Qt::PenJoinStyle);

    // RVA: 0x5A80 | Ordinal: 23169
        void setMiterLimit(double);

    // RVA: 0x5BCA | Ordinal: 23499
        void setStyle(enum Qt::PenStyle);

    // RVA: 0x5CB7 | Ordinal: 23736
        void setWidth(int);

    // RVA: 0x5CBD | Ordinal: 23742
        void setWidthF(double);

    // RVA: 0x5E2D | Ordinal: 24110
        void style(void) const;

    // RVA: 0x5E8B | Ordinal: 24204
        void swap(class QPen &);

    // RVA: 0x6155 | Ordinal: 24918
        void width(void) const;

    // RVA: 0x6160 | Ordinal: 24929
        void widthF(void) const;

    // RVA: 0x4BD | Ordinal: 1214
        void _QPen(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QPEN_HPP
