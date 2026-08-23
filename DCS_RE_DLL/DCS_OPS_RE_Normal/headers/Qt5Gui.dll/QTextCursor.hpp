#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QTextCursor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTextCursor
{
public:

    // RVA: 0x338 | Ordinal: 825
        void QTextCursor(class QTextCursor const &);

    // RVA: 0x339 | Ordinal: 826
        void QTextCursor(class QTextBlock const &);

    // RVA: 0x33A | Ordinal: 827
        void QTextCursor(class QTextCursorPrivate *);

    // RVA: 0x33B | Ordinal: 828
        void QTextCursor(class QTextDocument *);

    // RVA: 0x33C | Ordinal: 829
        void QTextCursor(class QTextDocumentPrivate *, int);

    // RVA: 0x33D | Ordinal: 830
        void QTextCursor(class QTextFrame *);

    // RVA: 0x33E | Ordinal: 831
        void QTextCursor(void);

    // RVA: 0x9E5 | Ordinal: 2534
        void anchor(void) const;

    // RVA: 0xA2A | Ordinal: 2603
        void atBlockEnd(void) const;

    // RVA: 0xA2B | Ordinal: 2604
        void atBlockStart(void) const;

    // RVA: 0xA2C | Ordinal: 2605
        void atEnd(void) const;

    // RVA: 0xA2F | Ordinal: 2608
        void atStart(void) const;

    // RVA: 0xA74 | Ordinal: 2677
        void beginEditBlock(void);

    // RVA: 0xAAB | Ordinal: 2732
        void block(void) const;

    // RVA: 0xAAF | Ordinal: 2736
        void blockCharFormat(void) const;

    // RVA: 0xAB4 | Ordinal: 2741
        void blockFormat(void) const;

    // RVA: 0xABF | Ordinal: 2752
        void blockNumber(void) const;

    // RVA: 0xB80 | Ordinal: 2945
        void charFormat(void) const;

    // RVA: 0xBC0 | Ordinal: 3009
        void clearSelection(void);

    // RVA: 0xC0D | Ordinal: 3086
        void columnNumber(void) const;

    // RVA: 0xCAA | Ordinal: 3243
        void createList(class QTextListFormat const &);

    // RVA: 0xCAB | Ordinal: 3244
        void createList(enum QTextListFormat::Style);

    // RVA: 0xCE6 | Ordinal: 3303
        void currentFrame(void) const;

    // RVA: 0xCF0 | Ordinal: 3313
        void currentList(void) const;

    // RVA: 0xCF8 | Ordinal: 3321
        void currentTable(void) const;

    // RVA: 0xDE1 | Ordinal: 3554
        void deleteChar(void);

    // RVA: 0xDE6 | Ordinal: 3559
        void deletePreviousChar(void);

    // RVA: 0xE7F | Ordinal: 3712
        void document(void) const;

    // RVA: 0xFB3 | Ordinal: 4020
        void endEditBlock(void);

    // RVA: 0x4E5C | Ordinal: 20061
        void hasComplexSelection(void) const;

    // RVA: 0x4E79 | Ordinal: 20090
        void hasSelection(void) const;

    // RVA: 0x4F4E | Ordinal: 20303
        void insertBlock(class QTextBlockFormat const &);

    // RVA: 0x4F4F | Ordinal: 20304
        void insertBlock(class QTextBlockFormat const &, class QTextCharFormat const &);

    // RVA: 0x4F50 | Ordinal: 20305
        void insertBlock(void);

    // RVA: 0x4F5E | Ordinal: 20319
        void insertFragment(class QTextDocumentFragment const &);

    // RVA: 0x4F5F | Ordinal: 20320
        void insertFrame(class QTextFrameFormat const &);

    // RVA: 0x4F61 | Ordinal: 20322
        void insertHtml(class QString const &);

    // RVA: 0x4F62 | Ordinal: 20323
        void insertImage(class QImage const &, class QString const &);

    // RVA: 0x4F63 | Ordinal: 20324
        void insertImage(class QString const &);

    // RVA: 0x4F64 | Ordinal: 20325
        void insertImage(class QTextImageFormat const &);

    // RVA: 0x4F65 | Ordinal: 20326
        void insertImage(class QTextImageFormat const &, enum QTextFrameFormat::Position);

    // RVA: 0x4F67 | Ordinal: 20328
        void insertList(class QTextListFormat const &);

    // RVA: 0x4F68 | Ordinal: 20329
        void insertList(enum QTextListFormat::Style);

    // RVA: 0x4F77 | Ordinal: 20344
        void insertTable(int, int);

    // RVA: 0x4F78 | Ordinal: 20345
        void insertTable(int, int, class QTextTableFormat const &);

    // RVA: 0x4F79 | Ordinal: 20346
        void insertText(class QString const &);

    // RVA: 0x4F7A | Ordinal: 20347
        void insertText(class QString const &, class QTextCharFormat const &);

    // RVA: 0x4FF9 | Ordinal: 20474
        void isCopyOf(class QTextCursor const &) const;

    // RVA: 0x5057 | Ordinal: 20568
        void isNull(void) const;

    // RVA: 0x50DB | Ordinal: 20700
        void joinPreviousEditBlock(void);

    // RVA: 0x50E8 | Ordinal: 20713
        void keepPositionOnInsert(void) const;

    // RVA: 0x5253 | Ordinal: 21076
        void mergeBlockCharFormat(class QTextCharFormat const &);

    // RVA: 0x5254 | Ordinal: 21077
        void mergeBlockFormat(class QTextBlockFormat const &);

    // RVA: 0x5258 | Ordinal: 21081
        void mergeCharFormat(class QTextCharFormat const &);

    // RVA: 0x5307 | Ordinal: 21256
        void movePosition(enum QTextCursor::MoveOperation, enum QTextCursor::MoveMode, int);

    // RVA: 0x7CA | Ordinal: 1995
        void operator_(class QTextCursor const &) const;

    // RVA: 0x549C | Ordinal: 21661
        void position(void) const;

    // RVA: 0x54A4 | Ordinal: 21669
        void positionInBlock(void) const;

    // RVA: 0x56E9 | Ordinal: 22250
        void removeSelectedText(void);

    // RVA: 0x57EC | Ordinal: 22509
        void select(enum QTextCursor::SelectionType);

    // RVA: 0x57EF | Ordinal: 22512
        void selectedTableCells(int *, int *, int *, int *) const;

    // RVA: 0x57F1 | Ordinal: 22514
        void selectedText(void) const;

    // RVA: 0x57F2 | Ordinal: 22515
        void selection(void) const;

    // RVA: 0x57F5 | Ordinal: 22518
        void selectionEnd(void) const;

    // RVA: 0x57F7 | Ordinal: 22520
        void selectionStart(void) const;

    // RVA: 0x5866 | Ordinal: 22631
        void setBlockCharFormat(class QTextCharFormat const &);

    // RVA: 0x5868 | Ordinal: 22633
        void setBlockFormat(class QTextBlockFormat const &);

    // RVA: 0x58A1 | Ordinal: 22690
        void setCharFormat(class QTextCharFormat const &);

    // RVA: 0x5A18 | Ordinal: 23065
        void setKeepPositionOnInsert(bool);

    // RVA: 0x5B09 | Ordinal: 23306
        void setPosition(int, enum QTextCursor::MoveMode);

    // RVA: 0x5C9F | Ordinal: 23712
        void setVerticalMovementX(int);

    // RVA: 0x5CB1 | Ordinal: 23730
        void setVisualNavigation(bool);

    // RVA: 0x5E93 | Ordinal: 24212
        void swap(class QTextCursor &);

    // RVA: 0x611E | Ordinal: 24863
        void verticalMovementX(void) const;

    // RVA: 0x613A | Ordinal: 24891
        void visualNavigation(void) const;

    // RVA: 0x52E | Ordinal: 1327
        void _QTextCursor(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QTEXTCURSOR_HPP
