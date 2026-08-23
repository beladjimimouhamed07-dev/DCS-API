#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXTranslator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXTranslator
{
public:

    // RVA: 0x329 | Ordinal: 810
        void FXTranslator(void);

    // RVA: 0x1463 | Ordinal: 5220
        void getMetaClass(void) const;

    // RVA: 0x17E3 | Ordinal: 6116
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B43 | Ordinal: 6980
        void load(class FX::FXStream &);

    // RVA: 0x1C9E | Ordinal: 7327
        void manufacture(void);

    // RVA: 0x2874 | Ordinal: 10357
        void save(class FX::FXStream &) const;

    // RVA: 0x2EB9 | Ordinal: 11962
        void tr(char const *, char const *, char const *, int) const;

    // RVA: 0x4D8 | Ordinal: 1241
        void _FXTranslator(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXTRANSLATOR_HPP
