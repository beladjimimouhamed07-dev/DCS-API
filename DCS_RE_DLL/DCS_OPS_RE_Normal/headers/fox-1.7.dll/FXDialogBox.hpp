#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXDialogBox
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXDialogBox
{
public:

    // RVA: 0xCB | Ordinal: 204
        void FXDialogBox(void);

    // RVA: 0xCC | Ordinal: 205
        void FXDialogBox(class FX::FXApp *, class FX::FXString const &, unsigned int, int, int, int, int, int, int, int, int, int, int);

    // RVA: 0xCD | Ordinal: 206
        void FXDialogBox(class FX::FXWindow *, class FX::FXString const &, unsigned int, int, int, int, int, int, int, int, int, int, int);

    // RVA: 0xE53 | Ordinal: 3668
        void execute(unsigned int);

    // RVA: 0x13C1 | Ordinal: 5058
        void getMetaClass(void) const;

    // RVA: 0x1740 | Ordinal: 5953
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1C02 | Ordinal: 7171
        void manufacture(void);

    // RVA: 0x1F8B | Ordinal: 8076
        void onCmdAccept(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FAD | Ordinal: 8110
        void onCmdCancel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2344 | Ordinal: 9029
        void onKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x236C | Ordinal: 9069
        void onKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x3ED | Ordinal: 1006
        void _FXDialogBox(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXDIALOGBOX_HPP
