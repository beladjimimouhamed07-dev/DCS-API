#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXDirVisitor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXDirVisitor
{
public:

    // RVA: 0xDD | Ordinal: 222
        void FXDirVisitor(class FX::FXDirVisitor const &);

    // RVA: 0xDE | Ordinal: 223
        void FXDirVisitor(void);

    // RVA: 0xE25 | Ordinal: 3622
        void enter(class FX::FXString const &);

    // RVA: 0x1A74 | Ordinal: 6773
        void leave(class FX::FXString const &);

    // RVA: 0x2723 | Ordinal: 10020
        void recurse(class FX::FXString const &, struct FX::FXDirVisitor::Seen *);

    // RVA: 0x2ECD | Ordinal: 11982
        void traverse(class FX::FXString const &);

    // RVA: 0x2F5E | Ordinal: 12127
        void visit(class FX::FXString const &);

    // RVA: 0x3F5 | Ordinal: 1014
        void _FXDirVisitor(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXDIRVISITOR_HPP
