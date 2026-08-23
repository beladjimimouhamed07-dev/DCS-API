#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: iterator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace QTextBlock {

class iterator
{
public:

    // RVA: 0xA2D | Ordinal: 2606
        void atEnd(void) const;

    // RVA: 0xCDB | Ordinal: 3292
        void currentBlock(void) const;

    // RVA: 0xCE7 | Ordinal: 3304
        void currentFrame(void) const;

    // RVA: 0x1110 | Ordinal: 4369
        void fragment(void) const;

    // RVA: 0x3E8 | Ordinal: 1001
        void iterator(class QTextDocumentPrivate const *, int, int, int);

    // RVA: 0x3E9 | Ordinal: 1002
        void iterator(class QTextBlock::iterator const &);

    // RVA: 0x3EA | Ordinal: 1003
        void iterator(void);

    // RVA: 0x3EB | Ordinal: 1004
        void iterator(class QTextFrame *, int, int, int);

    // RVA: 0x3EC | Ordinal: 1005
        void iterator(class QTextFrame::iterator &&);

    // RVA: 0x3ED | Ordinal: 1006
        void iterator(class QTextFrame::iterator const &);

    // RVA: 0x540B | Ordinal: 21516
        void parentFrame(void) const;
};

} // namespace QTextBlock

// DCS_OPS_RE_QT5GUI.DLL_ITERATOR_HPP
