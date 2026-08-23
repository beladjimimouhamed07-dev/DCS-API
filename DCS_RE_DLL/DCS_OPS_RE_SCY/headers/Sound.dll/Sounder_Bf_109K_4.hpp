#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_Bf_109K_4
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_Bf_109K_4
{
public:

    // RVA: 0x12 | Ordinal: 19
        void Sounder_Bf_109K_4(void);

    // RVA: 0x260 | Ordinal: 609
        void doClearCockpit(void);

    // RVA: 0x294 | Ordinal: 661
        void doInit(class Sound::Host *);

    // RVA: 0x2D3 | Ordinal: 724
        void doInitCockpit(class Sound::Host *);

    // RVA: 0x383 | Ordinal: 900
        void onCustomSound(int, int, struct SND_SourceParams *, double, double, double);

    // RVA: 0x3D2 | Ordinal: 979
        void onUndercarriageLock(int, double);

    // RVA: 0x9B | Ordinal: 156
        void _Sounder_Bf_109K_4(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_BF_109K_4_HPP
