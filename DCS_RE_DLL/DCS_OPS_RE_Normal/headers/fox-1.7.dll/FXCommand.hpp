#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXCommand
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXCommand
{
public:

    // RVA: 0x91 | Ordinal: 146
        void FXCommand(void);

    // RVA: 0xAA0 | Ordinal: 2721
        void canMerge(void) const;

    // RVA: 0x13B5 | Ordinal: 5046
        void getMetaClass(void) const;

    // RVA: 0x1733 | Ordinal: 5940
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1D04 | Ordinal: 7429
        void mergeWith(class FX::FXCommand *);

    // RVA: 0x2728 | Ordinal: 10025
        void redoName(void) const;

    // RVA: 0x2E32 | Ordinal: 11827
        void size(void) const;

    // RVA: 0x2EEC | Ordinal: 12013
        void undoName(void) const;

    // RVA: 0x3D9 | Ordinal: 986
        void _FXCommand(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXCOMMAND_HPP
