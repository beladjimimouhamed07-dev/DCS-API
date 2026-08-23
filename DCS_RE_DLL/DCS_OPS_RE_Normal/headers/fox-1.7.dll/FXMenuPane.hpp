#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXMenuPane
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXMenuPane
{
public:

    // RVA: 0x219 | Ordinal: 538
        void FXMenuPane(void);

    // RVA: 0x21A | Ordinal: 539
        void FXMenuPane(class FX::FXWindow *, unsigned int);

    // RVA: 0xB5F | Ordinal: 2912
        void contains(int, int) const;

    // RVA: 0x141C | Ordinal: 5149
        void getMetaClass(void) const;

    // RVA: 0x179C | Ordinal: 6045
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1C59 | Ordinal: 7258
        void manufacture(void);

    // RVA: 0x469 | Ordinal: 1130
        void _FXMenuPane(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXMENUPANE_HPP
