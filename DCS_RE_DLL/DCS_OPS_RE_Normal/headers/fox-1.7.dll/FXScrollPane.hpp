#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXScrollPane
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXScrollPane
{
public:

    // RVA: 0x2B9 | Ordinal: 698
        void FXScrollPane(void);

    // RVA: 0x2BA | Ordinal: 699
        void FXScrollPane(class FX::FXWindow *, int, unsigned int);

    // RVA: 0x1145 | Ordinal: 4422
        void getDefaultHeight(void);

    // RVA: 0x119B | Ordinal: 4508
        void getDefaultWidth(void);

    // RVA: 0x1441 | Ordinal: 5186
        void getMetaClass(void) const;

    // RVA: 0x14BE | Ordinal: 5311
        void getNumVisible(void) const;

    // RVA: 0x165D | Ordinal: 5726
        void getTopItem(void) const;

    // RVA: 0x17C1 | Ordinal: 6082
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1A5E | Ordinal: 6751
        void layout(void);

    // RVA: 0x1C7E | Ordinal: 7295
        void manufacture(void);

    // RVA: 0x1FF9 | Ordinal: 8186
        void onCmdDecrement(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20C8 | Ordinal: 8393
        void onCmdIncrement(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2C20 | Ordinal: 11297
        void setNumVisible(int);

    // RVA: 0x2D9F | Ordinal: 11680
        void setTopItem(int);

    // RVA: 0x2DF6 | Ordinal: 11767
        void show(void);

    // RVA: 0x4A8 | Ordinal: 1193
        void _FXScrollPane(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXSCROLLPANE_HPP
