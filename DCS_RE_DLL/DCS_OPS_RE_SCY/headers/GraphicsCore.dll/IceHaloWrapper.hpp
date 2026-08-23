#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: IceHaloWrapper
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace enlight {

class IceHaloWrapper
{
public:

    // RVA: 0x26 | Ordinal: 39
        void IceHaloWrapper(class enlight::IceHaloWrapper &&);

    // RVA: 0x27 | Ordinal: 40
        void IceHaloWrapper(void);

    // RVA: 0x1DD | Ordinal: 478
        void init(unsigned int);

    // RVA: 0x1F3 | Ordinal: 500
        void isInitialized(void);

    // RVA: 0x244 | Ordinal: 581
        void release(void);

    // RVA: 0x278 | Ordinal: 633
        void setAppearanceParams(struct IceHaloAppearanceParams const &);

    // RVA: 0x28E | Ordinal: 655
        void setParams(struct IceHaloParams const &);

    // RVA: 0x298 | Ordinal: 665
        void setSimulationParams(class IceHaloSimulationParams const &);

    // RVA: 0x2B4 | Ordinal: 693
        void update(class osg::Vec3f const &);

    // RVA: 0x6E | Ordinal: 111
        void _IceHaloWrapper(void);
};

} // namespace enlight

// DCS_OPS_RE_GRAPHICSCORE.DLL_ICEHALOWRAPPER_HPP
