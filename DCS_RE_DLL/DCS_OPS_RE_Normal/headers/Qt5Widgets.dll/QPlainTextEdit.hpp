#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QPlainTextEdit
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPlainTextEdit
{
public:

    // RVA: 0xE7 | Ordinal: 232
        void QPlainTextEdit(class QPlainTextEditPrivate &, class QWidget *);

    // RVA: 0xE8 | Ordinal: 233
        void QPlainTextEdit(class QString const &, class QWidget *);

    // RVA: 0xE9 | Ordinal: 234
        void QPlainTextEdit(class QWidget *);

    // RVA: 0x5D2 | Ordinal: 1491
        void anchorAt(class QPoint const &) const;

    // RVA: 0x5E5 | Ordinal: 1510
        void appendHtml(class QString const &);

    // RVA: 0x5E7 | Ordinal: 1512
        void appendPlainText(class QString const &);

    // RVA: 0x61A | Ordinal: 1563
        void backgroundVisible(void) const;

    // RVA: 0x62D | Ordinal: 1582
        void blockBoundingGeometry(class QTextBlock const &) const;

    // RVA: 0x62F | Ordinal: 1584
        void blockBoundingRect(class QTextBlock const &) const;

    // RVA: 0x631 | Ordinal: 1586
        void blockCount(void) const;

    // RVA: 0x632 | Ordinal: 1587
        void blockCountChanged(int);

    // RVA: 0x685 | Ordinal: 1670
        void canInsertFromMimeData(class QMimeData const *) const;

    // RVA: 0x688 | Ordinal: 1673
        void canPaste(void) const;

    // RVA: 0x6A6 | Ordinal: 1703
        void centerCursor(void);

    // RVA: 0x6AA | Ordinal: 1707
        void centerOnScroll(void) const;

    // RVA: 0x6C3 | Ordinal: 1732
        void changeEvent(class QEvent *);

    // RVA: 0x717 | Ordinal: 1816
        void clear(void);

    // RVA: 0x7BC | Ordinal: 1981
        void contentOffset(void) const;

    // RVA: 0x7D4 | Ordinal: 2005
        void contextMenuEvent(class QContextMenuEvent *);

    // RVA: 0x7E0 | Ordinal: 2017
        void copy(void);

    // RVA: 0x7E4 | Ordinal: 2021
        void copyAvailable(bool);

    // RVA: 0x80E | Ordinal: 2063
        void createMimeDataFromSelection(void) const;

    // RVA: 0x818 | Ordinal: 2073
        void createStandardContextMenu(class QPoint const &);

    // RVA: 0x819 | Ordinal: 2074
        void createStandardContextMenu(void);

    // RVA: 0x83B | Ordinal: 2108
        void currentCharFormat(void) const;

    // RVA: 0x87A | Ordinal: 2171
        void cursorForPosition(class QPoint const &) const;

    // RVA: 0x886 | Ordinal: 2183
        void cursorPositionChanged(void);

    // RVA: 0x88B | Ordinal: 2188
        void cursorRect(class QTextCursor const &) const;

    // RVA: 0x88C | Ordinal: 2189
        void cursorRect(void) const;

    // RVA: 0x895 | Ordinal: 2198
        void cursorWidth(void) const;

    // RVA: 0x8A2 | Ordinal: 2211
        void cut(void);

    // RVA: 0x97D | Ordinal: 2430
        void d_func(void);

    // RVA: 0x97E | Ordinal: 2431
        void d_func(void) const;

    // RVA: 0xA3A | Ordinal: 2619
        void doSetTextCursor(class QTextCursor const &);

    // RVA: 0xA40 | Ordinal: 2625
        void document(void) const;

    // RVA: 0xA4A | Ordinal: 2635
        void documentTitle(void) const;

    // RVA: 0xA6D | Ordinal: 2670
        void dragEnterEvent(class QDragEnterEvent *);

    // RVA: 0xA79 | Ordinal: 2682
        void dragLeaveEvent(class QDragLeaveEvent *);

    // RVA: 0xA86 | Ordinal: 2695
        void dragMoveEvent(class QDragMoveEvent *);

    // RVA: 0xADA | Ordinal: 2779
        void dropEvent(class QDropEvent *);

    // RVA: 0xB16 | Ordinal: 2839
        void ensureCursorVisible(void);

    // RVA: 0xB55 | Ordinal: 2902
        void event(class QEvent *);

    // RVA: 0xBB3 | Ordinal: 2996
        void extraSelections(void) const;

    // RVA: 0xBD2 | Ordinal: 3027
        void find(class QRegExp const &, class QFlags<enum QTextDocument::FindFlag>);

    // RVA: 0xBD3 | Ordinal: 3028
        void find(class QRegularExpression const &, class QFlags<enum QTextDocument::FindFlag>);

    // RVA: 0xBD4 | Ordinal: 3029
        void find(class QString const &, class QFlags<enum QTextDocument::FindFlag>);

    // RVA: 0xBE9 | Ordinal: 3050
        void firstVisibleBlock(void) const;

    // RVA: 0xC10 | Ordinal: 3089
        void focusInEvent(class QFocusEvent *);

    // RVA: 0xC20 | Ordinal: 3105
        void focusNextPrevChild(bool);

    // RVA: 0xC36 | Ordinal: 3127
        void focusOutEvent(class QFocusEvent *);

    // RVA: 0xCAB | Ordinal: 3244
        void getPaintContext(void) const;

    // RVA: 0xE14 | Ordinal: 3605
        void inputMethodEvent(class QInputMethodEvent *);

    // RVA: 0xE24 | Ordinal: 3621
        void inputMethodQuery(enum Qt::InputMethodQuery, class QVariant) const;

    // RVA: 0xE25 | Ordinal: 3622
        void inputMethodQuery(enum Qt::InputMethodQuery) const;

    // RVA: 0xE36 | Ordinal: 3639
        void insertFromMimeData(class QMimeData const *);

    // RVA: 0xE49 | Ordinal: 3658
        void insertPlainText(class QString const &);

    // RVA: 0xF34 | Ordinal: 3893
        void isReadOnly(void) const;

    // RVA: 0xF61 | Ordinal: 3938
        void isUndoRedoEnabled(void) const;

    // RVA: 0x1008 | Ordinal: 4105
        void keyPressEvent(class QKeyEvent *);

    // RVA: 0x101A | Ordinal: 4123
        void keyReleaseEvent(class QKeyEvent *);

    // RVA: 0x1060 | Ordinal: 4193
        void lineWrapMode(void) const;

    // RVA: 0x106A | Ordinal: 4203
        void loadResource(int, class QUrl const &);

    // RVA: 0x10E4 | Ordinal: 4325
        void maximumBlockCount(void) const;

    // RVA: 0x1104 | Ordinal: 4357
        void mergeCurrentCharFormat(class QTextCharFormat const &);

    // RVA: 0x1168 | Ordinal: 4457
        void metaObject(void) const;

    // RVA: 0x11F6 | Ordinal: 4599
        void modificationChanged(bool);

    // RVA: 0x120A | Ordinal: 4619
        void mouseDoubleClickEvent(class QMouseEvent *);

    // RVA: 0x1223 | Ordinal: 4644
        void mouseMoveEvent(class QMouseEvent *);

    // RVA: 0x1245 | Ordinal: 4678
        void mousePressEvent(class QMouseEvent *);

    // RVA: 0x1265 | Ordinal: 4710
        void mouseReleaseEvent(class QMouseEvent *);

    // RVA: 0x127A | Ordinal: 4731
        void moveCursor(enum QTextCursor::MoveOperation, enum QTextCursor::MoveMode);

    // RVA: 0x1303 | Ordinal: 4868
        void overwriteMode(void) const;

    // RVA: 0x1338 | Ordinal: 4921
        void paintEvent(class QPaintEvent *);

    // RVA: 0x1373 | Ordinal: 4980
        void paste(void);

    // RVA: 0x1391 | Ordinal: 5010
        void placeholderText(void) const;

    // RVA: 0x13D1 | Ordinal: 5074
        void print(class QPagedPaintDevice *) const;

    // RVA: 0x1481 | Ordinal: 5250
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1514 | Ordinal: 5397
        void qt_metacast(char const *);

    // RVA: 0x15AA | Ordinal: 5547
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x15FE | Ordinal: 5631
        void redo(void);

    // RVA: 0x1605 | Ordinal: 5638
        void redoAvailable(bool);

    // RVA: 0x16A9 | Ordinal: 5802
        void resizeEvent(class QResizeEvent *);

    // RVA: 0x175B | Ordinal: 5980
        void scrollContentsBy(int, int);

    // RVA: 0x1796 | Ordinal: 6039
        void selectAll(void);

    // RVA: 0x17C6 | Ordinal: 6087
        void selectionChanged(void);

    // RVA: 0x1839 | Ordinal: 6202
        void setBackgroundVisible(bool);

    // RVA: 0x1867 | Ordinal: 6248
        void setCenterOnScroll(bool);

    // RVA: 0x18B4 | Ordinal: 6325
        void setCurrentCharFormat(class QTextCharFormat const &);

    // RVA: 0x18E0 | Ordinal: 6369
        void setCursorWidth(int);

    // RVA: 0x191D | Ordinal: 6430
        void setDocument(class QTextDocument *);

    // RVA: 0x1924 | Ordinal: 6437
        void setDocumentTitle(class QString const &);

    // RVA: 0x1965 | Ordinal: 6502
        void setExtraSelections(class QList<struct QTextEdit::ExtraSelection> const &);

    // RVA: 0x1A79 | Ordinal: 6778
        void setLineWrapMode(enum QPlainTextEdit::LineWrapMode);

    // RVA: 0x1A91 | Ordinal: 6802
        void setMaximumBlockCount(int);

    // RVA: 0x1B30 | Ordinal: 6961
        void setOverwriteMode(bool);

    // RVA: 0x1B52 | Ordinal: 6995
        void setPlaceholderText(class QString const &);

    // RVA: 0x1B55 | Ordinal: 6998
        void setPlainText(class QString const &);

    // RVA: 0x1B81 | Ordinal: 7042
        void setReadOnly(bool);

    // RVA: 0x1C73 | Ordinal: 7284
        void setTabChangesFocus(bool);

    // RVA: 0x1C83 | Ordinal: 7300
        void setTabStopDistance(double);

    // RVA: 0x1C85 | Ordinal: 7302
        void setTabStopWidth(int);

    // RVA: 0x1CAB | Ordinal: 7340
        void setTextCursor(class QTextCursor const &);

    // RVA: 0x1CB6 | Ordinal: 7351
        void setTextInteractionFlags(class QFlags<enum Qt::TextInteractionFlag>);

    // RVA: 0x1CEA | Ordinal: 7403
        void setUndoRedoEnabled(bool);

    // RVA: 0x1D60 | Ordinal: 7521
        void setWordWrapMode(enum QTextOption::WrapMode);

    // RVA: 0x1DA0 | Ordinal: 7585
        void showEvent(class QShowEvent *);

    // RVA: 0x1F85 | Ordinal: 8070
        void tabChangesFocus(void) const;

    // RVA: 0x1F9C | Ordinal: 8093
        void tabStopDistance(void) const;

    // RVA: 0x1F9E | Ordinal: 8095
        void tabStopWidth(void) const;

    // RVA: 0x1FE9 | Ordinal: 8170
        void textChanged(void);

    // RVA: 0x1FF3 | Ordinal: 8180
        void textCursor(void) const;

    // RVA: 0x2004 | Ordinal: 8197
        void textInteractionFlags(void) const;

    // RVA: 0x2027 | Ordinal: 8232
        void timerEvent(class QTimerEvent *);

    // RVA: 0x2043 | Ordinal: 8260
        void toPlainText(void) const;

    // RVA: 0x20D0 | Ordinal: 8401
        void tr(char const *, char const *, int);

    // RVA: 0x2163 | Ordinal: 8548
        void trUtf8(char const *, char const *, int);

    // RVA: 0x21CE | Ordinal: 8655
        void undo(void);

    // RVA: 0x21D5 | Ordinal: 8662
        void undoAvailable(bool);

    // RVA: 0x2247 | Ordinal: 8776
        void updateRequest(class QRect const &, int);

    // RVA: 0x22EA | Ordinal: 8939
        void wheelEvent(class QWheelEvent *);

    // RVA: 0x2339 | Ordinal: 9018
        void wordWrapMode(void) const;

    // RVA: 0x2357 | Ordinal: 9048
        void zoomIn(int);

    // RVA: 0x2359 | Ordinal: 9050
        void zoomInF(float);

    // RVA: 0x235B | Ordinal: 9052
        void zoomOut(int);

    // RVA: 0x23A | Ordinal: 571
        void _QPlainTextEdit(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QPLAINTEXTEDIT_HPP
