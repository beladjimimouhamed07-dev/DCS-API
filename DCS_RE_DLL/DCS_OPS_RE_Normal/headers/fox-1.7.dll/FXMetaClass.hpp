#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXMetaClass
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXMetaClass
{
public:

    // RVA: 0x226 | Ordinal: 551
        void FXMetaClass(char const *, class FX::FXObject * (__cdecl *)(void), class FX::FXMetaClass const *, void const *, unsigned int, unsigned int);

    // RVA: 0x104A | Ordinal: 4171
        void getBaseClass(void) const;

    // RVA: 0x108A | Ordinal: 4235
        void getClassName(void) const;

    // RVA: 0x147A | Ordinal: 5243
        void getMetaClassFromName(char const *);

    // RVA: 0x19F9 | Ordinal: 6650
        void isSubClassOf(class FX::FXMetaClass const *) const;

    // RVA: 0x1BAA | Ordinal: 7083
        void makeInstance(void) const;

    // RVA: 0x2797 | Ordinal: 10136
        void resize(unsigned int);

    // RVA: 0x28C9 | Ordinal: 10442
        void search(unsigned int) const;

    // RVA: 0x46F | Ordinal: 1136
        void _FXMetaClass(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXMETACLASS_HPP
