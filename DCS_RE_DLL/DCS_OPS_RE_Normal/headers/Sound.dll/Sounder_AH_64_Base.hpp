#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_AH_64_Base
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_AH_64_Base
{
public:

    // RVA: 0x3 | Ordinal: 4
        void Sounder_AH_64_Base(void);

    // RVA: 0x251 | Ordinal: 594
        void doCalculateRotorDynamicGain(void);

    // RVA: 0x25D | Ordinal: 606
        void doClearCockpit(void);

    // RVA: 0x28C | Ordinal: 653
        void doInit(class Sound::Host *);

    // RVA: 0x2CF | Ordinal: 720
        void doInitCockpit(class Sound::Host *);

    // RVA: 0x305 | Ordinal: 774
        void doUpdate(double);

    // RVA: 0x382 | Ordinal: 899
        void onCustomSound(int, int, struct SND_SourceParams *, double, double, double);

    // RVA: 0x3A7 | Ordinal: 936
        void onGunFire(bool, int, bool);

    // RVA: 0x3B6 | Ordinal: 951
        void onGunFireImpl(bool, int, bool);

    // RVA: 0x403 | Ordinal: 1028
        void updateAPU(void);

    // RVA: 0x415 | Ordinal: 1046
        void updateCoreDelta(int, float, float);

    // RVA: 0x421 | Ordinal: 1058
        void updateDoor(int, int, float, float);

    // RVA: 0x426 | Ordinal: 1063
        void updateEngine(enum Sound::Sounder_AH_64_Base::AH64_ExtSndSources, float, float, bool, float);

    // RVA: 0x437 | Ordinal: 1080
        void updateTurbDelta(int, float, float);

    // RVA: 0x8B | Ordinal: 140
        void _Sounder_AH_64_Base(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_AH_64_BASE_HPP
