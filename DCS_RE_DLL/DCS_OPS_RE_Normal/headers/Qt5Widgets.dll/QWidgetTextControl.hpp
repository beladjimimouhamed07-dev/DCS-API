#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QWidgetTextControl
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QWidgetTextControl
{
public:

    // RVA: 0x1A7 | Ordinal: 424
        void QWidgetTextControl(class QString const &, class QObject *);

    // RVA: 0x1A8 | Ordinal: 425
        void QWidgetTextControl(class QObject *);

    // RVA: 0x1A9 | Ordinal: 426
        void QWidgetTextControl(class QTextDocument *, class QObject *);

    // RVA: 0x4E9 | Ordinal: 1258
        void acceptRichText(void) const;

    // RVA: 0x5B0 | Ordinal: 1457
        void adjustSize(void);

    // RVA: 0x5D4 | Ordinal: 1493
        void anchorAt(class QPointF const &) const;

    // RVA: 0x5D5 | Ordinal: 1494
        void anchorAtCursor(void) const;

    // RVA: 0x5D7 | Ordinal: 1496
        void anchorPosition(class QString const &) const;

    // RVA: 0x5E3 | Ordinal: 1508
        void append(class QString const &);

    // RVA: 0x5E6 | Ordinal: 1511
        void appendHtml(class QString const &);

    // RVA: 0x5E8 | Ordinal: 1513
        void appendPlainText(class QString const &);

    // RVA: 0x630 | Ordinal: 1585
        void blockBoundingRect(class QTextBlock const &) const;

    // RVA: 0x633 | Ordinal: 1588
        void blockCountChanged(int);

    // RVA: 0x634 | Ordinal: 1589
        void blockMarkerHovered(class QTextBlock const &);

    // RVA: 0x636 | Ordinal: 1591
        void blockWithMarkerAt(class QPointF const &) const;

    // RVA: 0x687 | Ordinal: 1672
        void canInsertFromMimeData(class QMimeData const *) const;

    // RVA: 0x68A | Ordinal: 1675
        void canPaste(void) const;

    // RVA: 0x71F | Ordinal: 1824
        void clear(void);

    // RVA: 0x7E3 | Ordinal: 2020
        void copy(void);

    // RVA: 0x7E6 | Ordinal: 2023
        void copyAvailable(bool);

    // RVA: 0x810 | Ordinal: 2065
        void createMimeDataFromSelection(void) const;

    // RVA: 0x81C | Ordinal: 2077
        void createStandardContextMenu(class QPointF const &, class QWidget *);

    // RVA: 0x83D | Ordinal: 2110
        void currentCharFormat(void) const;

    // RVA: 0x83F | Ordinal: 2112
        void currentCharFormatChanged(class QTextCharFormat const &);

    // RVA: 0x87C | Ordinal: 2173
        void cursorForPosition(class QPointF const &) const;

    // RVA: 0x87F | Ordinal: 2176
        void cursorIsFocusIndicator(void) const;

    // RVA: 0x889 | Ordinal: 2186
        void cursorPositionChanged(void);

    // RVA: 0x890 | Ordinal: 2193
        void cursorRect(class QTextCursor const &) const;

    // RVA: 0x891 | Ordinal: 2194
        void cursorRect(void) const;

    // RVA: 0x898 | Ordinal: 2201
        void cursorWidth(void) const;

    // RVA: 0x8A4 | Ordinal: 2213
        void cut(void);

    // RVA: 0x9D3 | Ordinal: 2516
        void d_func(void);

    // RVA: 0x9D4 | Ordinal: 2517
        void d_func(void) const;

    // RVA: 0xA42 | Ordinal: 2627
        void document(void) const;

    // RVA: 0xA49 | Ordinal: 2634
        void documentSizeChanged(class QSizeF const &);

    // RVA: 0xAA7 | Ordinal: 2728
        void drawContents(class QPainter *, class QRectF const &, class QWidget *);

    // RVA: 0xB18 | Ordinal: 2841
        void ensureCursorVisible(void);

    // RVA: 0xB72 | Ordinal: 2931
        void event(class QEvent *);

    // RVA: 0xBB5 | Ordinal: 2998
        void extraSelections(void) const;

    // RVA: 0xBD9 | Ordinal: 3034
        void find(class QRegExp const &, class QFlags<enum QTextDocument::FindFlag>);

    // RVA: 0xBDA | Ordinal: 3035
        void find(class QRegularExpression const &, class QFlags<enum QTextDocument::FindFlag>);

    // RVA: 0xBDB | Ordinal: 3036
        void find(class QString const &, class QFlags<enum QTextDocument::FindFlag>);

    // RVA: 0xBE3 | Ordinal: 3044
        void findNextPrevAnchor(class QTextCursor const &, bool, class QTextCursor &);

    // RVA: 0xCAC | Ordinal: 3245
        void getPaintContext(class QWidget *) const;

    // RVA: 0xD4E | Ordinal: 3407
        void hitTest(class QPointF const &, enum Qt::HitTestAccuracy) const;

    // RVA: 0xDA5 | Ordinal: 3494
        void ignoreUnusedNavigationEvents(void) const;

    // RVA: 0xE29 | Ordinal: 3626
        void inputMethodQuery(enum Qt::InputMethodQuery, class QVariant) const;

    // RVA: 0xE38 | Ordinal: 3641
        void insertFromMimeData(class QMimeData const *);

    // RVA: 0xE3A | Ordinal: 3643
        void insertHtml(class QString const &);

    // RVA: 0xE4B | Ordinal: 3660
        void insertPlainText(class QString const &);

    // RVA: 0xECF | Ordinal: 3792
        void isDragEnabled(void) const;

    // RVA: 0xF2D | Ordinal: 3886
        void isPreediting(void);

    // RVA: 0xF78 | Ordinal: 3961
        void isWordSelectionEnabled(void) const;

    // RVA: 0x1064 | Ordinal: 4197
        void linkActivated(class QString const &);

    // RVA: 0x1067 | Ordinal: 4200
        void linkHovered(class QString const &);

    // RVA: 0x106D | Ordinal: 4206
        void loadResource(int, class QUrl const &);

    // RVA: 0x1106 | Ordinal: 4359
        void mergeCurrentCharFormat(class QTextCharFormat const &);

    // RVA: 0x119A | Ordinal: 4507
        void metaObject(void) const;

    // RVA: 0x11A1 | Ordinal: 4514
        void microFocusChanged(void);

    // RVA: 0x11F7 | Ordinal: 4600
        void modificationChanged(bool);

    // RVA: 0x127F | Ordinal: 4736
        void moveCursor(enum QTextCursor::MoveOperation, enum QTextCursor::MoveMode);

    // RVA: 0x12DF | Ordinal: 4832
        void openExternalLinks(void) const;

    // RVA: 0x1305 | Ordinal: 4870
        void overwriteMode(void) const;

    // RVA: 0x1359 | Ordinal: 4954
        void palette(void) const;

    // RVA: 0x1376 | Ordinal: 4983
        void paste(enum QClipboard::Mode);

    // RVA: 0x13D3 | Ordinal: 5076
        void print(class QPagedPaintDevice *) const;

    // RVA: 0x13D6 | Ordinal: 5079
        void processEvent(class QEvent *, class QPointF const &, class QWidget *);

    // RVA: 0x13D7 | Ordinal: 5080
        void processEvent(class QEvent *, class QTransform const &, class QWidget *);

    // RVA: 0x14B3 | Ordinal: 5300
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1546 | Ordinal: 5447
        void qt_metacast(char const *);

    // RVA: 0x15DC | Ordinal: 5597
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1604 | Ordinal: 5637
        void redo(void);

    // RVA: 0x1607 | Ordinal: 5640
        void redoAvailable(bool);

    // RVA: 0x179A | Ordinal: 6043
        void selectAll(void);

    // RVA: 0x17CB | Ordinal: 6092
        void selectionChanged(void);

    // RVA: 0x17D3 | Ordinal: 6100
        void selectionRect(class QTextCursor const &) const;

    // RVA: 0x17D4 | Ordinal: 6101
        void selectionRect(void) const;

    // RVA: 0x17EA | Ordinal: 6123
        void setAcceptRichText(bool);

    // RVA: 0x18B6 | Ordinal: 6327
        void setCurrentCharFormat(class QTextCharFormat const &);

    // RVA: 0x18DA | Ordinal: 6363
        void setCursorIsFocusIndicator(bool);

    // RVA: 0x18E3 | Ordinal: 6372
        void setCursorWidth(int);

    // RVA: 0x191F | Ordinal: 6432
        void setDocument(class QTextDocument *);

    // RVA: 0x1932 | Ordinal: 6451
        void setDragEnabled(bool);

    // RVA: 0x1967 | Ordinal: 6504
        void setExtraSelections(class QList<struct QTextEdit::ExtraSelection> const &);

    // RVA: 0x198D | Ordinal: 6542
        void setFocus(bool, enum Qt::FocusReason);

    // RVA: 0x1995 | Ordinal: 6550
        void setFocusToAnchor(class QTextCursor const &);

    // RVA: 0x1996 | Ordinal: 6551
        void setFocusToNextOrPreviousAnchor(bool);

    // RVA: 0x1A01 | Ordinal: 6658
        void setHtml(class QString const &);

    // RVA: 0x1A18 | Ordinal: 6681
        void setIgnoreUnusedNavigationEvents(bool);

    // RVA: 0x1A81 | Ordinal: 6786
        void setMarkdown(class QString const &);

    // RVA: 0x1B0F | Ordinal: 6928
        void setOpenExternalLinks(bool);

    // RVA: 0x1B32 | Ordinal: 6963
        void setOverwriteMode(bool);

    // RVA: 0x1B3C | Ordinal: 6973
        void setPalette(class QPalette const &);

    // RVA: 0x1B57 | Ordinal: 7000
        void setPlainText(class QString const &);

    // RVA: 0x1CAD | Ordinal: 7342
        void setTextCursor(class QTextCursor const &);

    // RVA: 0x1CB8 | Ordinal: 7353
        void setTextInteractionFlags(class QFlags<enum Qt::TextInteractionFlag>);

    // RVA: 0x1CBF | Ordinal: 7360
        void setTextWidth(double);

    // RVA: 0x1D5B | Ordinal: 7516
        void setWordSelectionEnabled(bool);

    // RVA: 0x1DD9 | Ordinal: 7642
        void size(void) const;

    // RVA: 0x1FED | Ordinal: 8174
        void textChanged(void);

    // RVA: 0x1FF5 | Ordinal: 8182
        void textCursor(void) const;

    // RVA: 0x2006 | Ordinal: 8199
        void textInteractionFlags(void) const;

    // RVA: 0x200F | Ordinal: 8208
        void textWidth(void) const;

    // RVA: 0x202E | Ordinal: 8239
        void timerEvent(class QTimerEvent *);

    // RVA: 0x203C | Ordinal: 8253
        void toHtml(void) const;

    // RVA: 0x2040 | Ordinal: 8257
        void toMarkdown(class QFlags<enum QTextDocument::MarkdownFeature>) const;

    // RVA: 0x2045 | Ordinal: 8262
        void toPlainText(void) const;

    // RVA: 0x2102 | Ordinal: 8451
        void tr(char const *, char const *, int);

    // RVA: 0x2195 | Ordinal: 8598
        void trUtf8(char const *, char const *, int);

    // RVA: 0x21D4 | Ordinal: 8661
        void undo(void);

    // RVA: 0x21D7 | Ordinal: 8664
        void undoAvailable(bool);

    // RVA: 0x2248 | Ordinal: 8777
        void updateRequest(class QRectF const &);

    // RVA: 0x22B6 | Ordinal: 8887
        void visibilityRequest(class QRectF const &);

    // RVA: 0x294 | Ordinal: 661
        void _QWidgetTextControl(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QWIDGETTEXTCONTROL_HPP
