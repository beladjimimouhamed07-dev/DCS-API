#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QUndoCommand
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QUndoCommand
{
public:

    // RVA: 0x196 | Ordinal: 407
        void QUndoCommand(class QString const &, class QUndoCommand *);

    // RVA: 0x197 | Ordinal: 408
        void QUndoCommand(class QUndoCommand *);

    // RVA: 0x504 | Ordinal: 1285
        void actionText(void) const;

    // RVA: 0x6E2 | Ordinal: 1763
        void child(int) const;

    // RVA: 0x6E9 | Ordinal: 1770
        void childCount(void) const;

    // RVA: 0xD9E | Ordinal: 3487
        void id(void) const;

    // RVA: 0xF24 | Ordinal: 3877
        void isObsolete(void) const;

    // RVA: 0x1107 | Ordinal: 4360
        void mergeWith(class QUndoCommand const *);

    // RVA: 0x1600 | Ordinal: 5633
        void redo(void);

    // RVA: 0x1AF7 | Ordinal: 6904
        void setObsolete(bool);

    // RVA: 0x1CA0 | Ordinal: 7329
        void setText(class QString const &);

    // RVA: 0x1FDD | Ordinal: 8158
        void text(void) const;

    // RVA: 0x21D0 | Ordinal: 8657
        void undo(void);

    // RVA: 0x288 | Ordinal: 649
        void _QUndoCommand(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QUNDOCOMMAND_HPP
