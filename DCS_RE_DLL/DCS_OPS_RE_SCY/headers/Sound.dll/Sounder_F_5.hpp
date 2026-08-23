#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_F_5
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_F_5
{
public:

    // RVA: 0x30 | Ordinal: 49
        void Sounder_F_5(void);

    // RVA: 0x21D | Ordinal: 542
        void createEngineSounder(void);

    // RVA: 0x23C | Ordinal: 573
        void doCalculateAirmassParameters(float, float, float *, float *, float *);

    // RVA: 0x249 | Ordinal: 586
        void doCalculateGroundMovementParameters(float, float *, float *);

    // RVA: 0x26C | Ordinal: 621
        void doClearCockpit(void);

    // RVA: 0x2A5 | Ordinal: 678
        void doInit(class Sound::Host *);

    // RVA: 0x2DF | Ordinal: 736
        void doInitCockpit(class Sound::Host *);

    // RVA: 0x31A | Ordinal: 795
        void doUpdate(double);

    // RVA: 0x341 | Ordinal: 834
        void getOverridenCategories(void);

    // RVA: 0x38C | Ordinal: 909
        void onCustomSound(int, int, struct SND_SourceParams *, double, double, double);

    // RVA: 0x3AB | Ordinal: 940
        void onGunFire(bool, int, bool);

    // RVA: 0x3CB | Ordinal: 972
        void onUndercarriageDoorSlam(int, double);

    // RVA: 0x3D6 | Ordinal: 983
        void onUndercarriageLock(int, double);

    // RVA: 0x3E0 | Ordinal: 993
        void onUndercarriageStrutMove(bool, struct ed::array<char, 3> const *, double, bool);

    // RVA: 0x3ED | Ordinal: 1006
        void setAliasForCockpit(void);

    // RVA: 0xB9 | Ordinal: 186
        void _Sounder_F_5(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_F_5_HPP
