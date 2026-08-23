#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXPipe
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXPipe
{
public:

    // RVA: 0x243 | Ordinal: 580
        void FXPipe(class FX::FXPipe &, unsigned int);

    // RVA: 0x244 | Ordinal: 581
        void FXPipe(void *, unsigned int);

    // RVA: 0x245 | Ordinal: 582
        void FXPipe(void);

    // RVA: 0xBD6 | Ordinal: 3031
        void create(class FX::FXString const &, unsigned int);

    // RVA: 0x2642 | Ordinal: 9795
        void open(class FX::FXPipe &, unsigned int);

    // RVA: 0x2643 | Ordinal: 9796
        void open(void *, unsigned int);

    // RVA: 0x47D | Ordinal: 1150
        void _FXPipe(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXPIPE_HPP
