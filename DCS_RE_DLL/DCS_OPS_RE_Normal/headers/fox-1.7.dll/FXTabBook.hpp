#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXTabBook
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXTabBook
{
public:

    // RVA: 0x305 | Ordinal: 774
        void FXTabBook(void);

    // RVA: 0x306 | Ordinal: 775
        void FXTabBook(class FX::FXComposite *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0x1150 | Ordinal: 4433
        void getDefaultHeight(void);

    // RVA: 0x11A6 | Ordinal: 4519
        void getDefaultWidth(void);

    // RVA: 0x1455 | Ordinal: 5206
        void getMetaClass(void) const;

    // RVA: 0x17D5 | Ordinal: 6102
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1A67 | Ordinal: 6760
        void layout(void);

    // RVA: 0x1C92 | Ordinal: 7315
        void manufacture(void);

    // RVA: 0x2104 | Ordinal: 8453
        void onCmdOpenItem(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22B3 | Ordinal: 8884
        void onFocusDown(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22D2 | Ordinal: 8915
        void onFocusLeft(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22D9 | Ordinal: 8922
        void onFocusNext(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22F4 | Ordinal: 8949
        void onFocusPrev(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22FC | Ordinal: 8957
        void onFocusRight(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2312 | Ordinal: 8979
        void onFocusUp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2492 | Ordinal: 9363
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2A0B | Ordinal: 10764
        void setCurrent(int, bool);

    // RVA: 0x4C6 | Ordinal: 1223
        void _FXTabBook(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXTABBOOK_HPP
