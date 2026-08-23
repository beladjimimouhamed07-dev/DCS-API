#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QCborValue
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QCborValue
{
public:

    // RVA: 0x80 | Ordinal: 129
        void QCborValue(class QCborValue &&);

    // RVA: 0x81 | Ordinal: 130
        void QCborValue(class QCborArray &&);

    // RVA: 0x82 | Ordinal: 131
        void QCborValue(class QCborMap &&);

    // RVA: 0x83 | Ordinal: 132
        void QCborValue(std::nullptr_t);

    // RVA: 0x84 | Ordinal: 133
        void QCborValue(class QCborValue const &);

    // RVA: 0x85 | Ordinal: 134
        void QCborValue(class QByteArray const &);

    // RVA: 0x86 | Ordinal: 135
        void QCborValue(class QCborArray const &);

    // RVA: 0x87 | Ordinal: 136
        void QCborValue(class QCborMap const &);

    // RVA: 0x88 | Ordinal: 137
        void QCborValue(class QDateTime const &);

    // RVA: 0x89 | Ordinal: 138
        void QCborValue(class QRegularExpression const &);

    // RVA: 0x8A | Ordinal: 139
        void QCborValue(class QString const &);

    // RVA: 0x8B | Ordinal: 140
        void QCborValue(class QUrl const &);

    // RVA: 0x8C | Ordinal: 141
        void QCborValue(class QUuid const &);

    // RVA: 0x8D | Ordinal: 142
        void QCborValue(int);

    // RVA: 0x8E | Ordinal: 143
        void QCborValue(unsigned int);

    // RVA: 0x8F | Ordinal: 144
        void QCborValue(double);

    // RVA: 0x90 | Ordinal: 145
        void QCborValue(char const *);

    // RVA: 0x91 | Ordinal: 146
        void QCborValue(class QLatin1String);

    // RVA: 0x92 | Ordinal: 147
        void QCborValue(class QStringView);

    // RVA: 0x93 | Ordinal: 148
        void QCborValue(enum QCborKnownTags, class QCborValue const &);

    // RVA: 0x94 | Ordinal: 149
        void QCborValue(enum QCborSimpleType);

    // RVA: 0x95 | Ordinal: 150
        void QCborValue(enum QCborTag, class QCborValue const &);

    // RVA: 0x96 | Ordinal: 151
        void QCborValue(enum QCborValue::Type);

    // RVA: 0x97 | Ordinal: 152
        void QCborValue(void);

    // RVA: 0x98 | Ordinal: 153
        void QCborValue(__int64);

    // RVA: 0x99 | Ordinal: 154
        void QCborValue(bool);

    // RVA: 0xA41 | Ordinal: 2626
        void compare(class QCborValue const &) const;

    // RVA: 0xCBE | Ordinal: 3263
        void dispose(void);

    // RVA: 0xE87 | Ordinal: 3720
        void fp_helper(void) const;

    // RVA: 0xEA0 | Ordinal: 3745
        void fromCbor(class QCborStreamReader &);

    // RVA: 0xEA1 | Ordinal: 3746
        void fromCbor(class QByteArray const &, struct QCborParserError *);

    // RVA: 0xEA2 | Ordinal: 3747
        void fromCbor(char const *, __int64, struct QCborParserError *);

    // RVA: 0xEA3 | Ordinal: 3748
        void fromCbor(unsigned char const *, __int64, struct QCborParserError *);

    // RVA: 0xEAC | Ordinal: 3757
        void fromJsonValue(class QJsonValue const &);

    // RVA: 0xEFA | Ordinal: 3835
        void fromVariant(class QVariant const &);

    // RVA: 0x1075 | Ordinal: 4214
        void isArray(void) const;

    // RVA: 0x1082 | Ordinal: 4227
        void isBool(void) const;

    // RVA: 0x108A | Ordinal: 4235
        void isByteArray(void) const;

    // RVA: 0x109A | Ordinal: 4251
        void isContainer(void) const;

    // RVA: 0x109E | Ordinal: 4255
        void isDateTime(void) const;

    // RVA: 0x10BC | Ordinal: 4285
        void isDouble(void) const;

    // RVA: 0x10EA | Ordinal: 4331
        void isFalse(void) const;

    // RVA: 0x1103 | Ordinal: 4356
        void isInteger(void) const;

    // RVA: 0x1108 | Ordinal: 4361
        void isInvalid(void) const;

    // RVA: 0x1132 | Ordinal: 4403
        void isMap(void) const;

    // RVA: 0x1143 | Ordinal: 4420
        void isNull(void) const;

    // RVA: 0x1181 | Ordinal: 4482
        void isRegularExpression(void) const;

    // RVA: 0x11B7 | Ordinal: 4536
        void isSimpleType(enum QCborSimpleType) const;

    // RVA: 0x11B8 | Ordinal: 4537
        void isSimpleType(void) const;

    // RVA: 0x11CD | Ordinal: 4558
        void isString(void) const;

    // RVA: 0x11D8 | Ordinal: 4569
        void isTag(void) const;

    // RVA: 0x11DA | Ordinal: 4571
        void isTag_helper(enum QCborValue::Type);

    // RVA: 0x11E5 | Ordinal: 4582
        void isTrue(void) const;

    // RVA: 0x11E8 | Ordinal: 4585
        void isUndefined(void) const;

    // RVA: 0x11F3 | Ordinal: 4596
        void isUrl(void) const;

    // RVA: 0x11F7 | Ordinal: 4600
        void isUuid(void) const;

    // RVA: 0x64E | Ordinal: 1615
        void operator_(class QCborValue const &) const;

    // RVA: 0x1C6B | Ordinal: 7276
        void swap(class QCborValue &);

    // RVA: 0x1C9E | Ordinal: 7327
        void tag(enum QCborTag) const;

    // RVA: 0x1CA2 | Ordinal: 7331
        void taggedValue(class QCborValue const &) const;

    // RVA: 0x1CE2 | Ordinal: 7395
        void toArray(class QCborArray const &) const;

    // RVA: 0x1CE3 | Ordinal: 7396
        void toArray(void) const;

    // RVA: 0x1CF3 | Ordinal: 7412
        void toBool(bool) const;

    // RVA: 0x1CF9 | Ordinal: 7418
        void toByteArray(class QByteArray const &) const;

    // RVA: 0x1D05 | Ordinal: 7430
        void toCbor(class QFlags<enum QCborValue::EncodingOption>);

    // RVA: 0x1D06 | Ordinal: 7431
        void toCbor(class QCborStreamWriter &, class QFlags<enum QCborValue::EncodingOption>);

    // RVA: 0x1D1C | Ordinal: 7453
        void toDateTime(class QDateTime const &) const;

    // RVA: 0x1D23 | Ordinal: 7460
        void toDiagnosticNotation(class QFlags<enum QCborValue::DiagnosticNotationOption>) const;

    // RVA: 0x1D29 | Ordinal: 7466
        void toDouble(double) const;

    // RVA: 0x1D52 | Ordinal: 7507
        void toInteger(__int64) const;

    // RVA: 0x1D5D | Ordinal: 7518
        void toJsonValue(void) const;

    // RVA: 0x1D95 | Ordinal: 7574
        void toMap(class QCborMap const &) const;

    // RVA: 0x1D96 | Ordinal: 7575
        void toMap(void) const;

    // RVA: 0x1DB0 | Ordinal: 7601
        void toRegularExpression(class QRegularExpression const &) const;

    // RVA: 0x1DBE | Ordinal: 7615
        void toSimpleType(enum QCborSimpleType) const;

    // RVA: 0x1DD0 | Ordinal: 7633
        void toString(class QString const &) const;

    // RVA: 0x1E46 | Ordinal: 7751
        void toUrl(class QUrl const &) const;

    // RVA: 0x1E4E | Ordinal: 7759
        void toUuid(class QUuid const &) const;

    // RVA: 0x1E52 | Ordinal: 7763
        void toVariant(void) const;

    // RVA: 0x1F34 | Ordinal: 7989
        void type(void) const;

    // RVA: 0x1F49 | Ordinal: 8010
        void type_helper(enum QCborSimpleType);

    // RVA: 0x1FCE | Ordinal: 8143
        void value_helper(void) const;

    // RVA: 0x2F3 | Ordinal: 756
        void _QCborValue(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QCBORVALUE_HPP
