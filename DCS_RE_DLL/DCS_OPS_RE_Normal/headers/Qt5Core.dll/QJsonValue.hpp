#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QJsonValue
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QJsonValue
{
public:

    // RVA: 0x14C | Ordinal: 333
        void QJsonValue(class QJsonValue &&);

    // RVA: 0x14D | Ordinal: 334
        void QJsonValue(class QJsonValue const &);

    // RVA: 0x14E | Ordinal: 335
        void QJsonValue(class QJsonArray const &);

    // RVA: 0x14F | Ordinal: 336
        void QJsonValue(class QJsonObject const &);

    // RVA: 0x150 | Ordinal: 337
        void QJsonValue(class QString const &);

    // RVA: 0x151 | Ordinal: 338
        void QJsonValue(int);

    // RVA: 0x152 | Ordinal: 339
        void QJsonValue(double);

    // RVA: 0x153 | Ordinal: 340
        void QJsonValue(char const *);

    // RVA: 0x154 | Ordinal: 341
        void QJsonValue(class QLatin1String);

    // RVA: 0x155 | Ordinal: 342
        void QJsonValue(enum QJsonValue::Type);

    // RVA: 0x156 | Ordinal: 343
        void QJsonValue(__int64);

    // RVA: 0x157 | Ordinal: 344
        void QJsonValue(bool);

    // RVA: 0xC86 | Ordinal: 3207
        void detach(void);

    // RVA: 0xEFC | Ordinal: 3837
        void fromVariant(class QVariant const &);

    // RVA: 0x1078 | Ordinal: 4217
        void isArray(void) const;

    // RVA: 0x1084 | Ordinal: 4229
        void isBool(void) const;

    // RVA: 0x10BE | Ordinal: 4287
        void isDouble(void) const;

    // RVA: 0x114A | Ordinal: 4427
        void isNull(void) const;

    // RVA: 0x115E | Ordinal: 4447
        void isObject(void) const;

    // RVA: 0x11CF | Ordinal: 4560
        void isString(void) const;

    // RVA: 0x11EA | Ordinal: 4587
        void isUndefined(void) const;

    // RVA: 0x1C4C | Ordinal: 7245
        void stringDataFromQStringHelper(class QString const &);

    // RVA: 0x1C79 | Ordinal: 7290
        void swap(class QJsonValue &);

    // RVA: 0x1CE6 | Ordinal: 7399
        void toArray(class QJsonArray const &) const;

    // RVA: 0x1CE7 | Ordinal: 7400
        void toArray(void) const;

    // RVA: 0x1CF5 | Ordinal: 7414
        void toBool(bool) const;

    // RVA: 0x1D2B | Ordinal: 7468
        void toDouble(double) const;

    // RVA: 0x1D48 | Ordinal: 7497
        void toInt(int) const;

    // RVA: 0x1D9F | Ordinal: 7584
        void toObject(class QJsonObject const &) const;

    // RVA: 0x1DA0 | Ordinal: 7585
        void toObject(void) const;

    // RVA: 0x1DDF | Ordinal: 7648
        void toString(class QString const &) const;

    // RVA: 0x1DE0 | Ordinal: 7649
        void toString(void) const;

    // RVA: 0x1E55 | Ordinal: 7766
        void toVariant(void) const;

    // RVA: 0x1F38 | Ordinal: 7993
        void type(void) const;

    // RVA: 0x32C | Ordinal: 813
        void _QJsonValue(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QJSONVALUE_HPP
