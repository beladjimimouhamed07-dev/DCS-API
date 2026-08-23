#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QJsonDocument
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QJsonDocument
{
public:

    // RVA: 0x141 | Ordinal: 322
        void QJsonDocument(class QCborValue const &);

    // RVA: 0x142 | Ordinal: 323
        void QJsonDocument(class QJsonDocument &&);

    // RVA: 0x143 | Ordinal: 324
        void QJsonDocument(class QJsonDocument const &);

    // RVA: 0x144 | Ordinal: 325
        void QJsonDocument(class QJsonArray const &);

    // RVA: 0x145 | Ordinal: 326
        void QJsonDocument(class QJsonObject const &);

    // RVA: 0x146 | Ordinal: 327
        void QJsonDocument(void);

    // RVA: 0x8A6 | Ordinal: 2215
        void array(void) const;

    // RVA: 0xE9E | Ordinal: 3743
        void fromBinaryData(class QByteArray const &, enum QJsonDocument::DataValidation);

    // RVA: 0xEA8 | Ordinal: 3753
        void fromJson(class QByteArray const &, struct QJsonParseError *);

    // RVA: 0xEC5 | Ordinal: 3782
        void fromRawData(char const *, int, enum QJsonDocument::DataValidation);

    // RVA: 0xEFB | Ordinal: 3836
        void fromVariant(class QVariant const &);

    // RVA: 0x1077 | Ordinal: 4216
        void isArray(void) const;

    // RVA: 0x10CD | Ordinal: 4302
        void isEmpty(void) const;

    // RVA: 0x1149 | Ordinal: 4426
        void isNull(void) const;

    // RVA: 0x115D | Ordinal: 4446
        void isObject(void) const;

    // RVA: 0x1467 | Ordinal: 5224
        void object(void) const;

    // RVA: 0x1706 | Ordinal: 5895
        void rawData(int *) const;

    // RVA: 0x192E | Ordinal: 6447
        void setArray(class QJsonArray const &);

    // RVA: 0x1A29 | Ordinal: 6698
        void setObject(class QJsonObject const &);

    // RVA: 0x1C77 | Ordinal: 7288
        void swap(class QJsonDocument &);

    // RVA: 0x1CEF | Ordinal: 7408
        void toBinaryData(void) const;

    // RVA: 0x1D56 | Ordinal: 7511
        void toJson(enum QJsonDocument::JsonFormat) const;

    // RVA: 0x1D57 | Ordinal: 7512
        void toJson(void) const;

    // RVA: 0x1E54 | Ordinal: 7765
        void toVariant(void) const;

    // RVA: 0x32A | Ordinal: 811
        void _QJsonDocument(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QJSONDOCUMENT_HPP
