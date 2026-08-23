#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXSpring
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXSpring
{
public:

    // RVA: 0x2E6 | Ordinal: 743
        void FXSpring(void);

    // RVA: 0x2E7 | Ordinal: 744
        void FXSpring(class FX::FXComposite *, unsigned int, int, int, int, int, int, int, int, int, int, int, int, int);

    // RVA: 0x114B | Ordinal: 4428
        void getDefaultHeight(void);

    // RVA: 0x11A1 | Ordinal: 4514
        void getDefaultWidth(void);

    // RVA: 0x144C | Ordinal: 5197
        void getMetaClass(void) const;

    // RVA: 0x152F | Ordinal: 5424
        void getRelativeHeight(void) const;

    // RVA: 0x1530 | Ordinal: 5425
        void getRelativeWidth(void) const;

    // RVA: 0x17CC | Ordinal: 6093
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B29 | Ordinal: 6954
        void load(class FX::FXStream &);

    // RVA: 0x1C89 | Ordinal: 7306
        void manufacture(void);

    // RVA: 0x285A | Ordinal: 10331
        void save(class FX::FXStream &) const;

    // RVA: 0x2C8A | Ordinal: 11403
        void setRelativeHeight(int);

    // RVA: 0x2C8B | Ordinal: 11404
        void setRelativeWidth(int);

    // RVA: 0x4BA | Ordinal: 1211
        void _FXSpring(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXSPRING_HPP
