#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QRegion
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QRegion
{
public:

    // RVA: 0x28B | Ordinal: 652
        void QRegion(class QRegion &&);

    // RVA: 0x28C | Ordinal: 653
        void QRegion(class QRegion const &);

    // RVA: 0x28D | Ordinal: 654
        void QRegion(class QBitmap const &);

    // RVA: 0x28E | Ordinal: 655
        void QRegion(class QPolygon const &, enum Qt::FillRule);

    // RVA: 0x28F | Ordinal: 656
        void QRegion(class QRect const &, enum QRegion::RegionType);

    // RVA: 0x290 | Ordinal: 657
        void QRegion(int, int, int, int, enum QRegion::RegionType);

    // RVA: 0x291 | Ordinal: 658
        void QRegion(void);

    // RVA: 0xA6C | Ordinal: 2669
        void begin(void) const;

    // RVA: 0xAFA | Ordinal: 2811
        void boundingRect(void) const;

    // RVA: 0xB5D | Ordinal: 2910
        void cbegin(void) const;

    // RVA: 0xB6B | Ordinal: 2924
        void cend(void) const;

    // RVA: 0xB96 | Ordinal: 2967
        void cleanUp(struct QRegion::QRegionData *);

    // RVA: 0xC41 | Ordinal: 3138
        void contains(class QPoint const &) const;

    // RVA: 0xC42 | Ordinal: 3139
        void contains(class QRect const &) const;

    // RVA: 0xC76 | Ordinal: 3191
        void copy(void) const;

    // RVA: 0xC7E | Ordinal: 3199
        void crbegin(void) const;

    // RVA: 0xCD3 | Ordinal: 3284
        void crend(void) const;

    // RVA: 0xE27 | Ordinal: 3624
        void detach(void);

    // RVA: 0xFA8 | Ordinal: 4009
        void end(void) const;

    // RVA: 0xFDE | Ordinal: 4063
        void eor(class QRegion const &) const;

    // RVA: 0xFF9 | Ordinal: 4090
        void exec(class QByteArray const &, int, enum QDataStream::ByteOrder);

    // RVA: 0x4F95 | Ordinal: 20374
        void intersect(class QRegion const &) const;

    // RVA: 0x4F96 | Ordinal: 20375
        void intersect(class QRect const &) const;

    // RVA: 0x4F9A | Ordinal: 20379
        void intersected(class QRegion const &) const;

    // RVA: 0x4F9B | Ordinal: 20380
        void intersected(class QRect const &) const;

    // RVA: 0x4FA0 | Ordinal: 20385
        void intersects(class QRegion const &) const;

    // RVA: 0x4FA1 | Ordinal: 20386
        void intersects(class QRect const &) const;

    // RVA: 0x5014 | Ordinal: 20501
        void isEmpty(void) const;

    // RVA: 0x5056 | Ordinal: 20567
        void isNull(void) const;

    // RVA: 0x566E | Ordinal: 22127
        void rbegin(void) const;

    // RVA: 0x568D | Ordinal: 22158
        void rectCount(void) const;

    // RVA: 0x5691 | Ordinal: 22162
        void rects(void) const;

    // RVA: 0x56F3 | Ordinal: 22260
        void rend(void) const;

    // RVA: 0x5B2D | Ordinal: 23342
        void setRects(class QRect const *, int);

    // RVA: 0x5E49 | Ordinal: 24138
        void subtract(class QRegion const &) const;

    // RVA: 0x5E4D | Ordinal: 24142
        void subtracted(class QRegion const &) const;

    // RVA: 0x5E91 | Ordinal: 24210
        void swap(class QRegion &);

    // RVA: 0x604A | Ordinal: 24651
        void translate(class QPoint const &);

    // RVA: 0x604B | Ordinal: 24652
        void translate(int, int);

    // RVA: 0x6054 | Ordinal: 24661
        void translated(class QPoint const &) const;

    // RVA: 0x6055 | Ordinal: 24662
        void translated(int, int) const;

    // RVA: 0x6098 | Ordinal: 24729
        void unite(class QRegion const &) const;

    // RVA: 0x6099 | Ordinal: 24730
        void unite(class QRect const &) const;

    // RVA: 0x609E | Ordinal: 24735
        void united(class QRegion const &) const;

    // RVA: 0x609F | Ordinal: 24736
        void united(class QRect const &) const;

    // RVA: 0x61CA | Ordinal: 25035
        void xored(class QRegion const &) const;

    // RVA: 0x4F1 | Ordinal: 1266
        void _QRegion(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QREGION_HPP
