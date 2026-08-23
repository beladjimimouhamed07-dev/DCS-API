#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QDirIterator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QDirIterator
{
public:

    // RVA: 0xDF | Ordinal: 224
        void QDirIterator(class QDir const &, class QFlags<enum QDirIterator::IteratorFlag>);

    // RVA: 0xE0 | Ordinal: 225
        void QDirIterator(class QString const &, class QStringList const &, class QFlags<enum QDir::Filter>, class QFlags<enum QDirIterator::IteratorFlag>);

    // RVA: 0xE1 | Ordinal: 226
        void QDirIterator(class QString const &, class QFlags<enum QDir::Filter>, class QFlags<enum QDirIterator::IteratorFlag>);

    // RVA: 0xE2 | Ordinal: 227
        void QDirIterator(class QString const &, class QFlags<enum QDirIterator::IteratorFlag>);

    // RVA: 0xDFC | Ordinal: 3581
        void fileInfo(void) const;

    // RVA: 0xDFE | Ordinal: 3583
        void fileName(void) const;

    // RVA: 0xE0B | Ordinal: 3596
        void filePath(void) const;

    // RVA: 0xF64 | Ordinal: 3941
        void hasNext(void) const;

    // RVA: 0x1427 | Ordinal: 5160
        void next(void);

    // RVA: 0x14C3 | Ordinal: 5316
        void path(void) const;

    // RVA: 0x305 | Ordinal: 774
        void _QDirIterator(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QDIRITERATOR_HPP
