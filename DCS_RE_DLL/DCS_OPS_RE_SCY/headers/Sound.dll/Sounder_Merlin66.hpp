#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_Merlin66
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_Merlin66
{
public:

    // RVA: 0x48 | Ordinal: 73
        void Sounder_Merlin66(void);

    // RVA: 0x275 | Ordinal: 630
        void doClearCockpit(void);

    // RVA: 0x2B0 | Ordinal: 689
        void doInit(class Sound::Host *);

    // RVA: 0x2E9 | Ordinal: 746
        void doInitCockpit(class Sound::Host *);

    // RVA: 0x324 | Ordinal: 805
        void doUpdate(double);

    // RVA: 0x35D | Ordinal: 862
        void init(class IwoLA *, class Sound::AircraftSounder *, int, struct Aircraft_Descriptor const *, class Sound::Host *);

    // RVA: 0xD1 | Ordinal: 210
        void _Sounder_Merlin66(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_MERLIN66_HPP
