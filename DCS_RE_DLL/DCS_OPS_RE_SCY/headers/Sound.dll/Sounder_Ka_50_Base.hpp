#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_Ka_50_Base
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_Ka_50_Base
{
public:

    // RVA: 0x41 | Ordinal: 66
        void Sounder_Ka_50_Base(void);

    // RVA: 0x254 | Ordinal: 597
        void doCalculateRotorDynamicGain(void);

    // RVA: 0x271 | Ordinal: 626
        void doClearCockpit(void);

    // RVA: 0x2AC | Ordinal: 685
        void doInit(class Sound::Host *);

    // RVA: 0x2E5 | Ordinal: 742
        void doInitCockpit(class Sound::Host *);

    // RVA: 0x320 | Ordinal: 801
        void doUpdate(double);

    // RVA: 0x33C | Ordinal: 829
        void getGunpodSndParams(int);

    // RVA: 0x3AD | Ordinal: 942
        void onGunFire(bool, int, bool);

    // RVA: 0x3B7 | Ordinal: 952
        void onGunFireImpl(bool, int, bool);

    // RVA: 0x3BA | Ordinal: 955
        void onGunpodFire(bool, int, int, int);

    // RVA: 0x40A | Ordinal: 1035
        void updateAPU(float);

    // RVA: 0x41B | Ordinal: 1052
        void updateCoreDelta(int, float, float);

    // RVA: 0x429 | Ordinal: 1066
        void updateEngine(enum Sound::Sounder_Ka_50_Base::KA50_ExtSndSources, float, bool, float);

    // RVA: 0xCA | Ordinal: 203
        void _Sounder_Ka_50_Base(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_KA_50_BASE_HPP
