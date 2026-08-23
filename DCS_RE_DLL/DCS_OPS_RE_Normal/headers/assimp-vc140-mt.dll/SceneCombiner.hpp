#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: SceneCombiner
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Assimp {

class SceneCombiner
{
public:

    // RVA: 0x116 | Ordinal: 279
        void AddNodeHashes(struct aiNode *, class std::set<unsigned int, struct std::less<unsigned int>, class std::allocator<unsigned int>> &);

    // RVA: 0x117 | Ordinal: 280
        void AddNodePrefixes(struct aiNode *, char const *, unsigned int);

    // RVA: 0x118 | Ordinal: 281
        void AddNodePrefixesChecked(struct aiNode *, char const *, unsigned int, class std::vector<struct Assimp::SceneHelper, class std::allocator<struct Assimp::SceneHelper>> &, unsigned int);

    // RVA: 0x125 | Ordinal: 294
        void AttachToGraph(struct aiNode *, class std::vector<struct Assimp::NodeAttachmentInfo, class std::allocator<struct Assimp::NodeAttachmentInfo>> &);

    // RVA: 0x126 | Ordinal: 295
        void AttachToGraph(struct aiScene *, class std::vector<struct Assimp::NodeAttachmentInfo, class std::allocator<struct Assimp::NodeAttachmentInfo>> &);

    // RVA: 0x129 | Ordinal: 298
        void BuildUniqueBoneList(class std::list<struct Assimp::BoneWithHash, class std::allocator<struct Assimp::BoneWithHash>> &, class std::_Vector_const_iterator<class std::_Vector_val<struct std::_Simple_types<struct aiMesh *>>>, class std::_Vector_const_iterator<class std::_Vector_val<struct std::_Simple_types<struct aiMesh *>>>);

    // RVA: 0x13A | Ordinal: 315
        void Copy(struct aiAnimation **, struct aiAnimation const *);

    // RVA: 0x13B | Ordinal: 316
        void Copy(struct aiBone **, struct aiBone const *);

    // RVA: 0x13C | Ordinal: 317
        void Copy(struct aiCamera **, struct aiCamera const *);

    // RVA: 0x13D | Ordinal: 318
        void Copy(struct aiLight **, struct aiLight const *);

    // RVA: 0x13E | Ordinal: 319
        void Copy(struct aiMaterial **, struct aiMaterial const *);

    // RVA: 0x13F | Ordinal: 320
        void Copy(struct aiMesh **, struct aiMesh const *);

    // RVA: 0x140 | Ordinal: 321
        void Copy(struct aiMetadata **, struct aiMetadata const *);

    // RVA: 0x141 | Ordinal: 322
        void Copy(struct aiNode **, struct aiNode const *);

    // RVA: 0x142 | Ordinal: 323
        void Copy(struct aiNodeAnim **, struct aiNodeAnim const *);

    // RVA: 0x143 | Ordinal: 324
        void Copy(struct aiTexture **, struct aiTexture const *);

    // RVA: 0x145 | Ordinal: 326
        void CopyScene(struct aiScene **, struct aiScene const *, bool);

    // RVA: 0x146 | Ordinal: 327
        void CopySceneFlat(struct aiScene **, struct aiScene const *);

    // RVA: 0x177 | Ordinal: 376
        void FindNameMatch(struct aiString const &, class std::vector<struct Assimp::SceneHelper, class std::allocator<struct Assimp::SceneHelper>> &, unsigned int);

    // RVA: 0x1F1 | Ordinal: 498
        void MergeBones(struct aiMesh *, class std::_Vector_const_iterator<class std::_Vector_val<struct std::_Simple_types<struct aiMesh *>>>, class std::_Vector_const_iterator<class std::_Vector_val<struct std::_Simple_types<struct aiMesh *>>>);

    // RVA: 0x1F2 | Ordinal: 499
        void MergeMaterials(struct aiMaterial **, class std::_Vector_const_iterator<class std::_Vector_val<struct std::_Simple_types<struct aiMaterial *>>>, class std::_Vector_const_iterator<class std::_Vector_val<struct std::_Simple_types<struct aiMaterial *>>>);

    // RVA: 0x1F3 | Ordinal: 500
        void MergeMeshes(struct aiMesh **, unsigned int, class std::_Vector_const_iterator<class std::_Vector_val<struct std::_Simple_types<struct aiMesh *>>>, class std::_Vector_const_iterator<class std::_Vector_val<struct std::_Simple_types<struct aiMesh *>>>);

    // RVA: 0x1F4 | Ordinal: 501
        void MergeScenes(struct aiScene **, class std::vector<struct aiScene *, class std::allocator<struct aiScene *>> &, unsigned int);

    // RVA: 0x1F5 | Ordinal: 502
        void MergeScenes(struct aiScene **, struct aiScene *, class std::vector<struct Assimp::AttachmentInfo, class std::allocator<struct Assimp::AttachmentInfo>> &, unsigned int);

    // RVA: 0x1F6 | Ordinal: 503
        void OffsetNodeMeshIndices(struct aiNode *, unsigned int);

    // RVA: 0x54 | Ordinal: 85
        void SceneCombiner(void);

    // RVA: 0x9C | Ordinal: 157
        void _SceneCombiner(void);
};

} // namespace Assimp

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_SCENECOMBINER_HPP
