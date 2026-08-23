#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_A_10
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_A_10
{
public:

    // RVA: 0x5 | Ordinal: 6
        void Sounder_A_10(void);

    // RVA: 0x231 | Ordinal: 562
        void doCalculateAirmassParameters(float, float, float *, float *, float *);

    // RVA: 0x28E | Ordinal: 655
        void doInit(class Sound::Host *);

    // RVA: 0x2D1 | Ordinal: 722
        void doInitCockpit(class Sound::Host *);

    // RVA: 0x8D | Ordinal: 142
        void _Sounder_A_10(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_A_10_HPP
