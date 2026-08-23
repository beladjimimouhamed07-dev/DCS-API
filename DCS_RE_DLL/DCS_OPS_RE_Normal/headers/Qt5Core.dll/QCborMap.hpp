#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QCborMap
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QCborMap
{
public:

    // RVA: 0x75 | Ordinal: 118
        void QCborMap(class QCborContainerPrivate &);

    // RVA: 0x76 | Ordinal: 119
        void QCborMap(class QCborMap const &);

    // RVA: 0x77 | Ordinal: 120
        void QCborMap(class std::initializer_list<struct QPair<class QCborValue, class QCborValue>>);

    // RVA: 0x78 | Ordinal: 121
        void QCborMap(void);

    // RVA: 0x8F6 | Ordinal: 2295
        void begin(void);

    // RVA: 0x8F7 | Ordinal: 2296
        void begin(void) const;

    // RVA: 0x996 | Ordinal: 2455
        void cbegin(void) const;

    // RVA: 0x9A4 | Ordinal: 2469
        void cend(void) const;

    // RVA: 0x9E0 | Ordinal: 2529
        void clear(void);

    // RVA: 0xA40 | Ordinal: 2625
        void compare(class QCborMap const &) const;

    // RVA: 0xA86 | Ordinal: 2695
        void constBegin(void) const;

    // RVA: 0xA99 | Ordinal: 2714
        void constEnd(void) const;

    // RVA: 0xA9E | Ordinal: 2719
        void constFind(class QCborValue const &) const;

    // RVA: 0xA9F | Ordinal: 2720
        void constFind(class QString const &) const;

    // RVA: 0xAA0 | Ordinal: 2721
        void constFind(class QLatin1String) const;

    // RVA: 0xAA1 | Ordinal: 2722
        void constFind(__int64) const;

    // RVA: 0xABE | Ordinal: 2751
        void contains(class QCborValue const &) const;

    // RVA: 0xABF | Ordinal: 2752
        void contains(class QString const &) const;

    // RVA: 0xAC0 | Ordinal: 2753
        void contains(class QLatin1String) const;

    // RVA: 0xAC1 | Ordinal: 2754
        void contains(__int64) const;

    // RVA: 0xC82 | Ordinal: 3203
        void detach(__int64);

    // RVA: 0xCFD | Ordinal: 3326
        void empty(void) const;

    // RVA: 0xD1C | Ordinal: 3357
        void end(void);

    // RVA: 0xD1D | Ordinal: 3358
        void end(void) const;

    // RVA: 0xD7A | Ordinal: 3451
        void erase(class QCborMap::Iterator);

    // RVA: 0xD7B | Ordinal: 3452
        void erase(class QCborMap::ConstIterator);

    // RVA: 0xDE8 | Ordinal: 3561
        void extract(class QCborMap::ConstIterator);

    // RVA: 0xDE9 | Ordinal: 3562
        void extract(class QCborMap::Iterator);

    // RVA: 0xE2E | Ordinal: 3631
        void find(class QCborValue const &);

    // RVA: 0xE2F | Ordinal: 3632
        void find(class QString const &);

    // RVA: 0xE30 | Ordinal: 3633
        void find(class QLatin1String);

    // RVA: 0xE31 | Ordinal: 3634
        void find(__int64);

    // RVA: 0xE32 | Ordinal: 3635
        void find(class QCborValue const &) const;

    // RVA: 0xE33 | Ordinal: 3636
        void find(class QString const &) const;

    // RVA: 0xE34 | Ordinal: 3637
        void find(class QLatin1String) const;

    // RVA: 0xE35 | Ordinal: 3638
        void find(__int64) const;

    // RVA: 0xEAA | Ordinal: 3755
        void fromJsonObject(class QJsonObject const &);

    // RVA: 0xEFD | Ordinal: 3838
        void fromVariantHash(class QHash<class QString, class QVariant> const &);

    // RVA: 0xF01 | Ordinal: 3842
        void fromVariantMap(class QMap<class QString, class QVariant> const &);

    // RVA: 0x1014 | Ordinal: 4117
        void insert(class QCborValue const &, class QCborValue const &);

    // RVA: 0x1015 | Ordinal: 4118
        void insert(class QString const &, class QCborValue const &);

    // RVA: 0x1016 | Ordinal: 4119
        void insert(struct QPair<class QCborValue, class QCborValue>);

    // RVA: 0x1017 | Ordinal: 4120
        void insert(class QLatin1String, class QCborValue const &);

    // RVA: 0x1018 | Ordinal: 4121
        void insert(__int64, class QCborValue const &);

    // RVA: 0x10C9 | Ordinal: 4298
        void isEmpty(void) const;

    // RVA: 0x124E | Ordinal: 4687
        void keys(void) const;

    // RVA: 0x64D | Ordinal: 1614
        void operator_(class QCborMap const &) const;

    // RVA: 0x17A9 | Ordinal: 6058
        void remove(class QCborValue const &);

    // RVA: 0x17AA | Ordinal: 6059
        void remove(class QString const &);

    // RVA: 0x17AB | Ordinal: 6060
        void remove(class QLatin1String);

    // RVA: 0x17AC | Ordinal: 6061
        void remove(__int64);

    // RVA: 0x1B35 | Ordinal: 6966
        void size(void) const;

    // RVA: 0x1C6A | Ordinal: 7275
        void swap(class QCborMap &);

    // RVA: 0x1CA4 | Ordinal: 7333
        void take(class QCborValue const &);

    // RVA: 0x1CA5 | Ordinal: 7334
        void take(class QString const &);

    // RVA: 0x1CA6 | Ordinal: 7335
        void take(class QLatin1String);

    // RVA: 0x1CA7 | Ordinal: 7336
        void take(__int64);

    // RVA: 0x1D0A | Ordinal: 7435
        void toCborValue(void) const;

    // RVA: 0x1D5B | Ordinal: 7516
        void toJsonObject(void) const;

    // RVA: 0x1E57 | Ordinal: 7768
        void toVariantHash(void) const;

    // RVA: 0x1E5B | Ordinal: 7772
        void toVariantMap(void) const;

    // RVA: 0x1FB0 | Ordinal: 8113
        void value(class QCborValue const &) const;

    // RVA: 0x1FB1 | Ordinal: 8114
        void value(class QString const &) const;

    // RVA: 0x1FB2 | Ordinal: 8115
        void value(class QLatin1String) const;

    // RVA: 0x1FB3 | Ordinal: 8116
        void value(__int64) const;

    // RVA: 0x2F0 | Ordinal: 753
        void _QCborMap(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QCBORMAP_HPP
