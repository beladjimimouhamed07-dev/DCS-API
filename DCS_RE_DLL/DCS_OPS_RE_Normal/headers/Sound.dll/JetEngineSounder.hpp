#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: JetEngineSounder
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class JetEngineSounder
{
public:

    // RVA: 0x217 | Ordinal: 536
        void clearCockpit(void);

    // RVA: 0x351 | Ordinal: 850
        void init(class IwoLA *, class Sound::AircraftSounder *, int, struct Aircraft_Descriptor const *, class Sound::Host *);

    // RVA: 0x36A | Ordinal: 875
        void initCockpit(class Sound::Host *);

    // RVA: 0x37F | Ordinal: 896
        void onCustomSound(int, struct SND_SourceParams *, double, double, double);

    // RVA: 0x3FD | Ordinal: 1022
        void update(double);

    // RVA: 0x85 | Ordinal: 134
        void _JetEngineSounder(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_JETENGINESOUNDER_HPP
