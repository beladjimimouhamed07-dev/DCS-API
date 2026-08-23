#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_Mi_24W
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_Mi_24W
{
public:

    // RVA: 0x51 | Ordinal: 82
        void Sounder_Mi_24W(void);

    // RVA: 0x27A | Ordinal: 635
        void doClearCockpit(void);

    // RVA: 0x2B5 | Ordinal: 694
        void doInit(class Sound::Host *);

    // RVA: 0x2EE | Ordinal: 751
        void doInitCockpit(class Sound::Host *);

    // RVA: 0xDA | Ordinal: 219
        void _Sounder_Mi_24W(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_MI_24W_HPP
