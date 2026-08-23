#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_F_117_Base
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_F_117_Base
{
public:

    // RVA: 0x26 | Ordinal: 39
        void Sounder_F_117_Base(void);

    // RVA: 0x23A | Ordinal: 571
        void doCalculateAirmassParameters(float, float, float *, float *, float *);

    // RVA: 0x2A2 | Ordinal: 675
        void doInit(class Sound::Host *);

    // RVA: 0x317 | Ordinal: 792
        void doUpdate(double);

    // RVA: 0x3E9 | Ordinal: 1002
        void playEngineSounds(enum Sound::Sounder_F_117_Base::F117_ExtSndSources, bool, float, float);

    // RVA: 0x409 | Ordinal: 1034
        void updateAPU(void);

    // RVA: 0x41A | Ordinal: 1051
        void updateCoreDelta(int, float, float);

    // RVA: 0x434 | Ordinal: 1077
        void updateEngineSounds(bool, float, bool, float);

    // RVA: 0xAF | Ordinal: 176
        void _Sounder_F_117_Base(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_F_117_BASE_HPP
