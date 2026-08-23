#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: enlight.dll
// Class: IndirectLightVolumeBuilder
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace ILV {

class IndirectLightVolumeBuilder
{
public:

    // RVA: 0x8F | Ordinal: 144
        void drawDebugStuff(class osg::Matrixf const &, class osg::Vec3f const &);

    // RVA: 0x90 | Ordinal: 145
        void drawGridKnots(class osg::Matrixf const &, class osg::Vec3f const &, class osg::Vec4f const &);

    // RVA: 0x93 | Ordinal: 148
        void fastPrecomputeGridKnots(struct ILV::IndirectLightVolumeInitializer const &, class osg::Vec3f const &, class Graphics::ICubeRenderer &);

    // RVA: 0xA7 | Ordinal: 168
        void getStatistics(unsigned int *, unsigned int *, unsigned int *, unsigned int *);

    // RVA: 0xB2 | Ordinal: 179
        void init(void);

    // RVA: 0xB4 | Ordinal: 181
        void invalidateGrid(void);

    // RVA: 0xB7 | Ordinal: 184
        void isEnabled(void);

    // RVA: 0xB8 | Ordinal: 185
        void isFastMode(void) const;

    // RVA: 0xBD | Ordinal: 190
        void isValid(void) const;

    // RVA: 0xC6 | Ordinal: 199
        void loadVolume(class io::IBinaryFileR &);

    // RVA: 0xCE | Ordinal: 207
        void precomputeGridKnots(struct ILV::IndirectLightVolumeInitializer const &, class Graphics::ICubeRenderer &);

    // RVA: 0xCD | Ordinal: 206
        void precomputeGridKnots2(struct ILV::IndirectLightVolumeInitializer const &, class Graphics::ICubeRenderer &);

    // RVA: 0xD7 | Ordinal: 216
        void release(void);

    // RVA: 0xE7 | Ordinal: 232
        void resolveKnots(class osg::Vec3f const &, class osg::Matrixf const &);

    // RVA: 0xE8 | Ordinal: 233
        void saveVolume(char const *);

    // RVA: 0xF1 | Ordinal: 242
        void setFastMode(bool);

    // RVA: 0xFE | Ordinal: 255
        void testSH(struct ILV::IndirectLightVolumeInitializer const &, class Graphics::ICubeRenderer &);

    // RVA: 0xFF | Ordinal: 256
        void testSHApproximation(void);
};

} // namespace ILV

// DCS_OPS_RE_ENLIGHT.DLL_INDIRECTLIGHTVOLUMEBUILDER_HPP
