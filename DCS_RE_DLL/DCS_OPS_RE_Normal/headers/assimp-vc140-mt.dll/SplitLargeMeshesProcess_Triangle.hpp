#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: SplitLargeMeshesProcess_Triangle
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Assimp {

class SplitLargeMeshesProcess_Triangle
{
public:

    // RVA: 0x168 | Ordinal: 361
        void Execute(struct aiScene *);

    // RVA: 0x1A4 | Ordinal: 421
        void GetLimit(void) const;

    // RVA: 0x1D4 | Ordinal: 469
        void IsActive(unsigned int) const;

    // RVA: 0x230 | Ordinal: 561
        void SetLimit(unsigned int);

    // RVA: 0x24F | Ordinal: 592
        void SetupProperties(class Assimp::Importer const *);

    // RVA: 0x5F | Ordinal: 96
        void SplitLargeMeshesProcess_Triangle(class Assimp::SplitLargeMeshesProcess_Triangle const &);

    // RVA: 0x60 | Ordinal: 97
        void SplitLargeMeshesProcess_Triangle(void);

    // RVA: 0x254 | Ordinal: 597
        void SplitMesh(unsigned int, struct aiMesh *, class std::vector<struct std::pair<struct aiMesh *, unsigned int>, class std::allocator<struct std::pair<struct aiMesh *, unsigned int>>> &);

    // RVA: 0x25E | Ordinal: 607
        void UpdateNode(struct aiNode *, class std::vector<struct std::pair<struct aiMesh *, unsigned int>, class std::allocator<struct std::pair<struct aiMesh *, unsigned int>>> const &);

    // RVA: 0xA0 | Ordinal: 161
        void _SplitLargeMeshesProcess_Triangle(void);
};

} // namespace Assimp

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_SPLITLARGEMESHESPROCESS_TRIANGLE_HPP
