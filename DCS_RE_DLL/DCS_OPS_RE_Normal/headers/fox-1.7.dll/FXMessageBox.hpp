#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXMessageBox
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXMessageBox
{
public:

    // RVA: 0x221 | Ordinal: 546
        void FXMessageBox(void);

    // RVA: 0x222 | Ordinal: 547
        void FXMessageBox(class FX::FXApp *, class FX::FXString const &, class FX::FXString const &, class FX::FXIcon *, unsigned int, int, int);

    // RVA: 0x223 | Ordinal: 548
        void FXMessageBox(class FX::FXWindow *, class FX::FXString const &, class FX::FXString const &, class FX::FXIcon *, unsigned int, int, int);

    // RVA: 0xE41 | Ordinal: 3650
        void error(class FX::FXApp *, unsigned int, char const *, char const *, ...);

    // RVA: 0xE42 | Ordinal: 3651
        void error(class FX::FXWindow *, unsigned int, char const *, char const *, ...);

    // RVA: 0x1420 | Ordinal: 5153
        void getMetaClass(void) const;

    // RVA: 0x17A0 | Ordinal: 6049
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x188E | Ordinal: 6287
        void information(class FX::FXApp *, unsigned int, char const *, char const *, ...);

    // RVA: 0x188F | Ordinal: 6288
        void information(class FX::FXWindow *, unsigned int, char const *, char const *, ...);

    // RVA: 0x1899 | Ordinal: 6298
        void initialize(class FX::FXString const &, class FX::FXIcon *, unsigned int);

    // RVA: 0x1C5D | Ordinal: 7262
        void manufacture(void);

    // RVA: 0x1FAE | Ordinal: 8111
        void onCmdCancel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FB8 | Ordinal: 8121
        void onCmdClicked(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x26D7 | Ordinal: 9944
        void question(class FX::FXApp *, unsigned int, char const *, char const *, ...);

    // RVA: 0x26D8 | Ordinal: 9945
        void question(class FX::FXWindow *, unsigned int, char const *, char const *, ...);

    // RVA: 0x2F75 | Ordinal: 12150
        void warning(class FX::FXApp *, unsigned int, char const *, char const *, ...);

    // RVA: 0x2F76 | Ordinal: 12151
        void warning(class FX::FXWindow *, unsigned int, char const *, char const *, ...);

    // RVA: 0x46D | Ordinal: 1134
        void _FXMessageBox(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXMESSAGEBOX_HPP
