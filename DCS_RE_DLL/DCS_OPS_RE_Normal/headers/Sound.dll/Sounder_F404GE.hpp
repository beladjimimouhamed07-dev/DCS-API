#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_F404GE
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_F404GE
{
public:

    // RVA: 0x1E | Ordinal: 31
        void Sounder_F404GE(void);

    // RVA: 0x264 | Ordinal: 613
        void doClearCockpit(void);

    // RVA: 0x29C | Ordinal: 669
        void doInit(class Sound::Host *);

    // RVA: 0x2D7 | Ordinal: 728
        void doInitCockpit(class Sound::Host *);

    // RVA: 0x311 | Ordinal: 786
        void doUpdate(double);

    // RVA: 0x3F5 | Ordinal: 1014
        void setStarter(bool);

    // RVA: 0xA7 | Ordinal: 168
        void _Sounder_F404GE(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_F404GE_HPP
