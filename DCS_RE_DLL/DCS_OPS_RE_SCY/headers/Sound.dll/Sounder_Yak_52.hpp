#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_Yak_52
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_Yak_52
{
public:

    // RVA: 0x7C | Ordinal: 125
        void Sounder_Yak_52(void);

    // RVA: 0x246 | Ordinal: 583
        void doCalculateAirmassParameters(float, float, float *, float *, float *);

    // RVA: 0x24E | Ordinal: 591
        void doCalculateGroundMovementParameters(float, float *, float *);

    // RVA: 0x287 | Ordinal: 648
        void doClearCockpit(void);

    // RVA: 0x2CB | Ordinal: 716
        void doInit(class Sound::Host *);

    // RVA: 0x2FF | Ordinal: 768
        void doInitCockpit(class Sound::Host *);

    // RVA: 0x339 | Ordinal: 826
        void doUpdate(double);

    // RVA: 0x39A | Ordinal: 923
        void onCustomSound(int, int, struct SND_SourceParams *, double, double, double);

    // RVA: 0x105 | Ordinal: 262
        void _Sounder_Yak_52(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_YAK_52_HPP
