#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_UH_1H
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_UH_1H
{
public:

    // RVA: 0x76 | Ordinal: 119
        void Sounder_UH_1H(void);

    // RVA: 0x285 | Ordinal: 646
        void doClearCockpit(void);

    // RVA: 0x2C6 | Ordinal: 711
        void doInit(class Sound::Host *);

    // RVA: 0x2FD | Ordinal: 766
        void doInitCockpit(class Sound::Host *);

    // RVA: 0x334 | Ordinal: 821
        void doUpdate(double);

    // RVA: 0x399 | Ordinal: 922
        void onCustomSound(int, int, struct SND_SourceParams *, double, double, double);

    // RVA: 0x3BD | Ordinal: 958
        void onGunpodFire(bool, int, int, int);

    // RVA: 0x413 | Ordinal: 1044
        void updateAirmassSound(double);

    // RVA: 0x424 | Ordinal: 1061
        void updateDoor(int, int, float, float);

    // RVA: 0xFF | Ordinal: 256
        void _Sounder_UH_1H(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_UH_1H_HPP
