#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Effects2.dll
// Class: OPSManager
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Effects {

class OPSManager
{
public:

    // RVA: 0x3 | Ordinal: 4
        void OPSManager(void);

    // RVA: 0x23 | Ordinal: 36
        void addCustomPreset(enum Effects::OEffectEnum::OEffectType, char const *, char const *);

    // RVA: 0x25 | Ordinal: 38
        void addEmitterToCompute(class Effects::OEffectSource *);

    // RVA: 0x31 | Ordinal: 50
        void compute(class osg::Vec3f const &);

    // RVA: 0x3D | Ordinal: 62
        void drawSphere(class osg::Vec3f const &, class osg::Matrixf const &, float, class osg::Vec4f const &) const;

    // RVA: 0x4C | Ordinal: 77
        void getEffectPresetId(enum Effects::OEffectEnum::OEffectType, char const *, bool) const;

    // RVA: 0x4E | Ordinal: 79
        void getEffectsEnvironment(void);

    // RVA: 0x5F | Ordinal: 96
        void init(class std::shared_ptr<class edvfs::IVFSandbox>);

    // RVA: 0x71 | Ordinal: 114
        void preloadEffectsInfo(void);

    // RVA: 0x7A | Ordinal: 123
        void reloadEffectInfo(enum Effects::OEffectEnum::OEffectType);

    // RVA: 0x7E | Ordinal: 127
        void resetEffects(void);

    // RVA: 0x7F | Ordinal: 128
        void resetStatistics(void);

    // RVA: 0x84 | Ordinal: 133
        void setEffectsAtmosphereSampler(struct GraphicsCore::IAtmosphereSampler *);

    // RVA: 0x85 | Ordinal: 134
        void setEnvironment(class Effects::OEnvironment *);

    // RVA: 0x8C | Ordinal: 141
        void update(void);

    // RVA: 0x8F | Ordinal: 144
        void updatePSystems(double);

    // RVA: 0x91 | Ordinal: 146
        void waitEffectsLoading(void);

    // RVA: 0x10 | Ordinal: 17
        void _OPSManager(void);
};

} // namespace Effects

// DCS_OPS_RE_EFFECTS2.DLL_OPSMANAGER_HPP
