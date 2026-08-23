#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_MiG_15
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_MiG_15
{
public:

    // RVA: 0x49 | Ordinal: 74
        void Sounder_MiG_15(void);

    // RVA: 0x221 | Ordinal: 546
        void createEngineSounder(void);

    // RVA: 0x23F | Ordinal: 576
        void doCalculateAirmassParameters(float, float, float *, float *, float *);

    // RVA: 0x24C | Ordinal: 589
        void doCalculateGroundMovementParameters(float, float *, float *);

    // RVA: 0x276 | Ordinal: 631
        void doClearCockpit(void);

    // RVA: 0x2B1 | Ordinal: 690
        void doInit(class Sound::Host *);

    // RVA: 0x2EA | Ordinal: 747
        void doInitCockpit(class Sound::Host *);

    // RVA: 0x325 | Ordinal: 806
        void doUpdate(double);

    // RVA: 0x344 | Ordinal: 837
        void getOverridenCategories(void);

    // RVA: 0x390 | Ordinal: 913
        void onCustomSound(int, int, struct SND_SourceParams *, double, double, double);

    // RVA: 0x3AE | Ordinal: 943
        void onGunFire(bool, int, bool);

    // RVA: 0x3CE | Ordinal: 975
        void onUndercarriageDoorSlam(int, double);

    // RVA: 0x3D9 | Ordinal: 986
        void onUndercarriageLock(int, double);

    // RVA: 0x3E2 | Ordinal: 995
        void onUndercarriageStrutMove(bool, struct ed::array<char, 3> const *, double, bool);

    // RVA: 0x3F1 | Ordinal: 1010
        void setAliasForCockpit(void);

    // RVA: 0xD2 | Ordinal: 211
        void _Sounder_MiG_15(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_MIG_15_HPP
