#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QTextDocument
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTextDocument
{
public:

    // RVA: 0x341 | Ordinal: 834
        void QTextDocument(class QTextDocumentPrivate &, class QObject *);

    // RVA: 0x342 | Ordinal: 835
        void QTextDocument(class QString const &, class QObject *);

    // RVA: 0x343 | Ordinal: 836
        void QTextDocument(class QObject *);

    // RVA: 0x993 | Ordinal: 2452
        void addResource(int, class QUrl const &, class QVariant const &);

    // RVA: 0x9B2 | Ordinal: 2483
        void adjustSize(void);

    // RVA: 0x9C3 | Ordinal: 2500
        void allFormats(void) const;

    // RVA: 0xA04 | Ordinal: 2565
        void appendUndoItem(class QAbstractUndoItem *);

    // RVA: 0xA42 | Ordinal: 2627
        void availableRedoSteps(void) const;

    // RVA: 0xA48 | Ordinal: 2633
        void availableUndoSteps(void) const;

    // RVA: 0xA60 | Ordinal: 2657
        void baseUrl(void) const;

    // RVA: 0xA61 | Ordinal: 2658
        void baseUrlChanged(class QUrl const &);

    // RVA: 0xA6F | Ordinal: 2672
        void begin(void) const;

    // RVA: 0xAB1 | Ordinal: 2738
        void blockCount(void) const;

    // RVA: 0xAB2 | Ordinal: 2739
        void blockCountChanged(int);

    // RVA: 0xB86 | Ordinal: 2951
        void characterAt(int) const;

    // RVA: 0xB87 | Ordinal: 2952
        void characterCount(void) const;

    // RVA: 0xBA7 | Ordinal: 2984
        void clear(void);

    // RVA: 0xBC3 | Ordinal: 3012
        void clearUndoRedoStacks(enum QTextDocument::Stacks);

    // RVA: 0xBE6 | Ordinal: 3047
        void clone(class QObject *) const;

    // RVA: 0xC4D | Ordinal: 3150
        void contentsChange(int, int, int);

    // RVA: 0xC4E | Ordinal: 3151
        void contentsChanged(void);

    // RVA: 0xCB3 | Ordinal: 3252
        void createObject(class QTextFormat const &);

    // RVA: 0xD01 | Ordinal: 3330
        void cursorPositionChanged(class QTextCursor const &);

    // RVA: 0xD88 | Ordinal: 3465
        void d_func(void);

    // RVA: 0xD89 | Ordinal: 3466
        void d_func(void) const;

    // RVA: 0xDC4 | Ordinal: 3525
        void defaultCursorMoveStyle(void) const;

    // RVA: 0xDC8 | Ordinal: 3529
        void defaultFont(void) const;

    // RVA: 0xDD5 | Ordinal: 3542
        void defaultStyleSheet(void) const;

    // RVA: 0xDD7 | Ordinal: 3544
        void defaultTextOption(void) const;

    // RVA: 0xE79 | Ordinal: 3706
        void docHandle(void) const;

    // RVA: 0xE85 | Ordinal: 3718
        void documentLayout(void) const;

    // RVA: 0xE86 | Ordinal: 3719
        void documentLayoutChanged(void);

    // RVA: 0xE87 | Ordinal: 3720
        void documentMargin(void) const;

    // RVA: 0xEAC | Ordinal: 3757
        void drawContents(class QPainter *, class QRectF const &);

    // RVA: 0xFAB | Ordinal: 4012
        void end(void) const;

    // RVA: 0x106A | Ordinal: 4203
        void find(class QRegExp const &, class QTextCursor const &, class QFlags<enum QTextDocument::FindFlag>) const;

    // RVA: 0x106B | Ordinal: 4204
        void find(class QRegExp const &, int, class QFlags<enum QTextDocument::FindFlag>) const;

    // RVA: 0x106C | Ordinal: 4205
        void find(class QRegularExpression const &, class QTextCursor const &, class QFlags<enum QTextDocument::FindFlag>) const;

    // RVA: 0x106D | Ordinal: 4206
        void find(class QRegularExpression const &, int, class QFlags<enum QTextDocument::FindFlag>) const;

    // RVA: 0x106E | Ordinal: 4207
        void find(class QString const &, class QTextCursor const &, class QFlags<enum QTextDocument::FindFlag>) const;

    // RVA: 0x106F | Ordinal: 4208
        void find(class QString const &, int, class QFlags<enum QTextDocument::FindFlag>) const;

    // RVA: 0x1071 | Ordinal: 4210
        void findBlock(int) const;

    // RVA: 0x1072 | Ordinal: 4211
        void findBlockByLineNumber(int) const;

    // RVA: 0x1073 | Ordinal: 4212
        void findBlockByNumber(int) const;

    // RVA: 0x1080 | Ordinal: 4225
        void firstBlock(void) const;

    // RVA: 0x1114 | Ordinal: 4373
        void frameAt(int) const;

    // RVA: 0x4ED7 | Ordinal: 20184
        void idealWidth(void) const;

    // RVA: 0x4EF7 | Ordinal: 20216
        void indentWidth(void) const;

    // RVA: 0x5015 | Ordinal: 20502
        void isEmpty(void) const;

    // RVA: 0x504B | Ordinal: 20556
        void isModified(void) const;

    // RVA: 0x506D | Ordinal: 20590
        void isRedoAvailable(void) const;

    // RVA: 0x508A | Ordinal: 20619
        void isUndoAvailable(void) const;

    // RVA: 0x508C | Ordinal: 20621
        void isUndoRedoEnabled(void) const;

    // RVA: 0x5105 | Ordinal: 20742
        void lastBlock(void) const;

    // RVA: 0x5163 | Ordinal: 20836
        void lineCount(void) const;

    // RVA: 0x5195 | Ordinal: 20886
        void loadResource(int, class QUrl const &);

    // RVA: 0x521B | Ordinal: 21020
        void markContentsDirty(int, int);

    // RVA: 0x5243 | Ordinal: 21060
        void maximumBlockCount(void) const;

    // RVA: 0x525C | Ordinal: 21085
        void metaInformation(enum QTextDocument::MetaInformation) const;

    // RVA: 0x5298 | Ordinal: 21145
        void metaObject(void) const;

    // RVA: 0x52EA | Ordinal: 21227
        void modificationChanged(bool);

    // RVA: 0x537E | Ordinal: 21375
        void object(int) const;

    // RVA: 0x5380 | Ordinal: 21377
        void objectForFormat(class QTextFormat const &) const;

    // RVA: 0x53D4 | Ordinal: 21461
        void pageCount(void) const;

    // RVA: 0x53DC | Ordinal: 21469
        void pageSize(void) const;

    // RVA: 0x54C5 | Ordinal: 21702
        void print(class QPagedPaintDevice *) const;

    // RVA: 0x55AF | Ordinal: 21936
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x55F3 | Ordinal: 22004
        void qt_metacast(char const *);

    // RVA: 0x564A | Ordinal: 22091
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x5699 | Ordinal: 22170
        void redo(class QTextCursor *);

    // RVA: 0x569A | Ordinal: 22171
        void redo(void);

    // RVA: 0x569C | Ordinal: 22173
        void redoAvailable(bool);

    // RVA: 0x573E | Ordinal: 22335
        void resource(int, class QUrl const &) const;

    // RVA: 0x5758 | Ordinal: 22361
        void revision(void) const;

    // RVA: 0x576D | Ordinal: 22382
        void rootFrame(void) const;

    // RVA: 0x5860 | Ordinal: 22625
        void setBaseUrl(class QUrl const &);

    // RVA: 0x5916 | Ordinal: 22807
        void setDefaultCursorMoveStyle(enum Qt::CursorMoveStyle);

    // RVA: 0x5917 | Ordinal: 22808
        void setDefaultFont(class QFont const &);

    // RVA: 0x591E | Ordinal: 22815
        void setDefaultStyleSheet(class QString const &);

    // RVA: 0x5920 | Ordinal: 22817
        void setDefaultTextOption(class QTextOption const &);

    // RVA: 0x594F | Ordinal: 22864
        void setDocumentLayout(class QAbstractTextDocumentLayout *);

    // RVA: 0x5950 | Ordinal: 22865
        void setDocumentMargin(double);

    // RVA: 0x59F4 | Ordinal: 23029
        void setHtml(class QString const &);

    // RVA: 0x5A00 | Ordinal: 23041
        void setIndentWidth(double);

    // RVA: 0x5A53 | Ordinal: 23124
        void setMarkdown(class QString const &, class QFlags<enum QTextDocument::MarkdownFeature>);

    // RVA: 0x5A61 | Ordinal: 23138
        void setMaximumBlockCount(int);

    // RVA: 0x5A68 | Ordinal: 23145
        void setMetaInformation(enum QTextDocument::MetaInformation, class QString const &);

    // RVA: 0x5A85 | Ordinal: 23174
        void setModified(bool);

    // RVA: 0x5AD9 | Ordinal: 23258
        void setPageSize(class QSizeF const &);

    // RVA: 0x5AFB | Ordinal: 23292
        void setPlainText(class QString const &);

    // RVA: 0x5BFB | Ordinal: 23548
        void setTextWidth(double);

    // RVA: 0x5C29 | Ordinal: 23594
        void setUndoRedoEnabled(bool);

    // RVA: 0x5C87 | Ordinal: 23688
        void setUseDesignMetrics(bool);

    // RVA: 0x5D3F | Ordinal: 23872
        void size(void) const;

    // RVA: 0x5F14 | Ordinal: 24341
        void textWidth(void) const;

    // RVA: 0x5F45 | Ordinal: 24390
        void toHtml(class QByteArray const &) const;

    // RVA: 0x5F59 | Ordinal: 24410
        void toMarkdown(class QFlags<enum QTextDocument::MarkdownFeature>) const;

    // RVA: 0x5F5D | Ordinal: 24414
        void toPlainText(void) const;

    // RVA: 0x5F67 | Ordinal: 24424
        void toRawText(void) const;

    // RVA: 0x5FD6 | Ordinal: 24535
        void tr(char const *, char const *, int);

    // RVA: 0x601D | Ordinal: 24606
        void trUtf8(char const *, char const *, int);

    // RVA: 0x6087 | Ordinal: 24712
        void undo(class QTextCursor *);

    // RVA: 0x6088 | Ordinal: 24713
        void undo(void);

    // RVA: 0x608A | Ordinal: 24715
        void undoAvailable(bool);

    // RVA: 0x608B | Ordinal: 24716
        void undoCommandAdded(void);

    // RVA: 0x60DB | Ordinal: 24796
        void useDesignMetrics(void) const;

    // RVA: 0x530 | Ordinal: 1329
        void _QTextDocument(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QTEXTDOCUMENT_HPP
