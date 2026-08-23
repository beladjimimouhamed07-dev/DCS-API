#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QCborValueRef
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QCborValueRef
{
public:

    // RVA: 0x9A | Ordinal: 155
        void QCborValueRef(class QCborContainerPrivate *, __int64);

    // RVA: 0x9B | Ordinal: 156
        void QCborValueRef(void);

    // RVA: 0x9C | Ordinal: 157
        void QCborValueRef(class QCborValueRef const &);

    // RVA: 0x8A8 | Ordinal: 2217
        void assign(class QCborValueRef, class QCborValue &&);

    // RVA: 0x8A9 | Ordinal: 2218
        void assign(class QCborValueRef, class QCborValue const &);

    // RVA: 0x8AA | Ordinal: 2219
        void assign(class QCborValueRef, class QCborValueRef);

    // RVA: 0xA42 | Ordinal: 2627
        void compare(class QCborValue const &) const;

    // RVA: 0xA6E | Ordinal: 2671
        void concrete(void) const;

    // RVA: 0xA6F | Ordinal: 2672
        void concrete(class QCborValueRef);

    // RVA: 0xA70 | Ordinal: 2673
        void concreteType(void) const;

    // RVA: 0xA71 | Ordinal: 2674
        void concreteType(class QCborValueRef);

    // RVA: 0x1076 | Ordinal: 4215
        void isArray(void) const;

    // RVA: 0x1083 | Ordinal: 4228
        void isBool(void) const;

    // RVA: 0x108B | Ordinal: 4236
        void isByteArray(void) const;

    // RVA: 0x109B | Ordinal: 4252
        void isContainer(void) const;

    // RVA: 0x109F | Ordinal: 4256
        void isDateTime(void) const;

    // RVA: 0x10BD | Ordinal: 4286
        void isDouble(void) const;

    // RVA: 0x10EB | Ordinal: 4332
        void isFalse(void) const;

    // RVA: 0x1104 | Ordinal: 4357
        void isInteger(void) const;

    // RVA: 0x1109 | Ordinal: 4362
        void isInvalid(void) const;

    // RVA: 0x1133 | Ordinal: 4404
        void isMap(void) const;

    // RVA: 0x1144 | Ordinal: 4421
        void isNull(void) const;

    // RVA: 0x1182 | Ordinal: 4483
        void isRegularExpression(void) const;

    // RVA: 0x11B9 | Ordinal: 4538
        void isSimpleType(enum QCborSimpleType) const;

    // RVA: 0x11BA | Ordinal: 4539
        void isSimpleType(void) const;

    // RVA: 0x11CE | Ordinal: 4559
        void isString(void) const;

    // RVA: 0x11D9 | Ordinal: 4570
        void isTag(void) const;

    // RVA: 0x11E6 | Ordinal: 4583
        void isTrue(void) const;

    // RVA: 0x11E9 | Ordinal: 4586
        void isUndefined(void) const;

    // RVA: 0x11F4 | Ordinal: 4597
        void isUrl(void) const;

    // RVA: 0x11F8 | Ordinal: 4601
        void isUuid(void) const;

    // RVA: 0x64F | Ordinal: 1616
        void operator_(class QCborValue const &) const;

    // RVA: 0x1C9F | Ordinal: 7328
        void tag(enum QCborTag) const;

    // RVA: 0x1CA3 | Ordinal: 7332
        void taggedValue(class QCborValue const &) const;

    // RVA: 0x1CE4 | Ordinal: 7397
        void toArray(class QCborArray const &) const;

    // RVA: 0x1CE5 | Ordinal: 7398
        void toArray(void) const;

    // RVA: 0x1CF4 | Ordinal: 7413
        void toBool(bool) const;

    // RVA: 0x1CFA | Ordinal: 7419
        void toByteArray(class QByteArray const &) const;

    // RVA: 0x1D07 | Ordinal: 7432
        void toCbor(class QFlags<enum QCborValue::EncodingOption>);

    // RVA: 0x1D08 | Ordinal: 7433
        void toCbor(class QCborStreamWriter &, class QFlags<enum QCborValue::EncodingOption>);

    // RVA: 0x1D1D | Ordinal: 7454
        void toDateTime(class QDateTime const &) const;

    // RVA: 0x1D24 | Ordinal: 7461
        void toDiagnosticNotation(class QFlags<enum QCborValue::DiagnosticNotationOption>);

    // RVA: 0x1D2A | Ordinal: 7467
        void toDouble(double) const;

    // RVA: 0x1D53 | Ordinal: 7508
        void toInteger(__int64) const;

    // RVA: 0x1D5E | Ordinal: 7519
        void toJsonValue(void) const;

    // RVA: 0x1D97 | Ordinal: 7576
        void toMap(class QCborMap const &) const;

    // RVA: 0x1D98 | Ordinal: 7577
        void toMap(void) const;

    // RVA: 0x1DB1 | Ordinal: 7602
        void toRegularExpression(class QRegularExpression const &) const;

    // RVA: 0x1DD1 | Ordinal: 7634
        void toString(class QString const &) const;

    // RVA: 0x1E47 | Ordinal: 7752
        void toUrl(class QUrl const &) const;

    // RVA: 0x1E4F | Ordinal: 7760
        void toUuid(class QUuid const &) const;

    // RVA: 0x1E53 | Ordinal: 7764
        void toVariant(void) const;

    // RVA: 0x1F35 | Ordinal: 7990
        void type(void) const;
};

// DCS_OPS_RE_QT5CORE.DLL_QCBORVALUEREF_HPP
