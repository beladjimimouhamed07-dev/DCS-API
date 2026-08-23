#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: SimplifiedPistonEngineSounder
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class SimplifiedPistonEngineSounder
{
public:

    // RVA: 0x22D | Ordinal: 558
        void createSource(class Sound::LoopingSource &, class Sound::Host *, char const *, char const *, char const *);

    // RVA: 0x22E | Ordinal: 559
        void createSource(class Sound::Source &, class Sound::Host *, char const *);

    // RVA: 0x303 | Ordinal: 772
        void doUpdate(double);

    // RVA: 0x355 | Ordinal: 854
        void init(class IwoLA *, class Sound::AircraftSounder *, int, struct Aircraft_Descriptor const *, class Sound::Host *);

    // RVA: 0x356 | Ordinal: 855
        void init(class IwoLA *, class Sound::AircraftSounder *, int, struct Aircraft_Descriptor const *, class Sound::Host *, char const *, int);

    // RVA: 0x36D | Ordinal: 878
        void initCockpit(class Sound::Host *);

    // RVA: 0x381 | Ordinal: 898
        void onCustomSound(int, struct SND_SourceParams *, double, double, double);

    // RVA: 0x400 | Ordinal: 1025
        void update(double);

    // RVA: 0x88 | Ordinal: 137
        void _SimplifiedPistonEngineSounder(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SIMPLIFIEDPISTONENGINESOUNDER_HPP
