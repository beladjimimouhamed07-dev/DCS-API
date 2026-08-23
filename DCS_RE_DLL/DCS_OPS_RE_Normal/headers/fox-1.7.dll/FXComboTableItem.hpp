#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXComboTableItem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXComboTableItem
{
public:

    // RVA: 0x8F | Ordinal: 144
        void FXComboTableItem(void);

    // RVA: 0x90 | Ordinal: 145
        void FXComboTableItem(class FX::FXString const &, class FX::FXIcon *, void *);

    // RVA: 0x10C7 | Ordinal: 4296
        void getControlFor(class FX::FXTable *);

    // RVA: 0x13B4 | Ordinal: 5045
        void getMetaClass(void) const;

    // RVA: 0x1599 | Ordinal: 5530
        void getSelections(void) const;

    // RVA: 0x1732 | Ordinal: 5939
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1BF6 | Ordinal: 7159
        void manufacture(void);

    // RVA: 0x2AD8 | Ordinal: 10969
        void setFromControl(class FX::FXWindow *);

    // RVA: 0x2CDD | Ordinal: 11486
        void setSelections(class FX::FXString const &);

    // RVA: 0x3D8 | Ordinal: 985
        void _FXComboTableItem(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXCOMBOTABLEITEM_HPP
