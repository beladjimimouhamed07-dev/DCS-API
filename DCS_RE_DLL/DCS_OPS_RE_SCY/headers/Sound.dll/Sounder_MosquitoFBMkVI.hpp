#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_MosquitoFBMkVI
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_MosquitoFBMkVI
{
public:

    // RVA: 0x54 | Ordinal: 85
        void Sounder_MosquitoFBMkVI(void);

    // RVA: 0x27D | Ordinal: 638
        void doClearCockpit(void);

    // RVA: 0x2B8 | Ordinal: 697
        void doInit(class Sound::Host *);

    // RVA: 0x2F1 | Ordinal: 754
        void doInitCockpit(class Sound::Host *);

    // RVA: 0x3B2 | Ordinal: 947
        void onGunFire(bool, int, bool);

    // RVA: 0xDD | Ordinal: 222
        void _Sounder_MosquitoFBMkVI(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_MOSQUITOFBMKVI_HPP
