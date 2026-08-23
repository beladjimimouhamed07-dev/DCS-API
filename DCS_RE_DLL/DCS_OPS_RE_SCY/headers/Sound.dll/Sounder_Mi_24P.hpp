#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_Mi_24P
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_Mi_24P
{
public:

    // RVA: 0x50 | Ordinal: 81
        void Sounder_Mi_24P(void);

    // RVA: 0x255 | Ordinal: 598
        void doCalculateRotorDynamicGain(void);

    // RVA: 0x279 | Ordinal: 634
        void doClearCockpit(void);

    // RVA: 0x2B4 | Ordinal: 693
        void doInit(class Sound::Host *);

    // RVA: 0x2ED | Ordinal: 750
        void doInitCockpit(class Sound::Host *);

    // RVA: 0x327 | Ordinal: 808
        void doUpdate(double);

    // RVA: 0x392 | Ordinal: 915
        void onCustomSound(int, int, struct SND_SourceParams *, double, double, double);

    // RVA: 0x3B0 | Ordinal: 945
        void onGunFire(bool, int, bool);

    // RVA: 0x3BB | Ordinal: 956
        void onGunpodFire(bool, int, int, int);

    // RVA: 0x3CF | Ordinal: 976
        void onUndercarriageDoorSlam(int, double);

    // RVA: 0x3DA | Ordinal: 987
        void onUndercarriageLock(int, double);

    // RVA: 0x3E3 | Ordinal: 996
        void onUndercarriageStrutMove(bool, struct ed::array<char, 3> const *, double, bool);

    // RVA: 0x40B | Ordinal: 1036
        void updateAPU(float);

    // RVA: 0x412 | Ordinal: 1043
        void updateAirBypass(enum Sound::Sounder_Mi_24P::MI24_SndSources, float, float);

    // RVA: 0x422 | Ordinal: 1059
        void updateDoor(int, int, float, float);

    // RVA: 0x42B | Ordinal: 1068
        void updateEngine(enum Sound::Sounder_Mi_24P::MI24_SndSources, float, float);

    // RVA: 0x430 | Ordinal: 1073
        void updateEngineCompressor(enum Sound::Sounder_Mi_24P::MI24_SndSources, float);

    // RVA: 0xD9 | Ordinal: 218
        void _Sounder_Mi_24P(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_MI_24P_HPP
