#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edm2graph.dll
// Class: Edm2ModelCookie
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace edm2g {

class Edm2ModelCookie
{
public:

    // RVA: 0xC | Ordinal: 13
        void allResourcesAreReady(void);

    // RVA: 0xE | Ordinal: 15
        void clearDecals(void);

    // RVA: 0xF | Ordinal: 16
        void clone(void) const;

    // RVA: 0x28 | Ordinal: 41
        void getType(void) const;

    // RVA: 0x2E | Ordinal: 47
        void setLiveryHandle(unsigned int);

    // RVA: 0x2F | Ordinal: 48
        void shoot(class ed::vector<float, class ed::allocator128<float>> const &, class osg::Vec3d const &, class osg::Vec3d const &, float);
};

} // namespace edm2g

// DCS_OPS_RE_EDM2GRAPH.DLL_EDM2MODELCOOKIE_HPP
