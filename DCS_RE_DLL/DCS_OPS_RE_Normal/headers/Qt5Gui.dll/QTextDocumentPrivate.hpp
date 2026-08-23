#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QTextDocumentPrivate
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTextDocumentPrivate
{
public:

    // RVA: 0x349 | Ordinal: 842
        void QTextDocumentPrivate(void);

    // RVA: 0x942 | Ordinal: 2371
        void aboutToRemoveCell(int, int);

    // RVA: 0x96D | Ordinal: 2414
        void addCursor(class QTextCursorPrivate *);

    // RVA: 0x9B0 | Ordinal: 2481
        void adjustDocumentChangesAndCursors(int, int, enum QTextUndoCommand::Operation);

    // RVA: 0xA05 | Ordinal: 2566
        void appendUndoItem(class QTextUndoCommand const &);

    // RVA: 0xA06 | Ordinal: 2567
        void appendUndoItem(class QAbstractUndoItem *);

    // RVA: 0xA43 | Ordinal: 2628
        void availableRedoSteps(void) const;

    // RVA: 0xA49 | Ordinal: 2634
        void availableUndoSteps(void) const;

    // RVA: 0xA70 | Ordinal: 2673
        void begin(void) const;

    // RVA: 0xA75 | Ordinal: 2678
        void beginEditBlock(void);

    // RVA: 0xAAD | Ordinal: 2734
        void block(class QTextBlock const &);

    // RVA: 0xAB0 | Ordinal: 2737
        void blockCharFormatIndex(int) const;

    // RVA: 0xABC | Ordinal: 2749
        void blockMap(void);

    // RVA: 0xABD | Ordinal: 2750
        void blockMap(void) const;

    // RVA: 0xAC2 | Ordinal: 2755
        void blocksBegin(void) const;

    // RVA: 0xAC3 | Ordinal: 2756
        void blocksEnd(void) const;

    // RVA: 0xAC4 | Ordinal: 2757
        void blocksFind(int) const;

    // RVA: 0xB12 | Ordinal: 2835
        void buffer(void) const;

    // RVA: 0xB77 | Ordinal: 2936
        void changeObjectFormat(class QTextObject *, int);

    // RVA: 0xBA8 | Ordinal: 2985
        void clear(void);

    // RVA: 0xBB5 | Ordinal: 2998
        void clearFrame(class QTextFrame *);

    // RVA: 0xBC4 | Ordinal: 3013
        void clearUndoRedoStacks(enum QTextDocument::Stacks, bool);

    // RVA: 0xC2C | Ordinal: 3117
        void compressPieceTable(void);

    // RVA: 0xC4F | Ordinal: 3152
        void contentsChanged(void);

    // RVA: 0xCB4 | Ordinal: 3253
        void createObject(class QTextFormat const &, int);

    // RVA: 0xDC9 | Ordinal: 3530
        void defaultFont(void) const;

    // RVA: 0xDE4 | Ordinal: 3557
        void deleteObject(class QTextObject *);

    // RVA: 0xE80 | Ordinal: 3713
        void document(void);

    // RVA: 0xE81 | Ordinal: 3714
        void document(void) const;

    // RVA: 0xE83 | Ordinal: 3716
        void documentChange(int, int);

    // RVA: 0xF93 | Ordinal: 3988
        void emitRedoAvailable(bool);

    // RVA: 0xF95 | Ordinal: 3990
        void emitUndoAvailable(bool);

    // RVA: 0xF9F | Ordinal: 4000
        void enableUndoRedo(bool);

    // RVA: 0xFAC | Ordinal: 4013
        void end(void) const;

    // RVA: 0xFB4 | Ordinal: 4021
        void endEditBlock(void);

    // RVA: 0xFD5 | Ordinal: 4054
        void ensureMaximumBlockCount(void);

    // RVA: 0x1070 | Ordinal: 4209
        void find(int) const;

    // RVA: 0x107E | Ordinal: 4223
        void finishEdit(void);

    // RVA: 0x1104 | Ordinal: 4357
        void formatCollection(void);

    // RVA: 0x1105 | Ordinal: 4358
        void formatCollection(void) const;

    // RVA: 0x1112 | Ordinal: 4371
        void fragmentMap(void);

    // RVA: 0x1113 | Ordinal: 4372
        void fragmentMap(void) const;

    // RVA: 0x1115 | Ordinal: 4374
        void frameAt(int) const;

    // RVA: 0x4F07 | Ordinal: 20232
        void init(void);

    // RVA: 0x4F4C | Ordinal: 20301
        void insert(int, class QString const &, int);

    // RVA: 0x4F4D | Ordinal: 20302
        void insert(int, int, int, int);

    // RVA: 0x4F52 | Ordinal: 20307
        void insertBlock(int, int, int, enum QTextUndoCommand::Operation);

    // RVA: 0x4F53 | Ordinal: 20308
        void insertBlock(class QChar, int, int, int, enum QTextUndoCommand::Operation);

    // RVA: 0x4F60 | Ordinal: 20321
        void insertFrame(int, int, class QTextFrameFormat const &);

    // RVA: 0x4F7B | Ordinal: 20348
        void insert_block(int, unsigned int, int, int, enum QTextUndoCommand::Operation, int);

    // RVA: 0x4F7C | Ordinal: 20349
        void insert_frame(class QTextFrame *);

    // RVA: 0x4F7D | Ordinal: 20350
        void insert_string(int, unsigned int, unsigned int, int, enum QTextUndoCommand::Operation);

    // RVA: 0x5032 | Ordinal: 20531
        void isInEditBlock(void) const;

    // RVA: 0x504C | Ordinal: 20557
        void isModified(void) const;

    // RVA: 0x506E | Ordinal: 20591
        void isRedoAvailable(void) const;

    // RVA: 0x508B | Ordinal: 20620
        void isUndoAvailable(void) const;

    // RVA: 0x508D | Ordinal: 20622
        void isUndoRedoEnabled(void) const;

    // RVA: 0x50DC | Ordinal: 20701
        void joinPreviousEditBlock(void);

    // RVA: 0x5121 | Ordinal: 20770
        void layout(void) const;

    // RVA: 0x5139 | Ordinal: 20794
        void leftCursorPosition(int) const;

    // RVA: 0x5142 | Ordinal: 20803
        void length(void) const;

    // RVA: 0x5255 | Ordinal: 21078
        void mergeCachedResources(class QTextDocumentPrivate const *);

    // RVA: 0x5305 | Ordinal: 21254
        void move(int, int, int, enum QTextUndoCommand::Operation);

    // RVA: 0x5347 | Ordinal: 21320
        void nextCursorPosition(int, enum QTextLayout::CursorMode) const;

    // RVA: 0x5371 | Ordinal: 21362
        void numBlocks(void) const;

    // RVA: 0x5381 | Ordinal: 21378
        void objectForFormat(class QTextFormat const &) const;

    // RVA: 0x5382 | Ordinal: 21379
        void objectForFormat(int) const;

    // RVA: 0x5383 | Ordinal: 21380
        void objectForIndex(int) const;

    // RVA: 0x5465 | Ordinal: 21606
        void plainText(void) const;

    // RVA: 0x54BC | Ordinal: 21693
        void previousCursorPosition(int, enum QTextLayout::CursorMode) const;

    // RVA: 0x5538 | Ordinal: 21817
        void q_func(void);

    // RVA: 0x5539 | Ordinal: 21818
        void q_func(void) const;

    // RVA: 0x569B | Ordinal: 22172
        void redo(void);

    // RVA: 0x56C6 | Ordinal: 22215
        void remove(int, int, enum QTextUndoCommand::Operation);

    // RVA: 0x56D2 | Ordinal: 22227
        void removeCursor(class QTextCursorPrivate *);

    // RVA: 0x56D7 | Ordinal: 22232
        void removeFrame(class QTextFrame *);

    // RVA: 0x56F1 | Ordinal: 22258
        void remove_block(int, int *, int, enum QTextUndoCommand::Operation);

    // RVA: 0x56F2 | Ordinal: 22259
        void remove_string(int, unsigned int, enum QTextUndoCommand::Operation);

    // RVA: 0x5767 | Ordinal: 22376
        void rightCursorPosition(int) const;

    // RVA: 0x576E | Ordinal: 22383
        void rootFrame(void) const;

    // RVA: 0x57C3 | Ordinal: 22468
        void scan_frames(int, int, int);

    // RVA: 0x586A | Ordinal: 22635
        void setBlockFormat(class QTextBlock const &, class QTextBlock const &, class QTextBlockFormat const &, enum QTextDocumentPrivate::FormatChangeMode);

    // RVA: 0x58A3 | Ordinal: 22692
        void setCharFormat(int, int, class QTextCharFormat const &, enum QTextDocumentPrivate::FormatChangeMode);

    // RVA: 0x5918 | Ordinal: 22809
        void setDefaultFont(class QFont const &);

    // RVA: 0x5A2B | Ordinal: 23084
        void setLayout(class QAbstractTextDocumentLayout *);

    // RVA: 0x5A86 | Ordinal: 23175
        void setModified(bool);

    // RVA: 0x5D74 | Ordinal: 23925
        void split(int);

    // RVA: 0x6089 | Ordinal: 24714
        void undo(void);

    // RVA: 0x608C | Ordinal: 24717
        void undoRedo(bool);

    // RVA: 0x609A | Ordinal: 24731
        void unite(unsigned int);

    // RVA: 0x533 | Ordinal: 1332
        void _QTextDocumentPrivate(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QTEXTDOCUMENTPRIVATE_HPP
