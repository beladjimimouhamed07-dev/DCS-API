#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: SpatialSort
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Assimp {

class SpatialSort
{
public:

    // RVA: 0x121 | Ordinal: 290
        void Append(class aiVector3t<float> const *, unsigned int, unsigned int, bool);

    // RVA: 0x174 | Ordinal: 373
        void Fill(class aiVector3t<float> const *, unsigned int, unsigned int, bool);

    // RVA: 0x175 | Ordinal: 374
        void Finalize(void);

    // RVA: 0x176 | Ordinal: 375
        void FindIdenticalPositions(class aiVector3t<float> const &, class std::vector<unsigned int, class std::allocator<unsigned int>> &) const;

    // RVA: 0x17D | Ordinal: 382
        void FindPositions(class aiVector3t<float> const &, float, class std::vector<unsigned int, class std::allocator<unsigned int>> &) const;

    // RVA: 0x184 | Ordinal: 389
        void GenerateMappingTable(class std::vector<unsigned int, class std::allocator<unsigned int>> &, float) const;

    // RVA: 0x5C | Ordinal: 93
        void SpatialSort(class Assimp::SpatialSort const &);

    // RVA: 0x5D | Ordinal: 94
        void SpatialSort(class aiVector3t<float> const *, unsigned int, unsigned int);

    // RVA: 0x5E | Ordinal: 95
        void SpatialSort(void);

    // RVA: 0x9F | Ordinal: 160
        void _SpatialSort(void);
};

} // namespace Assimp

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_SPATIALSORT_HPP
