#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QPoint>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPoint_
{
public:

    // RVA: 0x847 | Ordinal: 2120
        void append(class QPoint &&);

    // RVA: 0x848 | Ordinal: 2121
        void append(class QVector<class QPoint> const &);

    // RVA: 0x849 | Ordinal: 2122
        void append(class QPoint const &);

    // RVA: 0x8AD | Ordinal: 2222
        void at(int) const;

    // RVA: 0x8D8 | Ordinal: 2265
        void back(void);

    // RVA: 0x8D9 | Ordinal: 2266
        void back(void) const;

    // RVA: 0x8EB | Ordinal: 2284
        void begin(void);

    // RVA: 0x8EC | Ordinal: 2285
        void begin(void) const;

    // RVA: 0x96A | Ordinal: 2411
        void capacity(void) const;

    // RVA: 0x991 | Ordinal: 2450
        void cbegin(void) const;

    // RVA: 0x99F | Ordinal: 2464
        void cend(void) const;

    // RVA: 0x9D9 | Ordinal: 2522
        void clear(void);

    // RVA: 0xA81 | Ordinal: 2690
        void constBegin(void) const;

    // RVA: 0xA8B | Ordinal: 2700
        void constData(void) const;

    // RVA: 0xA94 | Ordinal: 2709
        void constEnd(void) const;

    // RVA: 0xAA6 | Ordinal: 2727
        void constFirst(void) const;

    // RVA: 0xAAA | Ordinal: 2731
        void constLast(void) const;

    // RVA: 0xAB7 | Ordinal: 2744
        void contains(class QPoint const &) const;

    // RVA: 0xAF1 | Ordinal: 2802
        void copyConstruct(class QPoint const *, class QPoint const *, class QPoint *);

    // RVA: 0xAF6 | Ordinal: 2807
        void count(class QPoint const &) const;

    // RVA: 0xAF7 | Ordinal: 2808
        void count(void) const;

    // RVA: 0xB1A | Ordinal: 2843
        void crbegin(void) const;

    // RVA: 0xB46 | Ordinal: 2887
        void crend(void) const;

    // RVA: 0xBF4 | Ordinal: 3061
        void data(void);

    // RVA: 0xBF5 | Ordinal: 3062
        void data(void) const;

    // RVA: 0xC56 | Ordinal: 3159
        void defaultConstruct(class QPoint *, class QPoint *);

    // RVA: 0xC72 | Ordinal: 3187
        void destruct(class QPoint *, class QPoint *);

    // RVA: 0xC7B | Ordinal: 3196
        void detach(void);

    // RVA: 0xCF9 | Ordinal: 3322
        void empty(void) const;

    // RVA: 0xD11 | Ordinal: 3346
        void end(void);

    // RVA: 0xD12 | Ordinal: 3347
        void end(void) const;

    // RVA: 0xD42 | Ordinal: 3395
        void endsWith(class QPoint const &) const;

    // RVA: 0xD72 | Ordinal: 3443
        void erase(class QPoint *, class QPoint *);

    // RVA: 0xD73 | Ordinal: 3444
        void erase(class QPoint *);

    // RVA: 0xE16 | Ordinal: 3607
        void fill(class QPoint const &, int);

    // RVA: 0xE55 | Ordinal: 3670
        void first(void);

    // RVA: 0xE56 | Ordinal: 3671
        void first(void) const;

    // RVA: 0xE8C | Ordinal: 3725
        void freeData(struct QTypedArrayData<class QPoint> *);

    // RVA: 0xEB2 | Ordinal: 3763
        void fromList(class QList<class QPoint> const &);

    // RVA: 0xED2 | Ordinal: 3795
        void fromStdVector(class std::vector<class QPoint, class std::allocator<class QPoint>> const &);

    // RVA: 0xF07 | Ordinal: 3848
        void front(void);

    // RVA: 0xF08 | Ordinal: 3849
        void front(void) const;

    // RVA: 0xFB6 | Ordinal: 4023
        void indexOf(class QPoint const &, int) const;

    // RVA: 0xFF8 | Ordinal: 4089
        void insert(class QPoint *, class QPoint &&);

    // RVA: 0xFF9 | Ordinal: 4090
        void insert(class QPoint *, class QPoint const &);

    // RVA: 0xFFA | Ordinal: 4091
        void insert(class QPoint *, int, class QPoint const &);

    // RVA: 0xFFB | Ordinal: 4092
        void insert(int, class QPoint &&);

    // RVA: 0xFFC | Ordinal: 4093
        void insert(int, class QPoint const &);

    // RVA: 0xFFD | Ordinal: 4094
        void insert(int, int, class QPoint const &);

    // RVA: 0x10AC | Ordinal: 4269
        void isDetached(void) const;

    // RVA: 0x10C3 | Ordinal: 4292
        void isEmpty(void) const;

    // RVA: 0x11AB | Ordinal: 4524
        void isSharedWith(class QVector<class QPoint> const &) const;

    // RVA: 0x121A | Ordinal: 4635
        void isValidIterator(class QPoint *const &) const;

    // RVA: 0x125D | Ordinal: 4702
        void last(void);

    // RVA: 0x125E | Ordinal: 4703
        void last(void) const;

    // RVA: 0x126A | Ordinal: 4715
        void lastIndexOf(class QPoint const &, int) const;

    // RVA: 0x1297 | Ordinal: 4760
        void length(void) const;

    // RVA: 0x138F | Ordinal: 5008
        void mid(int, int) const;

    // RVA: 0x13C9 | Ordinal: 5066
        void move(int, int);

    // RVA: 0x4DF | Ordinal: 1248
        void operator__(class QPoint &&);

    // RVA: 0x4E0 | Ordinal: 1249
        void operator__(class QVector<class QPoint> const &);

    // RVA: 0x4E1 | Ordinal: 1250
        void operator__(class QPoint const &);

    // RVA: 0x14EB | Ordinal: 5356
        void pop_back(void);

    // RVA: 0x14F1 | Ordinal: 5362
        void pop_front(void);

    // RVA: 0x1515 | Ordinal: 5398
        void prepend(class QPoint &&);

    // RVA: 0x1516 | Ordinal: 5399
        void prepend(class QPoint const &);

    // RVA: 0x1560 | Ordinal: 5473
        void push_back(class QPoint &&);

    // RVA: 0x1561 | Ordinal: 5474
        void push_back(class QPoint const &);

    // RVA: 0x156E | Ordinal: 5487
        void push_front(class QPoint &&);

    // RVA: 0x156F | Ordinal: 5488
        void push_front(class QPoint const &);

    // RVA: 0x170B | Ordinal: 5900
        void rbegin(void);

    // RVA: 0x170C | Ordinal: 5901
        void rbegin(void) const;

    // RVA: 0x174D | Ordinal: 5966
        void realloc(int, class QFlags<enum QArrayData::AllocationOption>);

    // RVA: 0x1751 | Ordinal: 5970
        void reallocData(int);

    // RVA: 0x1752 | Ordinal: 5971
        void reallocData(int, int, class QFlags<enum QArrayData::AllocationOption>);

    // RVA: 0x17A1 | Ordinal: 6050
        void remove(int);

    // RVA: 0x17A2 | Ordinal: 6051
        void remove(int, int);

    // RVA: 0x17C1 | Ordinal: 6082
        void removeAll(class QPoint const &);

    // RVA: 0x17CA | Ordinal: 6091
        void removeAt(int);

    // RVA: 0x17DD | Ordinal: 6110
        void removeFirst(void);

    // RVA: 0x17E5 | Ordinal: 6118
        void removeLast(void);

    // RVA: 0x17F1 | Ordinal: 6130
        void removeOne(class QPoint const &);

    // RVA: 0x1815 | Ordinal: 6166
        void rend(void);

    // RVA: 0x1816 | Ordinal: 6167
        void rend(void) const;

    // RVA: 0x1824 | Ordinal: 6181
        void replace(int, class QPoint const &);

    // RVA: 0x184C | Ordinal: 6221
        void reserve(int);

    // RVA: 0x1866 | Ordinal: 6247
        void resize(int);

    // RVA: 0x1A87 | Ordinal: 6792
        void setSharable(bool);

    // RVA: 0x1AFF | Ordinal: 6912
        void shrink_to_fit(void);

    // RVA: 0x1B2C | Ordinal: 6957
        void size(void) const;

    // RVA: 0x1B85 | Ordinal: 7046
        void squeeze(void);

    // RVA: 0x1BC7 | Ordinal: 7112
        void startsWith(class QPoint const &) const;

    // RVA: 0x1C63 | Ordinal: 7268
        void swap(class QVector<class QPoint> &);

    // RVA: 0x1C8B | Ordinal: 7308
        void swapItemsAt(int, int);

    // RVA: 0x1CAD | Ordinal: 7342
        void takeAt(int);

    // RVA: 0x1CB3 | Ordinal: 7348
        void takeFirst(void);

    // RVA: 0x1CB8 | Ordinal: 7353
        void takeLast(void);

    // RVA: 0x1D6D | Ordinal: 7534
        void toList(void) const;

    // RVA: 0x1DCA | Ordinal: 7627
        void toStdVector(void) const;

    // RVA: 0x1FA9 | Ordinal: 8106
        void value(int) const;

    // RVA: 0x1FAA | Ordinal: 8107
        void value(int, class QPoint const &) const;
};

// DCS_OPS_RE_QT5CORE.DLL_QPOINT_HPP
