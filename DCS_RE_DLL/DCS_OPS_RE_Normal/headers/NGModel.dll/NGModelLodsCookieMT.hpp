#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: NGModel.dll
// Class: NGModelLodsCookieMT
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace model {

class NGModelLodsCookieMT
{
public:

    // RVA: 0x1D | Ordinal: 30
        void allResourcesAreReady(void);

    // RVA: 0x24 | Ordinal: 37
        void clearDecals(void);

    // RVA: 0x26 | Ordinal: 39
        void clone(void) const;

    // RVA: 0x61 | Ordinal: 98
        void getType(void) const;

    // RVA: 0x72 | Ordinal: 115
        void setLiveryHandle(unsigned int);

    // RVA: 0x74 | Ordinal: 117
        void shoot(class ed::vector<float, class ed::allocator128<float>> const &, class osg::Vec3d const &, class osg::Vec3d const &, float);
};

} // namespace model

// DCS_OPS_RE_NGMODEL.DLL_NGMODELLODSCOOKIEMT_HPP
