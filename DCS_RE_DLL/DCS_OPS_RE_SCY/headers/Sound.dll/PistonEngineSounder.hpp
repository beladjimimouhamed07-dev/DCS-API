#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: PistonEngineSounder
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class PistonEngineSounder
{
public:

    // RVA: 0x218 | Ordinal: 537
        void clearCockpit(void);

    // RVA: 0x22B | Ordinal: 556
        void createSource(class Sound::LoopingSource &, class Sound::Host *, char const *, char const *, char const *);

    // RVA: 0x22C | Ordinal: 557
        void createSource(class Sound::Source &, class Sound::Host *, char const *);

    // RVA: 0x25C | Ordinal: 605
        void doClearCockpit(void);

    // RVA: 0x28A | Ordinal: 651
        void doInit(class Sound::Host *);

    // RVA: 0x2CE | Ordinal: 719
        void doInitCockpit(class Sound::Host *);

    // RVA: 0x302 | Ordinal: 771
        void doUpdate(double);

    // RVA: 0x352 | Ordinal: 851
        void init(class IwoLA *, class Sound::AircraftSounder *, int, struct Aircraft_Descriptor const *, class Sound::Host *);

    // RVA: 0x353 | Ordinal: 852
        void init(class IwoLA *, class Sound::AircraftSounder *, int, struct Aircraft_Descriptor const *, class Sound::Host *, char const *, int);

    // RVA: 0x36B | Ordinal: 876
        void initCockpit(class Sound::Host *);

    // RVA: 0x380 | Ordinal: 897
        void onCustomSound(int, struct SND_SourceParams *, double, double, double);

    // RVA: 0x3FE | Ordinal: 1023
        void update(double);

    // RVA: 0x86 | Ordinal: 135
        void _PistonEngineSounder(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_PISTONENGINESOUNDER_HPP
