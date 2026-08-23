#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXDLL
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXDLL
{
public:

    // RVA: 0xB1 | Ordinal: 178
        void FXDLL(class FX::FXDLL const &);

    // RVA: 0xB2 | Ordinal: 179
        void FXDLL(void *);

    // RVA: 0xB3 | Ordinal: 180
        void FXDLL(void);

    // RVA: 0x966 | Ordinal: 2407
        void address(class FX::FXString const &) const;

    // RVA: 0x967 | Ordinal: 2408
        void address(char const *) const;

    // RVA: 0xCFA | Ordinal: 3323
        void dll(void *);

    // RVA: 0xCFB | Ordinal: 3324
        void dll(void);

    // RVA: 0xE40 | Ordinal: 3649
        void error(void);

    // RVA: 0x173B | Ordinal: 5948
        void handle(void) const;

    // RVA: 0x1ABD | Ordinal: 6846
        void load(class FX::FXString const &);

    // RVA: 0x1B87 | Ordinal: 7048
        void loaded(void) const;

    // RVA: 0x1EFC | Ordinal: 7933
        void name(void) const;

    // RVA: 0x1EFD | Ordinal: 7934
        void name(void *);

    // RVA: 0x2E85 | Ordinal: 11910
        void symbol(void *);

    // RVA: 0x2EFF | Ordinal: 12032
        void unload(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXDLL_HPP
