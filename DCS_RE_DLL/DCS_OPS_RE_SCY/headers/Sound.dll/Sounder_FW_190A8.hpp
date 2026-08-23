#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_FW_190A8
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_FW_190A8
{
public:

    // RVA: 0x23 | Ordinal: 36
        void Sounder_FW_190A8(void);

    // RVA: 0x238 | Ordinal: 569
        void doCalculateAirmassParameters(float, float, float *, float *, float *);

    // RVA: 0x268 | Ordinal: 617
        void doClearCockpit(void);

    // RVA: 0x2A0 | Ordinal: 673
        void doInit(class Sound::Host *);

    // RVA: 0x2DB | Ordinal: 732
        void doInitCockpit(class Sound::Host *);

    // RVA: 0x315 | Ordinal: 790
        void doUpdate(double);

    // RVA: 0x389 | Ordinal: 906
        void onCustomSound(int, int, struct SND_SourceParams *, double, double, double);

    // RVA: 0x3A9 | Ordinal: 938
        void onGunFire(bool, int, bool);

    // RVA: 0xAC | Ordinal: 173
        void _Sounder_FW_190A8(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_FW_190A8_HPP
