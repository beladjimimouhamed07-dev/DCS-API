#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_Mi_8MT
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_Mi_8MT
{
public:

    // RVA: 0x52 | Ordinal: 83
        void Sounder_Mi_8MT(void);

    // RVA: 0x256 | Ordinal: 599
        void doCalculateRotorDynamicGain(void);

    // RVA: 0x27B | Ordinal: 636
        void doClearCockpit(void);

    // RVA: 0x2B6 | Ordinal: 695
        void doInit(class Sound::Host *);

    // RVA: 0x2EF | Ordinal: 752
        void doInitCockpit(class Sound::Host *);

    // RVA: 0x328 | Ordinal: 809
        void doUpdate(double);

    // RVA: 0x393 | Ordinal: 916
        void onCustomSound(int, int, struct SND_SourceParams *, double, double, double);

    // RVA: 0x3BC | Ordinal: 957
        void onGunpodFire(bool, int, int, int);

    // RVA: 0x40C | Ordinal: 1037
        void updateAPU(float);

    // RVA: 0x41C | Ordinal: 1053
        void updateCoreDelta(int, float, float);

    // RVA: 0x423 | Ordinal: 1060
        void updateDoor(int, int, float, float);

    // RVA: 0xDB | Ordinal: 220
        void _Sounder_Mi_8MT(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_MI_8MT_HPP
