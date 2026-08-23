#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXSwitcher
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXSwitcher
{
public:

    // RVA: 0x2F9 | Ordinal: 762
        void FXSwitcher(void);

    // RVA: 0x2FA | Ordinal: 763
        void FXSwitcher(class FX::FXComposite *, unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0x10CF | Ordinal: 4304
        void getCurrent(void) const;

    // RVA: 0x114E | Ordinal: 4431
        void getDefaultHeight(void);

    // RVA: 0x11A4 | Ordinal: 4517
        void getDefaultWidth(void);

    // RVA: 0x144F | Ordinal: 5200
        void getMetaClass(void) const;

    // RVA: 0x15E3 | Ordinal: 5604
        void getSwitcherStyle(void) const;

    // RVA: 0x17CF | Ordinal: 6096
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1A65 | Ordinal: 6758
        void layout(void);

    // RVA: 0x1B37 | Ordinal: 6968
        void load(class FX::FXStream &);

    // RVA: 0x1C8C | Ordinal: 7309
        void manufacture(void);

    // RVA: 0x2074 | Ordinal: 8309
        void onCmdGetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2101 | Ordinal: 8450
        void onCmdOpen(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x218E | Ordinal: 8591
        void onCmdSetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21F5 | Ordinal: 8694
        void onCmdSetValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2490 | Ordinal: 9361
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25CB | Ordinal: 9676
        void onUpdOpen(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2868 | Ordinal: 10345
        void save(class FX::FXStream &) const;

    // RVA: 0x2A09 | Ordinal: 10762
        void setCurrent(int, bool);

    // RVA: 0x2D2B | Ordinal: 11564
        void setSwitcherStyle(unsigned int);

    // RVA: 0x4C0 | Ordinal: 1217
        void _FXSwitcher(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXSWITCHER_HPP
