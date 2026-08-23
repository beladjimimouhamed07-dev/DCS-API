#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: VertexTriangleAdjacency
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Assimp {

class VertexTriangleAdjacency
{
public:

    // RVA: 0x18D | Ordinal: 398
        void GetAdjacentTriangles(unsigned int) const;

    // RVA: 0x1AA | Ordinal: 427
        void GetNumTrianglesPtr(unsigned int);

    // RVA: 0x6C | Ordinal: 109
        void VertexTriangleAdjacency(struct aiFace *, unsigned int, unsigned int, bool);

    // RVA: 0xA7 | Ordinal: 168
        void _VertexTriangleAdjacency(void);
};

} // namespace Assimp

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_VERTEXTRIANGLEADJACENCY_HPP
