#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXInputDialog
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXInputDialog
{
public:

    // RVA: 0x198 | Ordinal: 409
        void FXInputDialog(void);

    // RVA: 0x199 | Ordinal: 410
        void FXInputDialog(class FX::FXApp *, class FX::FXString const &, class FX::FXString const &, class FX::FXIcon *, unsigned int, int, int, int, int);

    // RVA: 0x19A | Ordinal: 411
        void FXInputDialog(class FX::FXWindow *, class FX::FXString const &, class FX::FXString const &, class FX::FXIcon *, unsigned int, int, int, int, int);

    // RVA: 0xE54 | Ordinal: 3669
        void execute(unsigned int);

    // RVA: 0x12CE | Ordinal: 4815
        void getInteger(int &, class FX::FXApp *, class FX::FXString const &, class FX::FXString const &, class FX::FXIcon *, int, int);

    // RVA: 0x12CF | Ordinal: 4816
        void getInteger(int &, class FX::FXWindow *, class FX::FXString const &, class FX::FXString const &, class FX::FXIcon *, int, int);

    // RVA: 0x1336 | Ordinal: 4919
        void getLimits(double &, double &);

    // RVA: 0x1401 | Ordinal: 5122
        void getMetaClass(void) const;

    // RVA: 0x149F | Ordinal: 5280
        void getNumColumns(void) const;

    // RVA: 0x152C | Ordinal: 5421
        void getReal(double &, class FX::FXApp *, class FX::FXString const &, class FX::FXString const &, class FX::FXIcon *, double, double);

    // RVA: 0x152D | Ordinal: 5422
        void getReal(double &, class FX::FXWindow *, class FX::FXString const &, class FX::FXString const &, class FX::FXIcon *, double, double);

    // RVA: 0x15DF | Ordinal: 5600
        void getString(class FX::FXString &, class FX::FXApp *, class FX::FXString const &, class FX::FXString const &, class FX::FXIcon *);

    // RVA: 0x15E0 | Ordinal: 5601
        void getString(class FX::FXString &, class FX::FXWindow *, class FX::FXString const &, class FX::FXString const &, class FX::FXIcon *);

    // RVA: 0x15F4 | Ordinal: 5621
        void getText(void) const;

    // RVA: 0x1781 | Ordinal: 6018
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1898 | Ordinal: 6297
        void initialize(class FX::FXString const &, class FX::FXIcon *);

    // RVA: 0x1C3E | Ordinal: 7231
        void manufacture(void);

    // RVA: 0x1F8D | Ordinal: 8078
        void onCmdAccept(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2BBF | Ordinal: 11200
        void setLimits(double, double);

    // RVA: 0x2C16 | Ordinal: 11287
        void setNumColumns(int);

    // RVA: 0x2D3C | Ordinal: 11581
        void setText(class FX::FXString const &);

    // RVA: 0x440 | Ordinal: 1089
        void _FXInputDialog(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXINPUTDIALOG_HPP
