#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QItemSelectionRange>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QItemSelectionRange_
{
public:

    // RVA: 0x845 | Ordinal: 2118
        void append(class QList<class QItemSelectionRange> const &);

    // RVA: 0x846 | Ordinal: 2119
        void append(class QItemSelectionRange const &);

    // RVA: 0x8AC | Ordinal: 2221
        void at(int) const;

    // RVA: 0x8D6 | Ordinal: 2263
        void back(void);

    // RVA: 0x8D7 | Ordinal: 2264
        void back(void) const;

    // RVA: 0x8E9 | Ordinal: 2282
        void begin(void);

    // RVA: 0x8EA | Ordinal: 2283
        void begin(void) const;

    // RVA: 0x990 | Ordinal: 2449
        void cbegin(void) const;

    // RVA: 0x99E | Ordinal: 2463
        void cend(void) const;

    // RVA: 0x9D8 | Ordinal: 2521
        void clear(void);

    // RVA: 0xA80 | Ordinal: 2689
        void constBegin(void) const;

    // RVA: 0xA93 | Ordinal: 2708
        void constEnd(void) const;

    // RVA: 0xAA5 | Ordinal: 2726
        void constFirst(void) const;

    // RVA: 0xAA9 | Ordinal: 2730
        void constLast(void) const;

    // RVA: 0xAB6 | Ordinal: 2743
        void contains(class QItemSelectionRange const &) const;

    // RVA: 0xAE2 | Ordinal: 2787
        void contains_impl(class QItemSelectionRange const &, struct QListData::ArrayCompatibleLayout) const;

    // RVA: 0xAE3 | Ordinal: 2788
        void contains_impl(class QItemSelectionRange const &, struct QListData::NotArrayCompatibleLayout) const;

    // RVA: 0xAF4 | Ordinal: 2805
        void count(class QItemSelectionRange const &) const;

    // RVA: 0xAF5 | Ordinal: 2806
        void count(void) const;

    // RVA: 0xB10 | Ordinal: 2833
        void count_impl(class QItemSelectionRange const &, struct QListData::ArrayCompatibleLayout) const;

    // RVA: 0xB11 | Ordinal: 2834
        void count_impl(class QItemSelectionRange const &, struct QListData::NotArrayCompatibleLayout) const;

    // RVA: 0xB19 | Ordinal: 2842
        void crbegin(void) const;

    // RVA: 0xB45 | Ordinal: 2886
        void crend(void) const;

    // RVA: 0xC3C | Ordinal: 3133
        void dealloc(struct QListData::Data *);

    // RVA: 0xC7A | Ordinal: 3195
        void detach(void);

    // RVA: 0xC8F | Ordinal: 3216
        void detachShared(void);

    // RVA: 0xC91 | Ordinal: 3218
        void detach_helper(int);

    // RVA: 0xC92 | Ordinal: 3219
        void detach_helper(void);

    // RVA: 0xC94 | Ordinal: 3221
        void detach_helper_grow(int, int);

    // RVA: 0xCF8 | Ordinal: 3321
        void empty(void) const;

    // RVA: 0xD0F | Ordinal: 3344
        void end(void);

    // RVA: 0xD10 | Ordinal: 3345
        void end(void) const;

    // RVA: 0xD41 | Ordinal: 3394
        void endsWith(class QItemSelectionRange const &) const;

    // RVA: 0xD70 | Ordinal: 3441
        void erase(class QList<class QItemSelectionRange>::iterator, class QList<class QItemSelectionRange>::iterator);

    // RVA: 0xD71 | Ordinal: 3442
        void erase(class QList<class QItemSelectionRange>::iterator);

    // RVA: 0xE53 | Ordinal: 3668
        void first(void);

    // RVA: 0xE54 | Ordinal: 3669
        void first(void) const;

    // RVA: 0xECB | Ordinal: 3788
        void fromSet(class QSet<class QItemSelectionRange> const &);

    // RVA: 0xECD | Ordinal: 3790
        void fromStdList(class std::list<class QItemSelectionRange, class std::allocator<class QItemSelectionRange>> const &);

    // RVA: 0xF03 | Ordinal: 3844
        void fromVector(class QVector<class QItemSelectionRange> const &);

    // RVA: 0xF05 | Ordinal: 3846
        void front(void);

    // RVA: 0xF06 | Ordinal: 3847
        void front(void) const;

    // RVA: 0xFB5 | Ordinal: 4022
        void indexOf(class QItemSelectionRange const &, int) const;

    // RVA: 0xFF6 | Ordinal: 4087
        void insert(class QList<class QItemSelectionRange>::iterator, class QItemSelectionRange const &);

    // RVA: 0xFF7 | Ordinal: 4088
        void insert(int, class QItemSelectionRange const &);

    // RVA: 0x10AB | Ordinal: 4268
        void isDetached(void) const;

    // RVA: 0x10C2 | Ordinal: 4291
        void isEmpty(void) const;

    // RVA: 0x11AA | Ordinal: 4523
        void isSharedWith(class QList<class QItemSelectionRange> const &) const;

    // RVA: 0x1219 | Ordinal: 4634
        void isValidIterator(class QList<class QItemSelectionRange>::iterator const &) const;

    // RVA: 0x125B | Ordinal: 4700
        void last(void);

    // RVA: 0x125C | Ordinal: 4701
        void last(void) const;

    // RVA: 0x1269 | Ordinal: 4714
        void lastIndexOf(class QItemSelectionRange const &, int) const;

    // RVA: 0x1296 | Ordinal: 4759
        void length(void) const;

    // RVA: 0x138E | Ordinal: 5007
        void mid(int, int) const;

    // RVA: 0x13C8 | Ordinal: 5065
        void move(int, int);

    // RVA: 0x1430 | Ordinal: 5169
        void node_construct(struct QList<class QItemSelectionRange>::Node *, class QItemSelectionRange const &);

    // RVA: 0x1431 | Ordinal: 5170
        void node_copy(struct QList<class QItemSelectionRange>::Node *, struct QList<class QItemSelectionRange>::Node *, struct QList<class QItemSelectionRange>::Node *);

    // RVA: 0x1432 | Ordinal: 5171
        void node_destruct(struct QList<class QItemSelectionRange>::Node *, struct QList<class QItemSelectionRange>::Node *);

    // RVA: 0x1433 | Ordinal: 5172
        void node_destruct(struct QList<class QItemSelectionRange>::Node *);

    // RVA: 0x147E | Ordinal: 5247
        void op_eq_impl(class QList<class QItemSelectionRange> const &, struct QListData::ArrayCompatibleLayout) const;

    // RVA: 0x147F | Ordinal: 5248
        void op_eq_impl(class QList<class QItemSelectionRange> const &, struct QListData::NotArrayCompatibleLayout) const;

    // RVA: 0x4DD | Ordinal: 1246
        void operator__(class QList<class QItemSelectionRange> const &);

    // RVA: 0x4DE | Ordinal: 1247
        void operator__(class QItemSelectionRange const &);

    // RVA: 0x14EA | Ordinal: 5355
        void pop_back(void);

    // RVA: 0x14F0 | Ordinal: 5361
        void pop_front(void);

    // RVA: 0x1514 | Ordinal: 5397
        void prepend(class QItemSelectionRange const &);

    // RVA: 0x155F | Ordinal: 5472
        void push_back(class QItemSelectionRange const &);

    // RVA: 0x156D | Ordinal: 5486
        void push_front(class QItemSelectionRange const &);

    // RVA: 0x1709 | Ordinal: 5898
        void rbegin(void);

    // RVA: 0x170A | Ordinal: 5899
        void rbegin(void) const;

    // RVA: 0x17C0 | Ordinal: 6081
        void removeAll(class QItemSelectionRange const &);

    // RVA: 0x17C9 | Ordinal: 6090
        void removeAt(int);

    // RVA: 0x17DC | Ordinal: 6109
        void removeFirst(void);

    // RVA: 0x17E4 | Ordinal: 6117
        void removeLast(void);

    // RVA: 0x17F0 | Ordinal: 6129
        void removeOne(class QItemSelectionRange const &);

    // RVA: 0x1813 | Ordinal: 6164
        void rend(void);

    // RVA: 0x1814 | Ordinal: 6165
        void rend(void) const;

    // RVA: 0x1823 | Ordinal: 6180
        void replace(int, class QItemSelectionRange const &);

    // RVA: 0x184B | Ordinal: 6220
        void reserve(int);

    // RVA: 0x1A86 | Ordinal: 6791
        void setSharable(bool);

    // RVA: 0x1B2B | Ordinal: 6956
        void size(void) const;

    // RVA: 0x1BC6 | Ordinal: 7111
        void startsWith(class QItemSelectionRange const &) const;

    // RVA: 0x1C61 | Ordinal: 7266
        void swap(class QList<class QItemSelectionRange> &);

    // RVA: 0x1C62 | Ordinal: 7267
        void swap(int, int);

    // RVA: 0x1C8A | Ordinal: 7307
        void swapItemsAt(int, int);

    // RVA: 0x1CAC | Ordinal: 7341
        void takeAt(int);

    // RVA: 0x1CB2 | Ordinal: 7347
        void takeFirst(void);

    // RVA: 0x1CB7 | Ordinal: 7352
        void takeLast(void);

    // RVA: 0x1DB6 | Ordinal: 7607
        void toSet(void) const;

    // RVA: 0x1DC5 | Ordinal: 7622
        void toStdList(void) const;

    // RVA: 0x1E5D | Ordinal: 7774
        void toVector(void) const;

    // RVA: 0x1FA7 | Ordinal: 8104
        void value(int) const;

    // RVA: 0x1FA8 | Ordinal: 8105
        void value(int, class QItemSelectionRange const &) const;
};

// DCS_OPS_RE_QT5CORE.DLL_QITEMSELECTIONRANGE_HPP
