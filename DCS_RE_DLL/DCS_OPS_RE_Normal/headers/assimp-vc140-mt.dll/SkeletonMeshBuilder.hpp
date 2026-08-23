#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: SkeletonMeshBuilder
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Assimp {

class SkeletonMeshBuilder
{
public:

    // RVA: 0x14C | Ordinal: 333
        void CreateGeometry(struct aiNode const *);

    // RVA: 0x14D | Ordinal: 334
        void CreateMaterial(void);

    // RVA: 0x14E | Ordinal: 335
        void CreateMesh(void);

    // RVA: 0x57 | Ordinal: 88
        void SkeletonMeshBuilder(class Assimp::SkeletonMeshBuilder &&);

    // RVA: 0x58 | Ordinal: 89
        void SkeletonMeshBuilder(class Assimp::SkeletonMeshBuilder const &);

    // RVA: 0x59 | Ordinal: 90
        void SkeletonMeshBuilder(struct aiScene *, struct aiNode *, bool);

    // RVA: 0x9D | Ordinal: 158
        void _SkeletonMeshBuilder(void);
};

} // namespace Assimp

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_SKELETONMESHBUILDER_HPP
