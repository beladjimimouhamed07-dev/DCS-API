#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: IceHalo
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace enlight {

class IceHalo
{
public:

    // RVA: 0x1E | Ordinal: 31
        void IceHalo(unsigned int);

    // RVA: 0x18B | Ordinal: 396
        void getHaloTexture(void);

    // RVA: 0x26A | Ordinal: 619
        void resetSimulation(void);

    // RVA: 0x276 | Ordinal: 631
        void setAppearanceParams(struct IceHaloAppearanceParams const &);

    // RVA: 0x28C | Ordinal: 653
        void setParams(struct IceHaloParams const &);

    // RVA: 0x296 | Ordinal: 663
        void setSimulationParams(class IceHaloSimulationParams const &);

    // RVA: 0x2B2 | Ordinal: 691
        void update(class render::Texture &, class osg::Vec3f const &);

    // RVA: 0x2B3 | Ordinal: 692
        void update(class osg::Vec3f const &);

    // RVA: 0x6B | Ordinal: 108
        void _IceHalo(void);
};

} // namespace enlight

// DCS_OPS_RE_GRAPHICSCORE.DLL_ICEHALO_HPP
