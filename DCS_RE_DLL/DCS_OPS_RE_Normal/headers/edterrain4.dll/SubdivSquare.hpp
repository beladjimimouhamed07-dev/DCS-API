#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: SubdivSquare
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape5 {
namespace lsa5File {

class SubdivSquare
{
public:

    // RVA: 0x1CA | Ordinal: 459
        void clear(void);

    // RVA: 0x2A8 | Ordinal: 681
        void getBoundingBox(void) const;

    // RVA: 0x2B3 | Ordinal: 692
        void getChildrenBoundingBoxes(class osg::BoundingBoxImpl<class osg::Vec3d> *) const;

    // RVA: 0x2E9 | Ordinal: 746
        void getDistanceBias(void) const;

    // RVA: 0x341 | Ordinal: 834
        void getNextLevelSquareBox(int);

    // RVA: 0x3DC | Ordinal: 989
        void getSubdivmesh(void) const;

    // RVA: 0x3F4 | Ordinal: 1013
        void getTransform(void) const;

    // RVA: 0x422 | Ordinal: 1059
        void init(struct landscape5::lsa5File::SubdivSquareID, class osg::Matrixf const &, class subdiv::SubdivScheme &);

    // RVA: 0x4B0 | Ordinal: 1201
        void makeNextLevelSquare(struct landscape5::lsa5File::SubdivSquareID, struct landscape5::lsa5File::SubdivSquare *, class subdiv::SubdivScheme &);
};

} // namespace lsa5File
} // namespace landscape5

// DCS_OPS_RE_EDTERRAIN4.DLL_SUBDIVSQUARE_HPP
