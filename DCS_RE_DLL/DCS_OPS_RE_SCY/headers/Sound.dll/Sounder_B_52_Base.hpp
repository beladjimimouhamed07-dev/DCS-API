#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_B_52_Base
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_B_52_Base
{
public:

    // RVA: 0x11 | Ordinal: 18
        void Sounder_B_52_Base(void);

    // RVA: 0x233 | Ordinal: 564
        void doCalculateAirmassParameters(float, float, float *, float *, float *);

    // RVA: 0x293 | Ordinal: 660
        void doInit(class Sound::Host *);

    // RVA: 0x30A | Ordinal: 779
        void doUpdate(double);

    // RVA: 0x3E7 | Ordinal: 1000
        void playEngineSounds(enum Sound::Sounder_B_52_Base::B52_ExtSndSources, bool, float, float);

    // RVA: 0x405 | Ordinal: 1030
        void updateAPU(void);

    // RVA: 0x417 | Ordinal: 1048
        void updateCoreDelta(int, float, float);

    // RVA: 0x432 | Ordinal: 1075
        void updateEngineSounds(bool, float, bool, float);

    // RVA: 0x99 | Ordinal: 154
        void _Sounder_B_52_Base(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_B_52_BASE_HPP
