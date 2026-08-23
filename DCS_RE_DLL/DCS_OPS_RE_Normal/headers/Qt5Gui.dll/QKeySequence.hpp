#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QKeySequence
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QKeySequence
{
public:

    // RVA: 0x163 | Ordinal: 356
        void QKeySequence(class QKeySequence const &);

    // RVA: 0x164 | Ordinal: 357
        void QKeySequence(class QString const &, enum QKeySequence::SequenceFormat);

    // RVA: 0x165 | Ordinal: 358
        void QKeySequence(int, int, int, int);

    // RVA: 0x166 | Ordinal: 359
        void QKeySequence(enum QKeySequence::StandardKey);

    // RVA: 0x167 | Ordinal: 360
        void QKeySequence(void);

    // RVA: 0xA28 | Ordinal: 2601
        void assign(class QString const &);

    // RVA: 0xA29 | Ordinal: 2602
        void assign(class QString const &, enum QKeySequence::SequenceFormat);

    // RVA: 0xC7A | Ordinal: 3195
        void count(void) const;

    // RVA: 0xDB2 | Ordinal: 3507
        void data_ptr(void);

    // RVA: 0xDBE | Ordinal: 3519
        void decodeString(class QString const &);

    // RVA: 0xFA0 | Ordinal: 4001
        void encodeString(int);

    // RVA: 0x1166 | Ordinal: 4455
        void fromString(class QString const &, enum QKeySequence::SequenceFormat);

    // RVA: 0x5005 | Ordinal: 20486
        void isDetached(void) const;

    // RVA: 0x5011 | Ordinal: 20498
        void isEmpty(void) const;

    // RVA: 0x50F1 | Ordinal: 20722
        void keyBindings(enum QKeySequence::StandardKey);

    // RVA: 0x517C | Ordinal: 20861
        void listFromString(class QString const &, enum QKeySequence::SequenceFormat);

    // RVA: 0x517E | Ordinal: 20863
        void listToString(class QList<class QKeySequence> const &, enum QKeySequence::SequenceFormat);

    // RVA: 0x522F | Ordinal: 21040
        void matches(class QKeySequence const &) const;

    // RVA: 0x52E0 | Ordinal: 21217
        void mnemonic(class QString const &);

    // RVA: 0x7C7 | Ordinal: 1992
        void operator_(class QKeySequence const &) const;

    // RVA: 0x5A1A | Ordinal: 23067
        void setKey(int, int);

    // RVA: 0x5E84 | Ordinal: 24197
        void swap(class QKeySequence &);

    // RVA: 0x5F6C | Ordinal: 24429
        void toString(enum QKeySequence::SequenceFormat) const;

    // RVA: 0x463 | Ordinal: 1124
        void _QKeySequence(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QKEYSEQUENCE_HPP
