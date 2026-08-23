#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QUndoGroup
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QUndoGroup
{
public:

    // RVA: 0x198 | Ordinal: 409
        void QUndoGroup(class QObject *);

    // RVA: 0x525 | Ordinal: 1318
        void activeStack(void) const;

    // RVA: 0x526 | Ordinal: 1319
        void activeStackChanged(class QUndoStack *);

    // RVA: 0x58D | Ordinal: 1422
        void addStack(class QUndoStack *);

    // RVA: 0x68B | Ordinal: 1676
        void canRedo(void) const;

    // RVA: 0x68D | Ordinal: 1678
        void canRedoChanged(bool);

    // RVA: 0x690 | Ordinal: 1681
        void canUndo(void) const;

    // RVA: 0x692 | Ordinal: 1683
        void canUndoChanged(bool);

    // RVA: 0x700 | Ordinal: 1793
        void cleanChanged(bool);

    // RVA: 0x814 | Ordinal: 2069
        void createRedoAction(class QObject *, class QString const &) const;

    // RVA: 0x821 | Ordinal: 2082
        void createUndoAction(class QObject *, class QString const &) const;

    // RVA: 0x9C9 | Ordinal: 2506
        void d_func(void);

    // RVA: 0x9CA | Ordinal: 2507
        void d_func(void) const;

    // RVA: 0xDB9 | Ordinal: 3514
        void indexChanged(int);

    // RVA: 0xEBA | Ordinal: 3771
        void isClean(void) const;

    // RVA: 0x1192 | Ordinal: 4499
        void metaObject(void) const;

    // RVA: 0x14AB | Ordinal: 5292
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x153E | Ordinal: 5439
        void qt_metacast(char const *);

    // RVA: 0x15D4 | Ordinal: 5589
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1601 | Ordinal: 5634
        void redo(void);

    // RVA: 0x160A | Ordinal: 5643
        void redoText(void) const;

    // RVA: 0x160C | Ordinal: 5645
        void redoTextChanged(class QString const &);

    // RVA: 0x1648 | Ordinal: 5705
        void removeStack(class QUndoStack *);

    // RVA: 0x17FE | Ordinal: 6143
        void setActiveStack(class QUndoStack *);

    // RVA: 0x1E66 | Ordinal: 7783
        void stacks(void) const;

    // RVA: 0x20FA | Ordinal: 8443
        void tr(char const *, char const *, int);

    // RVA: 0x218D | Ordinal: 8590
        void trUtf8(char const *, char const *, int);

    // RVA: 0x21D1 | Ordinal: 8658
        void undo(void);

    // RVA: 0x21D9 | Ordinal: 8666
        void undoText(void) const;

    // RVA: 0x21DB | Ordinal: 8668
        void undoTextChanged(class QString const &);

    // RVA: 0x289 | Ordinal: 650
        void _QUndoGroup(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QUNDOGROUP_HPP
