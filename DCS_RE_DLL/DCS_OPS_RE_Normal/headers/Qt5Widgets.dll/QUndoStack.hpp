#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QUndoStack
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QUndoStack
{
public:

    // RVA: 0x199 | Ordinal: 410
        void QUndoStack(class QObject *);

    // RVA: 0x62B | Ordinal: 1580
        void beginMacro(class QString const &);

    // RVA: 0x68C | Ordinal: 1677
        void canRedo(void) const;

    // RVA: 0x68E | Ordinal: 1679
        void canRedoChanged(bool);

    // RVA: 0x691 | Ordinal: 1682
        void canUndo(void) const;

    // RVA: 0x693 | Ordinal: 1684
        void canUndoChanged(bool);

    // RVA: 0x701 | Ordinal: 1794
        void cleanChanged(bool);

    // RVA: 0x703 | Ordinal: 1796
        void cleanIndex(void) const;

    // RVA: 0x71D | Ordinal: 1822
        void clear(void);

    // RVA: 0x79E | Ordinal: 1951
        void command(int) const;

    // RVA: 0x7FE | Ordinal: 2047
        void count(void) const;

    // RVA: 0x815 | Ordinal: 2070
        void createRedoAction(class QObject *, class QString const &) const;

    // RVA: 0x822 | Ordinal: 2083
        void createUndoAction(class QObject *, class QString const &) const;

    // RVA: 0x9CB | Ordinal: 2508
        void d_func(void);

    // RVA: 0x9CC | Ordinal: 2509
        void d_func(void) const;

    // RVA: 0xB12 | Ordinal: 2835
        void endMacro(void);

    // RVA: 0xDB0 | Ordinal: 3505
        void index(void) const;

    // RVA: 0xDBA | Ordinal: 3515
        void indexChanged(int);

    // RVA: 0xEA3 | Ordinal: 3748
        void isActive(void) const;

    // RVA: 0xEBB | Ordinal: 3772
        void isClean(void) const;

    // RVA: 0x1193 | Ordinal: 4500
        void metaObject(void) const;

    // RVA: 0x13E4 | Ordinal: 5093
        void push(class QUndoCommand *);

    // RVA: 0x14AC | Ordinal: 5293
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x153F | Ordinal: 5440
        void qt_metacast(char const *);

    // RVA: 0x15D5 | Ordinal: 5590
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1602 | Ordinal: 5635
        void redo(void);

    // RVA: 0x160B | Ordinal: 5644
        void redoText(void) const;

    // RVA: 0x160D | Ordinal: 5646
        void redoTextChanged(class QString const &);

    // RVA: 0x1674 | Ordinal: 5749
        void resetClean(void);

    // RVA: 0x17F8 | Ordinal: 6137
        void setActive(bool);

    // RVA: 0x1879 | Ordinal: 6266
        void setClean(void);

    // RVA: 0x1A1B | Ordinal: 6684
        void setIndex(int);

    // RVA: 0x1CE9 | Ordinal: 7402
        void setUndoLimit(int);

    // RVA: 0x1FDE | Ordinal: 8159
        void text(int) const;

    // RVA: 0x20FB | Ordinal: 8444
        void tr(char const *, char const *, int);

    // RVA: 0x218E | Ordinal: 8591
        void trUtf8(char const *, char const *, int);

    // RVA: 0x21D2 | Ordinal: 8659
        void undo(void);

    // RVA: 0x21D8 | Ordinal: 8665
        void undoLimit(void) const;

    // RVA: 0x21DA | Ordinal: 8667
        void undoText(void) const;

    // RVA: 0x21DC | Ordinal: 8669
        void undoTextChanged(class QString const &);

    // RVA: 0x28A | Ordinal: 651
        void _QUndoStack(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QUNDOSTACK_HPP
