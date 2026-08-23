#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Pathfinder.dll
// Class: NGEdge
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace NavMeshData {

class NGEdge
{
public:

    // RVA: 0xE | Ordinal: 15
        void NGEdge(unsigned int, float, unsigned short, unsigned char);

    // RVA: 0xF | Ordinal: 16
        void NGEdge(void);

    // RVA: 0x5B | Ordinal: 92
        void dist(void) const;

    // RVA: 0x72 | Ordinal: 115
        void isLinked(void) const;

    // RVA: 0x7B | Ordinal: 124
        void linkTo(class NavMeshData::NGVert const &) const;

    // RVA: 0x7C | Ordinal: 125
        void linkTo(unsigned int) const;

    // RVA: 0x9C | Ordinal: 157
        void setSlope(unsigned short);

    // RVA: 0x9D | Ordinal: 158
        void setSurfType(unsigned char);

    // RVA: 0xA0 | Ordinal: 161
        void slopeType(void) const;

    // RVA: 0xAE | Ordinal: 175
        void surfType(void) const;

    // RVA: 0xB0 | Ordinal: 177
        void targetId(void) const;
};

} // namespace NavMeshData

// DCS_OPS_RE_PATHFINDER.DLL_NGEDGE_HPP
