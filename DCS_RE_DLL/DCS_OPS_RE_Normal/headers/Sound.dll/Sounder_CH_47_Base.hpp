#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_CH_47_Base
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_CH_47_Base
{
public:

    // RVA: 0x15 | Ordinal: 22
        void Sounder_CH_47_Base(void);

    // RVA: 0x252 | Ordinal: 595
        void doCalculateRotorDynamicGain(void);

    // RVA: 0x261 | Ordinal: 610
        void doClearCockpit(void);

    // RVA: 0x295 | Ordinal: 662
        void doInit(class Sound::Host *);

    // RVA: 0x2D4 | Ordinal: 725
        void doInitCockpit(class Sound::Host *);

    // RVA: 0x30B | Ordinal: 780
        void doUpdate(double);

    // RVA: 0x384 | Ordinal: 901
        void onCustomSound(int, int, struct SND_SourceParams *, double, double, double);

    // RVA: 0x3B9 | Ordinal: 954
        void onGunpodFire(bool, int, int, int);

    // RVA: 0x406 | Ordinal: 1031
        void updateAPU(void);

    // RVA: 0x411 | Ordinal: 1042
        void updateAirBypass(enum Sound::Sounder_CH_47_Base::CH47_ExtSndSources, float, float);

    // RVA: 0x427 | Ordinal: 1064
        void updateEngine(int, float, bool, float);

    // RVA: 0x42F | Ordinal: 1072
        void updateEngineCompressor(enum Sound::Sounder_CH_47_Base::CH47_ExtSndSources, float);

    // RVA: 0x9E | Ordinal: 159
        void _Sounder_CH_47_Base(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_CH_47_BASE_HPP
