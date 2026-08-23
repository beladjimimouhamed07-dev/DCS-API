#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXGlobVisitor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXGlobVisitor
{
public:

    // RVA: 0x165 | Ordinal: 358
        void FXGlobVisitor(class FX::FXGlobVisitor const &);

    // RVA: 0x166 | Ordinal: 359
        void FXGlobVisitor(void);

    // RVA: 0xE26 | Ordinal: 3623
        void enter(class FX::FXString const &);

    // RVA: 0x2ECE | Ordinal: 11983
        void traverse(class FX::FXString const &, class FX::FXString const &, unsigned int);

    // RVA: 0x2F5F | Ordinal: 12128
        void visit(class FX::FXString const &);

    // RVA: 0x427 | Ordinal: 1064
        void _FXGlobVisitor(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXGLOBVISITOR_HPP
