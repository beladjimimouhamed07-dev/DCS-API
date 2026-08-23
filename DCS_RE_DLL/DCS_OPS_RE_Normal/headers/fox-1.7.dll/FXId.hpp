#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXId
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXId
{
public:

    // RVA: 0x18E | Ordinal: 399
        void FXId(class FX::FXApp *);

    // RVA: 0x18F | Ordinal: 400
        void FXId(void);

    // RVA: 0xBC6 | Ordinal: 3015
        void create(void);

    // RVA: 0xC77 | Ordinal: 3192
        void destroy(void);

    // RVA: 0xCAA | Ordinal: 3243
        void detach(void);

    // RVA: 0x1014 | Ordinal: 4117
        void getApp(void) const;

    // RVA: 0x13FD | Ordinal: 5118
        void getMetaClass(void) const;

    // RVA: 0x1671 | Ordinal: 5746
        void getUserData(void) const;

    // RVA: 0x177D | Ordinal: 6014
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1848 | Ordinal: 6217
        void id(void) const;

    // RVA: 0x1AF4 | Ordinal: 6901
        void load(class FX::FXStream &);

    // RVA: 0x2825 | Ordinal: 10278
        void save(class FX::FXStream &) const;

    // RVA: 0x2DAB | Ordinal: 11692
        void setUserData(void *);

    // RVA: 0x43B | Ordinal: 1084
        void _FXId(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXID_HPP
