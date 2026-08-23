#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: enlight.dll
// Class: IndirectLightVolume
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace ILV {

class IndirectLightVolume
{
public:

    // RVA: 0x1F | Ordinal: 32
        void IndirectLightVolume(void);

    // RVA: 0xA4 | Ordinal: 165
        void getGridParameters(unsigned int *, unsigned int *, unsigned int *, unsigned int *, class osg::BoundingBoxImpl<class osg::Vec3f> *) const;

    // RVA: 0xBA | Ordinal: 187
        void isLoaded(void) const;

    // RVA: 0xC5 | Ordinal: 198
        void loadVolume(class io::IBinaryFileR &);

    // RVA: 0xD6 | Ordinal: 215
        void release(void);

    // RVA: 0xE6 | Ordinal: 231
        void resolveKnots(class osg::Vec3f const &, class osg::Matrixf const &);

    // RVA: 0x37 | Ordinal: 56
        void _IndirectLightVolume(void);
};

} // namespace ILV

// DCS_OPS_RE_ENLIGHT.DLL_INDIRECTLIGHTVOLUME_HPP
