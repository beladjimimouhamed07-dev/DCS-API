#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QMimeDatabase
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QMimeDatabase
{
public:

    // RVA: 0x193 | Ordinal: 404
        void QMimeDatabase(void);

    // RVA: 0x82D | Ordinal: 2094
        void allMimeTypes(void) const;

    // RVA: 0x139B | Ordinal: 5020
        void mimeTypeForData(class QByteArray const &) const;

    // RVA: 0x139C | Ordinal: 5021
        void mimeTypeForData(class QIODevice *) const;

    // RVA: 0x139D | Ordinal: 5022
        void mimeTypeForFile(class QFileInfo const &, enum QMimeDatabase::MatchMode) const;

    // RVA: 0x139E | Ordinal: 5023
        void mimeTypeForFile(class QString const &, enum QMimeDatabase::MatchMode) const;

    // RVA: 0x139F | Ordinal: 5024
        void mimeTypeForFileNameAndData(class QString const &, class QByteArray const &) const;

    // RVA: 0x13A0 | Ordinal: 5025
        void mimeTypeForFileNameAndData(class QString const &, class QIODevice *) const;

    // RVA: 0x13A1 | Ordinal: 5026
        void mimeTypeForName(class QString const &) const;

    // RVA: 0x13A2 | Ordinal: 5027
        void mimeTypeForUrl(class QUrl const &) const;

    // RVA: 0x13A7 | Ordinal: 5032
        void mimeTypesForFileName(class QString const &) const;

    // RVA: 0x1C53 | Ordinal: 7252
        void suffixForFileName(class QString const &) const;

    // RVA: 0x339 | Ordinal: 826
        void _QMimeDatabase(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QMIMEDATABASE_HPP
