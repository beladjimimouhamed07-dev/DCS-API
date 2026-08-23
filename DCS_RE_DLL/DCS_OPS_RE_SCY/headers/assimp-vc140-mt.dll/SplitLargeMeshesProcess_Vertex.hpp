#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: SplitLargeMeshesProcess_Vertex
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Assimp {

class SplitLargeMeshesProcess_Vertex
{
public:

    // RVA: 0x169 | Ordinal: 362
        void Execute(struct aiScene *);

    // RVA: 0x1A5 | Ordinal: 422
        void GetLimit(void) const;

    // RVA: 0x1D5 | Ordinal: 470
        void IsActive(unsigned int) const;

    // RVA: 0x231 | Ordinal: 562
        void SetLimit(unsigned int);

    // RVA: 0x250 | Ordinal: 593
        void SetupProperties(class Assimp::Importer const *);

    // RVA: 0x61 | Ordinal: 98
        void SplitLargeMeshesProcess_Vertex(class Assimp::SplitLargeMeshesProcess_Vertex const &);

    // RVA: 0x62 | Ordinal: 99
        void SplitLargeMeshesProcess_Vertex(void);

    // RVA: 0x255 | Ordinal: 598
        void SplitMesh(unsigned int, struct aiMesh *, class std::vector<struct std::pair<struct aiMesh *, unsigned int>, class std::allocator<struct std::pair<struct aiMesh *, unsigned int>>> &);

    // RVA: 0xA1 | Ordinal: 162
        void _SplitLargeMeshesProcess_Vertex(void);
};

} // namespace Assimp

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_SPLITLARGEMESHESPROCESS_VERTEX_HPP
