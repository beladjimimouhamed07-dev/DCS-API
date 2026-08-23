#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_C_47_Base
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_C_47_Base
{
public:

    // RVA: 0x1A | Ordinal: 27
        void Sounder_C_47_Base(void);

    // RVA: 0x235 | Ordinal: 566
        void doCalculateAirmassParameters(float, float, float *, float *, float *);

    // RVA: 0x298 | Ordinal: 665
        void doInit(class Sound::Host *);

    // RVA: 0x30E | Ordinal: 783
        void doUpdate(double);

    // RVA: 0xA3 | Ordinal: 164
        void _Sounder_C_47_Base(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_C_47_BASE_HPP
