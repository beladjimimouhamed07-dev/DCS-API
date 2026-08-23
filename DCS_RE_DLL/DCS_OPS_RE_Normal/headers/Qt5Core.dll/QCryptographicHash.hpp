#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QCryptographicHash
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QCryptographicHash
{
public:

    // RVA: 0xBD | Ordinal: 190
        void QCryptographicHash(enum QCryptographicHash::Algorithm);

    // RVA: 0x7E1 | Ordinal: 2018
        void addData(class QByteArray const &);

    // RVA: 0x7E2 | Ordinal: 2019
        void addData(char const *, int);

    // RVA: 0x7E3 | Ordinal: 2020
        void addData(class QIODevice *);

    // RVA: 0xF7D | Ordinal: 3966
        void hash(class QByteArray const &, enum QCryptographicHash::Algorithm);

    // RVA: 0xF7F | Ordinal: 3968
        void hashLength(enum QCryptographicHash::Algorithm);

    // RVA: 0x1857 | Ordinal: 6232
        void reset(void);

    // RVA: 0x187B | Ordinal: 6268
        void result(void) const;

    // RVA: 0x2FC | Ordinal: 765
        void _QCryptographicHash(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QCRYPTOGRAPHICHASH_HPP
