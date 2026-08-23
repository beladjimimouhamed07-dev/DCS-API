#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: UniModelDesc.dll
// Class: Bone
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace model {

class Bone
{
public:

    // RVA: 0x62 | Ordinal: 99
        void getBoneMatrix(void) const;

    // RVA: 0x76 | Ordinal: 119
        void getInvertedBaseBoneMatrix(void) const;

    // RVA: 0x125 | Ordinal: 294
        void setInvertedBaseBoneMatrix(class osg::Matrixd const &);
};

} // namespace model

// DCS_OPS_RE_UNIMODELDESC.DLL_BONE_HPP
