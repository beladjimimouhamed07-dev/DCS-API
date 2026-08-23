#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QWidgetLineControl
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QWidgetLineControl
{
public:

    // RVA: 0x1A4 | Ordinal: 421
        void QWidgetLineControl(class QString const &);

    // RVA: 0x4B0 | Ordinal: 1201
        void _q_deleteSelected(void);

    // RVA: 0x4ED | Ordinal: 1262
        void accepted(void);

    // RVA: 0x4F2 | Ordinal: 1267
        void accessibleObject(void);

    // RVA: 0x54D | Ordinal: 1358
        void addCommand(struct QWidgetLineControl::Command const &);

    // RVA: 0x5B6 | Ordinal: 1463
        void advanceToEnabledItem(int);

    // RVA: 0x5C7 | Ordinal: 1480
        void allSelected(void) const;

    // RVA: 0x5D8 | Ordinal: 1497
        void anchorRect(void) const;

    // RVA: 0x5ED | Ordinal: 1518
        void ascent(void) const;

    // RVA: 0x61D | Ordinal: 1566
        void backspace(void);

    // RVA: 0x696 | Ordinal: 1687
        void cancelPasswordEchoTimer(void);

    // RVA: 0x697 | Ordinal: 1688
        void cancelText(void) const;

    // RVA: 0x71E | Ordinal: 1823
        void clear(void);

    // RVA: 0x736 | Ordinal: 1847
        void clearString(int, int) const;

    // RVA: 0x738 | Ordinal: 1849
        void clearUndo(void);

    // RVA: 0x7A1 | Ordinal: 1954
        void commitPreedit(void);

    // RVA: 0x7A4 | Ordinal: 1957
        void complete(int);

    // RVA: 0x7A8 | Ordinal: 1961
        void completer(void) const;

    // RVA: 0x7AF | Ordinal: 1968
        void composeMode(void) const;

    // RVA: 0x7E2 | Ordinal: 2019
        void copy(enum QClipboard::Mode) const;

    // RVA: 0x876 | Ordinal: 2167
        void cursor(void) const;

    // RVA: 0x878 | Ordinal: 2169
        void cursorBlinkStatus(void) const;

    // RVA: 0x87E | Ordinal: 2175
        void cursorForward(bool, int);

    // RVA: 0x881 | Ordinal: 2178
        void cursorMoveStyle(void) const;

    // RVA: 0x883 | Ordinal: 2180
        void cursorPosition(void) const;

    // RVA: 0x888 | Ordinal: 2185
        void cursorPositionChanged(int, int);

    // RVA: 0x88F | Ordinal: 2192
        void cursorRect(void) const;

    // RVA: 0x892 | Ordinal: 2195
        void cursorToX(int) const;

    // RVA: 0x893 | Ordinal: 2196
        void cursorToX(void) const;

    // RVA: 0x897 | Ordinal: 2200
        void cursorWidth(void) const;

    // RVA: 0x89A | Ordinal: 2203
        void cursorWordBackward(bool);

    // RVA: 0x89C | Ordinal: 2205
        void cursorWordForward(bool);

    // RVA: 0xA00 | Ordinal: 2561
        void del(void);

    // RVA: 0xA0D | Ordinal: 2574
        void deselect(void);

    // RVA: 0xA2A | Ordinal: 2603
        void displayText(void) const;

    // RVA: 0xA2B | Ordinal: 2604
        void displayTextChanged(class QString const &);

    // RVA: 0xA95 | Ordinal: 2710
        void draw(class QPainter *, class QPoint const &, class QRect const &, int);

    // RVA: 0xAE9 | Ordinal: 2794
        void echoMode(void) const;

    // RVA: 0xAF4 | Ordinal: 2805
        void editingFinished(void);

    // RVA: 0xB05 | Ordinal: 2822
        void emitCursorPositionChanged(void);

    // RVA: 0xB0D | Ordinal: 2830
        void end(bool);

    // RVA: 0xB0E | Ordinal: 2831
        void end(void) const;

    // RVA: 0xBDE | Ordinal: 3039
        void findInMask(int, bool, bool, class QChar) const;

    // RVA: 0xBE6 | Ordinal: 3047
        void finishChange(int, bool, bool);

    // RVA: 0xBF4 | Ordinal: 3061
        void fixup(void);

    // RVA: 0xCDA | Ordinal: 3291
        void hasAcceptableInput(class QString const &) const;

    // RVA: 0xCDB | Ordinal: 3292
        void hasAcceptableInput(void) const;

    // RVA: 0xCF8 | Ordinal: 3321
        void hasSelectedText(void) const;

    // RVA: 0xD08 | Ordinal: 3337
        void height(void) const;

    // RVA: 0xD56 | Ordinal: 3415
        void home(bool);

    // RVA: 0xDA7 | Ordinal: 3496
        void inSelection(int) const;

    // RVA: 0xDD9 | Ordinal: 3546
        void init(class QString const &);

    // RVA: 0xE0B | Ordinal: 3596
        void inputMask(void) const;

    // RVA: 0xE2C | Ordinal: 3629
        void inputRejected(void);

    // RVA: 0xE2E | Ordinal: 3631
        void insert(class QString const &);

    // RVA: 0xE7C | Ordinal: 3709
        void internalDelete(bool);

    // RVA: 0xE7D | Ordinal: 3710
        void internalDeselect(void);

    // RVA: 0xE7E | Ordinal: 3711
        void internalInsert(class QString const &);

    // RVA: 0xE7F | Ordinal: 3712
        void internalRedo(void);

    // RVA: 0xE80 | Ordinal: 3713
        void internalSetText(class QString const &, int, bool);

    // RVA: 0xE81 | Ordinal: 3714
        void internalUndo(int);

    // RVA: 0xF0D | Ordinal: 3854
        void isModified(void) const;

    // RVA: 0xF36 | Ordinal: 3895
        void isReadOnly(void) const;

    // RVA: 0xF38 | Ordinal: 3897
        void isRedoAvailable(void) const;

    // RVA: 0xF60 | Ordinal: 3937
        void isUndoAvailable(void) const;

    // RVA: 0xF68 | Ordinal: 3945
        void isValidInput(class QChar, class QChar) const;

    // RVA: 0x1047 | Ordinal: 4168
        void layoutDirection(void) const;

    // RVA: 0x10D1 | Ordinal: 4306
        void maskString(int, class QString const &, bool) const;

    // RVA: 0x10D9 | Ordinal: 4314
        void maxLength(void) const;

    // RVA: 0x1198 | Ordinal: 4505
        void metaObject(void) const;

    // RVA: 0x127E | Ordinal: 4735
        void moveCursor(int, bool);

    // RVA: 0x129A | Ordinal: 4763
        void naturalTextWidth(void) const;

    // RVA: 0x12A9 | Ordinal: 4778
        void nextMaskBlank(int);

    // RVA: 0x1358 | Ordinal: 4953
        void palette(void) const;

    // RVA: 0x136E | Ordinal: 4975
        void parseInputMask(class QString const &);

    // RVA: 0x136F | Ordinal: 4976
        void passwordCharacter(void) const;

    // RVA: 0x1370 | Ordinal: 4977
        void passwordEchoEditing(void) const;

    // RVA: 0x1371 | Ordinal: 4978
        void passwordMaskDelay(void) const;

    // RVA: 0x1375 | Ordinal: 4982
        void paste(enum QClipboard::Mode);

    // RVA: 0x13BF | Ordinal: 5056
        void preeditAreaText(void) const;

    // RVA: 0x13C0 | Ordinal: 5057
        void preeditCursor(void) const;

    // RVA: 0x13CC | Ordinal: 5069
        void prevMaskBlank(int);

    // RVA: 0x13D8 | Ordinal: 5081
        void processInputMethodEvent(class QInputMethodEvent *);

    // RVA: 0x13D9 | Ordinal: 5082
        void processKeyEvent(class QKeyEvent *);

    // RVA: 0x13DB | Ordinal: 5084
        void processShortcutOverrideEvent(class QKeyEvent *);

    // RVA: 0x14B1 | Ordinal: 5298
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1544 | Ordinal: 5445
        void qt_metacast(char const *);

    // RVA: 0x15DA | Ordinal: 5595
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x15F9 | Ordinal: 5626
        void rectForPos(int) const;

    // RVA: 0x1603 | Ordinal: 5636
        void redo(void);

    // RVA: 0x160E | Ordinal: 5647
        void redoTextLayout(void) const;

    // RVA: 0x1646 | Ordinal: 5703
        void removeSelectedText(void);

    // RVA: 0x1647 | Ordinal: 5704
        void removeSelection(void);

    // RVA: 0x1675 | Ordinal: 5750
        void resetCursorBlinkTimer(void);

    // RVA: 0x167E | Ordinal: 5759
        void resetInputContext(void);

    // RVA: 0x1799 | Ordinal: 6042
        void selectAll(void);

    // RVA: 0x17A5 | Ordinal: 6054
        void selectWordAtPos(int);

    // RVA: 0x17BC | Ordinal: 6077
        void selectedText(void) const;

    // RVA: 0x17CA | Ordinal: 6091
        void selectionChanged(void);

    // RVA: 0x17CE | Ordinal: 6095
        void selectionEnd(void) const;

    // RVA: 0x17D7 | Ordinal: 6104
        void selectionStart(void) const;

    // RVA: 0x17E1 | Ordinal: 6114
        void separate(void);

    // RVA: 0x17F2 | Ordinal: 6131
        void setAccessibleObject(class QObject *);

    // RVA: 0x1841 | Ordinal: 6210
        void setBlinkingCursorEnabled(bool);

    // RVA: 0x1862 | Ordinal: 6243
        void setCancelText(class QString const &);

    // RVA: 0x1899 | Ordinal: 6298
        void setCompleter(class QCompleter const *);

    // RVA: 0x18DC | Ordinal: 6365
        void setCursorMoveStyle(enum Qt::CursorMoveStyle);

    // RVA: 0x18DE | Ordinal: 6367
        void setCursorPosition(int);

    // RVA: 0x18E2 | Ordinal: 6371
        void setCursorWidth(int);

    // RVA: 0x193A | Ordinal: 6459
        void setEchoMode(unsigned int);

    // RVA: 0x19A4 | Ordinal: 6565
        void setFont(class QFont const &);

    // RVA: 0x1A1F | Ordinal: 6688
        void setInputMask(class QString const &);

    // RVA: 0x1A6D | Ordinal: 6766
        void setLayoutDirection(enum Qt::LayoutDirection);

    // RVA: 0x1A89 | Ordinal: 6794
        void setMaxLength(int);

    // RVA: 0x1AD5 | Ordinal: 6870
        void setModified(bool);

    // RVA: 0x1B3B | Ordinal: 6972
        void setPalette(class QPalette const &);

    // RVA: 0x1B45 | Ordinal: 6982
        void setPasswordCharacter(class QChar);

    // RVA: 0x1B46 | Ordinal: 6983
        void setPasswordMaskDelay(int);

    // RVA: 0x1B69 | Ordinal: 7018
        void setPreeditArea(int, class QString const &);

    // RVA: 0x1B83 | Ordinal: 7044
        void setReadOnly(bool);

    // RVA: 0x1BE5 | Ordinal: 7142
        void setSelection(int, int);

    // RVA: 0x1CA1 | Ordinal: 7330
        void setText(class QString const &);

    // RVA: 0x1CF8 | Ordinal: 7417
        void setValidator(class QValidator const *);

    // RVA: 0x1E79 | Ordinal: 7802
        void start(void) const;

    // RVA: 0x1F40 | Ordinal: 8001
        void stripString(class QString const &) const;

    // RVA: 0x1F74 | Ordinal: 8053
        void surroundingText(void) const;

    // RVA: 0x1FDF | Ordinal: 8160
        void text(void) const;

    // RVA: 0x1FE1 | Ordinal: 8162
        void textAfterSelection(void) const;

    // RVA: 0x1FE6 | Ordinal: 8167
        void textBeforeSelection(void) const;

    // RVA: 0x1FEC | Ordinal: 8173
        void textChanged(class QString const &);

    // RVA: 0x1FF9 | Ordinal: 8186
        void textEdited(class QString const &);

    // RVA: 0x2007 | Ordinal: 8200
        void textLayout(void) const;

    // RVA: 0x202D | Ordinal: 8238
        void timerEvent(class QTimerEvent *);

    // RVA: 0x2100 | Ordinal: 8449
        void tr(char const *, char const *, int);

    // RVA: 0x2193 | Ordinal: 8596
        void trUtf8(char const *, char const *, int);

    // RVA: 0x21D3 | Ordinal: 8660
        void undo(void);

    // RVA: 0x221C | Ordinal: 8733
        void updateCursorBlinking(void);

    // RVA: 0x221D | Ordinal: 8734
        void updateDisplayText(bool);

    // RVA: 0x223E | Ordinal: 8767
        void updateMicroFocus(void);

    // RVA: 0x223F | Ordinal: 8768
        void updateNeeded(class QRect const &);

    // RVA: 0x2242 | Ordinal: 8771
        void updatePasswordEchoEditing(bool);

    // RVA: 0x226A | Ordinal: 8811
        void validator(void) const;

    // RVA: 0x2312 | Ordinal: 8979
        void width(void) const;

    // RVA: 0x2349 | Ordinal: 9034
        void xToPos(int, enum QTextLine::CursorPosition) const;

    // RVA: 0x291 | Ordinal: 658
        void _QWidgetLineControl(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QWIDGETLINECONTROL_HPP
