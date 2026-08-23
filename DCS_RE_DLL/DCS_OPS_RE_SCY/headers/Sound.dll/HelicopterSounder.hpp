#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: HelicopterSounder
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class HelicopterSounder
{
public:

    // RVA: 0x216 | Ordinal: 535
        void clearCockpit(void);

    // RVA: 0x24F | Ordinal: 592
        void doCalculateRotorDynamicGain(void);

    // RVA: 0x350 | Ordinal: 849
        void init(class IwoLA *, struct Aircraft_Descriptor const *, class Sound::Host *, enum Sound::Sounder::SoundLOD);

    // RVA: 0x369 | Ordinal: 874
        void initCockpit(class Sound::Host *);

    // RVA: 0x37E | Ordinal: 895
        void onCustomSound(int, int, struct SND_SourceParams *, double, double, double);

    // RVA: 0x3FC | Ordinal: 1021
        void update(double);

    // RVA: 0x84 | Ordinal: 133
        void _HelicopterSounder(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_HELICOPTERSOUNDER_HPP
