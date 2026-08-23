#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_MiG_29
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_MiG_29
{
public:

    // RVA: 0x4C | Ordinal: 77
        void Sounder_MiG_29(void);

    // RVA: 0x240 | Ordinal: 577
        void doCalculateAirmassParameters(float, float, float *, float *, float *);

    // RVA: 0x277 | Ordinal: 632
        void doClearCockpit(void);

    // RVA: 0x2B2 | Ordinal: 691
        void doInit(class Sound::Host *);

    // RVA: 0x2EB | Ordinal: 748
        void doInitCockpit(class Sound::Host *);

    // RVA: 0x326 | Ordinal: 807
        void doUpdate(double);

    // RVA: 0x363 | Ordinal: 868
        void initAlias(void);

    // RVA: 0x364 | Ordinal: 869
        void initAliasForCockpit(void);

    // RVA: 0x3AF | Ordinal: 944
        void onGunFire(bool, int, bool);

    // RVA: 0x42A | Ordinal: 1067
        void updateEngine(int, float, float, bool, float);

    // RVA: 0x438 | Ordinal: 1081
        void update_source(class Sound::Source &, float, float, float);

    // RVA: 0xD5 | Ordinal: 214
        void _Sounder_MiG_29(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_MIG_29_HPP
