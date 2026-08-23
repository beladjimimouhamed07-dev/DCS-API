#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_VK1
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_VK1
{
public:

    // RVA: 0x78 | Ordinal: 121
        void Sounder_VK1(void);

    // RVA: 0x286 | Ordinal: 647
        void doClearCockpit(void);

    // RVA: 0x2C8 | Ordinal: 713
        void doInit(class Sound::Host *);

    // RVA: 0x2FE | Ordinal: 767
        void doInitCockpit(class Sound::Host *);

    // RVA: 0x336 | Ordinal: 823
        void doUpdate(double);

    // RVA: 0x3F8 | Ordinal: 1017
        void setStarter(bool);

    // RVA: 0x101 | Ordinal: 258
        void _Sounder_VK1(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_VK1_HPP
