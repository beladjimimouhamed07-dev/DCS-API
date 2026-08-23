#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: WWIIPlaneSounder
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class WWIIPlaneSounder
{
public:

    // RVA: 0x81 | Ordinal: 130
        void WWIIPlaneSounder(void);

    // RVA: 0x21B | Ordinal: 540
        void clearCockpit(void);

    // RVA: 0x22F | Ordinal: 560
        void createWheelBrakeHisses(void);

    // RVA: 0x362 | Ordinal: 867
        void init(class IwoLA *, struct Aircraft_Descriptor const *, class Sound::Host *, enum Sound::Sounder::SoundLOD);

    // RVA: 0x370 | Ordinal: 881
        void initCockpit(class Sound::Host *);

    // RVA: 0x39C | Ordinal: 925
        void onCustomSound(int, int, struct SND_SourceParams *, double, double, double);

    // RVA: 0x10B | Ordinal: 268
        void _WWIIPlaneSounder(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_WWIIPLANESOUNDER_HPP
