#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_CH_53_Base
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_CH_53_Base
{
public:

    // RVA: 0x16 | Ordinal: 23
        void Sounder_CH_53_Base(void);

    // RVA: 0x253 | Ordinal: 596
        void doCalculateRotorDynamicGain(void);

    // RVA: 0x296 | Ordinal: 663
        void doInit(class Sound::Host *);

    // RVA: 0x30C | Ordinal: 781
        void doUpdate(double);

    // RVA: 0x407 | Ordinal: 1032
        void updateAPU(void);

    // RVA: 0x418 | Ordinal: 1049
        void updateCoreDelta(int, float, float);

    // RVA: 0x428 | Ordinal: 1065
        void updateEngine(enum Sound::Sounder_CH_53_Base::CH53_ExtSndSources, float, bool, float);

    // RVA: 0x9F | Ordinal: 160
        void _Sounder_CH_53_Base(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_CH_53_BASE_HPP
