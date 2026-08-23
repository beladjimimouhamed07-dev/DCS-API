#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: ModelDesc.dll
// Class: ShellSkinNode
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace model {

class ShellSkinNode
{
public:

    // RVA: 0x4B | Ordinal: 76
        void processHitPos(class ed::span<class osg::Matrixfa const, -1>, int);

    // RVA: 0x4C | Ordinal: 77
        void processVerts(class ed::span<class osg::Matrixfa const, -1>, struct model::SkinData &);
};

} // namespace model

// DCS_OPS_RE_MODELDESC.DLL_SHELLSKINNODE_HPP
