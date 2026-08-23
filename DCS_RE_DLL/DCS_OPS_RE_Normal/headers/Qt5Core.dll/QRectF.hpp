#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QRectF
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QRectF
{
public:

    // RVA: 0x1C3 | Ordinal: 452
        void QRectF(class QPointF const &, class QPointF const &);

    // RVA: 0x1C4 | Ordinal: 453
        void QRectF(class QPointF const &, class QSizeF const &);

    // RVA: 0x1C5 | Ordinal: 454
        void QRectF(class QRect const &);

    // RVA: 0x1C6 | Ordinal: 455
        void QRectF(double, double, double, double);

    // RVA: 0x1C7 | Ordinal: 456
        void QRectF(void);

    // RVA: 0x822 | Ordinal: 2083
        void adjust(double, double, double, double);

    // RVA: 0x824 | Ordinal: 2085
        void adjusted(double, double, double, double) const;

    // RVA: 0x921 | Ordinal: 2338
        void bottom(void) const;

    // RVA: 0x923 | Ordinal: 2340
        void bottomLeft(void) const;

    // RVA: 0x926 | Ordinal: 2343
        void bottomRight(void) const;

    // RVA: 0x9AC | Ordinal: 2477
        void center(void) const;

    // RVA: 0xACE | Ordinal: 2767
        void contains(class QRectF const &) const;

    // RVA: 0xACF | Ordinal: 2768
        void contains(class QPointF const &) const;

    // RVA: 0xAD0 | Ordinal: 2769
        void contains(double, double) const;

    // RVA: 0xF23 | Ordinal: 3876
        void getCoords(double *, double *, double *, double *) const;

    // RVA: 0xF2E | Ordinal: 3887
        void getRect(double *, double *, double *, double *) const;

    // RVA: 0xF89 | Ordinal: 3978
        void height(void) const;

    // RVA: 0x1052 | Ordinal: 4179
        void intersect(class QRectF const &) const;

    // RVA: 0x1055 | Ordinal: 4182
        void intersected(class QRectF const &) const;

    // RVA: 0x1059 | Ordinal: 4186
        void intersects(class QRectF const &) const;

    // RVA: 0x10D3 | Ordinal: 4308
        void isEmpty(void) const;

    // RVA: 0x1151 | Ordinal: 4434
        void isNull(void) const;

    // RVA: 0x1208 | Ordinal: 4617
        void isValid(void) const;

    // RVA: 0x128E | Ordinal: 4751
        void left(void) const;

    // RVA: 0x1315 | Ordinal: 4886
        void marginsAdded(class QMarginsF const &) const;

    // RVA: 0x1317 | Ordinal: 4888
        void marginsRemoved(class QMarginsF const &) const;

    // RVA: 0x13CE | Ordinal: 5071
        void moveBottom(double);

    // RVA: 0x13D0 | Ordinal: 5073
        void moveBottomLeft(class QPointF const &);

    // RVA: 0x13D2 | Ordinal: 5075
        void moveBottomRight(class QPointF const &);

    // RVA: 0x13D4 | Ordinal: 5077
        void moveCenter(class QPointF const &);

    // RVA: 0x13DA | Ordinal: 5083
        void moveLeft(double);

    // RVA: 0x13DD | Ordinal: 5086
        void moveRight(double);

    // RVA: 0x13E5 | Ordinal: 5094
        void moveTo(class QPointF const &);

    // RVA: 0x13E6 | Ordinal: 5095
        void moveTo(double, double);

    // RVA: 0x13EC | Ordinal: 5101
        void moveTop(double);

    // RVA: 0x13EE | Ordinal: 5103
        void moveTopLeft(class QPointF const &);

    // RVA: 0x13F0 | Ordinal: 5105
        void moveTopRight(class QPointF const &);

    // RVA: 0x143D | Ordinal: 5182
        void normalized(void) const;

    // RVA: 0x1898 | Ordinal: 6297
        void right(void) const;

    // RVA: 0x193E | Ordinal: 6463
        void setBottom(double);

    // RVA: 0x1940 | Ordinal: 6465
        void setBottomLeft(class QPointF const &);

    // RVA: 0x1942 | Ordinal: 6467
        void setBottomRight(class QPointF const &);

    // RVA: 0x1958 | Ordinal: 6489
        void setCoords(double, double, double, double);

    // RVA: 0x19DC | Ordinal: 6621
        void setHeight(double);

    // RVA: 0x19FA | Ordinal: 6651
        void setLeft(double);

    // RVA: 0x1A72 | Ordinal: 6771
        void setRect(double, double, double, double);

    // RVA: 0x1A7A | Ordinal: 6779
        void setRight(double);

    // RVA: 0x1A90 | Ordinal: 6801
        void setSize(class QSizeF const &);

    // RVA: 0x1AC3 | Ordinal: 6852
        void setTop(double);

    // RVA: 0x1AC5 | Ordinal: 6854
        void setTopLeft(class QPointF const &);

    // RVA: 0x1AC7 | Ordinal: 6856
        void setTopRight(class QPointF const &);

    // RVA: 0x1ADD | Ordinal: 6878
        void setWidth(double);

    // RVA: 0x1AE6 | Ordinal: 6887
        void setX(double);

    // RVA: 0x1AEA | Ordinal: 6891
        void setY(double);

    // RVA: 0x1B3F | Ordinal: 6976
        void size(void) const;

    // RVA: 0x1CE1 | Ordinal: 7394
        void toAlignedRect(void) const;

    // RVA: 0x1DAC | Ordinal: 7597
        void toRect(void) const;

    // RVA: 0x1E68 | Ordinal: 7785
        void top(void) const;

    // RVA: 0x1E6B | Ordinal: 7788
        void topLeft(void) const;

    // RVA: 0x1E6E | Ordinal: 7791
        void topRight(void) const;

    // RVA: 0x1EFC | Ordinal: 7933
        void translate(class QPointF const &);

    // RVA: 0x1EFD | Ordinal: 7934
        void translate(double, double);

    // RVA: 0x1F05 | Ordinal: 7942
        void translated(class QPointF const &) const;

    // RVA: 0x1F06 | Ordinal: 7943
        void translated(double, double) const;

    // RVA: 0x1F0C | Ordinal: 7949
        void transposed(void) const;

    // RVA: 0x1F5D | Ordinal: 8030
        void unite(class QRectF const &) const;

    // RVA: 0x1F5F | Ordinal: 8032
        void united(class QRectF const &) const;

    // RVA: 0x2007 | Ordinal: 8200
        void width(void) const;

    // RVA: 0x204B | Ordinal: 8268
        void x(void) const;

    // RVA: 0x2053 | Ordinal: 8276
        void y(void) const;
};

// DCS_OPS_RE_QT5CORE.DLL_QRECTF_HPP
