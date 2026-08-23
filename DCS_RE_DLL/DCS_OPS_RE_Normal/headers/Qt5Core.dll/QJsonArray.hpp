#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QJsonArray
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QJsonArray
{
public:

    // RVA: 0x13C | Ordinal: 317
        void QJsonArray(class QCborContainerPrivate *);

    // RVA: 0x13D | Ordinal: 318
        void QJsonArray(class QJsonArray &&);

    // RVA: 0x13E | Ordinal: 319
        void QJsonArray(class QJsonArray const &);

    // RVA: 0x13F | Ordinal: 320
        void QJsonArray(class std::initializer_list<class QJsonValue>);

    // RVA: 0x140 | Ordinal: 321
        void QJsonArray(void);

    // RVA: 0x869 | Ordinal: 2154
        void append(class QJsonValue const &);

    // RVA: 0x8B3 | Ordinal: 2228
        void at(int) const;

    // RVA: 0x8F8 | Ordinal: 2297
        void begin(void);

    // RVA: 0x8F9 | Ordinal: 2298
        void begin(void) const;

    // RVA: 0x997 | Ordinal: 2456
        void cbegin(void) const;

    // RVA: 0x9A5 | Ordinal: 2470
        void cend(void) const;

    // RVA: 0xA3B | Ordinal: 2620
        void compact(void);

    // RVA: 0xA87 | Ordinal: 2696
        void constBegin(void) const;

    // RVA: 0xA9A | Ordinal: 2715
        void constEnd(void) const;

    // RVA: 0xAC5 | Ordinal: 2758
        void contains(class QJsonValue const &) const;

    // RVA: 0xB03 | Ordinal: 2820
        void count(void) const;

    // RVA: 0xC84 | Ordinal: 3205
        void detach(unsigned int);

    // RVA: 0xC78 | Ordinal: 3193
        void detach2(unsigned int);

    // RVA: 0xCFE | Ordinal: 3327
        void empty(void) const;

    // RVA: 0xD1E | Ordinal: 3359
        void end(void);

    // RVA: 0xD1F | Ordinal: 3360
        void end(void) const;

    // RVA: 0xD7C | Ordinal: 3453
        void erase(class QJsonArray::iterator);

    // RVA: 0xE5D | Ordinal: 3678
        void first(void) const;

    // RVA: 0xEE6 | Ordinal: 3815
        void fromStringList(class QStringList const &);

    // RVA: 0xF00 | Ordinal: 3841
        void fromVariantList(class QList<class QVariant> const &);

    // RVA: 0xFF1 | Ordinal: 4082
        void initialize(void);

    // RVA: 0x1019 | Ordinal: 4122
        void insert(class QJsonArray::iterator, class QJsonValue const &);

    // RVA: 0x101A | Ordinal: 4123
        void insert(int, class QJsonValue const &);

    // RVA: 0x10CC | Ordinal: 4301
        void isEmpty(void) const;

    // RVA: 0x1265 | Ordinal: 4710
        void last(void) const;

    // RVA: 0x562 | Ordinal: 1379
        void operator__(class QJsonValue const &);

    // RVA: 0x14EF | Ordinal: 5360
        void pop_back(void);

    // RVA: 0x14F5 | Ordinal: 5366
        void pop_front(void);

    // RVA: 0x1522 | Ordinal: 5411
        void prepend(class QJsonValue const &);

    // RVA: 0x156A | Ordinal: 5483
        void push_back(class QJsonValue const &);

    // RVA: 0x1578 | Ordinal: 5497
        void push_front(class QJsonValue const &);

    // RVA: 0x17CE | Ordinal: 6095
        void removeAt(int);

    // RVA: 0x17E1 | Ordinal: 6114
        void removeFirst(void);

    // RVA: 0x17E9 | Ordinal: 6122
        void removeLast(void);

    // RVA: 0x1835 | Ordinal: 6198
        void replace(int, class QJsonValue const &);

    // RVA: 0x1B3B | Ordinal: 6972
        void size(void) const;

    // RVA: 0x1C76 | Ordinal: 7287
        void swap(class QJsonArray &);

    // RVA: 0x1CB1 | Ordinal: 7346
        void takeAt(int);

    // RVA: 0x1E5A | Ordinal: 7771
        void toVariantList(void) const;

    // RVA: 0x329 | Ordinal: 810
        void _QJsonArray(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QJSONARRAY_HPP
