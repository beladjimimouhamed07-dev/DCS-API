#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_BMW_801D
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_BMW_801D
{
public:

    // RVA: 0xB | Ordinal: 12
        void Sounder_BMW_801D(void);

    // RVA: 0x25F | Ordinal: 608
        void doClearCockpit(void);

    // RVA: 0x290 | Ordinal: 657
        void doInit(class Sound::Host *);

    // RVA: 0x2D2 | Ordinal: 723
        void doInitCockpit(class Sound::Host *);

    // RVA: 0x307 | Ordinal: 776
        void doUpdate(double);

    // RVA: 0x358 | Ordinal: 857
        void init(class IwoLA *, class Sound::AircraftSounder *, int, struct Aircraft_Descriptor const *, class Sound::Host *);

    // RVA: 0x93 | Ordinal: 148
        void _Sounder_BMW_801D(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_BMW_801D_HPP
