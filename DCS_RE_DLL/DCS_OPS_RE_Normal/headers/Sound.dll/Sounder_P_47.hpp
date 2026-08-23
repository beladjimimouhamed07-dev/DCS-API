#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_P_47
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_P_47
{
public:

    // RVA: 0x57 | Ordinal: 88
        void Sounder_P_47(void);

    // RVA: 0x242 | Ordinal: 579
        void doCalculateAirmassParameters(float, float, float *, float *, float *);

    // RVA: 0x24D | Ordinal: 590
        void doCalculateGroundMovementParameters(float, float *, float *);

    // RVA: 0x27E | Ordinal: 639
        void doClearCockpit(void);

    // RVA: 0x2BA | Ordinal: 699
        void doInit(class Sound::Host *);

    // RVA: 0x2F2 | Ordinal: 755
        void doInitCockpit(class Sound::Host *);

    // RVA: 0x32B | Ordinal: 812
        void doUpdate(double);

    // RVA: 0x379 | Ordinal: 890
        void onCanopyTearOff(int);

    // RVA: 0x395 | Ordinal: 918
        void onCustomSound(int, int, struct SND_SourceParams *, double, double, double);

    // RVA: 0x3B3 | Ordinal: 948
        void onGunFire(bool, int, bool);

    // RVA: 0xE0 | Ordinal: 225
        void _Sounder_P_47(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_P_47_HPP
