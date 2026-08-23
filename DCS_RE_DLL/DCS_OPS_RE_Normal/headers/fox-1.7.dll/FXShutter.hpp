#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXShutter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXShutter
{
public:

    // RVA: 0x2C8 | Ordinal: 713
        void FXShutter(void);

    // RVA: 0x2C9 | Ordinal: 714
        void FXShutter(class FX::FXComposite *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int, int, int, int, int, int, int);

    // RVA: 0x10CE | Ordinal: 4303
        void getCurrent(void) const;

    // RVA: 0x1446 | Ordinal: 5191
        void getMetaClass(void) const;

    // RVA: 0x17C6 | Ordinal: 6087
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1A60 | Ordinal: 6753
        void layout(void);

    // RVA: 0x1B23 | Ordinal: 6948
        void load(class FX::FXStream &);

    // RVA: 0x1C83 | Ordinal: 7300
        void manufacture(void);

    // RVA: 0x2071 | Ordinal: 8306
        void onCmdGetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2100 | Ordinal: 8449
        void onCmdOpen(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x218B | Ordinal: 8588
        void onCmdSetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21F2 | Ordinal: 8691
        void onCmdSetValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22AF | Ordinal: 8880
        void onFocusDown(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x230E | Ordinal: 8975
        void onFocusUp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2452 | Ordinal: 9299
        void onOpenItem(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x251C | Ordinal: 9501
        void onTimeout(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25CA | Ordinal: 9675
        void onUpdOpen(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2854 | Ordinal: 10325
        void save(class FX::FXStream &) const;

    // RVA: 0x2A08 | Ordinal: 10761
        void setCurrent(int, bool);

    // RVA: 0x4B0 | Ordinal: 1201
        void _FXShutter(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXSHUTTER_HPP
