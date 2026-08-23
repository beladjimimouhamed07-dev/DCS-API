#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_AH_1W_Base
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_AH_1W_Base
{
public:

    // RVA: 0x1 | Ordinal: 2
        void Sounder_AH_1W_Base(void);

    // RVA: 0x250 | Ordinal: 593
        void doCalculateRotorDynamicGain(void);

    // RVA: 0x28B | Ordinal: 652
        void doInit(class Sound::Host *);

    // RVA: 0x304 | Ordinal: 773
        void doUpdate(double);

    // RVA: 0x402 | Ordinal: 1027
        void updateAPU(void);

    // RVA: 0x414 | Ordinal: 1045
        void updateCoreDelta(int, float, float);

    // RVA: 0x425 | Ordinal: 1062
        void updateEngine(enum Sound::Sounder_AH_1W_Base::AH1W_ExtSndSources, float, bool, float);

    // RVA: 0x89 | Ordinal: 138
        void _Sounder_AH_1W_Base(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_AH_1W_BASE_HPP
