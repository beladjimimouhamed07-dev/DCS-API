#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXTriStateButton
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXTriStateButton
{
public:

    // RVA: 0x330 | Ordinal: 817
        void FXTriStateButton(void);

    // RVA: 0x331 | Ordinal: 818
        void FXTriStateButton(class FX::FXComposite *, class FX::FXString const &, class FX::FXString const &, class FX::FXString const &, class FX::FXIcon *, class FX::FXIcon *, class FX::FXIcon *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0xBE9 | Ordinal: 3050
        void create(void);

    // RVA: 0xCC6 | Ordinal: 3271
        void detach(void);

    // RVA: 0x115D | Ordinal: 4446
        void getDefaultHeight(void);

    // RVA: 0x11B3 | Ordinal: 4532
        void getDefaultWidth(void);

    // RVA: 0x1366 | Ordinal: 4967
        void getMaybeHelpText(void) const;

    // RVA: 0x1367 | Ordinal: 4968
        void getMaybeIcon(void) const;

    // RVA: 0x1368 | Ordinal: 4969
        void getMaybeText(void) const;

    // RVA: 0x1369 | Ordinal: 4970
        void getMaybeTipText(void) const;

    // RVA: 0x1467 | Ordinal: 5224
        void getMetaClass(void) const;

    // RVA: 0x17E7 | Ordinal: 6120
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B47 | Ordinal: 6984
        void load(class FX::FXStream &);

    // RVA: 0x1CA2 | Ordinal: 7331
        void manufacture(void);

    // RVA: 0x249D | Ordinal: 9374
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24C1 | Ordinal: 9410
        void onQueryHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24E2 | Ordinal: 9443
        void onQueryTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2556 | Ordinal: 9559
        void onUnknown(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2878 | Ordinal: 10361
        void save(class FX::FXStream &) const;

    // RVA: 0x2BF4 | Ordinal: 11253
        void setMaybeHelpText(class FX::FXString const &);

    // RVA: 0x2BF5 | Ordinal: 11254
        void setMaybeIcon(class FX::FXIcon *);

    // RVA: 0x2BF6 | Ordinal: 11255
        void setMaybeText(class FX::FXString const &);

    // RVA: 0x2BF7 | Ordinal: 11256
        void setMaybeTipText(class FX::FXString const &);

    // RVA: 0x4DC | Ordinal: 1245
        void _FXTriStateButton(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXTRISTATEBUTTON_HPP
