#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_J47GE27
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_J47GE27
{
public:

    // RVA: 0x37 | Ordinal: 56
        void Sounder_J47GE27(void);

    // RVA: 0x26E | Ordinal: 623
        void doClearCockpit(void);

    // RVA: 0x2A7 | Ordinal: 680
        void doInit(class Sound::Host *);

    // RVA: 0x2E1 | Ordinal: 738
        void doInitCockpit(class Sound::Host *);

    // RVA: 0x31C | Ordinal: 797
        void doUpdate(double);

    // RVA: 0x3F6 | Ordinal: 1015
        void setStarter(bool);

    // RVA: 0xC0 | Ordinal: 193
        void _Sounder_J47GE27(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_J47GE27_HPP
