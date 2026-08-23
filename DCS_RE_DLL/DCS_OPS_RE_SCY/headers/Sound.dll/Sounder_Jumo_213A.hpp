#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_Jumo_213A
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_Jumo_213A
{
public:

    // RVA: 0x3E | Ordinal: 63
        void Sounder_Jumo_213A(float, float, float);

    // RVA: 0x270 | Ordinal: 625
        void doClearCockpit(void);

    // RVA: 0x2AA | Ordinal: 683
        void doInit(class Sound::Host *);

    // RVA: 0x2E3 | Ordinal: 740
        void doInitCockpit(class Sound::Host *);

    // RVA: 0x31F | Ordinal: 800
        void doUpdate(double);

    // RVA: 0x35A | Ordinal: 859
        void init(class IwoLA *, class Sound::AircraftSounder *, int, struct Aircraft_Descriptor const *, class Sound::Host *);

    // RVA: 0xC7 | Ordinal: 200
        void _Sounder_Jumo_213A(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_JUMO_213A_HPP
