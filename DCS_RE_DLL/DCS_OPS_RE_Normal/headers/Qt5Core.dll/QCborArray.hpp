#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QCborArray
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QCborArray
{
public:

    // RVA: 0x71 | Ordinal: 114
        void QCborArray(class QCborContainerPrivate &);

    // RVA: 0x72 | Ordinal: 115
        void QCborArray(class QCborArray const &);

    // RVA: 0x73 | Ordinal: 116
        void QCborArray(class std::initializer_list<class QCborValue>);

    // RVA: 0x74 | Ordinal: 117
        void QCborArray(void);

    // RVA: 0x856 | Ordinal: 2135
        void append(class QCborValue &&);

    // RVA: 0x857 | Ordinal: 2136
        void append(class QCborValue const &);

    // RVA: 0x8B2 | Ordinal: 2227
        void at(__int64) const;

    // RVA: 0x8F4 | Ordinal: 2293
        void begin(void);

    // RVA: 0x8F5 | Ordinal: 2294
        void begin(void) const;

    // RVA: 0x995 | Ordinal: 2454
        void cbegin(void) const;

    // RVA: 0x9A3 | Ordinal: 2468
        void cend(void) const;

    // RVA: 0x9DF | Ordinal: 2528
        void clear(void);

    // RVA: 0xA3F | Ordinal: 2624
        void compare(class QCborArray const &) const;

    // RVA: 0xA85 | Ordinal: 2694
        void constBegin(void) const;

    // RVA: 0xA98 | Ordinal: 2713
        void constEnd(void) const;

    // RVA: 0xABD | Ordinal: 2750
        void contains(class QCborValue const &) const;

    // RVA: 0xC81 | Ordinal: 3202
        void detach(__int64);

    // RVA: 0xCFC | Ordinal: 3325
        void empty(void) const;

    // RVA: 0xD1A | Ordinal: 3355
        void end(void);

    // RVA: 0xD1B | Ordinal: 3356
        void end(void) const;

    // RVA: 0xD78 | Ordinal: 3449
        void erase(class QCborArray::Iterator);

    // RVA: 0xD79 | Ordinal: 3450
        void erase(class QCborArray::ConstIterator);

    // RVA: 0xDE6 | Ordinal: 3559
        void extract(class QCborArray::ConstIterator);

    // RVA: 0xDE7 | Ordinal: 3560
        void extract(class QCborArray::Iterator);

    // RVA: 0xE5B | Ordinal: 3676
        void first(void);

    // RVA: 0xE5C | Ordinal: 3677
        void first(void) const;

    // RVA: 0xEA9 | Ordinal: 3754
        void fromJsonArray(class QJsonArray const &);

    // RVA: 0xEE5 | Ordinal: 3814
        void fromStringList(class QStringList const &);

    // RVA: 0xEFF | Ordinal: 3840
        void fromVariantList(class QList<class QVariant> const &);

    // RVA: 0x1010 | Ordinal: 4113
        void insert(class QCborArray::Iterator, class QCborValue const &);

    // RVA: 0x1011 | Ordinal: 4114
        void insert(class QCborArray::ConstIterator, class QCborValue const &);

    // RVA: 0x1012 | Ordinal: 4115
        void insert(__int64, class QCborValue &&);

    // RVA: 0x1013 | Ordinal: 4116
        void insert(__int64, class QCborValue const &);

    // RVA: 0x10C8 | Ordinal: 4297
        void isEmpty(void) const;

    // RVA: 0x1263 | Ordinal: 4708
        void last(void);

    // RVA: 0x1264 | Ordinal: 4709
        void last(void) const;

    // RVA: 0x64C | Ordinal: 1613
        void operator_(class QCborArray const &) const;

    // RVA: 0x53A | Ordinal: 1339
        void operator__(class QCborValue const &);

    // RVA: 0x14EE | Ordinal: 5359
        void pop_back(void);

    // RVA: 0x14F4 | Ordinal: 5365
        void pop_front(void);

    // RVA: 0x1520 | Ordinal: 5409
        void prepend(class QCborValue &&);

    // RVA: 0x1521 | Ordinal: 5410
        void prepend(class QCborValue const &);

    // RVA: 0x1569 | Ordinal: 5482
        void push_back(class QCborValue const &);

    // RVA: 0x1577 | Ordinal: 5496
        void push_front(class QCborValue const &);

    // RVA: 0x17CD | Ordinal: 6094
        void removeAt(__int64);

    // RVA: 0x17E0 | Ordinal: 6113
        void removeFirst(void);

    // RVA: 0x17E8 | Ordinal: 6121
        void removeLast(void);

    // RVA: 0x1B34 | Ordinal: 6965
        void size(void) const;

    // RVA: 0x1C69 | Ordinal: 7274
        void swap(class QCborArray &);

    // RVA: 0x1CB0 | Ordinal: 7345
        void takeAt(__int64);

    // RVA: 0x1CB6 | Ordinal: 7351
        void takeFirst(void);

    // RVA: 0x1CBB | Ordinal: 7356
        void takeLast(void);

    // RVA: 0x1D09 | Ordinal: 7434
        void toCborValue(void) const;

    // RVA: 0x1D58 | Ordinal: 7513
        void toJsonArray(void) const;

    // RVA: 0x1E59 | Ordinal: 7770
        void toVariantList(void) const;

    // RVA: 0x2EF | Ordinal: 752
        void _QCborArray(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QCBORARRAY_HPP
