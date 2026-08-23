#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Pathfinder.dll
// Class: NGVert
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace NavMeshData {

class NGVert
{
public:

    // RVA: 0x10 | Ordinal: 17
        void NGVert(class NavMeshData::NGVert &&);

    // RVA: 0x11 | Ordinal: 18
        void NGVert(class NavMeshData::NGVert const &);

    // RVA: 0x12 | Ordinal: 19
        void NGVert(class osg::Vec2d const &);

    // RVA: 0x13 | Ordinal: 20
        void NGVert(void);

    // RVA: 0x59 | Ordinal: 90
        void clearState(void) const;

    // RVA: 0x5C | Ordinal: 93
        void g(void) const;

    // RVA: 0x63 | Ordinal: 100
        void id(void) const;

    // RVA: 0x6A | Ordinal: 107
        void isBridgeOrTunnel(void) const;

    // RVA: 0x6B | Ordinal: 108
        void isClosed(void) const;

    // RVA: 0x75 | Ordinal: 118
        void isOnRoad(void) const;

    // RVA: 0x77 | Ordinal: 120
        void isOpen(void) const;

    // RVA: 0x78 | Ordinal: 121
        void isTouched(void) const;

    // RVA: 0x85 | Ordinal: 134
        void neighbours(void) const;

    // RVA: 0x86 | Ordinal: 135
        void p1(void) const;

    // RVA: 0x87 | Ordinal: 136
        void p2(void) const;

    // RVA: 0x8B | Ordinal: 140
        void pos(void) const;

    // RVA: 0x97 | Ordinal: 152
        void roadIndex(void) const;

    // RVA: 0x98 | Ordinal: 153
        void setClosed(void) const;

    // RVA: 0x99 | Ordinal: 154
        void setG(double) const;

    // RVA: 0x9B | Ordinal: 156
        void setOpen(void) const;

    // RVA: 0x24 | Ordinal: 37
        void _NGVert(void);
};

} // namespace NavMeshData

// DCS_OPS_RE_PATHFINDER.DLL_NGVERT_HPP
