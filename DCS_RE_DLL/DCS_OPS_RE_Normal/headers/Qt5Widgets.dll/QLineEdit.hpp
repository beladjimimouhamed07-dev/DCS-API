#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QLineEdit
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QLineEdit
{
public:

    // RVA: 0xC5 | Ordinal: 198
        void QLineEdit(class QString const &, class QWidget *);

    // RVA: 0xC6 | Ordinal: 199
        void QLineEdit(class QWidget *);

    // RVA: 0x52F | Ordinal: 1328
        void addAction(class QIcon const &, enum QLineEdit::ActionPosition);

    // RVA: 0x530 | Ordinal: 1329
        void addAction(class QAction *, enum QLineEdit::ActionPosition);

    // RVA: 0x5C1 | Ordinal: 1474
        void alignment(void) const;

    // RVA: 0x61C | Ordinal: 1565
        void backspace(void);

    // RVA: 0x6BE | Ordinal: 1727
        void changeEvent(class QEvent *);

    // RVA: 0x713 | Ordinal: 1812
        void clear(void);

    // RVA: 0x7A7 | Ordinal: 1960
        void completer(void) const;

    // RVA: 0x7D1 | Ordinal: 2002
        void contextMenuEvent(class QContextMenuEvent *);

    // RVA: 0x7DF | Ordinal: 2016
        void copy(void) const;

    // RVA: 0x817 | Ordinal: 2072
        void createStandardContextMenu(void);

    // RVA: 0x877 | Ordinal: 2168
        void cursorBackward(bool, int);

    // RVA: 0x87D | Ordinal: 2174
        void cursorForward(bool, int);

    // RVA: 0x880 | Ordinal: 2177
        void cursorMoveStyle(void) const;

    // RVA: 0x882 | Ordinal: 2179
        void cursorPosition(void) const;

    // RVA: 0x884 | Ordinal: 2181
        void cursorPositionAt(class QPoint const &);

    // RVA: 0x885 | Ordinal: 2182
        void cursorPositionChanged(int, int);

    // RVA: 0x88A | Ordinal: 2187
        void cursorRect(void) const;

    // RVA: 0x899 | Ordinal: 2202
        void cursorWordBackward(bool);

    // RVA: 0x89B | Ordinal: 2204
        void cursorWordForward(bool);

    // RVA: 0x8A1 | Ordinal: 2210
        void cut(void);

    // RVA: 0x955 | Ordinal: 2390
        void d_func(void);

    // RVA: 0x956 | Ordinal: 2391
        void d_func(void) const;

    // RVA: 0x9FF | Ordinal: 2560
        void del(void);

    // RVA: 0xA0C | Ordinal: 2573
        void deselect(void);

    // RVA: 0xA28 | Ordinal: 2601
        void displayText(void) const;

    // RVA: 0xA64 | Ordinal: 2661
        void dragEnabled(void) const;

    // RVA: 0xA6C | Ordinal: 2669
        void dragEnterEvent(class QDragEnterEvent *);

    // RVA: 0xA77 | Ordinal: 2680
        void dragLeaveEvent(class QDragLeaveEvent *);

    // RVA: 0xA84 | Ordinal: 2693
        void dragMoveEvent(class QDragMoveEvent *);

    // RVA: 0xAD7 | Ordinal: 2776
        void dropEvent(class QDropEvent *);

    // RVA: 0xAE8 | Ordinal: 2793
        void echoMode(void) const;

    // RVA: 0xAF3 | Ordinal: 2804
        void editingFinished(void);

    // RVA: 0xB0C | Ordinal: 2829
        void end(bool);

    // RVA: 0xB4B | Ordinal: 2892
        void event(class QEvent *);

    // RVA: 0xC0D | Ordinal: 3086
        void focusInEvent(class QFocusEvent *);

    // RVA: 0xC33 | Ordinal: 3124
        void focusOutEvent(class QFocusEvent *);

    // RVA: 0xCB2 | Ordinal: 3251
        void getTextMargins(int *, int *, int *, int *) const;

    // RVA: 0xCD9 | Ordinal: 3290
        void hasAcceptableInput(void) const;

    // RVA: 0xCE7 | Ordinal: 3304
        void hasFrame(void) const;

    // RVA: 0xCF7 | Ordinal: 3320
        void hasSelectedText(void) const;

    // RVA: 0xD54 | Ordinal: 3413
        void home(bool);

    // RVA: 0xDED | Ordinal: 3566
        void initStyleOption(class QStyleOptionFrame *) const;

    // RVA: 0xE0A | Ordinal: 3595
        void inputMask(void) const;

    // RVA: 0xE13 | Ordinal: 3604
        void inputMethodEvent(class QInputMethodEvent *);

    // RVA: 0xE22 | Ordinal: 3619
        void inputMethodQuery(enum Qt::InputMethodQuery, class QVariant) const;

    // RVA: 0xE23 | Ordinal: 3620
        void inputMethodQuery(enum Qt::InputMethodQuery) const;

    // RVA: 0xE2B | Ordinal: 3628
        void inputRejected(void);

    // RVA: 0xE2D | Ordinal: 3630
        void insert(class QString const &);

    // RVA: 0xEBC | Ordinal: 3773
        void isClearButtonEnabled(void) const;

    // RVA: 0xF0C | Ordinal: 3853
        void isModified(void) const;

    // RVA: 0xF33 | Ordinal: 3892
        void isReadOnly(void) const;

    // RVA: 0xF37 | Ordinal: 3896
        void isRedoAvailable(void) const;

    // RVA: 0xF5F | Ordinal: 3936
        void isUndoAvailable(void) const;

    // RVA: 0x1003 | Ordinal: 4100
        void keyPressEvent(class QKeyEvent *);

    // RVA: 0x10D8 | Ordinal: 4313
        void maxLength(void) const;

    // RVA: 0x1153 | Ordinal: 4436
        void metaObject(void) const;

    // RVA: 0x11D6 | Ordinal: 4567
        void minimumSizeHint(void) const;

    // RVA: 0x1208 | Ordinal: 4617
        void mouseDoubleClickEvent(class QMouseEvent *);

    // RVA: 0x121E | Ordinal: 4639
        void mouseMoveEvent(class QMouseEvent *);

    // RVA: 0x1241 | Ordinal: 4674
        void mousePressEvent(class QMouseEvent *);

    // RVA: 0x1260 | Ordinal: 4705
        void mouseReleaseEvent(class QMouseEvent *);

    // RVA: 0x1331 | Ordinal: 4914
        void paintEvent(class QPaintEvent *);

    // RVA: 0x1372 | Ordinal: 4979
        void paste(void);

    // RVA: 0x1390 | Ordinal: 5009
        void placeholderText(void) const;

    // RVA: 0x146C | Ordinal: 5229
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14FF | Ordinal: 5376
        void qt_metacast(char const *);

    // RVA: 0x1595 | Ordinal: 5526
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x15FD | Ordinal: 5630
        void redo(void);

    // RVA: 0x16DA | Ordinal: 5851
        void returnPressed(void);

    // RVA: 0x1795 | Ordinal: 6038
        void selectAll(void);

    // RVA: 0x17BB | Ordinal: 6076
        void selectedText(void) const;

    // RVA: 0x17C4 | Ordinal: 6085
        void selectionChanged(void);

    // RVA: 0x17CD | Ordinal: 6094
        void selectionEnd(void) const;

    // RVA: 0x17CF | Ordinal: 6096
        void selectionLength(void) const;

    // RVA: 0x17D6 | Ordinal: 6103
        void selectionStart(void) const;

    // RVA: 0x180B | Ordinal: 6156
        void setAlignment(class QFlags<enum Qt::AlignmentFlag>);

    // RVA: 0x187B | Ordinal: 6268
        void setClearButtonEnabled(bool);

    // RVA: 0x1898 | Ordinal: 6297
        void setCompleter(class QCompleter *);

    // RVA: 0x18DB | Ordinal: 6364
        void setCursorMoveStyle(enum Qt::CursorMoveStyle);

    // RVA: 0x18DD | Ordinal: 6366
        void setCursorPosition(int);

    // RVA: 0x1931 | Ordinal: 6450
        void setDragEnabled(bool);

    // RVA: 0x1939 | Ordinal: 6458
        void setEchoMode(enum QLineEdit::EchoMode);

    // RVA: 0x19B7 | Ordinal: 6584
        void setFrame(bool);

    // RVA: 0x1A1E | Ordinal: 6687
        void setInputMask(class QString const &);

    // RVA: 0x1A88 | Ordinal: 6793
        void setMaxLength(int);

    // RVA: 0x1AD4 | Ordinal: 6869
        void setModified(bool);

    // RVA: 0x1B51 | Ordinal: 6994
        void setPlaceholderText(class QString const &);

    // RVA: 0x1B80 | Ordinal: 7041
        void setReadOnly(bool);

    // RVA: 0x1BE1 | Ordinal: 7138
        void setSelection(int, int);

    // RVA: 0x1C9A | Ordinal: 7323
        void setText(class QString const &);

    // RVA: 0x1CB9 | Ordinal: 7354
        void setTextMargins(class QMargins const &);

    // RVA: 0x1CBA | Ordinal: 7355
        void setTextMargins(int, int, int, int);

    // RVA: 0x1CF7 | Ordinal: 7416
        void setValidator(class QValidator const *);

    // RVA: 0x1DFE | Ordinal: 7679
        void sizeHint(void) const;

    // RVA: 0x1FD6 | Ordinal: 8151
        void text(void) const;

    // RVA: 0x1FE8 | Ordinal: 8169
        void textChanged(class QString const &);

    // RVA: 0x1FF8 | Ordinal: 8185
        void textEdited(class QString const &);

    // RVA: 0x2008 | Ordinal: 8201
        void textMargins(void) const;

    // RVA: 0x20BB | Ordinal: 8380
        void tr(char const *, char const *, int);

    // RVA: 0x214E | Ordinal: 8527
        void trUtf8(char const *, char const *, int);

    // RVA: 0x21CD | Ordinal: 8654
        void undo(void);

    // RVA: 0x2269 | Ordinal: 8810
        void validator(void) const;

    // RVA: 0x224 | Ordinal: 549
        void _QLineEdit(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QLINEEDIT_HPP
