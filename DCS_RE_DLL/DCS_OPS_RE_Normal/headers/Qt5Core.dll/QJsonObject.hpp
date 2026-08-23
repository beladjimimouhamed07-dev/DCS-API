#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QJsonObject
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QJsonObject
{
public:

    // RVA: 0x147 | Ordinal: 328
        void QJsonObject(class QCborContainerPrivate *);

    // RVA: 0x148 | Ordinal: 329
        void QJsonObject(class QJsonObject &&);

    // RVA: 0x149 | Ordinal: 330
        void QJsonObject(class QJsonObject const &);

    // RVA: 0x14A | Ordinal: 331
        void QJsonObject(class std::initializer_list<struct QPair<class QString, class QJsonValue>>);

    // RVA: 0x14B | Ordinal: 332
        void QJsonObject(void);

    // RVA: 0x8FA | Ordinal: 2299
        void begin(void);

    // RVA: 0x8FB | Ordinal: 2300
        void begin(void) const;

    // RVA: 0xA3C | Ordinal: 2621
        void compact(void);

    // RVA: 0xA88 | Ordinal: 2697
        void constBegin(void) const;

    // RVA: 0xA9B | Ordinal: 2716
        void constEnd(void) const;

    // RVA: 0xAA2 | Ordinal: 2723
        void constFind(class QString const &) const;

    // RVA: 0xAA3 | Ordinal: 2724
        void constFind(class QLatin1String) const;

    // RVA: 0xAA4 | Ordinal: 2725
        void constFind(class QStringView) const;

    // RVA: 0xAC6 | Ordinal: 2759
        void contains(class QString const &) const;

    // RVA: 0xAC7 | Ordinal: 2760
        void contains(class QLatin1String) const;

    // RVA: 0xAC8 | Ordinal: 2761
        void contains(class QStringView) const;

    // RVA: 0xB04 | Ordinal: 2821
        void count(void) const;

    // RVA: 0xC85 | Ordinal: 3206
        void detach(unsigned int);

    // RVA: 0xC79 | Ordinal: 3194
        void detach2(unsigned int);

    // RVA: 0xCFF | Ordinal: 3328
        void empty(void) const;

    // RVA: 0xD20 | Ordinal: 3361
        void end(void);

    // RVA: 0xD21 | Ordinal: 3362
        void end(void) const;

    // RVA: 0xD7D | Ordinal: 3454
        void erase(class QJsonObject::iterator);

    // RVA: 0xE36 | Ordinal: 3639
        void find(class QString const &);

    // RVA: 0xE37 | Ordinal: 3640
        void find(class QLatin1String);

    // RVA: 0xE38 | Ordinal: 3641
        void find(class QStringView);

    // RVA: 0xE39 | Ordinal: 3642
        void find(class QString const &) const;

    // RVA: 0xE3A | Ordinal: 3643
        void find(class QLatin1String) const;

    // RVA: 0xE3B | Ordinal: 3644
        void find(class QStringView) const;

    // RVA: 0xEFE | Ordinal: 3839
        void fromVariantHash(class QHash<class QString, class QVariant> const &);

    // RVA: 0xF02 | Ordinal: 3843
        void fromVariantMap(class QMap<class QString, class QVariant> const &);

    // RVA: 0xFF2 | Ordinal: 4083
        void initialize(void);

    // RVA: 0x101B | Ordinal: 4124
        void insert(class QString const &, class QJsonValue const &);

    // RVA: 0x101C | Ordinal: 4125
        void insert(class QLatin1String, class QJsonValue const &);

    // RVA: 0x101D | Ordinal: 4126
        void insert(class QStringView, class QJsonValue const &);

    // RVA: 0x10CE | Ordinal: 4303
        void isEmpty(void) const;

    // RVA: 0x1247 | Ordinal: 4680
        void keyAt(int) const;

    // RVA: 0x124F | Ordinal: 4688
        void keys(void) const;

    // RVA: 0x129C | Ordinal: 4765
        void length(void) const;

    // RVA: 0x17B1 | Ordinal: 6066
        void remove(class QString const &);

    // RVA: 0x17B2 | Ordinal: 6067
        void remove(class QLatin1String);

    // RVA: 0x17B3 | Ordinal: 6068
        void remove(class QStringView);

    // RVA: 0x17CF | Ordinal: 6096
        void removeAt(int);

    // RVA: 0x1AD6 | Ordinal: 6871
        void setValueAt(int, class QJsonValue const &);

    // RVA: 0x1B3C | Ordinal: 6973
        void size(void) const;

    // RVA: 0x1C78 | Ordinal: 7289
        void swap(class QJsonObject &);

    // RVA: 0x1CA8 | Ordinal: 7337
        void take(class QString const &);

    // RVA: 0x1CA9 | Ordinal: 7338
        void take(class QLatin1String);

    // RVA: 0x1CAA | Ordinal: 7339
        void take(class QStringView);

    // RVA: 0x1E58 | Ordinal: 7769
        void toVariantHash(void) const;

    // RVA: 0x1E5C | Ordinal: 7773
        void toVariantMap(void) const;

    // RVA: 0x1FB6 | Ordinal: 8119
        void value(class QString const &) const;

    // RVA: 0x1FB7 | Ordinal: 8120
        void value(class QLatin1String) const;

    // RVA: 0x1FB8 | Ordinal: 8121
        void value(class QStringView) const;

    // RVA: 0x1FC6 | Ordinal: 8135
        void valueAt(int) const;

    // RVA: 0x32B | Ordinal: 812
        void _QJsonObject(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QJSONOBJECT_HPP
