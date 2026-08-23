#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_F6F_3
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_F6F_3
{
public:

    // RVA: 0x1F | Ordinal: 32
        void Sounder_F6F_3(void);

    // RVA: 0x236 | Ordinal: 567
        void doCalculateAirmassParameters(float, float, float *, float *, float *);

    // RVA: 0x248 | Ordinal: 585
        void doCalculateGroundMovementParameters(float, float *, float *);

    // RVA: 0x265 | Ordinal: 614
        void doClearCockpit(void);

    // RVA: 0x29D | Ordinal: 670
        void doInit(class Sound::Host *);

    // RVA: 0x2D8 | Ordinal: 729
        void doInitCockpit(class Sound::Host *);

    // RVA: 0x312 | Ordinal: 787
        void doUpdate(double);

    // RVA: 0x378 | Ordinal: 889
        void onCanopyTearOff(int);

    // RVA: 0x386 | Ordinal: 903
        void onCustomSound(int, int, struct SND_SourceParams *, double, double, double);

    // RVA: 0x3A8 | Ordinal: 937
        void onGunFire(bool, int, bool);

    // RVA: 0xA8 | Ordinal: 169
        void _Sounder_F6F_3(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_F6F_3_HPP
