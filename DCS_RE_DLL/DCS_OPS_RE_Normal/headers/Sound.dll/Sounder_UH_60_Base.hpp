#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_UH_60_Base
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_UH_60_Base
{
public:

    // RVA: 0x77 | Ordinal: 120
        void Sounder_UH_60_Base(void);

    // RVA: 0x259 | Ordinal: 602
        void doCalculateRotorDynamicGain(void);

    // RVA: 0x2C7 | Ordinal: 712
        void doInit(class Sound::Host *);

    // RVA: 0x335 | Ordinal: 822
        void doUpdate(double);

    // RVA: 0x410 | Ordinal: 1041
        void updateAPU(void);

    // RVA: 0x420 | Ordinal: 1057
        void updateCoreDelta(int, float, float);

    // RVA: 0x42E | Ordinal: 1071
        void updateEngine(enum Sound::Sounder_UH_60_Base::UH60_ExtSndSources, float, bool, float);

    // RVA: 0x100 | Ordinal: 257
        void _Sounder_UH_60_Base(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_UH_60_BASE_HPP
