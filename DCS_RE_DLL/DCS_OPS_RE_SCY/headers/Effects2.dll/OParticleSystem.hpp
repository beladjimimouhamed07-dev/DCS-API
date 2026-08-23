#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Effects2.dll
// Class: OParticleSystem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Effects {

class OParticleSystem
{
public:

    // RVA: 0x4 | Ordinal: 5
        void OParticleSystem(class Effects::OParticleSystem const &);

    // RVA: 0x5 | Ordinal: 6
        void OParticleSystem(void);

    // RVA: 0x24 | Ordinal: 37
        void addEmitter(class Effects::OEffectSource *, struct Effects::OPSManager::OEmitterInfo const &);

    // RVA: 0x2E | Ordinal: 47
        void cleanupDeadEmitters(void);

    // RVA: 0x32 | Ordinal: 51
        void deleteEmitter(unsigned int);

    // RVA: 0x48 | Ordinal: 73
        void getBoundingSphereRadius(float &) const;

    // RVA: 0x4B | Ordinal: 76
        void getEffectInfo(void) const;

    // RVA: 0x4F | Ordinal: 80
        void getEmittersCount(void) const;

    // RVA: 0x56 | Ordinal: 87
        void getOEmitterParamBlock(int);

    // RVA: 0x57 | Ordinal: 88
        void getPos(void) const;

    // RVA: 0x58 | Ordinal: 89
        void getPresetId(void) const;

    // RVA: 0x5A | Ordinal: 91
        void getTransform(void);

    // RVA: 0x5B | Ordinal: 92
        void getTransform(void) const;

    // RVA: 0x60 | Ordinal: 97
        void init(struct Effects::OParticleSystemInitializer const &);

    // RVA: 0x61 | Ordinal: 98
        void init(enum Effects::OEffectEnum::OEffectType, unsigned int);

    // RVA: 0x67 | Ordinal: 104
        void isInitialized(void) const;

    // RVA: 0x69 | Ordinal: 106
        void isStatic(void) const;

    // RVA: 0x74 | Ordinal: 117
        void release(void);

    // RVA: 0x78 | Ordinal: 121
        void releaseEmitters(void);

    // RVA: 0x7B | Ordinal: 124
        void render(struct render::SceneRenderContext *);

    // RVA: 0x87 | Ordinal: 136
        void setPos(class osg::Vec3d const &);

    // RVA: 0x88 | Ordinal: 137
        void setScale(float);

    // RVA: 0x89 | Ordinal: 138
        void setStartPos(class osg::Vec3d const &);

    // RVA: 0x8A | Ordinal: 139
        void setTransform(class osg::Matrixd);

    // RVA: 0x8B | Ordinal: 140
        void testClippingVolume(struct render::ClippingVolume const &) const;

    // RVA: 0x8D | Ordinal: 142
        void update(double);

    // RVA: 0x11 | Ordinal: 18
        void _OParticleSystem(void);
};

} // namespace Effects

// DCS_OPS_RE_EFFECTS2.DLL_OPARTICLESYSTEM_HPP
