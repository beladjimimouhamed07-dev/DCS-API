#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: SGSpatialSort
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Assimp {

class SGSpatialSort
{
public:

    // RVA: 0x112 | Ordinal: 275
        void Add(class aiVector3t<float> const &, unsigned int, unsigned int);

    // RVA: 0x17C | Ordinal: 381
        void FindPositions(class aiVector3t<float> const &, unsigned int, float, class std::vector<unsigned int, class std::allocator<unsigned int>> &, bool) const;

    // RVA: 0x210 | Ordinal: 529
        void Prepare(void);

    // RVA: 0x4C | Ordinal: 77
        void SGSpatialSort(class Assimp::SGSpatialSort const &);

    // RVA: 0x4D | Ordinal: 78
        void SGSpatialSort(void);

    // RVA: 0x98 | Ordinal: 153
        void _SGSpatialSort(void);
};

} // namespace Assimp

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_SGSPATIALSORT_HPP
