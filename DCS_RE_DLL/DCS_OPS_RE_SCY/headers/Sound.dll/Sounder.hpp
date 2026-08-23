#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder
{
public:

    // RVA: 0x357 | Ordinal: 856
        void init(class Sound::Host *);

    // RVA: 0x372 | Ordinal: 883
        void nextMotorOffset(int);

    // RVA: 0x373 | Ordinal: 884
        void nextOffset(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_HPP
