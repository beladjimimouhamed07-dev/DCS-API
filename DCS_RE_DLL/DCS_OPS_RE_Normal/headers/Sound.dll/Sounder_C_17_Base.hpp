#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_C_17_Base
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_C_17_Base
{
public:

    // RVA: 0x18 | Ordinal: 25
        void Sounder_C_17_Base(void);

    // RVA: 0x234 | Ordinal: 565
        void doCalculateAirmassParameters(float, float, float *, float *, float *);

    // RVA: 0x297 | Ordinal: 664
        void doInit(class Sound::Host *);

    // RVA: 0x30D | Ordinal: 782
        void doUpdate(double);

    // RVA: 0x3E8 | Ordinal: 1001
        void playEngineSounds(enum Sound::Sounder_C_17_Base::C17_ExtSndSources, bool, float, float);

    // RVA: 0x408 | Ordinal: 1033
        void updateAPU(void);

    // RVA: 0x419 | Ordinal: 1050
        void updateCoreDelta(int, float, float);

    // RVA: 0x433 | Ordinal: 1076
        void updateEngineSounds(bool, float, bool, float);

    // RVA: 0xA1 | Ordinal: 162
        void _Sounder_C_17_Base(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_C_17_BASE_HPP
