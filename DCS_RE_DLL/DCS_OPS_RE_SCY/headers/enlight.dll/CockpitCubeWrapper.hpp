#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: enlight.dll
// Class: CockpitCubeWrapper
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class CockpitCubeWrapper
{
public:

    // RVA: 0x14 | Ordinal: 21
        void CockpitCubeWrapper(class CockpitCubeWrapper &&);

    // RVA: 0x15 | Ordinal: 22
        void CockpitCubeWrapper(class CockpitCubeWrapper const &);

    // RVA: 0x16 | Ordinal: 23
        void CockpitCubeWrapper(void);

    // RVA: 0x66 | Ordinal: 103
        void applyConfig(struct enlight::CockpitConfig const &);

    // RVA: 0x71 | Ordinal: 114
        void build(void);

    // RVA: 0xB0 | Ordinal: 177
        void init(void);

    // RVA: 0xBC | Ordinal: 189
        void isValid(void) const;

    // RVA: 0xCF | Ordinal: 208
        void prepare(class Graphics::ModelInstance *, class osg::Vec3f const &);

    // RVA: 0xD4 | Ordinal: 213
        void release(void);

    // RVA: 0x31 | Ordinal: 50
        void _CockpitCubeWrapper(void);
};

// DCS_OPS_RE_ENLIGHT.DLL_COCKPITCUBEWRAPPER_HPP
