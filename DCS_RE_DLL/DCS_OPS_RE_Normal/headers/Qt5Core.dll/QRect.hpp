#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QRect
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QRect
{
public:

    // RVA: 0x1BF | Ordinal: 448
        void QRect(class QPoint const &, class QPoint const &);

    // RVA: 0x1C0 | Ordinal: 449
        void QRect(class QPoint const &, class QSize const &);

    // RVA: 0x1C1 | Ordinal: 450
        void QRect(int, int, int, int);

    // RVA: 0x1C2 | Ordinal: 451
        void QRect(void);

    // RVA: 0x821 | Ordinal: 2082
        void adjust(int, int, int, int);

    // RVA: 0x823 | Ordinal: 2084
        void adjusted(int, int, int, int) const;

    // RVA: 0x920 | Ordinal: 2337
        void bottom(void) const;

    // RVA: 0x922 | Ordinal: 2339
        void bottomLeft(void) const;

    // RVA: 0x925 | Ordinal: 2342
        void bottomRight(void) const;

    // RVA: 0x9AB | Ordinal: 2476
        void center(void) const;

    // RVA: 0xACA | Ordinal: 2763
        void contains(class QRect const &, bool) const;

    // RVA: 0xACB | Ordinal: 2764
        void contains(class QPoint const &, bool) const;

    // RVA: 0xACC | Ordinal: 2765
        void contains(int, int) const;

    // RVA: 0xACD | Ordinal: 2766
        void contains(int, int, bool) const;

    // RVA: 0xF22 | Ordinal: 3875
        void getCoords(int *, int *, int *, int *) const;

    // RVA: 0xF2D | Ordinal: 3886
        void getRect(int *, int *, int *, int *) const;

    // RVA: 0xF88 | Ordinal: 3977
        void height(void) const;

    // RVA: 0x1051 | Ordinal: 4178
        void intersect(class QRect const &) const;

    // RVA: 0x1054 | Ordinal: 4181
        void intersected(class QRect const &) const;

    // RVA: 0x1058 | Ordinal: 4185
        void intersects(class QRect const &) const;

    // RVA: 0x10D2 | Ordinal: 4307
        void isEmpty(void) const;

    // RVA: 0x1150 | Ordinal: 4433
        void isNull(void) const;

    // RVA: 0x1207 | Ordinal: 4616
        void isValid(void) const;

    // RVA: 0x128D | Ordinal: 4750
        void left(void) const;

    // RVA: 0x1314 | Ordinal: 4885
        void marginsAdded(class QMargins const &) const;

    // RVA: 0x1316 | Ordinal: 4887
        void marginsRemoved(class QMargins const &) const;

    // RVA: 0x13CD | Ordinal: 5070
        void moveBottom(int);

    // RVA: 0x13CF | Ordinal: 5072
        void moveBottomLeft(class QPoint const &);

    // RVA: 0x13D1 | Ordinal: 5074
        void moveBottomRight(class QPoint const &);

    // RVA: 0x13D3 | Ordinal: 5076
        void moveCenter(class QPoint const &);

    // RVA: 0x13D9 | Ordinal: 5082
        void moveLeft(int);

    // RVA: 0x13DC | Ordinal: 5085
        void moveRight(int);

    // RVA: 0x13E3 | Ordinal: 5092
        void moveTo(class QPoint const &);

    // RVA: 0x13E4 | Ordinal: 5093
        void moveTo(int, int);

    // RVA: 0x13EB | Ordinal: 5100
        void moveTop(int);

    // RVA: 0x13ED | Ordinal: 5102
        void moveTopLeft(class QPoint const &);

    // RVA: 0x13EF | Ordinal: 5104
        void moveTopRight(class QPoint const &);

    // RVA: 0x143C | Ordinal: 5181
        void normalized(void) const;

    // RVA: 0x1897 | Ordinal: 6296
        void right(void) const;

    // RVA: 0x193D | Ordinal: 6462
        void setBottom(int);

    // RVA: 0x193F | Ordinal: 6464
        void setBottomLeft(class QPoint const &);

    // RVA: 0x1941 | Ordinal: 6466
        void setBottomRight(class QPoint const &);

    // RVA: 0x1957 | Ordinal: 6488
        void setCoords(int, int, int, int);

    // RVA: 0x19DB | Ordinal: 6620
        void setHeight(int);

    // RVA: 0x19F9 | Ordinal: 6650
        void setLeft(int);

    // RVA: 0x1A71 | Ordinal: 6770
        void setRect(int, int, int, int);

    // RVA: 0x1A79 | Ordinal: 6778
        void setRight(int);

    // RVA: 0x1A8F | Ordinal: 6800
        void setSize(class QSize const &);

    // RVA: 0x1AC2 | Ordinal: 6851
        void setTop(int);

    // RVA: 0x1AC4 | Ordinal: 6853
        void setTopLeft(class QPoint const &);

    // RVA: 0x1AC6 | Ordinal: 6855
        void setTopRight(class QPoint const &);

    // RVA: 0x1ADC | Ordinal: 6877
        void setWidth(int);

    // RVA: 0x1AE5 | Ordinal: 6886
        void setX(int);

    // RVA: 0x1AE9 | Ordinal: 6890
        void setY(int);

    // RVA: 0x1B3E | Ordinal: 6975
        void size(void) const;

    // RVA: 0x1E67 | Ordinal: 7784
        void top(void) const;

    // RVA: 0x1E6A | Ordinal: 7787
        void topLeft(void) const;

    // RVA: 0x1E6D | Ordinal: 7790
        void topRight(void) const;

    // RVA: 0x1EFA | Ordinal: 7931
        void translate(class QPoint const &);

    // RVA: 0x1EFB | Ordinal: 7932
        void translate(int, int);

    // RVA: 0x1F03 | Ordinal: 7940
        void translated(class QPoint const &) const;

    // RVA: 0x1F04 | Ordinal: 7941
        void translated(int, int) const;

    // RVA: 0x1F0B | Ordinal: 7948
        void transposed(void) const;

    // RVA: 0x1F5C | Ordinal: 8029
        void unite(class QRect const &) const;

    // RVA: 0x1F5E | Ordinal: 8031
        void united(class QRect const &) const;

    // RVA: 0x2006 | Ordinal: 8199
        void width(void) const;

    // RVA: 0x204A | Ordinal: 8267
        void x(void) const;

    // RVA: 0x2052 | Ordinal: 8275
        void y(void) const;
};

// DCS_OPS_RE_QT5CORE.DLL_QRECT_HPP
