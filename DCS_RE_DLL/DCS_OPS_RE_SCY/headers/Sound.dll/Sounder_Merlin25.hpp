#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_Merlin25
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_Merlin25
{
public:

    // RVA: 0x47 | Ordinal: 72
        void Sounder_Merlin25(float, float, float);

    // RVA: 0x274 | Ordinal: 629
        void doClearCockpit(void);

    // RVA: 0x2AF | Ordinal: 688
        void doInit(class Sound::Host *);

    // RVA: 0x2E8 | Ordinal: 745
        void doInitCockpit(class Sound::Host *);

    // RVA: 0x323 | Ordinal: 804
        void doUpdate(double);

    // RVA: 0x35C | Ordinal: 861
        void init(class IwoLA *, class Sound::AircraftSounder *, int, struct Aircraft_Descriptor const *, class Sound::Host *);

    // RVA: 0x36E | Ordinal: 879
        void initCockpit(class Sound::Host *);

    // RVA: 0xD0 | Ordinal: 209
        void _Sounder_Merlin25(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_MERLIN25_HPP
