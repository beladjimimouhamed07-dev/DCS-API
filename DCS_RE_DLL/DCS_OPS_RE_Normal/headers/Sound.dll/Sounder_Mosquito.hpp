#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_Mosquito
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_Mosquito
{
public:

    // RVA: 0x53 | Ordinal: 84
        void Sounder_Mosquito(void);

    // RVA: 0x241 | Ordinal: 578
        void doCalculateAirmassParameters(float, float, float *, float *, float *);

    // RVA: 0x27C | Ordinal: 637
        void doClearCockpit(void);

    // RVA: 0x2B7 | Ordinal: 696
        void doInit(class Sound::Host *);

    // RVA: 0x2F0 | Ordinal: 753
        void doInitCockpit(class Sound::Host *);

    // RVA: 0x329 | Ordinal: 810
        void doUpdate(double);

    // RVA: 0x394 | Ordinal: 917
        void onCustomSound(int, int, struct SND_SourceParams *, double, double, double);

    // RVA: 0x3A4 | Ordinal: 933
        void onFuelPump(bool, bool, bool);

    // RVA: 0x3B1 | Ordinal: 946
        void onGunFire(bool, int, bool);

    // RVA: 0xDC | Ordinal: 221
        void _Sounder_Mosquito(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_MOSQUITO_HPP
