#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QBinaryJsonValue
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QBinaryJsonValue
{
public:

    // RVA: 0x50 | Ordinal: 81
        void QBinaryJsonValue(class QBinaryJsonPrivate::MutableData *, class QBinaryJsonPrivate::Base *, class QBinaryJsonPrivate::Value const &);

    // RVA: 0x51 | Ordinal: 82
        void QBinaryJsonValue(class QBinaryJsonValue &&);

    // RVA: 0x52 | Ordinal: 83
        void QBinaryJsonValue(class QBinaryJsonArray const &);

    // RVA: 0x53 | Ordinal: 84
        void QBinaryJsonValue(class QBinaryJsonObject const &);

    // RVA: 0x54 | Ordinal: 85
        void QBinaryJsonValue(double);

    // RVA: 0x55 | Ordinal: 86
        void QBinaryJsonValue(class QString);

    // RVA: 0x56 | Ordinal: 87
        void QBinaryJsonValue(enum QJsonValue::Type);

    // RVA: 0x57 | Ordinal: 88
        void QBinaryJsonValue(bool);

    // RVA: 0xC7E | Ordinal: 3199
        void detach(void);

    // RVA: 0xEAB | Ordinal: 3756
        void fromJsonValue(class QJsonValue const &);

    // RVA: 0x1CF1 | Ordinal: 7410
        void toBool(void) const;

    // RVA: 0x1D26 | Ordinal: 7463
        void toDouble(void) const;

    // RVA: 0x1DCE | Ordinal: 7631
        void toString(void) const;

    // RVA: 0x1F32 | Ordinal: 7987
        void type(void) const;

    // RVA: 0x2E9 | Ordinal: 746
        void _QBinaryJsonValue(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QBINARYJSONVALUE_HPP
