#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: UniModelDesc.dll
// Class: ArgAnimatedBone
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace model {

class ArgAnimatedBone
{
public:

    // RVA: 0x61 | Ordinal: 98
        void getBoneMatrix(void) const;

    // RVA: 0x75 | Ordinal: 118
        void getInvertedBaseBoneMatrix(void) const;

    // RVA: 0xB8 | Ordinal: 185
        void init(class model::ArgAnimationNode const &);

    // RVA: 0x124 | Ordinal: 293
        void setInvertedBaseBoneMatrix(class osg::Matrixd const &);
};

} // namespace model

// DCS_OPS_RE_UNIMODELDESC.DLL_ARGANIMATEDBONE_HPP
