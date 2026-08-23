#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: MeshPtr
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace subdiv {

class MeshPtr
{
public:

    // RVA: 0x2CD | Ordinal: 718
        void getCrease(unsigned int);

    // RVA: 0x2CE | Ordinal: 719
        void getCrease(unsigned int) const;

    // RVA: 0x313 | Ordinal: 788
        void getLocalEdges(struct subdiv::Edge32) const;

    // RVA: 0x335 | Ordinal: 822
        void getMaxEdgeLength(void) const;

    // RVA: 0x376 | Ordinal: 887
        void getPolyCount(void) const;

    // RVA: 0x379 | Ordinal: 890
        void getPolyIndicies(unsigned int) const;

    // RVA: 0x37B | Ordinal: 892
        void getPolyIndiciesCount(unsigned int) const;

    // RVA: 0x37D | Ordinal: 894
        void getPolyVertex(unsigned int, unsigned int) const;

    // RVA: 0x3D9 | Ordinal: 986
        void getStripesVertsNpolysCount(int &, int &) const;

    // RVA: 0x411 | Ordinal: 1042
        void getVertexPtr(unsigned int) const;

    // RVA: 0x414 | Ordinal: 1045
        void getVertsIndiciesByEdge(struct subdiv::Edge32 const &) const;
};

} // namespace subdiv

// DCS_OPS_RE_EDTERRAIN4.DLL_MESHPTR_HPP
