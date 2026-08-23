#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QAbstractFileEngineIterator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QAbstractFileEngineIterator
{
public:

    // RVA: 0x32 | Ordinal: 51
        void QAbstractFileEngineIterator(class QFlags<enum QDir::Filter>, class QStringList const &);

    // RVA: 0xB60 | Ordinal: 2913
        void currentFileInfo(void) const;

    // RVA: 0xB61 | Ordinal: 2914
        void currentFilePath(void) const;

    // RVA: 0xD5F | Ordinal: 3424
        void entryInfo(enum QAbstractFileEngineIterator::EntryInfoType) const;

    // RVA: 0xE2C | Ordinal: 3629
        void filters(void) const;

    // RVA: 0x1414 | Ordinal: 5141
        void nameFilters(void) const;

    // RVA: 0x14C1 | Ordinal: 5314
        void path(void) const;

    // RVA: 0x1A3B | Ordinal: 6716
        void setPath(class QString const &);

    // RVA: 0x2D9 | Ordinal: 730
        void _QAbstractFileEngineIterator(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QABSTRACTFILEENGINEITERATOR_HPP
