#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXObject
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXObject
{
public:

    // RVA: 0x228 | Ordinal: 553
        void FXObject(class FX::FXObject const &);

    // RVA: 0x229 | Ordinal: 554
        void FXObject(void);

    // RVA: 0x108B | Ordinal: 4236
        void getClassName(void) const;

    // RVA: 0x1422 | Ordinal: 5155
        void getMetaClass(void) const;

    // RVA: 0x17A2 | Ordinal: 6051
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x199C | Ordinal: 6557
        void isMemberOf(class FX::FXMetaClass const *) const;

    // RVA: 0x1B13 | Ordinal: 6932
        void load(class FX::FXStream &);

    // RVA: 0x1C5F | Ordinal: 7264
        void manufacture(void);

    // RVA: 0x2272 | Ordinal: 8819
        void onDefault(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2844 | Ordinal: 10309
        void save(class FX::FXStream &) const;

    // RVA: 0x2ED9 | Ordinal: 11994
        void tryHandle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x471 | Ordinal: 1138
        void _FXObject(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXOBJECT_HPP
