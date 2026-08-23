#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_L_39
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_L_39
{
public:

    // RVA: 0x42 | Ordinal: 67
        void Sounder_L_39(void);

    // RVA: 0x23E | Ordinal: 575
        void doCalculateAirmassParameters(float, float, float *, float *, float *);

    // RVA: 0x24B | Ordinal: 588
        void doCalculateGroundMovementParameters(float, float *, float *);

    // RVA: 0x272 | Ordinal: 627
        void doClearCockpit(void);

    // RVA: 0x2AD | Ordinal: 686
        void doInit(class Sound::Host *);

    // RVA: 0x2E6 | Ordinal: 743
        void doInitCockpit(class Sound::Host *);

    // RVA: 0x321 | Ordinal: 802
        void doUpdate(double);

    // RVA: 0x343 | Ordinal: 836
        void getOverridenCategories(void);

    // RVA: 0x38E | Ordinal: 911
        void onCustomSound(int, int, struct SND_SourceParams *, double, double, double);

    // RVA: 0x3CD | Ordinal: 974
        void onUndercarriageDoorSlam(int, double);

    // RVA: 0x3D8 | Ordinal: 985
        void onUndercarriageLock(int, double);

    // RVA: 0xCB | Ordinal: 204
        void _Sounder_L_39(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_L_39_HPP
