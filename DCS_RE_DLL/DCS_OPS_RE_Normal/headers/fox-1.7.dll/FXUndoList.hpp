#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXUndoList
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXUndoList
{
public:

    // RVA: 0x340 | Ordinal: 833
        void FXUndoList(void);

    // RVA: 0x949 | Ordinal: 2378
        void abort(void);

    // RVA: 0x95A | Ordinal: 2395
        void add(class FX::FXCommand *, bool, bool);

    // RVA: 0xA5A | Ordinal: 2651
        void begin(class FX::FXCommandGroup *);

    // RVA: 0xA73 | Ordinal: 2676
        void busy(void) const;

    // RVA: 0xAA1 | Ordinal: 2722
        void canRedo(void) const;

    // RVA: 0xAA2 | Ordinal: 2723
        void canRevert(void) const;

    // RVA: 0xAA3 | Ordinal: 2724
        void canUndo(void) const;

    // RVA: 0xADA | Ordinal: 2779
        void clear(void);

    // RVA: 0xC0D | Ordinal: 3086
        void current(void) const;

    // RVA: 0xC12 | Ordinal: 3091
        void cut(void);

    // RVA: 0xE1E | Ordinal: 3615
        void end(void);

    // RVA: 0x146E | Ordinal: 5231
        void getMetaClass(void) const;

    // RVA: 0x17EE | Ordinal: 6127
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1CA9 | Ordinal: 7338
        void manufacture(void);

    // RVA: 0x1CB7 | Ordinal: 7352
        void mark(void);

    // RVA: 0x1CB9 | Ordinal: 7354
        void marked(void) const;

    // RVA: 0x1FB6 | Ordinal: 8119
        void onCmdClear(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2123 | Ordinal: 8484
        void onCmdRedo(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2124 | Ordinal: 8485
        void onCmdRedoAll(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2134 | Ordinal: 8501
        void onCmdRevert(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2229 | Ordinal: 8746
        void onCmdUndo(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x222A | Ordinal: 8747
        void onCmdUndoAll(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x256F | Ordinal: 9584
        void onUpdClear(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25D9 | Ordinal: 9690
        void onUpdRedo(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25DA | Ordinal: 9691
        void onUpdRedoCount(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25DD | Ordinal: 9694
        void onUpdRevert(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2615 | Ordinal: 9750
        void onUpdUndo(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2616 | Ordinal: 9751
        void onUpdUndoCount(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2725 | Ordinal: 10022
        void redo(void);

    // RVA: 0x2726 | Ordinal: 10023
        void redoAll(void);

    // RVA: 0x2727 | Ordinal: 10024
        void redoCount(void) const;

    // RVA: 0x2729 | Ordinal: 10026
        void redoName(void) const;

    // RVA: 0x27A6 | Ordinal: 10151
        void revert(void);

    // RVA: 0x2E3A | Ordinal: 11835
        void size(void) const;

    // RVA: 0x2ED1 | Ordinal: 11986
        void trimCount(int);

    // RVA: 0x2ED3 | Ordinal: 11988
        void trimSize(unsigned int);

    // RVA: 0x2EE9 | Ordinal: 12010
        void undo(void);

    // RVA: 0x2EEA | Ordinal: 12011
        void undoAll(void);

    // RVA: 0x2EEB | Ordinal: 12012
        void undoCount(void) const;

    // RVA: 0x2EED | Ordinal: 12014
        void undoName(void) const;

    // RVA: 0x2F08 | Ordinal: 12041
        void unmark(void);

    // RVA: 0x4E4 | Ordinal: 1253
        void _FXUndoList(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXUNDOLIST_HPP
