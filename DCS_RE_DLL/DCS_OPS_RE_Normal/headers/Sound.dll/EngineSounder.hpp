#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: EngineSounder
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class EngineSounder
{
public:

    // RVA: 0x215 | Ordinal: 534
        void clearCockpit(void);

    // RVA: 0x229 | Ordinal: 554
        void createSource(class Sound::LoopingSource &, class Sound::Host *, char const *, char const *, char const *);

    // RVA: 0x22A | Ordinal: 555
        void createSource(class Sound::Source &, class Sound::Host *, char const *);

    // RVA: 0x25B | Ordinal: 604
        void doClearCockpit(void);

    // RVA: 0x289 | Ordinal: 650
        void doInit(class Sound::Host *);

    // RVA: 0x2CD | Ordinal: 718
        void doInitCockpit(class Sound::Host *);

    // RVA: 0x301 | Ordinal: 770
        void doUpdate(double);

    // RVA: 0x34F | Ordinal: 848
        void init(class IwoLA *, class Sound::AircraftSounder *, int, struct Aircraft_Descriptor const *, class Sound::Host *);

    // RVA: 0x368 | Ordinal: 873
        void initCockpit(class Sound::Host *);

    // RVA: 0x37D | Ordinal: 894
        void onCustomSound(int, struct SND_SourceParams *, double, double, double);

    // RVA: 0x3FB | Ordinal: 1020
        void update(double);

    // RVA: 0x83 | Ordinal: 132
        void _EngineSounder(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_ENGINESOUNDER_HPP
