#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: PretransformVertices
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Assimp {

class PretransformVertices
{
public:

    // RVA: 0x124 | Ordinal: 293
        void ApplyTransform(struct aiMesh *, class aiMatrix4x4t<float> const &);

    // RVA: 0x128 | Ordinal: 297
        void BuildMeshRefCountArray(struct aiNode *, unsigned int *);

    // RVA: 0x12A | Ordinal: 299
        void BuildWCSMeshes(class std::vector<struct aiMesh *, class std::allocator<struct aiMesh *>> &, struct aiMesh **, unsigned int, struct aiNode *);

    // RVA: 0x132 | Ordinal: 307
        void CollectData(struct aiScene *, struct aiNode *, unsigned int, unsigned int, struct aiMesh *, unsigned int *const, unsigned int *);

    // RVA: 0x137 | Ordinal: 312
        void ComputeAbsoluteTransform(struct aiNode *);

    // RVA: 0x147 | Ordinal: 328
        void CountNodes(struct aiNode *);

    // RVA: 0x148 | Ordinal: 329
        void CountVerticesAndFaces(struct aiScene *, struct aiNode *, unsigned int, unsigned int, unsigned int *, unsigned int *);

    // RVA: 0x163 | Ordinal: 356
        void Execute(struct aiScene *);

    // RVA: 0x1A7 | Ordinal: 424
        void GetMeshVFormat(struct aiMesh *);

    // RVA: 0x1BE | Ordinal: 447
        void GetVFormatList(struct aiScene *, unsigned int, class std::list<unsigned int, class std::allocator<unsigned int>> &);

    // RVA: 0x1CF | Ordinal: 464
        void IsActive(unsigned int) const;

    // RVA: 0x1DC | Ordinal: 477
        void IsHierarchyKept(void) const;

    // RVA: 0x1DE | Ordinal: 479
        void KeepHierarchy(bool);

    // RVA: 0x1E7 | Ordinal: 488
        void MakeIdentityTransform(struct aiNode *);

    // RVA: 0x40 | Ordinal: 65
        void PretransformVertices(class Assimp::PretransformVertices const &);

    // RVA: 0x41 | Ordinal: 66
        void PretransformVertices(void);

    // RVA: 0x249 | Ordinal: 586
        void SetupProperties(class Assimp::Importer const *);

    // RVA: 0x92 | Ordinal: 147
        void _PretransformVertices(void);
};

} // namespace Assimp

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_PRETRANSFORMVERTICES_HPP
