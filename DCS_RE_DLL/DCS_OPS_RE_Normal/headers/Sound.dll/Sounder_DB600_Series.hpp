#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_DB600_Series
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_DB600_Series
{
public:

    // RVA: 0x1B | Ordinal: 28
        void Sounder_DB600_Series(void);

    // RVA: 0x262 | Ordinal: 611
        void doClearCockpit(void);

    // RVA: 0x299 | Ordinal: 666
        void doInit(class Sound::Host *);

    // RVA: 0x2D5 | Ordinal: 726
        void doInitCockpit(class Sound::Host *);

    // RVA: 0x30F | Ordinal: 784
        void doUpdate(double);

    // RVA: 0x359 | Ordinal: 858
        void init(class IwoLA *, class Sound::AircraftSounder *, int, struct Aircraft_Descriptor const *, class Sound::Host *);

    // RVA: 0x385 | Ordinal: 902
        void onCustomSound(int, struct SND_SourceParams *, double, double, double);

    // RVA: 0xA4 | Ordinal: 165
        void _Sounder_DB600_Series(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_DB600_SERIES_HPP
