#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QShortcutMap
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QShortcutMap
{
public:

    // RVA: 0x300 | Ordinal: 769
        void QShortcutMap(void);

    // RVA: 0x9A0 | Ordinal: 2465
        void addShortcut(class QObject *, class QKeySequence const &, enum Qt::ShortcutContext, bool (__cdecl *)(class QObject *, enum Qt::ShortcutContext));

    // RVA: 0xBC1 | Ordinal: 3010
        void clearSequence(class QVector<class QKeySequence> &);

    // RVA: 0xCB2 | Ordinal: 3251
        void createNewSequences(class QKeyEvent *, class QVector<class QKeySequence> &, int);

    // RVA: 0xD7C | Ordinal: 3453
        void d_func(void);

    // RVA: 0xD7D | Ordinal: 3454
        void d_func(void) const;

    // RVA: 0xE67 | Ordinal: 3688
        void dispatchEvent(class QKeyEvent *);

    // RVA: 0x1069 | Ordinal: 4202
        void find(class QKeyEvent *, int);

    // RVA: 0x4E7A | Ordinal: 20091
        void hasShortcutForKeySequence(class QKeySequence const &) const;

    // RVA: 0x5230 | Ordinal: 21041
        void matches(void) const;

    // RVA: 0x5231 | Ordinal: 21042
        void matches(class QKeySequence const &, class QKeySequence const &) const;

    // RVA: 0x534F | Ordinal: 21328
        void nextState(class QKeyEvent *);

    // RVA: 0x56EC | Ordinal: 22253
        void removeShortcut(int, class QObject *, class QKeySequence const &);

    // RVA: 0x571D | Ordinal: 22302
        void resetState(void);

    // RVA: 0x5B87 | Ordinal: 23432
        void setShortcutAutoRepeat(bool, int, class QObject *, class QKeySequence const &);

    // RVA: 0x5B88 | Ordinal: 23433
        void setShortcutEnabled(bool, int, class QObject *, class QKeySequence const &);

    // RVA: 0x5DA0 | Ordinal: 23969
        void state(void);

    // RVA: 0x604D | Ordinal: 24654
        void translateModifiers(class QFlags<enum Qt::KeyboardModifier>);

    // RVA: 0x6062 | Ordinal: 24675
        void tryShortcut(class QKeyEvent *);

    // RVA: 0x518 | Ordinal: 1305
        void _QShortcutMap(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QSHORTCUTMAP_HPP
