#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QMessageAuthenticationCode
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QMessageAuthenticationCode
{
public:

    // RVA: 0x174 | Ordinal: 373
        void QMessageAuthenticationCode(enum QCryptographicHash::Algorithm, class QByteArray const &);

    // RVA: 0x7E4 | Ordinal: 2021
        void addData(class QByteArray const &);

    // RVA: 0x7E5 | Ordinal: 2022
        void addData(char const *, int);

    // RVA: 0x7E6 | Ordinal: 2023
        void addData(class QIODevice *);

    // RVA: 0xF7E | Ordinal: 3967
        void hash(class QByteArray const &, class QByteArray const &, enum QCryptographicHash::Algorithm);

    // RVA: 0x185A | Ordinal: 6235
        void reset(void);

    // RVA: 0x187C | Ordinal: 6269
        void result(void) const;

    // RVA: 0x19F4 | Ordinal: 6645
        void setKey(class QByteArray const &);

    // RVA: 0x332 | Ordinal: 819
        void _QMessageAuthenticationCode(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QMESSAGEAUTHENTICATIONCODE_HPP
