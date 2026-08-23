#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_PrattWhitneyR2800
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_PrattWhitneyR2800
{
public:

    // RVA: 0x5F | Ordinal: 96
        void Sounder_PrattWhitneyR2800(void);

    // RVA: 0x280 | Ordinal: 641
        void doClearCockpit(void);

    // RVA: 0x2BC | Ordinal: 701
        void doInit(class Sound::Host *);

    // RVA: 0x2F7 | Ordinal: 760
        void doInitCockpit(class Sound::Host *);

    // RVA: 0x32D | Ordinal: 814
        void doUpdate(double);

    // RVA: 0x35E | Ordinal: 863
        void init(class IwoLA *, class Sound::AircraftSounder *, int, struct Aircraft_Descriptor const *, class Sound::Host *);

    // RVA: 0x397 | Ordinal: 920
        void onCustomSound(int, struct SND_SourceParams *, double, double, double);

    // RVA: 0xE8 | Ordinal: 233
        void _Sounder_PrattWhitneyR2800(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_PRATTWHITNEYR2800_HPP
