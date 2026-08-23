#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_Su_25
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_Su_25
{
public:

    // RVA: 0x6F | Ordinal: 112
        void Sounder_Su_25(void);

    // RVA: 0x283 | Ordinal: 644
        void doClearCockpit(void);

    // RVA: 0x2C3 | Ordinal: 708
        void doInit(class Sound::Host *);

    // RVA: 0x2FA | Ordinal: 763
        void doInitCockpit(class Sound::Host *);

    // RVA: 0x332 | Ordinal: 819
        void doUpdate(double);

    // RVA: 0xF8 | Ordinal: 249
        void _Sounder_Su_25(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_SU_25_HPP
