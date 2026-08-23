#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_F_16
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_F_16
{
public:

    // RVA: 0x2A | Ordinal: 43
        void Sounder_F_16(void);

    // RVA: 0x23B | Ordinal: 572
        void doCalculateAirmassParameters(float, float, float *, float *, float *);

    // RVA: 0x26B | Ordinal: 620
        void doClearCockpit(void);

    // RVA: 0x2A4 | Ordinal: 677
        void doInit(class Sound::Host *);

    // RVA: 0x2DE | Ordinal: 735
        void doInitCockpit(class Sound::Host *);

    // RVA: 0x319 | Ordinal: 794
        void doUpdate(double);

    // RVA: 0x340 | Ordinal: 833
        void getOverridenCategories(void);

    // RVA: 0x38B | Ordinal: 908
        void onCustomSound(int, int, struct SND_SourceParams *, double, double, double);

    // RVA: 0x3CA | Ordinal: 971
        void onUndercarriageDoorSlam(int, double);

    // RVA: 0x3D5 | Ordinal: 982
        void onUndercarriageLock(int, double);

    // RVA: 0x3DF | Ordinal: 992
        void onUndercarriageStrutMove(bool, struct ed::array<char, 3> const *, double, bool);

    // RVA: 0xB3 | Ordinal: 180
        void _Sounder_F_16(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_F_16_HPP
