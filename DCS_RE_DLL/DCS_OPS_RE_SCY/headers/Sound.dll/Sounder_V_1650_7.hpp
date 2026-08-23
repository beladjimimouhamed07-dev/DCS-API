#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_V_1650_7
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_V_1650_7
{
public:

    // RVA: 0x7A | Ordinal: 123
        void Sounder_V_1650_7(void);

    // RVA: 0x2C9 | Ordinal: 714
        void doInit(class Sound::Host *);

    // RVA: 0x337 | Ordinal: 824
        void doUpdate(double);

    // RVA: 0x35F | Ordinal: 864
        void init(class IwoLA *, class Sound::AircraftSounder *, int, struct Aircraft_Descriptor const *, class Sound::Host *);

    // RVA: 0x103 | Ordinal: 260
        void _Sounder_V_1650_7(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_V_1650_7_HPP
