#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXSeparator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXSeparator
{
public:

    // RVA: 0x2C1 | Ordinal: 706
        void FXSeparator(void);

    // RVA: 0x2C2 | Ordinal: 707
        void FXSeparator(class FX::FXComposite *, unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0x1146 | Ordinal: 4423
        void getDefaultHeight(void);

    // RVA: 0x119C | Ordinal: 4509
        void getDefaultWidth(void);

    // RVA: 0x1444 | Ordinal: 5189
        void getMetaClass(void) const;

    // RVA: 0x159E | Ordinal: 5535
        void getSeparatorStyle(void) const;

    // RVA: 0x17C4 | Ordinal: 6085
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1C81 | Ordinal: 7298
        void manufacture(void);

    // RVA: 0x248C | Ordinal: 9357
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2CE2 | Ordinal: 11491
        void setSeparatorStyle(unsigned int);

    // RVA: 0x4AD | Ordinal: 1198
        void _FXSeparator(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXSEPARATOR_HPP
