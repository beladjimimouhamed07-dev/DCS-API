#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_WrightCyclone_1820_97
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_WrightCyclone_1820_97
{
public:

    // RVA: 0x7B | Ordinal: 124
        void Sounder_WrightCyclone_1820_97(float, float, float);

    // RVA: 0x2CA | Ordinal: 715
        void doInit(class Sound::Host *);

    // RVA: 0x338 | Ordinal: 825
        void doUpdate(double);

    // RVA: 0x360 | Ordinal: 865
        void init(class IwoLA *, class Sound::AircraftSounder *, int, struct Aircraft_Descriptor const *, class Sound::Host *);

    // RVA: 0x104 | Ordinal: 261
        void _Sounder_WrightCyclone_1820_97(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_WRIGHTCYCLONE_1820_97_HPP
