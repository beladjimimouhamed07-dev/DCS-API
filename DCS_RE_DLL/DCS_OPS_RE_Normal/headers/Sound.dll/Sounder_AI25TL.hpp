#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_AI25TL
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_AI25TL
{
public:

    // RVA: 0x4 | Ordinal: 5
        void Sounder_AI25TL(void);

    // RVA: 0x25E | Ordinal: 607
        void doClearCockpit(void);

    // RVA: 0x28D | Ordinal: 654
        void doInit(class Sound::Host *);

    // RVA: 0x2D0 | Ordinal: 721
        void doInitCockpit(class Sound::Host *);

    // RVA: 0x306 | Ordinal: 775
        void doUpdate(double);

    // RVA: 0x8C | Ordinal: 141
        void _Sounder_AI25TL(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_AI25TL_HPP
