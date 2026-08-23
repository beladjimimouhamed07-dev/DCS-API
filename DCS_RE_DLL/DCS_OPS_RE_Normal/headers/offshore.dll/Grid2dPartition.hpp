#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: offshore.dll
// Class: Grid2dPartition
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace offshore {

class Grid2dPartition
{
public:

    // RVA: 0x5D | Ordinal: 94
        void OptimalCellSizeForMesh(struct offshore::Mesh const &, int, double, bool);

    // RVA: 0x156 | Ordinal: 343
        void getMinimumMemoryUsedMB(void);

    // RVA: 0x19A | Ordinal: 411
        void initFromMesh(struct offshore::Mesh const &, double, bool);

    // RVA: 0x19F | Ordinal: 416
        void insidePolygon(struct offshore::Mesh const &, class osg::Vec3d);
};

} // namespace offshore

// DCS_OPS_RE_OFFSHORE.DLL_GRID2DPARTITION_HPP
