#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: NGModel.dll
// Class: FlagModelCookie
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cloth {

class FlagModelCookie
{
public:

    // RVA: 0x1C | Ordinal: 29
        void allResourcesAreReady(void);

    // RVA: 0x23 | Ordinal: 36
        void clearDecals(void);

    // RVA: 0x25 | Ordinal: 38
        void clone(void) const;

    // RVA: 0x60 | Ordinal: 97
        void getType(void) const;

    // RVA: 0x71 | Ordinal: 114
        void setLiveryHandle(unsigned int);

    // RVA: 0x73 | Ordinal: 116
        void shoot(class ed::vector<float, class ed::allocator128<float>> const &, class osg::Vec3d const &, class osg::Vec3d const &, float);
};

} // namespace cloth

// DCS_OPS_RE_NGMODEL.DLL_FLAGMODELCOOKIE_HPP
