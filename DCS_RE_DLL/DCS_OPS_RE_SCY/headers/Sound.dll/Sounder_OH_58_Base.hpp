#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_OH_58_Base
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_OH_58_Base
{
public:

    // RVA: 0x56 | Ordinal: 87
        void Sounder_OH_58_Base(void);

    // RVA: 0x257 | Ordinal: 600
        void doCalculateRotorDynamicGain(void);

    // RVA: 0x2B9 | Ordinal: 698
        void doInit(class Sound::Host *);

    // RVA: 0x32A | Ordinal: 811
        void doUpdate(double);

    // RVA: 0x40D | Ordinal: 1038
        void updateAPU(float);

    // RVA: 0x41D | Ordinal: 1054
        void updateCoreDelta(int, float, float);

    // RVA: 0x42C | Ordinal: 1069
        void updateEngine(enum Sound::Sounder_OH_58_Base::OH58_ExtSndSources, float, bool, float);

    // RVA: 0xDF | Ordinal: 224
        void _Sounder_OH_58_Base(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_OH_58_BASE_HPP
