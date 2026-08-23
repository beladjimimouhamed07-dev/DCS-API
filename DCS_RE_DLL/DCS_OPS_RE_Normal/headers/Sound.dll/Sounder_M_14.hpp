#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_M_14
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_M_14
{
public:

    // RVA: 0x46 | Ordinal: 71
        void Sounder_M_14(void);

    // RVA: 0x273 | Ordinal: 628
        void doClearCockpit(void);

    // RVA: 0x2AE | Ordinal: 687
        void doInit(class Sound::Host *);

    // RVA: 0x2E7 | Ordinal: 744
        void doInitCockpit(class Sound::Host *);

    // RVA: 0x322 | Ordinal: 803
        void doUpdate(double);

    // RVA: 0x35B | Ordinal: 860
        void init(class IwoLA *, class Sound::AircraftSounder *, int, struct Aircraft_Descriptor const *, class Sound::Host *);

    // RVA: 0x38F | Ordinal: 912
        void onCustomSound(int, struct SND_SourceParams *, double, double, double);

    // RVA: 0xCF | Ordinal: 208
        void _Sounder_M_14(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_M_14_HPP
