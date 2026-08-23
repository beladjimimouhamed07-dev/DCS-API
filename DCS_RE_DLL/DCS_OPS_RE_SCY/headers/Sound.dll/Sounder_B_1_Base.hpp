#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_B_1_Base
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_B_1_Base
{
public:

    // RVA: 0xF | Ordinal: 16
        void Sounder_B_1_Base(void);

    // RVA: 0x232 | Ordinal: 563
        void doCalculateAirmassParameters(float, float, float *, float *, float *);

    // RVA: 0x292 | Ordinal: 659
        void doInit(class Sound::Host *);

    // RVA: 0x309 | Ordinal: 778
        void doUpdate(double);

    // RVA: 0x3E6 | Ordinal: 999
        void playEngineSounds(enum Sound::Sounder_B_1_Base::B1_ExtSndSources, bool, float, float);

    // RVA: 0x404 | Ordinal: 1029
        void updateAPU(void);

    // RVA: 0x416 | Ordinal: 1047
        void updateCoreDelta(int, float, float);

    // RVA: 0x431 | Ordinal: 1074
        void updateEngineSounds(bool, float, bool, float);

    // RVA: 0x97 | Ordinal: 152
        void _Sounder_B_1_Base(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_B_1_BASE_HPP
