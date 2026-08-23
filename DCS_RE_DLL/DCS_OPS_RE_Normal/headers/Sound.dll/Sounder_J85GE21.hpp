#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_J85GE21
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_J85GE21
{
public:

    // RVA: 0x39 | Ordinal: 58
        void Sounder_J85GE21(void);

    // RVA: 0x26F | Ordinal: 624
        void doClearCockpit(void);

    // RVA: 0x2A8 | Ordinal: 681
        void doInit(class Sound::Host *);

    // RVA: 0x2E2 | Ordinal: 739
        void doInitCockpit(class Sound::Host *);

    // RVA: 0x31D | Ordinal: 798
        void doUpdate(double);

    // RVA: 0x3F3 | Ordinal: 1012
        void setHrad(double);

    // RVA: 0x3F7 | Ordinal: 1016
        void setStarter(bool);

    // RVA: 0xC2 | Ordinal: 195
        void _Sounder_J85GE21(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_J85GE21_HPP
