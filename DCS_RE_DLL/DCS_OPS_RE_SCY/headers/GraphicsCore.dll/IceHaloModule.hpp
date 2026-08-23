#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: IceHaloModule
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class IceHaloModule
{
public:

    // RVA: 0x20 | Ordinal: 33
        void IceHaloModule(void);

    // RVA: 0x10D | Ordinal: 270
        void addUpdatePass(class render::RenderGraph &, class osg::Vec3f const &);

    // RVA: 0x18C | Ordinal: 397
        void getIceHaloRadiance(void);

    // RVA: 0x1DC | Ordinal: 477
        void init(class render::RenderGraph &, int, int);

    // RVA: 0x243 | Ordinal: 580
        void release(void);

    // RVA: 0x277 | Ordinal: 632
        void setAppearanceParams(struct IceHaloAppearanceParams const &);

    // RVA: 0x28D | Ordinal: 654
        void setParams(struct IceHaloParams const &);

    // RVA: 0x297 | Ordinal: 664
        void setSimulationParams(class IceHaloSimulationParams const &);

    // RVA: 0x6C | Ordinal: 109
        void _IceHaloModule(void);
};

} // namespace render

// DCS_OPS_RE_GRAPHICSCORE.DLL_ICEHALOMODULE_HPP
