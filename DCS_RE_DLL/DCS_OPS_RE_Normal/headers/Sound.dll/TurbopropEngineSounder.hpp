#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: TurbopropEngineSounder
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class TurbopropEngineSounder
{
public:

    // RVA: 0x21A | Ordinal: 539
        void clearCockpit(void);

    // RVA: 0x33A | Ordinal: 827
        void doUpdate(double);

    // RVA: 0x361 | Ordinal: 866
        void init(class IwoLA *, class Sound::AircraftSounder *, int, struct Aircraft_Descriptor const *, class Sound::Host *);

    // RVA: 0x36F | Ordinal: 880
        void initCockpit(class Sound::Host *);

    // RVA: 0x371 | Ordinal: 882
        void loadPropellorSources(char const *, int);

    // RVA: 0x39B | Ordinal: 924
        void onCustomSound(int, struct SND_SourceParams *, double, double, double);

    // RVA: 0x401 | Ordinal: 1026
        void update(double);

    // RVA: 0x10A | Ordinal: 267
        void _TurbopropEngineSounder(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_TURBOPROPENGINESOUNDER_HPP
