#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_F_15
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_F_15
{
public:

    // RVA: 0x27 | Ordinal: 40
        void Sounder_F_15(void);

    // RVA: 0x26A | Ordinal: 619
        void doClearCockpit(void);

    // RVA: 0x2A3 | Ordinal: 676
        void doInit(class Sound::Host *);

    // RVA: 0x2DD | Ordinal: 734
        void doInitCockpit(class Sound::Host *);

    // RVA: 0x318 | Ordinal: 793
        void doUpdate(double);

    // RVA: 0x33F | Ordinal: 832
        void getOverridenCategories(void);

    // RVA: 0x38A | Ordinal: 907
        void onCustomSound(int, int, struct SND_SourceParams *, double, double, double);

    // RVA: 0xB0 | Ordinal: 177
        void _Sounder_F_15(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_F_15_HPP
