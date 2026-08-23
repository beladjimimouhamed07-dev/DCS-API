#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXStatusBar
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXStatusBar
{
public:

    // RVA: 0x2E8 | Ordinal: 745
        void FXStatusBar(void);

    // RVA: 0x2E9 | Ordinal: 746
        void FXStatusBar(class FX::FXComposite *, unsigned int, int, int, int, int, int, int, int, int, int, int);

    // RVA: 0x10CC | Ordinal: 4301
        void getCornerStyle(void) const;

    // RVA: 0x114C | Ordinal: 4429
        void getDefaultHeight(void);

    // RVA: 0x11A2 | Ordinal: 4515
        void getDefaultWidth(void);

    // RVA: 0x11D5 | Ordinal: 4566
        void getDragCorner(void) const;

    // RVA: 0x144D | Ordinal: 5198
        void getMetaClass(void) const;

    // RVA: 0x15D8 | Ordinal: 5593
        void getStatusLine(void) const;

    // RVA: 0x17CD | Ordinal: 6094
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1A64 | Ordinal: 6757
        void layout(void);

    // RVA: 0x1B2A | Ordinal: 6955
        void load(class FX::FXStream &);

    // RVA: 0x1C8A | Ordinal: 7307
        void manufacture(void);

    // RVA: 0x285B | Ordinal: 10332
        void save(class FX::FXStream &) const;

    // RVA: 0x2A06 | Ordinal: 10759
        void setCornerStyle(bool);

    // RVA: 0x4BB | Ordinal: 1212
        void _FXStatusBar(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXSTATUSBAR_HPP
