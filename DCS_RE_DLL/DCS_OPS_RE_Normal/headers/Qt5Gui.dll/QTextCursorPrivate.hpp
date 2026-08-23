#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QTextCursorPrivate
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTextCursorPrivate
{
public:

    // RVA: 0x33F | Ordinal: 832
        void QTextCursorPrivate(class QTextCursorPrivate const &);

    // RVA: 0x340 | Ordinal: 833
        void QTextCursorPrivate(class QTextDocumentPrivate *);

    // RVA: 0x941 | Ordinal: 2370
        void aboutToRemoveCell(int, int);

    // RVA: 0x9AF | Ordinal: 2480
        void adjustCursor(enum QTextCursor::MoveOperation);

    // RVA: 0x9B1 | Ordinal: 2482
        void adjustPosition(int, int, enum QTextUndoCommand::Operation);

    // RVA: 0xAAC | Ordinal: 2733
        void block(void) const;

    // RVA: 0xAB5 | Ordinal: 2742
        void blockFormat(void) const;

    // RVA: 0xABA | Ordinal: 2747
        void blockLayout(class QTextBlock &) const;

    // RVA: 0xB38 | Ordinal: 2873
        void canDelete(int) const;

    // RVA: 0xBAD | Ordinal: 2990
        void clearCells(class QTextTable *, int, int, int, int, enum QTextUndoCommand::Operation);

    // RVA: 0xC24 | Ordinal: 3109
        void complexSelectionTable(void) const;

    // RVA: 0x1159 | Ordinal: 4442
        void fromPosition(class QTextDocumentPrivate *, int);

    // RVA: 0x11AB | Ordinal: 4524
        void getPrivate(class QTextCursor *);

    // RVA: 0x4F51 | Ordinal: 20306
        void insertBlock(class QTextBlockFormat const &, class QTextCharFormat const &);

    // RVA: 0x5308 | Ordinal: 21257
        void movePosition(enum QTextCursor::MoveOperation, enum QTextCursor::MoveMode);

    // RVA: 0x56C5 | Ordinal: 22214
        void remove(void);

    // RVA: 0x57F0 | Ordinal: 22513
        void selectedTableCells(int *, int *, int *, int *) const;

    // RVA: 0x5867 | Ordinal: 22632
        void setBlockCharFormat(class QTextCharFormat const &, enum QTextDocumentPrivate::FormatChangeMode);

    // RVA: 0x5869 | Ordinal: 22634
        void setBlockFormat(class QTextBlockFormat const &, enum QTextDocumentPrivate::FormatChangeMode);

    // RVA: 0x58A2 | Ordinal: 22691
        void setCharFormat(class QTextCharFormat const &, enum QTextDocumentPrivate::FormatChangeMode);

    // RVA: 0x5B0A | Ordinal: 23307
        void setPosition(int);

    // RVA: 0x5CD9 | Ordinal: 23770
        void setX(void);

    // RVA: 0x52F | Ordinal: 1328
        void _QTextCursorPrivate(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QTEXTCURSORPRIVATE_HPP
