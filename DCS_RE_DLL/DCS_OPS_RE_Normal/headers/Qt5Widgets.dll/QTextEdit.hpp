#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QTextEdit
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTextEdit
{
public:

    // RVA: 0x17D | Ordinal: 382
        void QTextEdit(class QTextEditPrivate &, class QWidget *);

    // RVA: 0x17E | Ordinal: 383
        void QTextEdit(class QString const &, class QWidget *);

    // RVA: 0x17F | Ordinal: 384
        void QTextEdit(class QWidget *);

    // RVA: 0x4E8 | Ordinal: 1257
        void acceptRichText(void) const;

    // RVA: 0x5C4 | Ordinal: 1477
        void alignment(void) const;

    // RVA: 0x5D3 | Ordinal: 1492
        void anchorAt(class QPoint const &) const;

    // RVA: 0x5E2 | Ordinal: 1507
        void append(class QString const &);

    // RVA: 0x5FB | Ordinal: 1532
        void autoFormatting(void) const;

    // RVA: 0x686 | Ordinal: 1671
        void canInsertFromMimeData(class QMimeData const *) const;

    // RVA: 0x689 | Ordinal: 1674
        void canPaste(void) const;

    // RVA: 0x6C9 | Ordinal: 1738
        void changeEvent(class QEvent *);

    // RVA: 0x71A | Ordinal: 1819
        void clear(void);

    // RVA: 0x7D6 | Ordinal: 2007
        void contextMenuEvent(class QContextMenuEvent *);

    // RVA: 0x7E1 | Ordinal: 2018
        void copy(void);

    // RVA: 0x7E5 | Ordinal: 2022
        void copyAvailable(bool);

    // RVA: 0x80F | Ordinal: 2064
        void createMimeDataFromSelection(void) const;

    // RVA: 0x81A | Ordinal: 2075
        void createStandardContextMenu(class QPoint const &);

    // RVA: 0x81B | Ordinal: 2076
        void createStandardContextMenu(void);

    // RVA: 0x83C | Ordinal: 2109
        void currentCharFormat(void) const;

    // RVA: 0x83E | Ordinal: 2111
        void currentCharFormatChanged(class QTextCharFormat const &);

    // RVA: 0x848 | Ordinal: 2121
        void currentFont(void) const;

    // RVA: 0x87B | Ordinal: 2172
        void cursorForPosition(class QPoint const &) const;

    // RVA: 0x887 | Ordinal: 2184
        void cursorPositionChanged(void);

    // RVA: 0x88D | Ordinal: 2190
        void cursorRect(class QTextCursor const &) const;

    // RVA: 0x88E | Ordinal: 2191
        void cursorRect(void) const;

    // RVA: 0x896 | Ordinal: 2199
        void cursorWidth(void) const;

    // RVA: 0x8A3 | Ordinal: 2212
        void cut(void);

    // RVA: 0x9BB | Ordinal: 2492
        void d_func(void);

    // RVA: 0x9BC | Ordinal: 2493
        void d_func(void) const;

    // RVA: 0xA3B | Ordinal: 2620
        void doSetTextCursor(class QTextCursor const &);

    // RVA: 0xA41 | Ordinal: 2626
        void document(void) const;

    // RVA: 0xA4B | Ordinal: 2636
        void documentTitle(void) const;

    // RVA: 0xA6E | Ordinal: 2671
        void dragEnterEvent(class QDragEnterEvent *);

    // RVA: 0xA7A | Ordinal: 2683
        void dragLeaveEvent(class QDragLeaveEvent *);

    // RVA: 0xA87 | Ordinal: 2696
        void dragMoveEvent(class QDragMoveEvent *);

    // RVA: 0xADC | Ordinal: 2781
        void dropEvent(class QDropEvent *);

    // RVA: 0xB17 | Ordinal: 2840
        void ensureCursorVisible(void);

    // RVA: 0xB6B | Ordinal: 2924
        void event(class QEvent *);

    // RVA: 0xBB4 | Ordinal: 2997
        void extraSelections(void) const;

    // RVA: 0xBD5 | Ordinal: 3030
        void find(class QRegExp const &, class QFlags<enum QTextDocument::FindFlag>);

    // RVA: 0xBD6 | Ordinal: 3031
        void find(class QRegularExpression const &, class QFlags<enum QTextDocument::FindFlag>);

    // RVA: 0xBD7 | Ordinal: 3032
        void find(class QString const &, class QFlags<enum QTextDocument::FindFlag>);

    // RVA: 0xC12 | Ordinal: 3091
        void focusInEvent(class QFocusEvent *);

    // RVA: 0xC23 | Ordinal: 3108
        void focusNextPrevChild(bool);

    // RVA: 0xC39 | Ordinal: 3130
        void focusOutEvent(class QFocusEvent *);

    // RVA: 0xC54 | Ordinal: 3157
        void fontFamily(void) const;

    // RVA: 0xC57 | Ordinal: 3160
        void fontItalic(void) const;

    // RVA: 0xC5A | Ordinal: 3163
        void fontPointSize(void) const;

    // RVA: 0xC5C | Ordinal: 3165
        void fontUnderline(void) const;

    // RVA: 0xC5D | Ordinal: 3166
        void fontWeight(void) const;

    // RVA: 0xE15 | Ordinal: 3606
        void inputMethodEvent(class QInputMethodEvent *);

    // RVA: 0xE26 | Ordinal: 3623
        void inputMethodQuery(enum Qt::InputMethodQuery, class QVariant) const;

    // RVA: 0xE27 | Ordinal: 3624
        void inputMethodQuery(enum Qt::InputMethodQuery) const;

    // RVA: 0xE37 | Ordinal: 3640
        void insertFromMimeData(class QMimeData const *);

    // RVA: 0xE39 | Ordinal: 3642
        void insertHtml(class QString const &);

    // RVA: 0xE4A | Ordinal: 3659
        void insertPlainText(class QString const &);

    // RVA: 0xF35 | Ordinal: 3894
        void isReadOnly(void) const;

    // RVA: 0xF62 | Ordinal: 3939
        void isUndoRedoEnabled(void) const;

    // RVA: 0x100D | Ordinal: 4110
        void keyPressEvent(class QKeyEvent *);

    // RVA: 0x101B | Ordinal: 4124
        void keyReleaseEvent(class QKeyEvent *);

    // RVA: 0x105F | Ordinal: 4192
        void lineWrapColumnOrWidth(void) const;

    // RVA: 0x1061 | Ordinal: 4194
        void lineWrapMode(void) const;

    // RVA: 0x106C | Ordinal: 4205
        void loadResource(int, class QUrl const &);

    // RVA: 0x1105 | Ordinal: 4358
        void mergeCurrentCharFormat(class QTextCharFormat const &);

    // RVA: 0x118B | Ordinal: 4492
        void metaObject(void) const;

    // RVA: 0x120B | Ordinal: 4620
        void mouseDoubleClickEvent(class QMouseEvent *);

    // RVA: 0x122B | Ordinal: 4652
        void mouseMoveEvent(class QMouseEvent *);

    // RVA: 0x124D | Ordinal: 4686
        void mousePressEvent(class QMouseEvent *);

    // RVA: 0x126C | Ordinal: 4717
        void mouseReleaseEvent(class QMouseEvent *);

    // RVA: 0x127C | Ordinal: 4733
        void moveCursor(enum QTextCursor::MoveOperation, enum QTextCursor::MoveMode);

    // RVA: 0x1304 | Ordinal: 4869
        void overwriteMode(void) const;

    // RVA: 0x1346 | Ordinal: 4935
        void paintEvent(class QPaintEvent *);

    // RVA: 0x1374 | Ordinal: 4981
        void paste(void);

    // RVA: 0x1392 | Ordinal: 5011
        void placeholderText(void) const;

    // RVA: 0x13D2 | Ordinal: 5075
        void print(class QPagedPaintDevice *) const;

    // RVA: 0x14A4 | Ordinal: 5285
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1537 | Ordinal: 5432
        void qt_metacast(char const *);

    // RVA: 0x15CD | Ordinal: 5582
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x15FF | Ordinal: 5632
        void redo(void);

    // RVA: 0x1606 | Ordinal: 5639
        void redoAvailable(bool);

    // RVA: 0x16B2 | Ordinal: 5811
        void resizeEvent(class QResizeEvent *);

    // RVA: 0x175E | Ordinal: 5983
        void scrollContentsBy(int, int);

    // RVA: 0x176B | Ordinal: 5996
        void scrollToAnchor(class QString const &);

    // RVA: 0x1797 | Ordinal: 6040
        void selectAll(void);

    // RVA: 0x17C8 | Ordinal: 6089
        void selectionChanged(void);

    // RVA: 0x17E9 | Ordinal: 6122
        void setAcceptRichText(bool);

    // RVA: 0x180E | Ordinal: 6159
        void setAlignment(class QFlags<enum Qt::AlignmentFlag>);

    // RVA: 0x1821 | Ordinal: 6178
        void setAutoFormatting(class QFlags<enum QTextEdit::AutoFormattingFlag>);

    // RVA: 0x18B5 | Ordinal: 6326
        void setCurrentCharFormat(class QTextCharFormat const &);

    // RVA: 0x18BA | Ordinal: 6331
        void setCurrentFont(class QFont const &);

    // RVA: 0x18E1 | Ordinal: 6370
        void setCursorWidth(int);

    // RVA: 0x191E | Ordinal: 6431
        void setDocument(class QTextDocument *);

    // RVA: 0x1925 | Ordinal: 6438
        void setDocumentTitle(class QString const &);

    // RVA: 0x1966 | Ordinal: 6503
        void setExtraSelections(class QList<struct QTextEdit::ExtraSelection> const &);

    // RVA: 0x19A5 | Ordinal: 6566
        void setFontFamily(class QString const &);

    // RVA: 0x19A7 | Ordinal: 6568
        void setFontItalic(bool);

    // RVA: 0x19A8 | Ordinal: 6569
        void setFontPointSize(double);

    // RVA: 0x19A9 | Ordinal: 6570
        void setFontUnderline(bool);

    // RVA: 0x19AA | Ordinal: 6571
        void setFontWeight(int);

    // RVA: 0x1A00 | Ordinal: 6657
        void setHtml(class QString const &);

    // RVA: 0x1A78 | Ordinal: 6777
        void setLineWrapColumnOrWidth(int);

    // RVA: 0x1A7A | Ordinal: 6779
        void setLineWrapMode(enum QTextEdit::LineWrapMode);

    // RVA: 0x1A80 | Ordinal: 6785
        void setMarkdown(class QString const &);

    // RVA: 0x1B31 | Ordinal: 6962
        void setOverwriteMode(bool);

    // RVA: 0x1B53 | Ordinal: 6996
        void setPlaceholderText(class QString const &);

    // RVA: 0x1B56 | Ordinal: 6999
        void setPlainText(class QString const &);

    // RVA: 0x1B82 | Ordinal: 7043
        void setReadOnly(bool);

    // RVA: 0x1C74 | Ordinal: 7285
        void setTabChangesFocus(bool);

    // RVA: 0x1C84 | Ordinal: 7301
        void setTabStopDistance(double);

    // RVA: 0x1C86 | Ordinal: 7303
        void setTabStopWidth(int);

    // RVA: 0x1C9E | Ordinal: 7327
        void setText(class QString const &);

    // RVA: 0x1CA5 | Ordinal: 7334
        void setTextBackgroundColor(class QColor const &);

    // RVA: 0x1CA8 | Ordinal: 7337
        void setTextColor(class QColor const &);

    // RVA: 0x1CAC | Ordinal: 7341
        void setTextCursor(class QTextCursor const &);

    // RVA: 0x1CB7 | Ordinal: 7352
        void setTextInteractionFlags(class QFlags<enum Qt::TextInteractionFlag>);

    // RVA: 0x1CEB | Ordinal: 7404
        void setUndoRedoEnabled(bool);

    // RVA: 0x1D61 | Ordinal: 7522
        void setWordWrapMode(enum QTextOption::WrapMode);

    // RVA: 0x1DA7 | Ordinal: 7592
        void showEvent(class QShowEvent *);

    // RVA: 0x1F86 | Ordinal: 8071
        void tabChangesFocus(void) const;

    // RVA: 0x1F9D | Ordinal: 8094
        void tabStopDistance(void) const;

    // RVA: 0x1F9F | Ordinal: 8096
        void tabStopWidth(void) const;

    // RVA: 0x1FE5 | Ordinal: 8166
        void textBackgroundColor(void) const;

    // RVA: 0x1FEB | Ordinal: 8172
        void textChanged(void);

    // RVA: 0x1FF0 | Ordinal: 8177
        void textColor(void) const;

    // RVA: 0x1FF4 | Ordinal: 8181
        void textCursor(void) const;

    // RVA: 0x2005 | Ordinal: 8198
        void textInteractionFlags(void) const;

    // RVA: 0x202A | Ordinal: 8235
        void timerEvent(class QTimerEvent *);

    // RVA: 0x203B | Ordinal: 8252
        void toHtml(void) const;

    // RVA: 0x203F | Ordinal: 8256
        void toMarkdown(class QFlags<enum QTextDocument::MarkdownFeature>) const;

    // RVA: 0x2044 | Ordinal: 8261
        void toPlainText(void) const;

    // RVA: 0x20F3 | Ordinal: 8436
        void tr(char const *, char const *, int);

    // RVA: 0x2186 | Ordinal: 8583
        void trUtf8(char const *, char const *, int);

    // RVA: 0x21CF | Ordinal: 8656
        void undo(void);

    // RVA: 0x21D6 | Ordinal: 8663
        void undoAvailable(bool);

    // RVA: 0x22ED | Ordinal: 8942
        void wheelEvent(class QWheelEvent *);

    // RVA: 0x233A | Ordinal: 9019
        void wordWrapMode(void) const;

    // RVA: 0x2358 | Ordinal: 9049
        void zoomIn(int);

    // RVA: 0x235A | Ordinal: 9051
        void zoomInF(float);

    // RVA: 0x235C | Ordinal: 9053
        void zoomOut(int);

    // RVA: 0x27E | Ordinal: 639
        void _QTextEdit(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QTEXTEDIT_HPP
