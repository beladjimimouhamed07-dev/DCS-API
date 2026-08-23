#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_SpitfireLFMkIX
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_SpitfireLFMkIX
{
public:

    // RVA: 0x6D | Ordinal: 110
        void Sounder_SpitfireLFMkIX(void);

    // RVA: 0x245 | Ordinal: 582
        void doCalculateAirmassParameters(float, float, float *, float *, float *);

    // RVA: 0x282 | Ordinal: 643
        void doClearCockpit(void);

    // RVA: 0x2C2 | Ordinal: 707
        void doInit(class Sound::Host *);

    // RVA: 0x2F9 | Ordinal: 762
        void doInitCockpit(class Sound::Host *);

    // RVA: 0x331 | Ordinal: 818
        void doUpdate(double);

    // RVA: 0x398 | Ordinal: 921
        void onCustomSound(int, int, struct SND_SourceParams *, double, double, double);

    // RVA: 0x3A5 | Ordinal: 934
        void onFuelPump(bool, bool, bool);

    // RVA: 0x3B5 | Ordinal: 950
        void onGunFire(bool, int, bool);

    // RVA: 0xF6 | Ordinal: 247
        void _Sounder_SpitfireLFMkIX(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_SPITFIRELFMKIX_HPP
