#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_Su_27
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_Su_27
{
public:

    // RVA: 0x71 | Ordinal: 114
        void Sounder_Su_27(void);

    // RVA: 0x284 | Ordinal: 645
        void doClearCockpit(void);

    // RVA: 0x2C4 | Ordinal: 709
        void doInit(class Sound::Host *);

    // RVA: 0x2FB | Ordinal: 764
        void doInitCockpit(class Sound::Host *);

    // RVA: 0x333 | Ordinal: 820
        void doUpdate(double);

    // RVA: 0xFA | Ordinal: 251
        void _Sounder_Su_27(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_SU_27_HPP
