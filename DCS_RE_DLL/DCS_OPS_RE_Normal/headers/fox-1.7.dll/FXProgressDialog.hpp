#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXProgressDialog
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXProgressDialog
{
public:

    // RVA: 0x256 | Ordinal: 599
        void FXProgressDialog(void);

    // RVA: 0x257 | Ordinal: 600
        void FXProgressDialog(class FX::FXWindow *, class FX::FXString const &, class FX::FXString const &, unsigned int, int, int, int, int);

    // RVA: 0x1049 | Ordinal: 4170
        void getBarStyle(void) const;

    // RVA: 0x1372 | Ordinal: 4979
        void getMessage(void) const;

    // RVA: 0x1430 | Ordinal: 5169
        void getMetaClass(void) const;

    // RVA: 0x1512 | Ordinal: 5395
        void getProgress(void) const;

    // RVA: 0x1662 | Ordinal: 5731
        void getTotal(void) const;

    // RVA: 0x17B0 | Ordinal: 6065
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1883 | Ordinal: 6276
        void increment(unsigned int);

    // RVA: 0x1902 | Ordinal: 6403
        void isCancelled(void) const;

    // RVA: 0x1C6D | Ordinal: 7278
        void manufacture(void);

    // RVA: 0x1FAF | Ordinal: 8112
        void onCmdCancel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2053 | Ordinal: 8276
        void onCmdGetIntRange(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x206B | Ordinal: 8300
        void onCmdGetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x207D | Ordinal: 8318
        void onCmdGetLongValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x209D | Ordinal: 8350
        void onCmdGetStringValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x216D | Ordinal: 8558
        void onCmdSetIntRange(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2185 | Ordinal: 8582
        void onCmdSetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2197 | Ordinal: 8600
        void onCmdSetLongValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21B9 | Ordinal: 8634
        void onCmdSetStringValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21EC | Ordinal: 8685
        void onCmdSetValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x29B1 | Ordinal: 10674
        void setBarStyle(unsigned int);

    // RVA: 0x29D1 | Ordinal: 10706
        void setCancelled(bool);

    // RVA: 0x2C00 | Ordinal: 11265
        void setMessage(class FX::FXString const &);

    // RVA: 0x2C6F | Ordinal: 11376
        void setProgress(unsigned int);

    // RVA: 0x2DA2 | Ordinal: 11683
        void setTotal(unsigned int);

    // RVA: 0x484 | Ordinal: 1157
        void _FXProgressDialog(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXPROGRESSDIALOG_HPP
