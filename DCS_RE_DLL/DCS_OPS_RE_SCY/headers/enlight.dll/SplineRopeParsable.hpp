#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: enlight.dll
// Class: SplineRopeParsable
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace enlight {

class SplineRopeParsable
{
public:

    // RVA: 0x25 | Ordinal: 38
        void SplineRopeParsable(void);

    // RVA: 0x82 | Ordinal: 131
        void collectRenderables(unsigned int, struct render::CollectionInfo const **, bool const *const, class ed::vector<struct render::ISceneRenderable *, class ed::allocator<struct render::ISceneRenderable *>> **, struct render::ILightProbeSampler &);

    // RVA: 0xFD | Ordinal: 254
        void setVisible(bool);

    // RVA: 0x10E | Ordinal: 271
        void updateParams(class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &, float);

    // RVA: 0x3A | Ordinal: 59
        void _SplineRopeParsable(void);
};

} // namespace enlight

// DCS_OPS_RE_ENLIGHT.DLL_SPLINEROPEPARSABLE_HPP
