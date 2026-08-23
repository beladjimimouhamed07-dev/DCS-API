#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_F_86
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_F_86
{
public:

    // RVA: 0x34 | Ordinal: 53
        void Sounder_F_86(void);

    // RVA: 0x21F | Ordinal: 544
        void createEngineSounder(void);

    // RVA: 0x23D | Ordinal: 574
        void doCalculateAirmassParameters(float, float, float *, float *, float *);

    // RVA: 0x24A | Ordinal: 587
        void doCalculateGroundMovementParameters(float, float *, float *);

    // RVA: 0x26D | Ordinal: 622
        void doClearCockpit(void);

    // RVA: 0x2A6 | Ordinal: 679
        void doInit(class Sound::Host *);

    // RVA: 0x2E0 | Ordinal: 737
        void doInitCockpit(class Sound::Host *);

    // RVA: 0x31B | Ordinal: 796
        void doUpdate(double);

    // RVA: 0x342 | Ordinal: 835
        void getOverridenCategories(void);

    // RVA: 0x38D | Ordinal: 910
        void onCustomSound(int, int, struct SND_SourceParams *, double, double, double);

    // RVA: 0x3AC | Ordinal: 941
        void onGunFire(bool, int, bool);

    // RVA: 0x3CC | Ordinal: 973
        void onUndercarriageDoorSlam(int, double);

    // RVA: 0x3D7 | Ordinal: 984
        void onUndercarriageLock(int, double);

    // RVA: 0x3E1 | Ordinal: 994
        void onUndercarriageStrutMove(bool, struct ed::array<char, 3> const *, double, bool);

    // RVA: 0x3EF | Ordinal: 1008
        void setAliasForCockpit(void);

    // RVA: 0xBD | Ordinal: 190
        void _Sounder_F_86(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_F_86_HPP
