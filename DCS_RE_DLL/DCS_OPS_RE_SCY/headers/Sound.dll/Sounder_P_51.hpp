#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_P_51
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_P_51
{
public:

    // RVA: 0x5B | Ordinal: 92
        void Sounder_P_51(void);

    // RVA: 0x243 | Ordinal: 580
        void doCalculateAirmassParameters(float, float, float *, float *, float *);

    // RVA: 0x27F | Ordinal: 640
        void doClearCockpit(void);

    // RVA: 0x2BB | Ordinal: 700
        void doInit(class Sound::Host *);

    // RVA: 0x2F6 | Ordinal: 759
        void doInitCockpit(class Sound::Host *);

    // RVA: 0x32C | Ordinal: 813
        void doUpdate(double);

    // RVA: 0x396 | Ordinal: 919
        void onCustomSound(int, int, struct SND_SourceParams *, double, double, double);

    // RVA: 0x3A1 | Ordinal: 930
        void onFlapsMovement(double, double, int);

    // RVA: 0x3B4 | Ordinal: 949
        void onGunFire(bool, int, bool);

    // RVA: 0x3D0 | Ordinal: 977
        void onUndercarriageDoorSlam(int, double);

    // RVA: 0x3DB | Ordinal: 988
        void onUndercarriageLock(int, double);

    // RVA: 0x3E4 | Ordinal: 997
        void onUndercarriageStrutMove(bool, struct ed::array<char, 3> const *, double, bool);

    // RVA: 0xE4 | Ordinal: 229
        void _Sounder_P_51(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_P_51_HPP
